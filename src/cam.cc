// #define ZONE_GETNEIGHBORZONE(zoneheader, index) \
// EMU_Invoke(0x80015A98,1,EMUADDR(&zoneheader->neighboreid[index]))
// 
// inline emuptr<zonecampath> ZONE_PATH_GetNeighborPath(emuptr<nsentry> zone, 
//                                               emuptr<zonecampath> campath, 
//                                                            uint32_t index)
// {
//   emuptr<zonepathdescriptor> descriptor;
//   descriptor = campath->neighborpathdescriptor[index];
//   uint32_t zoneindex = descriptor->neighborzoneindex;
//   uint32_t pathindex = descriptor->campathindex;
// 
//   emuptr<struct zoneheader> zoneheader(zone->items[0]);
//   emuptr<nsentry> neighborzone;
//   neighborzone = ZONE_GETNEIGHBORZONE(zoneheader,zoneindex);
//   
//   emuptr<struct zoneheader> neighborzoneheader;
//   neighborzoneheader = neighborzone->items[0];
//   uint32_t itemindex = neighborzoneheader->headercount + pathindex; 
// 
//   emuptr<struct zonecampath> neighborpath;
//   neighborpath = neighborzone->items[pathindex];
//   return neighborpath;
// }
// 
// uint32_t CAM_UpdateCamera()
// {
//   if (!crash) { return 0; }
// 
//   //we use this routine for the camera when crash dies ('woah' sequence)
//   if (globalflags & 0x10000)
//   {
//     EMU_Invoke(0x8002BAB4,1,0x800618B4); // todo: 0x618B4
//     return 0;
//   }
// 
//   if (!(globalflags & 2))
//     return 0;
//   
//   uint32_t cammode = currentsection->cammode;
//   switch (cammode)
//   {
//   case 5: // follow crash 
//   case 6:
//     globals[0x11] = 0x100; // 0x618D0
//     cameraFollow(crash, 0);
//     return 1;
//   case 0: // no camera
//     globals[0x11] = 0x100; // 0x618D0
//     return 1;
//   case 1: // auto-cam 
//   case 3:
//   {
//     uint8_t *zoneHeader = currentZone->itemData[0];
//     uint32_t zoneFlags = getWord(zoneHeader, 0x2FC, 1);
//     
//     //if forceCheck is 1, after traversing through neighbor zones,
//     //as soon as one is found that is camera mode/case 1 or 3 it is 
//     //forcibly loaded
//     uint32_t stopTransition = 0;
//     if (controls[0].tapState & 0xF0)
//     {
//       if (!(zoneFlags & 0x810000)) { stopTransition = 1; }
//     }
//       
//     uint16_t sectionDepth = *((uint16_t*)&currentSection[0x1E]);
//     uint32_t neighborMode = 0;
//     
//     do
//     {
//       //we add 1 to get the condition to stop updating and load the next section, this happens since
//       //currentProgressV reaches a max of sectionDepth - 1, therefore it will always be less than sectionDepth
//       //unless we add 1
//       uint32_t currentProgress = (currentProgressV >> 8) + 1;
//       
//       if (!(zoneflags & 0x1000))
//         globals[0x11] = 0;  //0x618D0
// 
//       //if the transition hasn't reached the end of the camera path
//       //and the transition isn't scheduled to stop, then continue automatically incrementing
//       //progress value to do the camera transition
//       if ((currentProgress < sectionDepth) && !stopTransition) //lh
//       {
//         //no new zone to load, handle the current
//         updateLevel(currentZone, currentSection, currentProgressV + 0x100, 0);
//         return 1;
//       }
// 
//       uint32_t neighbSectionCount = getWord(currentSection, 0x8, 1);
//       
//       if (neighbSectionCount) 
//       {
//         uint8_t zoneIndex = currentSection[0xD]; //which of neighbor zones in the current zone's neighbor zone list contains section
//         uint8_t sectIndex = currentSection[0xE]; //index of the section in that neighbor zone
// 
//         uint32_t neighborEID = getWord(zoneHeader, 0x214+(zoneIndex*4), 1);
//         
//         //neighborZone = EID_PROCESS(neighborEID);
//         entry *neighborZone = crashSystemPage(neighborEID);
//     
//         uint8_t *neighborZoneHeader     = neighborZone->itemData[0];
//         uint32_t neighbZoneCollisionSkip = getWord(neighborZoneHeader, 0x204, 1);
//         uint8_t *neighborSection        = neighborZone->itemData[neighbZoneCollisionSkip + sectIndex];
//        
//         //first record the camera mode of the neighbor section
//         neighborMode = *((uint16_t*)&neighborSection[0x20]);
//         
//         //determine the start point of the next section 
//         uint32_t neighborStartV;            
//         uint16_t neighborDepth = *((uint16_t*)&neighborSection[0x1E]);
//         
//         if ((currentSection[0xF] & 1) == 0)
//           neighborStartV = (neighborDepth - 1) << 8;
//         else
//           neighborStartV = 0;
// 
//         //and update the level to the next section and the start point
//         updateLevel(neighborZone, neighborSection, neighborStartV, 0);
//       
//         //if zone has this bit set, record new state information about the zone
//         uint32_t neighborFlags = getWord(neighborZoneHeader, 0x2FC, 1);
//         
//         if ((neighborFlags & 0x1000) == 0)
//         {
//           //crash = *(0x566B4);     
//           //state = *(0x57974);  
//           //sub_80026460(crash, states, 1);
//         }
// 
//         if (!stopTransition) { break; }
//       }
//       else
//         break;
//     } while (neighborMode == 3 || neighborMode == 1);
// 
//     return 1;
//   }
//   
//   /* unimplemented camera modes...
//   case 8:
// 
//   found = -1;
//   count  = 0;
//   struct = *(0x5791C);  //a1
// 
//   v0 = *(0x61994);
// 
//   numOf = struct[8];
// 
//   if (numOf != 0)
//   {
//     //find a zone oppposite the previous' flags?
//     a3 = (*(0x61994) & 3) ^ 3;
//     
//     do
//     {
//       if (item3[0xC+(count*4)] & 3 == a3) { found = count; break }
//       count++;
// 
//     } while (count < numOf)
//   }
// 
// 
//   scaleProgress = (*(0x57920)/256) + 1;
// 
//   if (*(0x61994) & 1 == 0) 
//   {
//     currentZone       =  *(0x57914);
//     item3         =  *(0x5791C);
//     progress      =  *(0x57920);
//     currentZoneHeader = currentZone[0x10];
//     scaleProgress = (*(0x57920)/256) - 1;
// 
//     //if current progress 'not at the start of the zone'
//     if (scaleProgress >= 0)
//     {
//       progress =  *(0x57920) - 256;  //back one
//       sub_80025A60(currentZone, item3, progress, 0);
//     }
//     else if (found != -1)   
//     {
//       bitfield       = item3[0xC + (found*4)];  //lbu
//       newZoneIndex   = item3[0xD + (found*4)];
//       newZoneI3Index = item3[0xE + (found*4)];
//       
//       newZone = EID_PROCESS(currentZoneHeader[0x214 + (newZoneIndex * 4)]);
//       newZoneHeader = newZone[0x10];
//       
//       newZoneItem3 = newZone[0x10 + ((newZoneI3Index + newZoneHeader[0x204])*4)];
//     
//       if (bitfield & 1 == 0)
//       {
//         a2 = (itemN[0x1E] - 1) * 256;
//       }
//       sub_80025A60();
//     }
//   }
//   else if (val < struct[0x1E]) 
//   {  
// 
//     a0 =         *(0x57914);
//     a1 =             struct;
//     a2 = *(0x57920) + 0x100;
//     a3 =                  0;
// 
//     sub_80025A60();
//     
//   }
//   else if (found != -1) 
//   { 
// 
//     byteA = struct[0xD + (found*4)];  //lbu
//     byteB = struct[0xE + (found*4)];
//     byteC = struct[0xF + (found*4)];
// 
//     gInfo = *(0x57914)[0x10];
//     a0    = gInfo[0x214 + (byteA*4)];
// 
//     entry = EID_PROCESS(a0); //a3
// 
//     item1 = entry[0x10];
//     itemN = entry[0x10 + ((byteB + item1[0x204])*4)];
//     
//     a0 = entry;
//     a1 = itemN;
//     a2 = 0;
//     a3 = 0;
//     if (byteC & 1 == 0)
//     {
//       a2 = (itemN[0x1E] - 1) * 256;
//     }
//     sub_80025A60();
// 
//   }
// 
// 
//   if (struct[0x20] != 8) 
//   {
//     *(0x61994) = 1;
//   }
//    
//   return 1; 
// 
// 
//   ----
// 
//   case 7:
// 
//   if (*(0x61994) == 0) { return 0; }
// 
//   if (*(0x61994) < 0) 
//   {
//     if (*(0x61994) == -1) { 2b7a4 }
//     else                  { 2b7bc }
//   }
//   else
//   {
//     if      (*(0x61994) > 7) { 2b7bc; }
// 
//     //s3 = 0x22;   
//     else if (*(0x61994) < 5) { 2b7bc; } 
//    
//     else                     { 2b810; }
//   }
// 
//   2b7a4:
// 
//   v0 = *(0x6198C) & 0xFFF;
// 
//   s4 =   1;
//   s3 = -v0;
// 
//   goto 2b810
// 
//   --
// 
//   2b7bc:
// 
//   a0 = *(0x57874);
//   a1 = *(0x6198C);
//   rval = sub_800245F0();
// 
//   v0 = abs(rval);
// 
//   if (v0 < 0x17) { s3 = 0; }
//   else
//   {
// 
//     if      (rval  > 0) { s3 = 1; }
//     else if (rval <= 0) { s3 = 0; }  //or is it -1 when < 0?
//     
//   }
// 
//   2b810:
// 
//   s7 = 0xFFFFFFFF;
// 
//   s6 = s4 + 4
//   fp = s4 + 3
// 
//   struct = *(0x5791C);  //
//   a0     = *(0x57920);
// 
//   do
//   {
//     if (s3 == 0) { exit loop to 2ba20; }
// 
//     s2 = struct;
//     s5 = *(0x57920);
// 
//     v0 = *(0x61994);
// 
//     if (*(0x61994) == -1)
//     {
//       offset =  ((*(0x57920)/256)*12;
//       a0     = struct[0x3A + offset];
//       
//       if (s3 >= 0) { a1 = s3; } else { a1 = -s3; }
//       rval = sub_80024F50();
// 
//       v0 = abs(rval);
// 
//       if (v0 < 0x17) { exit loop to 2ba20; }
//     }
// 
//     if (s6 == 0)
//     {
//       a0 = *(0x57920) + 256;
//     }
//     else
//     {
//       a0 = *(0x57920) + 1024;
//     }
// 
//     if (a0 < (struct[0x1E]*256))  { 2b9e4; }
// 
//     found = -1;
//     if (struct[8] != 0)
//     {
//       count = 0;
//       do
//       {
//         val = struct[0xF + (count*4)];
// 
//         if (val == s4 || (found == -1 && (struct[8] == 1 || (val & 3) == fp)))
//         { 
//           found = count;
//         }
//                
//         count++;
//       } while (count < struct[8])
//     }
// 
//     if (found == -1)
//     {
//    
//       if (struct[8] != 0)
//       {
// 
//         a1 = struct[8];
//         a0 = struct;
// 
//         count = 0;   //v1
//         do
//         {
//           val = struct[0xF + (count*4)];
// 
//           if ((val & 4) == 0) { found = count; exit loop; }
// 
//           count++;
//         } while (count < struct[8])
// 
//       }
//     
//     }
// 
//     byteA = struct[0xD + (found*4)];  //a0
//     byteB = struct[0xE + (found*4)];
//     byteC = struct[0xF + (found*4)]; 
//    
//     pointer = struct[4];  
// 
//     offset = (pointer[0x10] + (byteA * 4));
// 
//     EID = pointer[0x214 + offset];
// 
//     entry = EID_PROCESS(EID);
// 
//     item1 = entry[0x10];
//     itemN = entry[0x10 + ((byteB + item1[0x204]) * 4)];  //s1
// 
// 
//     if (byteC & 1 == 0)
//     {
//       a0 = (itemN[0x1E] - 1) * 256;
//     }
//     else
//     {
//       a0 = 0;
//     }
// 
//     if (s6 == 0 && s3 <= 0) 
//     { 
//       if (struct           !=    itemN) { continue looping; }
//       if ((*(0x57920)/256) != (a0/256)) { continue looping; }  
//     }
// 
//     s2 = itemN;
//     s5 = a0;
//     
//     2b92c:
//     exit loop to 2ba20
//       
//   }
//       
//   2ba20:
// 
//   if (*(0x61994) == -1) { *(0x61994) = s4; }  //this is where 0x61994 is set
// 
//   if (itemN != 0)                             //if itemN was not null
//   {
// 
//     if (itemN == struct)                      //then struct this whole time was just an itemN?
//     {
//       if (a0 == *(0x57920))   { return 1; }
//     }
// 
//     a0 = struct[4];  //the pointer
//     a1 =    struct;
//     a2 =        s5;
//     a3 =         0;
//     sub_80025A60();
//   }
// 
//   return 1; */
//   }
//   
//   return 0;
// }
// 
// //sub_8002A82C(obj, flag)
// void cameraFollow(object *obj, uint32_t flag)
// {  
//   uint32_t progress = currentprogress >> 8;
//   uint32_t pathlength = currentpath->length;
//   uint32_t objectY = obj->process.vectors.trans.Y;
//       
//   uint32_t progressflags = 0; // for shorter paths (< 50) both flags should set
//   
//   // if at less than halfway but max of 50 into path
//   if (progress < (pathlength/2) || progress < 50)
//     progressflags |= 1;
//   
//   // if at more than halfway but max of 50 from end of path
//   if (progress >= (pathlength/2) || ((pathlength/2)-progress) < 50)
//     progressflags |= 2;
//     
//   emuptr<nsitem> zoneheader(currentzone->items[0]);
//   uint32_t zoneflags = zoneheader->flags;
//   
//   // if zone is intended to be travelled forward
//   if (!(zoneflags & 0x80) && (0x31FFF < zoomz))           
//   {
//     // if up not pressed
//     if (!(controls[0].heldState & 0x1000))
//     {
//       // and down pressed
//       if (controls[0].heldState & 0x4000)   
//         lookBack = 1; // moving backward, so look back
//     }
//     else
//         lookBack = 0; // moving forward, so look forward      
//   }
//   else // cam is forced to either look forward or back, depending on zone flag
//     lookback = (zoneflags & 0x8000);
//   
//   // if left not pressed
//   if (!(controls[0].heldState & 0x8000)) 
//   {
//     // and right pressed
//     if (controls[0].heldState & 0x2000)    
//       lookx = 1; // moving right so look right
//   }
//   else
//     lookx = 0; // moving left so look left
//     
//   // adjust the z lookback by either incrementing or decrementing
//   // at a rate of 0x3200 [depending on whether we look back or forward]
//   // restrict to the range (-0x12C00, 0x12C00)
//   if (lookback)
//   {
//     if (nsd->level.LID == 3)  // different cutoff for cortex power
//     {
//       lookBackZ += 0x3200;
//       if (lookBackZ > 0x4B000)
//         lookBackZ = 0x4B000;
//     }
//     else
//     {
//       lookBackZ += 0x3200;
//       if (lookBackZ > 0x12C00)
//         lookBackZ = 0x12C00;
//     }
//   }
//   else
//   {
//     lookBackZ -= 0x3200;
//     if (lookBackZ < -0x12C00)
//       lookBackZ = -0x12C00;
//   }
//     
//   // if the zone is not to be travelled left/right
//   if (!(zoneflags & 0x4000)) 
//     panX = 0; // reset the X pan
//   // else if path runs left/right modify x pan much like we did z zoom
//   else if (currentpath->direction.x)                                       
//   {
//     int32_t newpanx;
//     if (lookx)
//     {
//       newpanx = panx - 25600;
//       if (currentpath->direction.x < 0)
//       {
//         if (newpanx < -307200)
//           newpanx = -307200;
//       }
//       else
//       {
//         if (newpanx < 0)
//           newpanx = 0;
//       }   
//     }
//     else
//     {
//       newpanx = panx + 25600;
//       if (currentpath->direction.x > 0)
//       {
//         if (307200 < newpanx)
//           newpanx = 307200;
//       }
//       else
//       {
//         if (newpanX < 0)
//           newpanx = 0;        
//       }
//     }
//     panx = newpanx;
//   }
//   /*****************************************************************************
//    * = progressflags determines which half of the current path we reside in    *
//    *   - when more than half way into the current path we check only proceeding*
//    *     paths in relation to the current path                                 *
//    *   - when less than half way we check only preceding paths in relation to  *
//    *     the current path                                                      *
//    *                                                                           *
//    * = among the checked paths, we are finding a path that travels forward/    *
//    *   backward AND/or a path that travels up/down (if any) and grabbing the   *
//    *   camzoom value for the respective last found path(s).                    *
//    *                                                                           *
//    * = additionally we check whether the current path travels forward/back     *
//    *   AND/or up/down, whose camzoom value would replace either of the ones    *
//    *   found for the respective same direction travelling paths; special flags *
//    *   are set for when the current path travels in either of these directions *
//    ****************************************************************************/
//   uint32_t useneighborpany = 1;
//   uint32_t useneighborzoomz = 1;
//   uint32_t newpany = 0;
//   uint32_t newzoomz = 0;
//   
//   // for each neighboring path to the current path
//   for (uint32_t i = 0; i < currentpath->neighborpathcount; i++)
//   { 
//     emuptr<zonepathdescriptor> descriptor;
//     descriptor = currentzone->neighborpathdescriptor[i];
//     uint32_t relation = descriptor->relation; // before or after?
//     
//     if (relation & progressflags)
//     {
//       emuptr<zonecampath> neighborpath;
//       neighborpath = ZONE_PATH_GetNeighborPath(currentzone,currentpath,i);
//       
//       if (currentpath->direction.y)
//         newpany = currentpath->camzoom;  
//       if (currentpath->direction.z)
//         newzoomz = currentpath->camzoom;
//     }
//   }
//   
//   // set flags for if current path travels in either direction
//   if (currentpath->direction.y)
//   {
//     useneighborpany = 0;
//     newpany = currentpath->camzoom;
//   }
//   if (currentpath->direction.z)
//   {
//     useneighborzoomz = 0;
//     newzoomz = currentpath->camzoom;
//   }
// 
//   // if the current or at least one neighbor path travels forward/backward
//   // and we are at least more than 10 units from either end of the path  
//   if (newzoomz && (progress >= 11) && (progress < (pathlength-10)))
//   {
//     if (useneighborzoomz)               
//       zoomz = newzoomz; // set zoomz to the neighbor's camzoom value
//     else // zoomz will gradually approach the camzoom value
//       zoomZ = approach(zoomz, newzoomz, 0x1900);
//   }
//   
//   // total camera zoom Z is calculated based on
//   // zoomz [z zoomback], z lookback, and source object's camzoom value                                
//   int32_t totalzoomz = zoomz + lookbackz + obj->camzoom; 
//     
//   // if the current or at least one neighbor path travels up/down
//   if (newpany)
//   {    
//     if (useneighborpany)
//       pany = newpany; // set pany to the neighbor's camzoom value
//     else // pany will gradually approach the camzoom value
//       pany = approach(pany, newpany, 0x6400); 
//   }
// 
//   // these will be occupied with information about 5 potential positionings/
//   // orientations of the camera based on its 'progress' calculated in terms
//   // of the source object's relative position along or in deviation from 
//   // [for each of] the current path and its [up to a maximum of] 4 neighboring
//   // paths
//   SP += sizeof(caminfo)*5;
//   emuptr<caminfo> cameras(SP); 
//   uint32_t curcam = 0; // use this iterator to keep index of current cam
// 
//   // save the pan and zoom values for the first camera
//   cameras[curcam].panx = panx;   
//   cameras[curcam].pany = pany;   
//   cameras[curcam].zoomz = totalzoomz;       
//   
//   uint32_t success = 0;
//   
//   //if some of path progress determined by moving forward/backward
//   /*if (progDetZ != 0)
//   {
//     uint32_t objX = obj->process.vectors.trans.X;
//     uint32_t objY = obj->process.vectors.trans.Y;
//     uint32_t objZ = obj->process.vectors.trans.Z;
//         
//     cvector objTrans = { objX, objY, objZ };
//     
//     progressmade = cameraGetProgressAlt(&objTrans, currentpath, &pathCamera[curCam], 0, 0);
//   }
//   else*/
//   {
//     
//     uint32_t objX = obj->process.vectors.trans.X;
//     uint32_t objY = obj->process.vectors.trans.Y;
//     uint32_t objZ = obj->process.vectors.trans.Z;
//         
//     cvector objTrans = { objX+panX,objY+panY,objZ+totalZoomZ};
//     
//     progressmade = cameraGetProgress(&objTrans, currentpath, &pathCamera[curCam], 0, 0);
//   }
//   
//   if (progressmade)
//   {
//     signed long newprogress = cameras[curcam].progress;
//     signed long oldprogress = currentprogress;
//     
//     cameras[curcam].changeprogress = abs(newprogress - oldprogress);
//    
//     if (newprogress < oldprogress) // was the change forward or backward?
//       cameras[curcam].changeflags = 1;
//     else
//       cameras[curcam].changeflags = 2;
//       
//     curcam++; // 
//   }
//   
//   uint32_t samedir = 0;
//   for (uint32_t i = 0; i < currentsection->neigborpathcount; i++)
//   { 
//     if (currentpath[0xF] & 4)
//     {
//       //elapsed = *(0x60E04);
//       //other = *(0x61990);
//       
//       //if (elapsed - other >= 0x10) { exit to end of loop }
//     }
//       
//     emuptr<zonepathdescriptor> descriptor;
//     descriptor = currentpath->neighborpathdescriptor[i];
//     uint32_t relation = descriptor->relation; // before or after?
//  
//     if (relation & progressflags)
//     {
//       emuptr<zonecampath> neighborpath;
//       neighborpath = ZONE_PATH_GetNeighborPath(currentzone, currentpath, i);
//       samedirection = ((currentpath->direction.y == neighborpath->direction.y)
//                     && (currentpath->direction.z == neighborpath->direction.z));
//         
//       cameras[curcam].panx = panx;   
//       cameras[curcam].pany = pany;   
//       cameras[curcam].zoomz = totalzoomz;       
//       
//       /*
//       if (neighbProgDetZ != 0)
//       {
//         //in the assembly, trans.Y is grabbed at the beginning
//         //of the sub-in case it undergoes change beforehand
//         uint32_t objX = obj->process.vectors.trans.X;
//         uint32_t objY = obj->process.vectors.trans.Y;
//         uint32_t objZ = obj->process.vectors.trans.Z;
//         
//         cvector objTrans = { objX, objY, objZ };
//         
//         uint8_t minMax = currentpath[0xF + offset]; 
//       
//         progressmade = cameraGetProgressAlt(&objTrans, neighborpath, &pathCamera[curCam], minMax, sameDirection);        
//       }
//       else*/
//       {
//         uint32_t objX = obj->process.vectors.trans.X;
//         uint32_t objY = obj->process.vectors.trans.Y;
//         uint32_t objZ = obj->process.vectors.trans.Z;
//         
//         cvector objTrans = { objX+panX,objY+panY,objZ+totalZoomZ};
// 
//         uint8_t minMax = currentpath[0xF + offset];
// 
//         progressmade = cameraGetProgress(&objTrans, neighborpath, &pathCamera[curCam], minMax, sameDirection);
//       }
//       
//       if (progressmade)
//       {        
//         uint32_t distexit;        
//         // calculate exit point of the current path and our distance from it                          
//         if (relation & 1) // if this neighbor path is before the current path
//         {
//           cameras[curcam].exit = 0; // exiting at the start of the path
//           distexit = currentprogress; // how far we are from exiting the path   
//         }
//         else // this neighbor path is after the current path
//         { 
//           cameras[curcam].exit = ((pathlength << 8)-1); // exiting at the end
//           distexit = ((pathlength << 8)-1) - currentprogress; 
//         }
//         
//         // calculate entry point of the neighbor path and our distance from it
//         // also calculate the change in progress by adding how far we are from 
//         // exiting the current path to how far we'd have entered from either the 
//         // - front of the neighbor path, if the goal is in front of the current
//         // - back of the neighbor path, if the goal is behind the current
//         if (descriptor->goal & 1) // if the goal is in front of the current path
//         {                         
//           cameras[curcam].entrance = 0; // entering at the start of the path
//           cameras[curcam].changeprogress = distexit + cameras[curcam].progress + 0x100;
//           cameras[curcam].relationz = 2; // current path is behind the neighbor path
//         }
//         else // goal is behind the current path
//         {
//           int32_t neighborend = (neighborpath->length << 8) - 1;
//           cameras[curcam].entrance = neighborend; // entering at end
//           cameras[curcam].changeprogress = distexit + (neighborend - cameras[curcam].progress) + 0x100;
//           cameras[curcam].relationz = 1; // current path is in front of the neighbor
//         }
//        
//         cameras[curcam].changeflags = relation; // record relation
//         curcam++; 
//       }
//     }
//   }
//       
//   if (!curcam) { return; }
//   
//   uint32_t closestdist = 0x7FFFFFFF; 
//   emuptr<caminfo> closestcam(EMUADDR(&cameras[0]));
//   for (uint32_t i = 0; i < curcam; i++)
//   { 
//     if (cameras[i].currentpath->cammode == 1)
//       break;
//            
//     // find closest of the cameras to crash or at least one that exhibits change
//     if ((!closestcam->progressmade && cameras[i].progressmade) ||
//         (closestcam->dist < closestdist && 
//          closestcam->progressmade == cameras[i].progressMade))
//     {
//       closestdist = closestcam->dist;
//       closestcam = EMUADDR(&cameras[i]);
//     }
//   }
//     
//   if (!closestcam->changeprogress) { return; }
//   
//   // scale change in progress to change in distance
//   int32_t changedist = closestcam->changeprogress * currentpath->avgptdist;
//   
//   if (changedist < 30001) // if small change in distance
//   {
//     emuptr<zonecampath> campath(closestpath->currentpath);
//     emuptr<nsentry> zone(campath->parentzone);
//     uint32_t progress = closestpath->progress;
//     
//     updateLevel(zone, campath, progress, 0);
//     camspeed = closestcam->changeprogress;
//   }
//   else
//   {
//     if (closestcam->changeprogress < 0x201) // if change <= 2 then halve
//     {    
//       uint32_t sign = (closestcam->changeprogress < 0);
//       camspeed = (closestcam->changeprogress + sign)/2;
//     }
//     else if (closestcam->changeprogress < 0x500) // else if change from 2 to 5
//       camspeed = 0x200; // restrict to 2
//     else // change > 5
//     {
//       // speedy scroll for large, impossible values; continuously halve
//       // note: it is likely that this section of code is similar to the 
//       // section in crash 2 that prints "CamPullForwardBothDirs has an 
//       // impossible DeltaErr!"
//       uint32_t sign = (closestcam->changeprogress < 0);
//       uint32_t newspeed = (closestcam->changeprogress + sign)/2;
//       uint32_t maxspeed = camspeed + 0x100;
//   
//       if (newspeed < maxspeed)
//         newspeed = maxspeed;
//       camspeed = newspeed;
//     }
//     adjustCamProgress(camSpeed, sigCam);     
//   }
// }      
//       
// void adjustCamProgress(int32_t camspeed, emuptr<caminfo> cam) //sub_80029F6C
// {
//   if (cam->changeflags & 2) // if forward change in progress
//   {
//     if (cam->nextpath) // if the cam is at a new path
//     {
//       signed long newProgressV  = currentProgressV + camSpeed;
//       signed long newProgress   = newProgressV >> 8;
//       
//       uint16_t pathDepth = *((uint16_t*)&currentpath[0x1E]);
//       uint32_t pathDepthV = pathDepth << 8;
//       
//       //since the cam is at a new path we *should* exceed the current path depth at 
//       //the new progress
//       if (newProgress >= pathDepth)
//       {
//         signed long exceedProgV = (newProgressV - pathDepthV) - 1;
//         
//         //behind it's preceding path
//         if ((cam->relationZ & 2) == 0)
//         {
//           exceedProgV = -exceedProgV;
//         }
//         
//         //so... how is this any different from how we calculated progress originally?
//         //maybe this just ensures we don't have any bogus values for larger cam speeds
//         signed long minProgV = cam->entranceV + exceedProgV;
//         
//         entry *nextSectZone = (entry*)getWord(cam->nextpath, 4, 1);
//         if (minProgV < cam->progressV)
//           return updateLevel(nextSectZone, cam->nextpath, minProgV, 0);
//         else
//           return updateLevel(nextSectZone, cam->nextpath, cam->progressV, 0);
//       }
//     }
//     
//     updateLevel(currentZone, currentpath, currentProgressV + camSpeed, 0);
//   }
//   else
//   {
//     if (cam->nextpath)
//     {
//       signed long newProgressV = currentProgressV - camSpeed;
//       signed long newProgress  = newProgressV >> 8;
//       
//       if (newProgressV < 0)
//       {
//         signed long exceedProgV = (camSpeed - currentProgressV);
//         
//         //behind it's preceding path
//         if ((cam->relationZ & 2) == 0)
//           exceedProgV = -exceedProgV;
//         
//         signed long minProgV = cam->entranceV + exceedProgV;
//         
//         //entry *nextSectZone = getWord(cam->nextpath, 0x4, 1);
//                 
//         entry *nextSectZone = (entry*)getWord(cam->nextpath, 4, 1);
//         if (cam->progressV < minProgV)
//           return updateLevel(nextSectZone, cam->nextpath, minProgV, 0);
//         else
//           return updateLevel(nextSectZone, cam->nextpath, cam->progressV, 0);
//       }
//     }
//     
//     updateLevel(currentZone, currentpath, currentProgressV - camSpeed, 0);
//   }
// }
//     
//     
// uint32_t cameraGetProgress(cvector *trans, uint8_t *path, ccameraInfo *cam, uint32_t bitfield, uint32_t flag)
// {
//   // << 0 is the normal precision (all bits are integral, no fractional)
//   //------------------------------------
//   // precision 0:  path/zone coordinates -  <<  0 the normal precision/ 0 fractional bits
//   // precision 4:  precision 4 value...  -  <<  4 the normal precision/ 4 fractional bits
//   // precision 8:  fraction              -  <<  8 the normal precision/ 8 fractional bits
//   // precision 12: fixed point           -  << 12 the normal precision/12 fractional bits
//   // precision 16: precision 16 value... -  << 16 the normal precision/16 fractional bits
//   
//   entry *pathZone = (entry*)getWord(path, 4, 1);
//   
//   uint8_t *zoneHeader = pathZone->itemData[0];
//   uint8_t *zoneCol    = pathZone->itemData[1];
//   
//   cam->progressmade = 1;
// 
//   // calculate path location (i.e. position of initial point 0)
//   uint32_t pathx = (zone->space.x + path->point[0].x);
//   uint32_t pathy = (zone->space.y + path->point[0].y);
//   uint32_t pathz = (zone->space.z + path->point[0].z);
//   
//   // calculate vector that spans from path location to source object location [trans]
//   // (the shifting here allows for simultaneous subtraction and conversion to precision 4)
//   int32_t transpathx = (trans->x >> 4) - (pathx << 4); 
//   int32_t transpathy = (trans->y >> 4) - (pathy << 4);
//   int32_t transpathz = (trans->z >> 4) - (pathz << 4);
//  
//   // approximate camera's ultimate distance along the path by computing dot product of 
//   // transpath [i.e. direction and distance of source object from initial path point] and 
//   // the path's direction [vector]
//   int32_t apxdistx = path->direction.x * transpathx; // multiplying fixed point values (precision 12)
//   int32_t apxdisty = path->direction.y * transpathy; // with precision 4 values
//   int32_t apxdistz = path->direction.z * transpathz; // yields precision 16 values
//   int32_t apxdist = ((progressx + progressy + progressz) >> 8);  // so scale result to precision 8
//   
//   // approximate camera's ultimate progress along the path by dividing 
//   // its distance by average distance between the path's points
//   int32_t progressf = apxdist / path->avgptdist;
//   int32_t progress = progressf >> 8; 
//   
//   if (path == currentpath)
//     cam->nextpath = 0; // if already the current, there is not a next path 
//   else
//   {
//     if (path->direction.x && transpathy < -12800) //-3.125
//     {
//       emuptr<struct zoneheader> zoneheader(zone->items[0]);
//       if (zoneheader->flags & 0x40000)
//         return 0;
//     }
//     cam->nextpath = path;
//   }
//   
//   uint32_t entranceindex = 0;
//   uint32_t exitindex = 0;
//   
//   if (flag)
//   {
//     if (bitfield & 1)
//       entranceindex = path->entranceindex;
//       
//     if (bitfield & 2)
//       exitindex = path->exitindex; // relative to end of path
//   }
//   
//   if (progress >= entranceindex) // if we're past or at the entrance
//   {
//     if (progress >= (path->length - exitindex)) // if we're past or at the exit
//     {
//       if (path != currentpath) // if path is not the current 
//         return 0; // then abandon this camera
//       
//       // otherwise force progress to the end of the path
//       progressf = (path->length << 8) - 1;
//       progress  = path->length - 1;         
//       cam->progressmade = 0; // no progress made
//     }
//   }
//   else // we're before the entrance
//   {    
//     // if the entrance is at 0 or if the path is not the current, then abandon
//     // this camera (if entrance at 0, prog. must be neg.; cant have neg. prog.)
//     if (!entranceindex || path != currentpath)
//       return 0;  
//       
//     // otherwise force progress to the start of the path
//     progressf = 0;
//     progress = 0;   
//     cam->progressmade = 0; // no progress made
//   }
//     
//   uint32_t adjustx = (cam->panx + crash->trans.x) >> 8;
//   uint32_t adjusty = (cam->pany + crash->trans.y) >> 8;
//   uint32_t adjustz = (cam->zoomz + crash->trans.z) >> 8;
//   
//   int32_t distx = adjustx - (zonex + path->point[progress].x);
//   int32_t disty = adjusty - (zoney + path->point[progress].y);
//   int32_t distz = adjustz - (zonez + path->point[progress].z);
//   
//   // can't be this far from camera for each dimension
//   if (abs(distx) >= 3201 || abs(disty) >= 3201 || abs(distz) >= 3201)
//     return 0;
//   
//   cam->curpath = path;
//   cam->progress = progressf;
//   
//   // calculate euclidian distance from crash to camera
//   uint32_t dist = sqrt((distx * distx) + (disty * disty) + (distz * distz));
//   cam->dist = dist;
//   
//   return 1;
// }
//       
// //this calculates the progress better for forward/back paths because it factors in the x rotation
// //and we need that for forward paths
// uint32_t cameraGetProgressAlt(cvector *trans, uint8_t *path, ccameraInfo *cam, uint32_t bitfield, uint32_t flag)
// {
//   entry *pathZone = (entry*)getWord(path, 4, 1); 
//   
//   uint8_t *zoneHeader = pathZone->itemData[0];
//   uint8_t *zoneCol = pathZone->itemData[1];  
//   
//   int32_t progressf = -1;
//   cam->progressmade = 1; // assume progress made
//   
//   if (path->length >= 0)
//   {
//     int32_t prevdistfocus = 0;
//     uint32_t prevabsdistfocus = 0;
//     uint32_t i = 0;
//     do
//     {  
//       uint32_t pathptx = (zone->space.x + path->point[i].x);
//       uint32_t pathptz = (zone->space.z + path->point[i].z);
//       signed long distcamx = trans->x - pathptx;
//       signed long distcamz = trans->z - pathptz;
//       
//       int32_t camrotx = path->point[i].rotx;
//       int32_t sin = EMU_Invoke(0x8003905C,1,camrotx);
//       int32_t cos = EMU_Invoke(0x800390D0,1,camrotx);
//       int32_t distfocusx = distcamx * sin;
//       int32_t distfocusz = distcamx * cos;
//       
//       int32_t distfocus = (-cam->zoomz*16) - (distfocusx + distfocusz);
//       
//       if (path->direction.z <= 0)
//       {
//         if (i == 0 && distfocus < 0)
//         {
//           progressf = 0;
//           if (distfocus >= -128000)
//             cam->progressmade = 0;
//           break;
//         }
//         else
//         {
//           uint32_t pathend = path->length - 1;
//           if (i == pathend && distfocus > 0)
//           {
//             progressf = (path->length << 8) - 1;
//             if (distfocus < 128000)
//               cam->progressmade = 0;  
//             break;
//           }
//         }
//       }
//       else
//       {
//         if (i == 0 && distfocus > 0)
//         {
//           progressf = 0;
//           if (128000 < distfocus)
//             cam->progressmade = 0;
//           break;
//         }
//         else
//         {
//           uint32_t pathend = path->length - 1;
//           if (i == pathend && distfocus < 0)
//           {
//             progressf = (path->length << 8) - 1;
//             if (distfocus < -128000)
//               cam->progressmade = 0;  
//             break;
//           }
//         }
//       }
//         
//       uint32_t absdistfocus = abs(distfocus);
// 
//       // we want a point such that, given the camera's location and orientation in 
//       // the xz plane at -that- point, of all other points on the path, the distance 
//       // from the -near plane- of the viewing frustum to the source object is the 
//       // closest
//       uint32_t iscloser = absdistfocus < prevabsdistfocus;
// 
//       else if (i == 0 || iscloser)   
//       {
//         if (iscloser)
//         {
//           // if sign of the previous min distance is the same as the current [min]
//           if ((distfocus ^ prevdistfocus) >= 0)
//             progressf = i << 8; // use its progress value-it has a closer distance
//           else // else ??, accounts for sign changes w/paths weave through near plane
//             progressf += (prevabsdistfocus << 8)/(prevabsdistfocus + absdistfocus);
//         }
//         prevdistfocus = distfocus;
//         prevabsdistfocus = absdistfocus;
//       }
//     } while (++i < path->length); 
//   }
//       
//   if (path != currentpath)
//     cam->nextpath = path;
//   else
//     cam->nextpath = 0;
//     
//   uint32_t entranceindex = 0;
//   uint32_t exitindex = 0;
//   
//   if (flag)
//   {
//     if (bitfield & 1)
//       entranceindex = path->entranceindex;
//       
//     if (bitfield & 2)
//       exitindex = path->exitindex; // relative to end of path
//   }
// 
//   uint32_t progress = progressf >> 8;
//   if (progress < entranceindex)
//   {
//     if (entranceindex || path != currentpath)          
//       return 0; 
//       
//     progressf = 0;
//     cam->progressmade = 0;
//   }
//   else if (progress >= (path->length - exitindex))
//   {
//     if (exitindex || path != currentpath)         
//       return 0;
// 
//     progressf = (pathDepth << 8) - 1;
//     cam->progressmade = 0;
//   }
//   
//   uint32_t zonex = zone->space.x;
//   uint32_t zoney = zone->space.y;
//   uint32_t zonez = zone->space.z;
//   
//   uint32_t adjustx = (cam->panx + crash->trans.x) >> 8;
//   uint32_t adjusty = (cam->pany + crash->trans.y) >> 8;
//   uint32_t adjustz = (cam->zoomz + crash->trans.z) >> 8;
//   
//   int32_t distx = adjustx - (zonex + path->point[progress].x);
//   int32_t disty = adjusty - (zoney + path->point[progress].y);
//   int32_t distz = adjustz - (zonez + path->point[progress].z);
//   
//   cam->curpath = path;
//   cam->progress = progressf;
//   
//   // calculate euclidian distance from crash to camera
//   uint32_t dist = sqrt((distx * distx) + (disty * disty) + (distz * distz));
//   cam->dist = dist;
// 
//   return 1;
// }
// 