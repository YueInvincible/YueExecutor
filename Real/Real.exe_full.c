/* FUN_140001040 */

longlong *
FUN_140001040(longlong *param_1,undefined8 param_2,uint param_3,undefined4 param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_5 != 0) {
    *param_1 = (longlong)&DAT_140035860;
    (*DAT_140039688)(param_1 + 0x15);
    param_1[0x15] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xa8;
  plVar1 = param_1 + 1;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x10;
  (*DAT_140039740)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,plVar1,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xa8;
  (*DAT_140039678)(plVar1);
  param_1[1] = (longlong)std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)((longlong)param_1 + 0x79) = 0;
  param_1[4] = (longlong)(param_1 + 2);
  param_1[5] = (longlong)(param_1 + 3);
  param_1[8] = (longlong)(param_1 + 6);
  param_1[9] = (longlong)(param_1 + 7);
  param_1[0xb] = (longlong)(param_1 + 10);
  param_1[0xc] = (longlong)param_1 + 0x54;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = DAT_14003f948;
  param_1[0xe] = 0;
  lVar2 = FUN_140031250(plVar1,param_2,param_3 | 2,param_4);
  if (lVar2 == 0) {
    (*DAT_140039708)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4),
                     *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10) | 2,0);
  }
  return param_1;
}


/* Unwind@140001200 */

void Unwind_140001200(undefined8 param_1,longlong param_2)

{
  FUN_14001f5b0(*(undefined8 *)(param_2 + 0x28));
  return;
}


/* Unwind@140001230 */

void Unwind_140001230(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0xa0) != 0) {
    (*DAT_1400396a0)(*(longlong *)(param_2 + 0x30) + 0xa8);
  }
  return;
}


/* FUN_140001270 */

void FUN_140001270(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xa8;
  param_1[1] = (longlong)std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((param_1[0x11] == 0) || (*(longlong **)param_1[4] != param_1 + 0xf)) {
    cVar1 = *(char *)((longlong)param_1 + 0x84);
  }
  else {
    lVar3 = param_1[0x13];
    lVar2 = param_1[0x12];
    *(longlong *)param_1[4] = lVar2;
    *(longlong *)param_1[8] = lVar2;
    *(int *)param_1[0xb] = (int)lVar3 - (int)lVar2;
    cVar1 = *(char *)((longlong)param_1 + 0x84);
  }
  if (cVar1 == '\x01') {
    FUN_14001f660(param_1 + 1);
  }
  (*DAT_140039690)(param_1 + 1);
  (*DAT_1400396a0)(param_1 + 0x15);
  return;
}


/* Unwind@140001340 */

void Unwind_140001340(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* Unwind@140001440 */

void Unwind_140001440(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* Unwind@140001c30 */

void Unwind_140001c30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x160);
  if (lVar1 != 0) {
    uVar4 = *(longlong *)(param_2 + 0x170) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_140001f82;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *(undefined8 *)(param_2 + 0x160) = 0;
    *(undefined8 *)(param_2 + 0x168) = 0;
    *(undefined8 *)(param_2 + 0x170) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 0x140);
  if (lVar1 != 0) {
    uVar4 = *(longlong *)(param_2 + 0x150) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_140001f82;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *(undefined8 *)(param_2 + 0x140) = 0;
    *(undefined8 *)(param_2 + 0x148) = 0;
    *(undefined8 *)(param_2 + 0x150) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 0x120);
  if (lVar1 != 0) {
    uVar4 = *(longlong *)(param_2 + 0x130) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_140001f82;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *(undefined8 *)(param_2 + 0x120) = 0;
    *(undefined8 *)(param_2 + 0x128) = 0;
    *(undefined8 *)(param_2 + 0x130) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 0x100);
  if (lVar1 != 0) {
    uVar4 = *(longlong *)(param_2 + 0x110) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_140001f82;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *(undefined8 *)(param_2 + 0x100) = 0;
    *(undefined8 *)(param_2 + 0x108) = 0;
    *(undefined8 *)(param_2 + 0x110) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 0xe0);
  if (lVar1 != 0) {
    uVar4 = *(longlong *)(param_2 + 0xf0) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_140001f82;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *(undefined8 *)(param_2 + 0xe0) = 0;
    *(undefined8 *)(param_2 + 0xe8) = 0;
    *(undefined8 *)(param_2 + 0xf0) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 0xc0);
  if (lVar1 != 0) {
    uVar4 = *(longlong *)(param_2 + 0xd0) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_140001f82;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(undefined8 *)(param_2 + 200) = 0;
    *(undefined8 *)(param_2 + 0xd0) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 0xa0);
  if (lVar1 != 0) {
    uVar4 = *(longlong *)(param_2 + 0xb0) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_140001f82;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 0x80);
  if (lVar1 != 0) {
    uVar4 = *(longlong *)(param_2 + 0x90) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_140001f82;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *(longlong *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 0x60);
  if (lVar1 != 0) {
    uVar4 = *(longlong *)(param_2 + 0x70) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_140001f82;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 0x40);
  if (lVar1 != 0) {
    uVar4 = *(longlong *)(param_2 + 0x50) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) {
LAB_140001f82:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  *(longlong *)(param_2 + 0x178) = param_2 + 0x158;
  *(undefined1 *)(param_2 + 0x187) = 1;
  return;
}


/* Unwind@140001f90 */

void Unwind_140001f90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x178);
  if (param_2 + 0x38 != lVar1 && (*(byte *)(param_2 + 0x187) & 1) == 0) {
    do {
      lVar1 = lVar1 + -0x20;
      FUN_140001ff0(lVar1);
    } while (lVar1 != param_2 + 0x38);
  }
  return;
}


/* FUN_140001ff0 */

void FUN_140001ff0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    uVar4 = *(longlong *)(param_1 + 0x18) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


/* Catch_All@14000ea40 */

undefined1 * Catch_All_14000ea40(void)

{
  return &LAB_1400037de;
}


/* Catch_All@14000ea90 */

undefined1 * Catch_All_14000ea90(void)

{
  return &LAB_140002dd1;
}


/* Unwind@14000eae0 */

void Unwind_14000eae0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x6a0);
  return;
}


/* Unwind@14000eb30 */

void Unwind_14000eb30(undefined8 param_1,longlong param_2)

{
  FUN_140001270(param_2 + 0xa30);
  return;
}


/* Unwind@14000eb80 */

void Unwind_14000eb80(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xba0);
  return;
}


/* Unwind@14000ebd0 */

void Unwind_14000ebd0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xc40);
  return;
}


/* Unwind@14000ec20 */

void Unwind_14000ec20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* Unwind@14000ec50 */

void Unwind_14000ec50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* Unwind@14000ec80 */

void Unwind_14000ec80(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xc40);
  return;
}


/* Unwind@14000ecd0 */

void Unwind_14000ecd0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xc90);
  return;
}


/* Unwind@14000ed20 */

void Unwind_14000ed20(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xc40);
  return;
}


/* Unwind@14000ed70 */

void Unwind_14000ed70(undefined8 param_1,longlong param_2)

{
  FUN_1400308d0(param_2 + 0x878);
  (*DAT_1400396a0)(param_2 + 0x878);
  return;
}


/* Unwind@14000edd0 */

void Unwind_14000edd0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xc60);
  return;
}


/* Unwind@14000ee20 */

void Unwind_14000ee20(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xbc0);
  return;
}


/* Unwind@14000ee70 */

void Unwind_14000ee70(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xba0);
  return;
}


/* Unwind@14000eec0 */

void Unwind_14000eec0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xa30);
  return;
}


/* Unwind@14000ef10 */

void Unwind_14000ef10(undefined8 param_1,longlong param_2)

{
  FUN_14001f2f0(param_2 + 0x7e0);
  return;
}


/* Unwind@14000ef60 */

void Unwind_14000ef60(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x2a0);
  return;
}


/* Unwind@14000efb0 */

void Unwind_14000efb0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xc60);
  return;
}


/* Unwind@14000f000 */

void Unwind_14000f000(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xc60);
  return;
}


/* Unwind@14000f050 */

void Unwind_14000f050(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x7e0);
  return;
}


/* Unwind@14000f0a0 */

void Unwind_14000f0a0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xbc0);
  return;
}


/* Unwind@14000f0f0 */

void Unwind_14000f0f0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xc10);
  return;
}


/* Unwind@14000f140 */

void Unwind_14000f140(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x6a0);
  return;
}


/* Catch_All@14000f190 */

undefined1 * Catch_All_14000f190(void)

{
  return &LAB_140003a47;
}


/* Unwind@14000f1e0 */

void Unwind_14000f1e0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xc60);
  return;
}


/* Unwind@14000f230 */

void Unwind_14000f230(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xc90);
  return;
}


/* Unwind@14000f280 */

void Unwind_14000f280(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x6a0);
  return;
}


/* Unwind@14000f2d0 */

void Unwind_14000f2d0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xa30);
  return;
}


/* Unwind@14000f320 */

void Unwind_14000f320(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xc10);
  return;
}


/* Unwind@14000f370 */

void Unwind_14000f370(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xc40);
  return;
}


/* Unwind@14000f3c0 */

void Unwind_14000f3c0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xc90);
  return;
}


/* Unwind@14000f410 */

void Unwind_14000f410(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xba0);
  return;
}


/* Unwind@14000f460 */

void Unwind_14000f460(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xc40);
  return;
}


/* Unwind@14000f4b0 */

void Unwind_14000f4b0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xb70);
  return;
}


/* Unwind@14000f500 */

void Unwind_14000f500(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x7a0);
  return;
}


/* Unwind@14000f550 */

void Unwind_14000f550(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x6a0);
  return;
}


/* Unwind@14000f5a0 */

void Unwind_14000f5a0(undefined8 param_1,longlong param_2)

{
  FUN_140001ff0(param_2 + 0x7e0);
  return;
}


/* Unwind@14000f5f0 */

void Unwind_14000f5f0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xc60);
  return;
}


/* Unwind@14000f640 */

void Unwind_14000f640(undefined8 param_1,longlong param_2)

{
  FUN_14001f2f0(param_2 + 0x7e0);
  return;
}


/* Unwind@14000f690 */

void Unwind_14000f690(undefined8 param_1,longlong param_2)

{
  FUN_140001ff0(param_2 + 0x7e0);
  return;
}


/* Unwind@14000f6e0 */

void Unwind_14000f6e0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x120);
  return;
}


/* Unwind@14000f730 */

void Unwind_14000f730(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x3d0);
  return;
}


/* Unwind@14000f780 */

void Unwind_14000f780(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x408);
  return;
}


/* Unwind@14000f7d0 */

void Unwind_14000f7d0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x638);
  return;
}


/* Unwind@14000f820 */

void Unwind_14000f820(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xc40);
  return;
}


/* Unwind@14000f870 */

void Unwind_14000f870(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xc90);
  return;
}


/* Unwind@14000f8c0 */

void Unwind_14000f8c0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xb70);
  FUN_14000fb30(param_2 + 0xc10);
  return;
}


/* Unwind@14000f920 */

void Unwind_14000f920(undefined8 param_1,longlong param_2)

{
  FUN_14001c980(param_2 + 0x528);
  FUN_14000fb30(param_2 + 0x678);
  return;
}


/* Unwind@14000f980 */

void Unwind_14000f980(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x3b0);
  return;
}


/* Unwind@14000f9d0 */

void Unwind_14000f9d0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 1000);
  return;
}


/* Unwind@14000fa20 */

void Unwind_14000fa20(undefined8 param_1,longlong param_2)

{
  FUN_14001f3e0(param_2 + 0x4a0);
  return;
}


/* Unwind@14000fa70 */

void Unwind_14000fa70(undefined8 param_1,longlong param_2)

{
  FUN_140010a40(param_2 + 0x420);
  return;
}


/* Unwind@14000fac0 */

void Unwind_14000fac0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xb40);
  FUN_14001f550(param_2 + 0x650);
  FUN_14000fb30(param_2 + 0x610);
  return;
}


/* FUN_14000fb30 */

void FUN_14000fb30(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}


/* FUN_14000fb90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_14000fb90(ulonglong *param_1)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined7 uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  byte bVar22;
  ulonglong uVar23;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 ***local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 *local_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  uint local_44 [3];
  
  local_44[1] = 0xfffffffe;
  local_44[2] = 0xffffffff;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0xf;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0xf;
  local_d8 = (undefined8 ****)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0xf;
  local_b8 = 0;
  uStack_b0 = 0;
  iVar11 = FUN_140027c50(&uStack_b0,L"Microsoft Platform Crypto Provider");
  if (iVar11 == 0) {
    iVar11 = FUN_140027c80(uStack_b0,&local_b8);
    if (iVar11 == 0) {
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = uStack_74 & 0xff000000;
      local_88 = 0x1387818a;
      puVar21 = &local_88;
LAB_14000fdbc:
      puVar13 = (ulonglong *)FUN_140031690();
      uVar12 = *puVar13;
      puVar13 = (ulonglong *)FUN_1400316a0();
      uVar23 = *puVar13;
      uVar14 = 0;
      do {
        if (uVar14 < uVar12) {
          puVar21 = (ulonglong *)&stack0x00ec567f;
          goto LAB_1400103a3;
        }
        bVar1 = *(byte *)((longlong)&local_88 + uVar14);
        uVar20 = (ulonglong)bVar1;
        uVar17 = uVar23 + 1;
        cVar3 = (char)uVar14;
        if (uVar12 < uVar17) {
LAB_14000fe6d:
          if (uVar14 < uVar23) {
            puVar21 = (ulonglong *)&stack0x01650d7c;
            goto LAB_1400103a3;
          }
          if (uVar12 < uVar23 + 9 || uVar12 != uVar17) {
            if (uVar14 < uVar23 + uVar12) {
              if (uVar12 == uVar23 + 9) goto LAB_14000fe91;
              if (uVar12 == uVar17) {
                bVar22 = (cVar3 + bVar1 + (bVar1 & cVar3 + 0x5cU) * -2) - 0x28;
LAB_14000ffab:
                *(byte *)((longlong)&local_88 + uVar14) =
                     cVar3 + bVar1 + (bVar1 & cVar3 + 0x3bU) * -2 + bVar22 + -0x62;
              }
              else {
                if (uVar12 != uVar23 + 4) {
                  if (uVar12 == uVar23 + 10) goto LAB_14000fe3a;
                  goto LAB_14000fdbc;
                }
                bVar22 = cVar3 + bVar1 + (bVar1 & cVar3 + 0x62U) * -2 + 0xb4;
              }
              uVar12 = uVar23 + uVar12;
              goto LAB_14000ffd4;
            }
            if (uVar12 == uVar17) goto LAB_14000fe91;
            uVar10 = uVar17;
            if ((uVar12 == uVar23 + 2) || (uVar10 = uVar23, uVar12 == uVar23 + 3))
            goto LAB_14000feb2;
            if (uVar12 == uVar23 + 5) {
              bVar22 = (cVar3 + bVar1 + (bVar1 & cVar3 - 0x25U) * -2) - 0x22;
              goto LAB_14000ffd4;
            }
            if (uVar12 == uVar23 + 4) goto LAB_14000fe3a;
            if (5 < uVar12) {
              bVar22 = cVar3 + bVar1 * '\x02' + (bVar1 & cVar3 + 0x38U) * -2 + 0xb0;
              goto LAB_14000ffab;
            }
            if (2 < uVar23) goto LAB_14000fe91;
            *(byte *)((longlong)&local_88 + uVar14) =
                 cVar3 + bVar1 + (bVar1 & cVar3 + 3U) * -2 + -0x12;
          }
          else {
LAB_14000fe91:
            *(byte *)((longlong)&local_88 + uVar14) =
                 cVar3 + bVar1 + (bVar1 & cVar3 + 0x35U) * -2 + -0x3e;
            uVar10 = uVar17;
LAB_14000feb2:
            uVar23 = uVar10;
            uVar14 = uVar14 - 1;
          }
        }
        else {
          if (uVar12 == uVar17) {
LAB_14000fe3a:
            uVar14 = uVar14 + uVar23;
          }
          else {
            if (uVar12 == uVar23 + 2) {
              bVar22 = cVar3 + bVar1 + (cVar3 + 0x41U & bVar1) * -2 + 0x7a;
              *(byte *)((longlong)&local_88 + uVar14) = bVar22;
              lVar15 = (~uVar23 + uVar14) - (ulonglong)bVar22;
              *(byte *)((longlong)&local_88 + lVar15) =
                   (char)lVar15 + bVar1 + ((char)lVar15 + 0x44U & bVar1) * -2 + 'h';
              lVar15 = lVar15 - uVar12;
              uVar12 = uVar12 + 1;
              uVar20 = (ulonglong)*(byte *)((longlong)&local_90 + lVar15 + 6);
              uVar14 = lVar15 - 2;
              uVar23 = uVar17;
              goto LAB_14000fe3a;
            }
            if (uVar12 != uVar23 + 3) {
              if (uVar12 == uVar23 + 5) {
                bVar22 = cVar3 + bVar1 + (bVar1 & cVar3 + 0x27U) * -2 + 0x16;
                goto LAB_14000ffab;
              }
              if (uVar12 != uVar23 + 6) goto LAB_14000fe6d;
              goto LAB_14000fe91;
            }
            bVar22 = cVar3 + bVar1 + (bVar1 & cVar3 + 0x1bU) * -2 + 0x5e;
LAB_14000ffd4:
            uVar20 = ~(ulonglong)bVar22;
          }
          uVar14 = uVar14 + uVar20;
        }
        uVar14 = uVar14 + 1;
        if (0x16 < uVar14) goto LAB_1400103a3;
      } while( true );
    }
    FUN_140027df0(uStack_b0);
    uStack_b0 = 0;
  }
  iVar11 = FUN_140027c50(&uStack_b0,L"Microsoft Software Key Storage Provider");
  if ((iVar11 == 0) && (iVar11 = FUN_140027c80(uStack_b0,&local_b8), iVar11 == 0)) {
    local_68 = 0x404e3eabafbeb0ab;
    uStack_60 = 0xde;
    uStack_5f = 0;
    uStack_58 = 0;
    uStack_57 = 0;
    uStack_50 = 0;
    puVar21 = &local_68;
LAB_1400100e2:
    puVar13 = (ulonglong *)FUN_140031690();
    uVar12 = *puVar13;
    puVar13 = (ulonglong *)FUN_1400316a0();
    uVar23 = *puVar13;
    uVar14 = 0;
    do {
      if (uVar14 < uVar12) {
        puVar21 = (ulonglong *)&stack0x00dc4e37;
        goto LAB_1400103a3;
      }
      bVar1 = *(byte *)((longlong)&local_68 + uVar14);
      uVar17 = uVar23 + 1;
      cVar3 = (char)uVar14;
      if (uVar12 < uVar17) {
LAB_14001019b:
        if (uVar14 < uVar23) {
          puVar21 = (ulonglong *)&stack0x014e743c;
          goto LAB_1400103a3;
        }
        if (uVar12 == uVar17 && uVar23 + 10 <= uVar12) {
LAB_1400101bf:
          *(byte *)((longlong)&local_68 + uVar14) =
               cVar3 + bVar1 + (bVar1 & cVar3 - 3U) * -2 + '\x12';
          uVar23 = uVar17;
        }
        else if (uVar14 < uVar23 + uVar12) {
          if (uVar12 != uVar17) {
            if (uVar12 == uVar23 + 2) {
              bVar22 = cVar3 + bVar1 + (bVar1 & cVar3 + 0xbcU) * -2 + 0x98;
LAB_140010281:
              *(byte *)((longlong)&local_68 + uVar14) =
                   cVar3 + bVar1 + (bVar1 & cVar3 - 0xdU) * -2 + bVar22 + 'N';
              goto LAB_1400102a7;
            }
            goto LAB_1400100e2;
          }
        }
        else {
          if (uVar12 == uVar17) goto LAB_1400101bf;
          if (uVar12 != uVar23 + 2) {
            if (uVar12 == uVar23 + 3) {
              bVar22 = cVar3 + bVar1 + (bVar1 & cVar3 + 0x9dU) * -2 + 0x52;
              goto LAB_1400102a7;
            }
            if (uVar12 == uVar23 + 4) goto LAB_1400100fb;
            uVar17 = uVar23;
            if (uVar12 == uVar23 + 5) goto LAB_140010135;
            if (8 < uVar12) {
              bVar22 = cVar3 + bVar1 * '\x02' + (bVar1 & cVar3 - 8U) * -2 + 0x30;
              goto LAB_140010281;
            }
            *(byte *)((longlong)&local_68 + uVar14) =
                 cVar3 + bVar1 + (bVar1 & cVar3 - 5U) * -2 + '\x1e';
            goto LAB_140010172;
          }
        }
LAB_140010304:
        uVar14 = uVar14 - 1;
      }
      else {
        if (uVar12 != uVar17) {
          if (uVar12 != uVar23 + 2) {
            if (uVar12 != uVar23 + 5) {
              if (uVar12 != uVar23 + 3) goto LAB_14001019b;
              goto LAB_140010304;
            }
            bVar22 = cVar3 + bVar1 + (bVar1 & cVar3 - 0x37U) * -2 + 0x4a;
LAB_1400102a7:
            uVar12 = uVar23 + uVar12;
            uVar14 = uVar14 + ~(ulonglong)bVar22;
            goto LAB_140010172;
          }
LAB_1400100fb:
          bVar22 = cVar3 + bVar1 + (bVar1 & cVar3 - 0x17U) * -2 + 0x8a;
          *(byte *)((longlong)&local_68 + uVar14) = bVar22;
          uVar14 = (~uVar23 + uVar14) - (ulonglong)bVar22;
LAB_140010135:
          *(byte *)((longlong)&local_68 + uVar14) =
               (char)uVar14 + bVar1 + (bVar1 & (char)uVar14 - 0x1cU) * -2 + -0x58;
          lVar15 = uVar14 - uVar12;
          uVar12 = uVar12 + 1;
          bVar1 = *(byte *)((longlong)&uStack_6c + lVar15 + 2);
          uVar14 = lVar15 - 2;
          uVar23 = uVar17;
        }
        uVar14 = uVar14 + uVar23 + (ulonglong)bVar1;
      }
LAB_140010172:
      uVar14 = uVar14 + 1;
      if (0x18 < uVar14) goto LAB_1400103a3;
    } while( true );
  }
LAB_14000fc69:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
LAB_14000fca8:
  if (0xf < uStack_c0) {
    uVar12 = uStack_c0 + 1;
    ppppuVar16 = (undefined8 ****)local_d8;
    if (0xfff < uVar12) {
      ppppuVar16 = (undefined8 ****)local_d8[-1];
      if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)ppppuVar16))) goto LAB_14001075d;
      uVar12 = uStack_c0 + 0x28;
    }
    thunk_FUN_1400340c0(ppppuVar16,uVar12);
  }
  local_c8 = 0;
  uStack_c0 = 0xf;
  local_d8 = (undefined8 ***)((ulonglong)local_d8 & 0xffffffffffffff00);
  if (0xf < uStack_e0) {
    uVar12 = uStack_e0 + 1;
    uVar23 = local_f8;
    if (0xfff < uVar12) {
      uVar23 = *(ulonglong *)(local_f8 - 8);
      if (0x1f < (local_f8 - 8) - uVar23) goto LAB_14001075d;
      uVar12 = uStack_e0 + 0x28;
    }
    thunk_FUN_1400340c0(uVar23,uVar12);
  }
  local_e8 = 0;
  uStack_e0 = 0xf;
  local_f8 = local_f8 & 0xffffffffffffff00;
  if (0xf < uStack_100) {
    uVar12 = uStack_100 + 1;
    uVar23 = local_118;
    if (0xfff < uVar12) {
      uVar23 = *(ulonglong *)(local_118 - 8);
      if (0x1f < (local_118 - 8) - uVar23) {
LAB_14001075d:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar12 = uStack_100 + 0x28;
    }
    thunk_FUN_1400340c0(uVar23,uVar12);
  }
  return param_1;
LAB_1400103a3:
  uVar12 = FUN_140034260(puVar21);
  if (uStack_c0 < uVar12) {
    FUN_140027b50(&local_d8,uVar12);
  }
  else {
    ppppuVar16 = &local_d8;
    if (0xf < uStack_c0) {
      ppppuVar16 = (undefined8 ****)local_d8;
    }
    local_c8 = uVar12;
    FUN_140034090(ppppuVar16,puVar21,uVar12);
    *(undefined1 *)((longlong)ppppuVar16 + uVar12) = 0;
  }
  local_44[0] = 0;
  FUN_140027e10(local_b8,0,0,local_44);
  uVar12 = (ulonglong)local_44[0];
  if (uVar12 < 0x48) goto LAB_14000fc69;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  if (local_44[0] < 0x1000) {
    uVar23 = FUN_1400329d0(uVar12);
  }
  else {
    lVar15 = FUN_1400329d0(uVar12 + 0x27);
    uVar23 = lVar15 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar23 - 8) = lVar15;
  }
  lVar15 = uVar23 + uVar12;
  uStack_58 = (undefined1)lVar15;
  uVar8 = uStack_58;
  uStack_57 = (undefined7)((ulonglong)lVar15 >> 8);
  uVar9 = uStack_57;
  local_68 = uVar23;
  FUN_1400340a0(uVar23,0,uVar12);
  uStack_60 = uVar8;
  uStack_5f = uVar9;
  iVar11 = FUN_140027e10(local_b8,uVar23,local_44[0],local_44);
  if (iVar11 == 0) {
    local_a0 = (undefined4 *)FUN_1400329d0(0x1b);
    uVar7 = _UNK_140035da3;
    local_98 = (longlong)local_a0 + 0x1b;
    *(ulonglong *)((longlong)local_a0 + 0xb) =
         CONCAT35(_UNK_140035da0,CONCAT41(_UNK_140035d9c,DAT_140035d9b));
    *(undefined8 *)((longlong)local_a0 + 0x13) = uVar7;
    uVar6 = _UNK_140035d9c;
    uVar5 = _UNK_140035d98;
    uVar4 = _UNK_140035d94;
    *local_a0 = _DAT_140035d90;
    local_a0[1] = uVar4;
    local_a0[2] = uVar5;
    local_a0[3] = uVar6;
    local_90 = local_98;
    FUN_140028930(&local_a0,local_98,uVar23 + 8,0x20);
    FUN_140028930(&local_a0,local_98,uVar23 + 0x28,0x20);
    FUN_1400256c0(&local_138,local_a0,local_98 - (longlong)local_a0);
    FUN_140028b50(&local_88,local_a0,(int)local_98 - (int)local_a0);
    if (0xf < uStack_e0) {
      uVar12 = uStack_e0 + 1;
      uVar23 = local_f8;
      if (0xfff < uVar12) {
        uVar23 = *(ulonglong *)(local_f8 - 8);
        if (0x1f < (local_f8 - 8) - uVar23) goto LAB_14001075d;
        uVar12 = uStack_e0 + 0x28;
      }
      thunk_FUN_1400340c0(uVar23,uVar12);
    }
    local_e8 = CONCAT44(uStack_74,uStack_78);
    uStack_e0 = CONCAT44(uStack_6c,uStack_70);
    local_f8 = local_88;
    uStack_f0 = CONCAT44(uStack_7c,uStack_80);
    FUN_1400278b0(&local_88,local_138,lStack_130 - local_138);
    if (0xf < uStack_100) {
      uVar12 = uStack_100 + 1;
      uVar23 = local_118;
      if (0xfff < uVar12) {
        uVar23 = *(ulonglong *)(local_118 - 8);
        if (0x1f < (local_118 - 8) - uVar23) goto LAB_14001075d;
        uVar12 = uStack_100 + 0x28;
      }
      thunk_FUN_1400340c0(uVar23,uVar12);
    }
    uStack_110 = CONCAT44(uStack_7c,uStack_80);
    param_1[2] = CONCAT44(uStack_74,uStack_78);
    param_1[3] = CONCAT44(uStack_6c,uStack_70);
    *param_1 = local_88;
    param_1[1] = uStack_110;
    local_108 = 0;
    uStack_100 = 0xf;
    local_118 = local_88 & 0xffffffffffffff00;
    param_1[6] = local_e8;
    param_1[7] = uStack_e0;
    param_1[4] = local_f8;
    param_1[5] = uStack_f0;
    local_e8 = 0;
    uStack_e0 = 0xf;
    local_f8 = local_f8 & 0xffffffffffffff00;
    *(undefined4 *)(param_1 + 10) = (undefined4)local_c8;
    *(undefined4 *)((longlong)param_1 + 0x54) = local_c8._4_4_;
    *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_c0._4_4_;
    param_1[8] = (ulonglong)local_d8;
    param_1[9] = uStack_d0;
    local_c8 = 0;
    uStack_c0 = 0xf;
    local_d8 = (undefined8 ***)((ulonglong)local_d8 & 0xffffffffffffff00);
    *(undefined4 *)(param_1 + 0xc) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_1 + 100) = local_b8._4_4_;
    *(undefined4 *)(param_1 + 0xd) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_b0._4_4_;
    if (local_138 != 0) {
      uVar12 = local_128 - local_138;
      lVar18 = local_138;
      if (0xfff < uVar12) {
        lVar18 = *(longlong *)(local_138 + -8);
        if (0x1f < (ulonglong)((local_138 + -8) - lVar18)) goto LAB_14001075d;
        uVar12 = uVar12 + 0x27;
      }
      thunk_FUN_1400340c0(lVar18,uVar12);
      local_138 = 0;
      lStack_130 = 0;
      local_128 = 0;
    }
    if (local_a0 != (undefined4 *)0x0) {
      uVar12 = local_90 - (longlong)local_a0;
      puVar19 = local_a0;
      if (0xfff < uVar12) {
        puVar19 = *(undefined4 **)(local_a0 + -2);
        if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)puVar19))) goto LAB_14001075d;
        uVar12 = uVar12 + 0x27;
      }
      thunk_FUN_1400340c0(puVar19,uVar12);
    }
    uVar23 = local_68;
    if (local_68 != 0) goto LAB_140010729;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0xf;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0xf;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
LAB_140010729:
    uVar14 = lVar15 - uVar23;
    uVar12 = uVar23;
    if (0xfff < uVar14) {
      uVar12 = *(ulonglong *)(uVar23 - 8);
      if (0x1f < (uVar23 - 8) - uVar12) goto LAB_14001075d;
      uVar14 = uVar14 + 0x27;
    }
    thunk_FUN_1400340c0(uVar12,uVar14);
  }
  goto LAB_14000fca8;
}


/* Unwind@140010760 */

void Unwind_140010760(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x20);
  return;
}


/* Unwind@1400107a0 */

void Unwind_1400107a0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xb8);
  return;
}


/* Unwind@1400107e0 */

void Unwind_1400107e0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xb8);
  return;
}


/* Unwind@140010820 */

void Unwind_140010820(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0xf0);
  return;
}


/* Unwind@140010860 */

void Unwind_140010860(undefined8 param_1,longlong param_2)

{
  FUN_140010a40(param_2 + 0x40);
  return;
}


/* FUN_1400108a0 */

longlong * FUN_1400108a0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if (param_1 != param_2) {
    uVar1 = param_1[3];
    if (0xf < uVar1) {
      lVar2 = *param_1;
      uVar9 = uVar1 + 1;
      lVar10 = lVar2;
      if (0xfff < uVar9) {
        lVar10 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar10)) goto LAB_140010a2f;
        uVar9 = uVar1 + 0x28;
      }
      thunk_FUN_1400340c0(lVar10,uVar9);
    }
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    lVar2 = *param_2;
    uVar4 = *(undefined4 *)((longlong)param_2 + 4);
    lVar10 = param_2[1];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar8 = param_2[3];
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
    *(int *)(param_1 + 3) = (int)lVar8;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
    *(int *)param_1 = (int)lVar2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar4;
    *(int *)(param_1 + 1) = (int)lVar10;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    uVar1 = param_1[7];
    if (0xf < uVar1) {
      lVar2 = param_1[4];
      uVar9 = uVar1 + 1;
      lVar10 = lVar2;
      if (0xfff < uVar9) {
        lVar10 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar10)) goto LAB_140010a2f;
        uVar9 = uVar1 + 0x28;
      }
      thunk_FUN_1400340c0(lVar10,uVar9);
    }
    param_1[6] = 0;
    param_1[7] = 0xf;
    *(undefined1 *)(param_1 + 4) = 0;
    lVar2 = param_2[4];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
    lVar10 = param_2[5];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
    lVar8 = param_2[7];
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
    *(int *)(param_1 + 7) = (int)lVar8;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar7;
    *(int *)(param_1 + 4) = (int)lVar2;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
    *(int *)(param_1 + 5) = (int)lVar10;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
    param_2[6] = 0;
    param_2[7] = 0xf;
    *(undefined1 *)(param_2 + 4) = 0;
    uVar1 = param_1[0xb];
    if (0xf < uVar1) {
      lVar2 = param_1[8];
      uVar9 = uVar1 + 1;
      lVar10 = lVar2;
      if (0xfff < uVar9) {
        lVar10 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar10)) {
LAB_140010a2f:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar9 = uVar1 + 0x28;
      }
      thunk_FUN_1400340c0(lVar10,uVar9);
    }
    param_1[10] = 0;
    param_1[0xb] = 0xf;
    *(undefined1 *)(param_1 + 8) = 0;
    lVar2 = param_2[8];
    lVar10 = param_2[9];
    lVar8 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = lVar8;
    param_1[8] = lVar2;
    param_1[9] = lVar10;
    param_2[10] = 0;
    param_2[0xb] = 0xf;
    *(undefined1 *)(param_2 + 8) = 0;
  }
  lVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar2;
  return param_1;
}


/* FUN_140010a40 */

void FUN_140010a40(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = param_1[0xb];
  if (0xf < uVar1) {
    lVar2 = param_1[8];
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_140010b3d;
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  uVar1 = param_1[7];
  if (0xf < uVar1) {
    lVar2 = param_1[4];
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_140010b3d;
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
LAB_140010b3d:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}


/* FUN_140010b40 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *******
FUN_140010b40(longlong *******param_1,longlong *******param_2,longlong *******param_3,
             undefined8 *param_4,undefined8 *param_5,undefined8 *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  short ******ppppppsVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined1 (*pauVar21) [16];
  longlong ******pppppplVar22;
  undefined8 *******pppppppuVar23;
  short *******pppppppsVar24;
  longlong *******ppppppplVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined8 *******pppppppuVar29;
  longlong ******pppppplVar30;
  undefined8 *puVar31;
  longlong *******ppppppplVar32;
  undefined8 uVar33;
  longlong *****ppppplVar34;
  short *psVar35;
  byte bVar36;
  longlong ******pppppplVar37;
  short *psVar38;
  longlong ******pppppplVar39;
  undefined1 auVar40 [8];
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  longlong *******ppppppplVar45;
  undefined1 (*pauVar46) [16];
  undefined1 (*pauVar47) [16];
  undefined8 *puVar48;
  ulonglong uVar49;
  undefined8 ******ppppppuVar50;
  undefined8 *******pppppppuVar51;
  byte bVar52;
  char cVar53;
  short *******pppppppsVar54;
  short *psVar55;
  int iVar56;
  char cVar57;
  char cVar58;
  int iVar59;
  byte bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  undefined1 auVar67 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar89 [16];
  undefined1 auVar97 [16];
  undefined1 auVar105 [16];
  longlong ******local_5d8;
  longlong ******pppppplStack_5d0;
  longlong ******local_5c8;
  longlong ******pppppplStack_5c0;
  undefined8 *******local_5b8 [2];
  ulonglong local_5a8;
  ulonglong local_5a0;
  longlong local_598;
  int local_590;
  longlong local_588;
  undefined1 *local_580;
  longlong *******local_578;
  longlong ******local_570;
  undefined1 (*local_568) [16];
  undefined8 ******ppppppuStack_560;
  undefined8 ******local_558;
  undefined8 ******ppppppuStack_550;
  undefined8 *******local_548;
  undefined8 ******ppppppuStack_540;
  undefined8 ******local_538;
  undefined8 ******ppppppuStack_530;
  undefined8 *******local_528;
  undefined8 ******ppppppuStack_520;
  undefined8 ******local_518;
  undefined8 ******ppppppuStack_510;
  undefined8 *******local_508;
  undefined8 ******ppppppuStack_500;
  undefined8 ******local_4f8;
  undefined8 ******ppppppuStack_4f0;
  undefined8 *******local_4e8;
  undefined8 ******ppppppuStack_4e0;
  undefined8 ******local_4d8;
  undefined8 ******ppppppuStack_4d0;
  undefined8 *******local_4c8;
  undefined8 ******ppppppuStack_4c0;
  undefined8 ******local_4b8;
  undefined8 ******ppppppuStack_4b0;
  undefined8 *******local_4a8;
  undefined8 ******ppppppuStack_4a0;
  undefined8 ******local_498;
  undefined8 ******ppppppuStack_490;
  undefined8 *******local_488;
  undefined8 ******ppppppuStack_480;
  undefined8 ******local_478;
  undefined8 ******ppppppuStack_470;
  undefined8 *******local_468;
  undefined8 uStack_460;
  longlong local_458;
  ulonglong uStack_450;
  undefined1 local_448 [16];
  ulonglong local_438;
  ulonglong uStack_430;
  undefined8 *******local_420;
  longlong *******local_418;
  longlong *******local_410;
  longlong *******local_408;
  undefined8 *******local_400;
  undefined8 *******local_3f8;
  longlong ******pppppplStack_3f0;
  longlong ******local_3e8;
  longlong ******pppppplStack_3e0;
  undefined8 *******local_3d0;
  short *******local_3c8;
  undefined8 *local_3c0;
  longlong *******local_3b8;
  undefined8 uStack_3b0;
  ulonglong local_3a8;
  undefined8 uStack_3a0;
  undefined8 *******local_398;
  undefined8 ******ppppppuStack_390;
  undefined4 local_388;
  undefined2 uStack_384;
  undefined2 uStack_382;
  undefined8 ******ppppppuStack_380;
  undefined6 uStack_378;
  undefined1 (*local_368) [16];
  undefined8 ******ppppppuStack_360;
  undefined8 ******local_358;
  undefined8 ******ppppppuStack_350;
  undefined1 local_348 [8];
  ulonglong uStack_340;
  longlong local_338;
  ulonglong uStack_330;
  undefined1 local_328 [8];
  ulonglong uStack_320;
  longlong local_318;
  undefined8 uStack_310;
  undefined8 *******local_308;
  longlong ******pppppplStack_300;
  undefined4 local_2f8;
  undefined2 uStack_2f4;
  short sStack_2f2;
  longlong ******pppppplStack_2f0;
  undefined5 uStack_2e8;
  undefined4 local_2e3;
  undefined1 (*local_2d8 [2]) [16];
  ulonglong local_2c8;
  ulonglong uStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined8 *******local_298;
  undefined8 ******ppppppuStack_290;
  undefined8 ******local_288;
  undefined8 uStack_280;
  short *******local_278;
  undefined8 ******ppppppuStack_270;
  uint local_268;
  undefined2 uStack_264;
  undefined2 uStack_262;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined6 uStack_258;
  unkbyte9 Stack_252;
  undefined8 *******local_248;
  undefined8 ******ppppppuStack_240;
  undefined8 ******local_238;
  undefined8 ******ppppppuStack_230;
  undefined8 *******local_228;
  longlong *****ppppplStack_220;
  longlong *****local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined2 local_1f4;
  ulonglong local_1f2;
  undefined2 local_1ea;
  longlong *******local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  uint local_1a8;
  undefined2 uStack_1a4;
  undefined2 uStack_1a2;
  undefined6 uStack_1a0;
  undefined2 uStack_19a;
  undefined2 uStack_198;
  byte abStack_18a [2];
  undefined1 local_188 [8];
  undefined8 uStack_180;
  undefined4 local_178;
  undefined2 uStack_174;
  short sStack_172;
  undefined3 uStack_170;
  undefined3 uStack_16d;
  undefined2 uStack_16a;
  undefined3 uStack_168;
  longlong *******local_158;
  undefined8 local_150;
  longlong *******local_148;
  undefined8 *******pppppppuStack_140;
  undefined4 local_138;
  undefined2 uStack_134;
  undefined2 uStack_132;
  longlong ******pppppplStack_130;
  undefined6 uStack_128;
  undefined2 local_122;
  undefined2 uStack_120;
  undefined4 uStack_11e;
  longlong *******local_110;
  undefined1 local_108 [2];
  undefined1 auStack_106 [14];
  undefined1 local_f8 [14];
  byte abStack_ea [2];
  longlong ******local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined2 uStack_c7;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined2 uStack_bb;
  undefined1 uStack_b9;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined1 local_a8;
  undefined1 local_a7 [16];
  undefined8 local_97;
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined1 auStack_74 [12];
  undefined1 local_68 [16];
  longlong *******local_50;
  undefined8 local_48;
  ulonglong uVar44;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  
  local_48 = 0xfffffffffffffffe;
  local_578 = param_2 + 5;
  local_e8 = _DAT_140035470;
  lStack_e0 = _UNK_140035478;
  local_d8 = 0x70373239;
  uStack_d4 = 0x28;
  uStack_d3 = 0x6f;
  uStack_d2 = 0x9f56;
  uStack_d0 = 0;
  uStack_ce = 0;
  uStack_cd = 0;
  uStack_cc = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  ppppppplVar32 = &local_e8;
  local_110 = param_1;
LAB_140010bba:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      ppppppplVar32 = (longlong *******)&stack0x00c515ed;
      break;
    }
    bVar60 = *(byte *)((longlong)&local_e8 + uVar18);
    uVar42 = (ulonglong)bVar60;
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    if (uVar49 < uVar19) {
LAB_140010c0c:
      if (uVar18 < uVar26) {
        ppppppplVar32 = (longlong *******)&stack0x014f6a24;
        break;
      }
      uVar43 = uVar19;
      if (uVar49 + uVar26 <= uVar18) {
        uVar44 = uVar26 + 5;
        if (uVar44 < uVar49) {
          cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x1bU) * -2 + -0x5e;
joined_r0x000140010e7f:
          if (uVar49 < 8) {
            if (uVar49 == uVar19) goto LAB_140010bd3;
            if (uVar49 == uVar26 + 2) goto LAB_140010c93;
            if (uVar49 == uVar26 + 3) {
              bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xaaU) * -2 + 4;
              goto LAB_140010ed7;
            }
            if (uVar49 != uVar44) {
              if (uVar49 == uVar26 + 4) goto LAB_140010db3;
              if (1 < uVar26) goto LAB_140010d8c;
              *(char *)((longlong)&local_e8 + uVar18) = cVar58;
              goto LAB_140010be0;
            }
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x32U) * -2 + 0x2c;
          }
          else {
            bVar52 = cVar53 + bVar60 * '\x02' + (bVar60 & cVar53 + 0xa8U) * -2 + 0x10;
          }
LAB_140010eaa:
          *(byte *)((longlong)&local_e8 + uVar18) =
               bVar60 + cVar53 + (cVar53 + 0x71U & bVar60) * -2 + bVar52 + 'Z';
          goto LAB_140010ed4;
        }
        if (uVar49 == uVar19) goto LAB_140010d8c;
        if (uVar49 != uVar44) {
          if (uVar49 == uVar26 + 2) goto LAB_140010c93;
          if (uVar49 == uVar26 + 4) goto LAB_140010bd3;
          cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x37U) * -2 + 'J';
          goto joined_r0x000140010e7f;
        }
        bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x51U) * -2 + 0x1a;
LAB_140010ed7:
        uVar18 = uVar18 + ~(ulonglong)bVar52;
        goto LAB_140010be0;
      }
      if (uVar49 == uVar26 + 8) {
LAB_140010d8c:
        *(byte *)((longlong)&local_e8 + uVar18) =
             cVar53 + bVar60 + (bVar60 & cVar53 - 0x21U) * -2 + -0x3a;
      }
      else if ((uVar49 != uVar26 + 0x20) && (uVar43 = uVar26, uVar49 != uVar26 + 6)) {
        if (uVar49 == uVar19) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x14U) * -2 + 0x88;
          goto LAB_140010eaa;
        }
        if (uVar49 == uVar26 + 0x10) goto LAB_140010bd3;
        goto LAB_140010bba;
      }
LAB_140010db3:
      uVar26 = uVar43;
      uVar18 = uVar18 - 1;
    }
    else {
      if (uVar49 != uVar19) {
        if (uVar49 != uVar26 + 3) {
          if (uVar49 != uVar26 + 2) {
            if (uVar49 != uVar26 + 6) goto LAB_140010c0c;
            bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 0x35U) * -2) - 0x3e;
            goto LAB_140010eaa;
          }
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xa3U) * -2 + 0x2e;
LAB_140010ed4:
          uVar49 = uVar49 + uVar26;
          goto LAB_140010ed7;
        }
LAB_140010c93:
        bVar52 = (bVar60 + cVar53 + (cVar53 + 3U & bVar60) * -2) - 0x12;
        *(byte *)((longlong)&local_e8 + uVar18) = bVar52;
        lVar27 = (~uVar26 + uVar18) - (ulonglong)bVar52;
        *(byte *)((longlong)&local_e8 + lVar27) =
             (char)lVar27 + bVar60 + ((char)lVar27 - 0x34U & bVar60) * -2 + '8';
        lVar27 = lVar27 - uVar49;
        uVar49 = uVar49 + 1;
        uVar42 = (ulonglong)(byte)local_f8[lVar27 + 0xe];
        uVar18 = lVar27 - 2;
        uVar26 = uVar19;
      }
LAB_140010bd3:
      uVar18 = uVar18 + uVar26 + uVar42;
    }
LAB_140010be0:
    uVar18 = uVar18 + 1;
  } while (uVar18 < 0x27);
  local_3c0 = param_4;
  local_80 = ppppppplVar32;
  local_50 = param_3;
  uVar49 = FUN_140034260(ppppppplVar32);
  pppppplVar22 = param_2[7];
  if (((ulonglong)pppppplVar22 ^ 0x7fffffffffffffff) < uVar49) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  ppppppplVar32 = (longlong *******)param_2[5];
  pppppplVar30 = param_2[8];
  local_1b8 = ZEXT816(0);
  uVar26 = (longlong)pppppplVar22 + uVar49;
  local_150 = param_2;
  if (uVar26 < 0x10) {
    puVar20 = local_1b8;
    uVar18 = 0xf;
    goto LAB_14001101b;
  }
  if ((longlong)uVar26 < 0) {
    uVar18 = 0x7fffffffffffffff;
LAB_140010fff:
    lVar27 = FUN_1400329d0(uVar18 + 0x28);
    puVar20 = (undefined1 *)(lVar27 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar20 + -8) = lVar27;
  }
  else {
    uVar19 = uVar26 | 0xf;
    uVar18 = 0x16;
    if (0x16 < uVar19) {
      uVar18 = uVar19;
    }
    if (0xffe < uVar19) goto LAB_140010fff;
    puVar20 = (undefined1 *)FUN_1400329d0(uVar18 + 1);
  }
  local_1b8._0_8_ = puVar20;
LAB_14001101b:
  if (pppppplVar30 < (longlong ******)0x10) {
    ppppppplVar32 = local_578;
  }
  local_1a8 = (uint)uVar26;
  uStack_1a4 = (undefined2)(uVar26 >> 0x20);
  uStack_1a2 = (undefined2)(uVar26 >> 0x30);
  uStack_1a0 = (undefined6)uVar18;
  uStack_19a = (undefined2)(uVar18 >> 0x30);
  FUN_140034080(puVar20,local_80,uVar49);
  FUN_140034080(puVar20 + uVar49,ppppppplVar32,pppppplVar22);
  puVar20[uVar26] = 0;
  ppppppplVar32 = local_50;
  uVar49 = CONCAT26(uStack_1a2,CONCAT24(uStack_1a4,local_1a8));
  if (CONCAT26(uStack_19a,uStack_1a0) == uVar49) {
    pauVar21 = (undefined1 (*) [16])FUN_140027740(local_1b8,1);
    ppppppplVar32 = local_50;
  }
  else {
    lVar27 = uVar49 + 1;
    local_1a8 = (uint)lVar27;
    uStack_1a4 = (undefined2)((ulonglong)lVar27 >> 0x20);
    uStack_1a2 = (undefined2)((ulonglong)lVar27 >> 0x30);
    pauVar21 = &local_1b8;
    pauVar47 = pauVar21;
    if (0xf < CONCAT26(uStack_19a,uStack_1a0)) {
      pauVar47 = (undefined1 (*) [16])local_1b8._0_8_;
    }
    *(undefined2 *)(*pauVar47 + uVar49) = 10;
  }
  _local_188 = *pauVar21;
  uVar33 = *(undefined8 *)pauVar21[1];
  uVar7 = *(undefined8 *)(pauVar21[1] + 8);
  local_178 = (undefined4)uVar33;
  uStack_174 = (undefined2)((ulonglong)uVar33 >> 0x20);
  sStack_172 = (short)((ulonglong)uVar33 >> 0x30);
  uStack_170 = (undefined3)uVar7;
  uStack_16d = (undefined3)((ulonglong)uVar7 >> 0x18);
  uStack_16a = (undefined2)((ulonglong)uVar7 >> 0x30);
  *(undefined8 *)pauVar21[1] = 0;
  *(undefined8 *)(pauVar21[1] + 8) = 0xf;
  (*pauVar21)[0] = 0;
  uVar49 = local_3c0[2];
  puVar31 = local_3c0;
  if (0xf < (ulonglong)local_3c0[3]) {
    puVar31 = (undefined8 *)*local_3c0;
  }
  lVar27 = CONCAT26(sStack_172,CONCAT24(uStack_174,local_178));
  uVar26 = CONCAT26(uStack_16a,CONCAT33(uStack_16d,uStack_170));
  if (uVar26 - lVar27 < uVar49) {
    pppppplVar22 = (longlong ******)FUN_140027740(local_188,uVar49);
  }
  else {
    lVar4 = lVar27 + uVar49;
    local_178 = (undefined4)lVar4;
    uStack_174 = (undefined2)((ulonglong)lVar4 >> 0x20);
    sStack_172 = (short)((ulonglong)lVar4 >> 0x30);
    pppppplVar22 = (longlong ******)local_188;
    auVar40 = (undefined1  [8])pppppplVar22;
    if (0xf < uVar26) {
      auVar40 = local_188;
    }
    FUN_140034090((undefined1 *)(lVar27 + (longlong)auVar40),puVar31);
    *(undefined1 *)((longlong)auVar40 + lVar4) = 0;
  }
  local_308 = (undefined8 *******)*pppppplVar22;
  pppppplVar30 = (longlong ******)pppppplVar22[2];
  pppppplStack_2f0 = (longlong ******)pppppplVar22[3];
  local_2f8 = SUB84(pppppplVar30,0);
  uStack_2f4 = (undefined2)((ulonglong)pppppplVar30 >> 0x20);
  sStack_2f2 = (short)((ulonglong)pppppplVar30 >> 0x30);
  pppppplStack_300 = (longlong ******)pppppplVar22[1];
  pppppplVar22[2] = (longlong *****)0x0;
  pppppplVar22[3] = (longlong *****)0xf;
  *(undefined1 *)pppppplVar22 = 0;
  if (pppppplStack_2f0 == pppppplVar30) {
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_308,1);
  }
  else {
    lVar27 = (longlong)pppppplVar30 + 1;
    local_2f8 = (undefined4)lVar27;
    uStack_2f4 = (undefined2)((ulonglong)lVar27 >> 0x20);
    sStack_2f2 = (short)((ulonglong)lVar27 >> 0x30);
    pppppppuVar23 = &local_308;
    pppppppuVar29 = pppppppuVar23;
    if ((longlong ******)0xf < pppppplStack_2f0) {
      pppppppuVar29 = local_308;
    }
    *(undefined2 *)((longlong)pppppppuVar29 + (longlong)pppppplVar30) = 10;
  }
  local_398 = (undefined8 *******)*pppppppuVar23;
  ppppppuStack_390 = pppppppuVar23[1];
  ppppppuVar50 = pppppppuVar23[2];
  ppppppuStack_380 = pppppppuVar23[3];
  local_388 = SUB84(ppppppuVar50,0);
  uStack_384 = (undefined2)((ulonglong)ppppppuVar50 >> 0x20);
  uStack_382 = (undefined2)((ulonglong)ppppppuVar50 >> 0x30);
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  uVar49 = param_5[2];
  puVar31 = param_5;
  if (0xf < (ulonglong)param_5[3]) {
    puVar31 = (undefined8 *)*param_5;
  }
  if ((ulonglong)((longlong)ppppppuStack_380 - (longlong)ppppppuVar50) < uVar49) {
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_398,uVar49);
    puVar28 = param_5;
  }
  else {
    puVar28 = (undefined8 *)((longlong)ppppppuVar50 + uVar49);
    local_388 = SUB84(puVar28,0);
    uStack_384 = (undefined2)((ulonglong)puVar28 >> 0x20);
    uStack_382 = (undefined2)((ulonglong)puVar28 >> 0x30);
    pppppppuVar23 = &local_398;
    pppppppuVar29 = pppppppuVar23;
    if ((undefined8 ******)0xf < ppppppuStack_380) {
      pppppppuVar29 = local_398;
    }
    FUN_140034090((longlong)ppppppuVar50 + (longlong)pppppppuVar29,puVar31);
    *(undefined1 *)((longlong)pppppppuVar29 + (longlong)puVar28) = 0;
  }
  ppppppuVar50 = pppppppuVar23[2];
  local_268 = (uint)ppppppuVar50;
  uStack_264 = (undefined2)((ulonglong)ppppppuVar50 >> 0x20);
  uStack_262 = (undefined2)((ulonglong)ppppppuVar50 >> 0x30);
  uStack_260 = SUB87(pppppppuVar23[3],0);
  uStack_259 = (undefined1)((ulonglong)pppppppuVar23[3] >> 0x38);
  local_278 = (short *******)*pppppppuVar23;
  ppppppuStack_270 = pppppppuVar23[1];
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  uVar49 = CONCAT26(uStack_262,CONCAT24(uStack_264,local_268));
  if (CONCAT17(uStack_259,uStack_260) == uVar49) {
    pppppppsVar24 = (short *******)FUN_140027740(&local_278,1);
  }
  else {
    lVar27 = uVar49 + 1;
    local_268 = (uint)lVar27;
    uStack_264 = (undefined2)((ulonglong)lVar27 >> 0x20);
    uStack_262 = (undefined2)((ulonglong)lVar27 >> 0x30);
    pppppppsVar24 = (short *******)&local_278;
    pppppppsVar54 = pppppppsVar24;
    if (0xf < CONCAT17(uStack_259,uStack_260)) {
      pppppppsVar54 = local_278;
    }
    *(undefined2 *)((longlong)pppppppsVar54 + uVar49) = 10;
  }
  local_148 = (longlong *******)*pppppppsVar24;
  pppppppuStack_140 = (undefined8 *******)pppppppsVar24[1];
  ppppppsVar8 = pppppppsVar24[2];
  pppppplStack_130 = (longlong ******)pppppppsVar24[3];
  local_138 = SUB84(ppppppsVar8,0);
  uStack_134 = (undefined2)((ulonglong)ppppppsVar8 >> 0x20);
  uStack_132 = (undefined2)((ulonglong)ppppppsVar8 >> 0x30);
  pppppppsVar24[2] = (short ******)0x0;
  pppppppsVar24[3] = (short ******)0xf;
  *(undefined1 *)pppppppsVar24 = 0;
  uVar49 = param_6[2];
  puVar31 = param_6;
  if (0xf < (ulonglong)param_6[3]) {
    puVar31 = (undefined8 *)*param_6;
  }
  lVar27 = CONCAT26(uStack_132,CONCAT24(uStack_134,local_138));
  if ((ulonglong)((longlong)pppppplStack_130 - lVar27) < uVar49) {
    ppppppplVar25 = (longlong *******)FUN_140027740(&local_148,uVar49);
  }
  else {
    puVar28 = (undefined8 *)(lVar27 + uVar49);
    local_138 = SUB84(puVar28,0);
    uStack_134 = (undefined2)((ulonglong)puVar28 >> 0x20);
    uStack_132 = (undefined2)((ulonglong)puVar28 >> 0x30);
    ppppppplVar25 = (longlong *******)&local_148;
    ppppppplVar45 = ppppppplVar25;
    if ((longlong ******)0xf < pppppplStack_130) {
      ppppppplVar45 = local_148;
    }
    FUN_140034090(lVar27 + (longlong)ppppppplVar45,puVar31);
    *(undefined1 *)((longlong)ppppppplVar45 + (longlong)puVar28) = 0;
  }
  local_5d8 = *ppppppplVar25;
  pppppplStack_5d0 = ppppppplVar25[1];
  local_5c8 = ppppppplVar25[2];
  pppppplStack_5c0 = ppppppplVar25[3];
  ppppppplVar25[2] = (longlong ******)0x0;
  ppppppplVar25[3] = (longlong ******)0xf;
  *(undefined1 *)ppppppplVar25 = 0;
  if ((longlong ******)0xf < pppppplStack_130) {
    pppppplVar22 = (longlong ******)((longlong)pppppplStack_130 + 1);
    ppppppplVar25 = local_148;
    if ((longlong ******)0xfff < pppppplVar22) {
      ppppppplVar25 = (longlong *******)local_148[-1];
      if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)ppppppplVar25)))
      goto LAB_14001b5c6;
      pppppplVar22 = pppppplStack_130 + 5;
    }
    thunk_FUN_1400340c0(ppppppplVar25,pppppplVar22);
  }
  local_138 = 0;
  uStack_134 = 0;
  uStack_132 = 0;
  pppppplStack_130 = (longlong ******)0xf;
  local_148 = (longlong *******)((ulonglong)local_148 & 0xffffffffffffff00);
  uVar49 = CONCAT17(uStack_259,uStack_260);
  if (0xf < uVar49) {
    uVar26 = uVar49 + 1;
    pppppppsVar24 = local_278;
    if (0xfff < uVar26) {
      pppppppsVar24 = (short *******)local_278[-1];
      if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)pppppppsVar24)))
      goto LAB_14001b5c6;
      uVar26 = uVar49 + 0x28;
    }
    thunk_FUN_1400340c0(pppppppsVar24,uVar26);
  }
  local_268 = 0;
  uStack_264 = 0;
  uStack_262 = 0;
  uStack_260 = 0xf;
  uStack_259 = 0;
  local_278 = (short *******)((ulonglong)local_278 & 0xffffffffffffff00);
  if ((undefined8 ******)0xf < ppppppuStack_380) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_380 + 1);
    pppppppuVar23 = local_398;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pppppppuVar23 = (undefined8 *******)local_398[-1];
      if (0x1f < (ulonglong)((longlong)local_398 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_380 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppppuVar50);
  }
  local_388 = 0;
  uStack_384 = 0;
  uStack_382 = 0;
  ppppppuStack_380 = (undefined8 ******)0xf;
  local_398 = (undefined8 *******)((ulonglong)local_398 & 0xffffffffffffff00);
  if ((longlong ******)0xf < pppppplStack_2f0) {
    pppppplVar22 = (longlong ******)((longlong)pppppplStack_2f0 + 1);
    pppppppuVar23 = local_308;
    if ((longlong ******)0xfff < pppppplVar22) {
      pppppppuVar23 = (undefined8 *******)local_308[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_308 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      pppppplVar22 = pppppplStack_2f0 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,pppppplVar22);
  }
  local_2f8 = 0;
  uStack_2f4 = 0;
  sStack_2f2 = 0;
  pppppplStack_2f0 = (longlong ******)0xf;
  local_308 = (undefined8 *******)((ulonglong)local_308 & 0xffffffffffffff00);
  uVar49 = CONCAT26(uStack_16a,CONCAT33(uStack_16d,uStack_170));
  if (0xf < uVar49) {
    uVar26 = uVar49 + 1;
    auVar40 = local_188;
    if (0xfff < uVar26) {
      auVar40 = *(undefined1 (*) [8])((longlong)local_188 + -8);
      if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)auVar40))) goto LAB_14001b5c6;
      uVar26 = uVar49 + 0x28;
    }
    thunk_FUN_1400340c0(auVar40,uVar26);
  }
  local_178 = 0;
  uStack_174 = 0;
  sStack_172 = 0;
  uStack_170 = 0xf;
  uStack_16d = 0;
  uStack_16a = 0;
  auVar85[0xf] = 0;
  auVar85._0_15_ = stack0xfffffffffffffe79;
  _local_188 = auVar85 << 8;
  uVar49 = CONCAT26(uStack_19a,uStack_1a0);
  if (0xf < uVar49) {
    uVar26 = uVar49 + 1;
    lVar27 = local_1b8._0_8_;
    if (0xfff < uVar26) {
      lVar27 = *(longlong *)(local_1b8._0_8_ + -8);
      if (0x1f < (ulonglong)((local_1b8._0_8_ + -8) - lVar27)) goto LAB_14001b5c6;
      uVar26 = uVar49 + 0x28;
    }
    thunk_FUN_1400340c0(lVar27,uVar26);
  }
  FUN_140029370(&local_598,ppppppplVar32,&local_5d8);
  local_420 = local_5b8;
  FUN_140028b50(local_420,local_598,local_590 - (int)local_598);
  local_e8 = _DAT_140035480;
  lStack_e0 = _UNK_140035488;
  local_d8 = 0x9da47750;
  uStack_d4 = 0xa6;
  uStack_d3 = 0xd9;
  uStack_d2 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  uStack_cd = 0;
  uStack_cc = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bd = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  local_408 = ppppppplVar32 + 4;
  local_570 = (longlong ******)&local_e8;
LAB_1400116a9:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar18 = 0;
  uVar26 = *puVar17;
LAB_140011709:
  if (uVar18 < uVar49) {
    local_570 = (longlong ******)&stack0x007538d2;
    goto LAB_140011cbe;
  }
  bVar60 = *(byte *)((longlong)&local_e8 + uVar18);
  uVar19 = uVar26 + 1;
  cVar53 = (char)uVar18;
  if (uVar19 <= uVar49) {
    if (uVar49 == uVar19) {
      puVar28 = (undefined8 *)
                (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0xa6U) * -2 + 0x1c);
      uVar19 = uVar26;
      goto LAB_1400116f3;
    }
    if (uVar49 == uVar26 + 3) {
      puVar28 = (undefined8 *)
                (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x2eU) * -2) - 0x14);
      goto LAB_140011a5b;
    }
    if (uVar49 == uVar26 + 2) {
      puVar28 = (undefined8 *)
                (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0xeU) * -2 + 0x54);
    }
    else {
      if (uVar49 != uVar26 + 5) {
        if (uVar49 != uVar26 + 4) goto LAB_14001174a;
        puVar28 = (undefined8 *)
                  (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x3eU) * -2 + 0x8c);
        uVar18 = uVar18 - 1;
        uVar19 = uVar26;
        goto LAB_1400116fc;
      }
      puVar28 = (undefined8 *)
                (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x7aU) * -2 + 0x24);
LAB_140011b74:
      *(byte *)((longlong)&local_e8 + uVar18) =
           cVar53 + bVar60 + (bVar60 & cVar53 + 0xb2U) * -2 + (char)puVar28 + -0x2c;
LAB_140011b9d:
      uVar49 = uVar26 + uVar49;
    }
LAB_140011ba0:
    uVar18 = uVar18 + ~(ulonglong)puVar28;
    uVar19 = uVar26;
    goto LAB_1400116fc;
  }
  puVar28 = (undefined8 *)(ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0x1eU) * -2 + 0xb4)
  ;
LAB_14001174a:
  if (uVar18 < uVar26) {
    local_570 = (longlong ******)&stack0x0156f2f0;
    goto LAB_140011cbe;
  }
  uVar42 = uVar26 + 2;
  if (uVar42 <= uVar49) {
    if (uVar49 == uVar19) {
      puVar28 = (undefined8 *)
                (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x4eU) * -2 + 0x2c);
      goto LAB_140011828;
    }
    if (uVar49 != uVar26 + 3) {
      if (uVar49 == uVar26 + 5) {
        puVar28 = (undefined8 *)
                  (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x22U) * -2 + 0x34);
        goto LAB_140011ba0;
      }
      if (uVar49 == uVar42) {
        puVar28 = (undefined8 *)
                  (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x6eU) * -2 + 0x6c);
        uVar19 = uVar26;
        goto LAB_1400116f3;
      }
      goto LAB_140011780;
    }
    puVar28 = (undefined8 *)
              (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 - 0x2aU) * -2) - 4);
    uVar18 = uVar18 - 1;
    uVar19 = uVar26;
LAB_1400116fc:
    uVar18 = uVar18 + 1;
    uVar26 = uVar19;
    if (0x2e < uVar18) {
LAB_140011cbe:
      ppppppplVar32 = local_50;
      local_148 = _DAT_140035490;
      pppppppuStack_140 = _UNK_140035498;
      local_138 = 0xddc411ef;
      uStack_134 = 0x99c6;
      uStack_132 = 0;
      pppppplStack_130 = (longlong ******)0x0;
      uStack_128 = 0;
      local_122 = 0;
      uStack_120 = 0;
      local_158 = (longlong *******)&local_148;
      goto LAB_140011d10;
    }
    goto LAB_140011709;
  }
  puVar28 = (undefined8 *)
            (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x8aU) * -2) - 0x3c);
LAB_140011780:
  if (uVar26 + uVar49 <= uVar18) {
    uVar43 = uVar26 + 3;
    if (uVar49 < uVar43) {
      puVar28 = (undefined8 *)
                (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0x1eU) * -2 + 0xb4);
    }
    else {
      if (uVar49 == uVar19) {
        puVar28 = (undefined8 *)
                  (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x14U) * -2 + 0x88);
        uVar19 = uVar26;
        goto LAB_1400116f3;
      }
      if (uVar49 == uVar43) {
        puVar28 = (undefined8 *)
                  (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x9cU) * -2 + 0x58);
        goto LAB_140011a5b;
      }
      if (uVar49 == uVar26 + 5) {
        puVar28 = (undefined8 *)
                  (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 - 0x18U & bVar60) * -2 + 0x90);
        goto LAB_140011b74;
      }
      if (uVar49 == uVar26 + 4) {
        puVar28 = (undefined8 *)
                  (ulonglong)(byte)((cVar53 + bVar60 + (cVar53 + 0xacU & bVar60) * -2) - 8);
        uVar18 = uVar18 - 1;
        uVar19 = uVar26;
        goto LAB_1400116fc;
      }
    }
    if (uVar26 + uVar49 == 2) {
      puVar28 = (undefined8 *)(ulonglong)(byte)(cVar53 + (cVar53 + 0x94U & bVar60) * -2 + 0x88);
LAB_140011a5b:
      bVar52 = cVar53 + bVar60 + (cVar53 + 0x76U & bVar60) * -2 + 0x3c;
      *(byte *)((longlong)&local_e8 + uVar18) = bVar52;
      lVar27 = (~uVar26 + uVar18) - (ulonglong)bVar52;
      *(byte *)((longlong)&local_e8 + lVar27) =
           (char)lVar27 + bVar60 + ((char)lVar27 + 0x58U & bVar60) * -2 + -0x10;
      lVar27 = lVar27 - uVar49;
      uVar49 = uVar49 + 1;
      bVar60 = local_f8[lVar27 + 0xe];
      uVar18 = lVar27 - 2;
      goto LAB_1400116f3;
    }
    if (uVar26 + 4 < uVar49) {
LAB_1400119db:
      puVar28 = (undefined8 *)
                (ulonglong)(byte)(cVar53 + bVar60 * '\x02' + (cVar53 - 0x30U & bVar60) * -2 + 0x20);
      goto LAB_140011b74;
    }
    if (uVar49 == uVar19) {
      puVar28 = (undefined8 *)
                (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 + 0x9eU & bVar60) * -2 + 0x4c);
LAB_140011828:
      *(byte *)((longlong)&local_e8 + uVar18) =
           cVar53 + bVar60 + (bVar60 & cVar53 - 0x12U) * -2 + 'l';
    }
    else {
      if (uVar49 != uVar42) {
        if (uVar49 == uVar43) {
          puVar28 = (undefined8 *)
                    (ulonglong)(byte)((cVar53 + bVar60 + (cVar53 + 0xaeU & bVar60) * -2) - 0x14);
          goto LAB_140011b9d;
        }
        if (uVar49 == uVar26 + 4) {
          puVar28 = (undefined8 *)
                    (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 + 0x36U & bVar60) * -2 + 0xbc);
          goto LAB_140011a5b;
        }
        if (4 < uVar49) goto LAB_1400119db;
        if (uVar26 < 9) {
          *(char *)((longlong)&local_e8 + uVar18) = (char)puVar28;
          uVar19 = uVar26;
          goto LAB_1400116fc;
        }
        puVar28 = (undefined8 *)
                  (ulonglong)
                  (byte)((cVar53 + bVar60 + '\f' + (cVar53 + 0xcU & bVar60) * -2) * '\x02' + 0x58);
        goto LAB_140011828;
      }
      puVar28 = (undefined8 *)
                (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 + 0x62U & bVar60) * -2 + 0xb4);
    }
    uVar18 = uVar18 - 1;
    goto LAB_1400116fc;
  }
  if (uVar49 == uVar26 + 10) {
    puVar28 = (undefined8 *)
              (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 + 0xa4U & bVar60) * -2 + 0x28);
    uVar18 = uVar18 - 1;
    uVar19 = uVar26;
    goto LAB_1400116fc;
  }
  if (uVar49 == uVar26 + 5) {
    puVar28 = (undefined8 *)
              (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 - 0x10U & bVar60) * -2 + 0x60);
    goto LAB_140011ba0;
  }
  if (uVar49 == uVar19) {
    puVar28 = (undefined8 *)
              (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x3cU) * -2 + 0x98);
    uVar19 = uVar26;
LAB_1400116f3:
    uVar18 = uVar18 + uVar19 + (ulonglong)bVar60;
    goto LAB_1400116fc;
  }
  puVar28 = (undefined8 *)(ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0xa6U) * -2 + 0x1c)
  ;
  goto LAB_1400116a9;
LAB_140011d10:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
LAB_140011db6:
  if (uVar18 < uVar49) {
    local_158 = (longlong *******)&stack0x014b2942;
    goto LAB_140011fff;
  }
  bVar60 = *(byte *)((longlong)&local_148 + uVar18);
  uVar19 = uVar26 + 1;
  cVar53 = (char)uVar18;
  if (uVar49 < uVar19) {
LAB_140011dd5:
    if (uVar18 < uVar26) {
      local_158 = (longlong *******)&stack0x0150a550;
      goto LAB_140011fff;
    }
    if (uVar26 + uVar49 <= uVar18) {
      if (uVar26 + 5 < uVar49) {
LAB_140011e99:
        bVar52 = cVar53 + bVar60 * '\x02' + (bVar60 & cVar53 + 0x50U) * -2 + 0x20;
        goto LAB_140011ebc;
      }
      if (uVar49 != uVar19) {
        uVar42 = uVar19;
        if ((uVar49 == uVar26 + 2) || (uVar42 = uVar26, uVar49 == uVar26 + 3)) goto LAB_140011f47;
        if (3 < uVar49) goto LAB_140011e99;
        if (5 < uVar26) goto LAB_140011f20;
        *(byte *)((longlong)&local_148 + uVar18) =
             cVar53 + bVar60 + (bVar60 & cVar53 - 0xeU) * -2 + 'T';
        goto LAB_140011da9;
      }
LAB_140011f20:
      *(byte *)((longlong)&local_148 + uVar18) =
           cVar53 + bVar60 + (bVar60 & cVar53 + 0x5eU) * -2 + -0x34;
      uVar42 = uVar19;
LAB_140011f47:
      uVar26 = uVar42;
      uVar18 = uVar18 - 1;
      goto LAB_140011da9;
    }
    if (uVar49 == uVar26 + 2) goto LAB_140011f20;
    uVar42 = uVar49;
    if (uVar49 == uVar19) goto LAB_140011f47;
    if (uVar49 == uVar26 + 8) {
      bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x8cU) * -2 + 0xb8;
      uVar49 = uVar26 + uVar49;
      goto LAB_140011ee5;
    }
    if (uVar49 != uVar26 + 6) {
      if (uVar49 == uVar26 + 5) goto LAB_140011d29;
      uVar19 = uVar26;
      if (uVar49 == uVar26 + 4) goto LAB_140011d66;
      if (uVar49 == uVar26 + 3) goto LAB_140011d9f;
      goto LAB_140011d10;
    }
    bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x70U) * -2 + 0x60;
  }
  else {
    if (uVar49 == uVar19) {
LAB_140011d9f:
      uVar18 = uVar18 + uVar26 + (ulonglong)bVar60;
LAB_140011da9:
      uVar18 = uVar18 + 1;
      if (0x29 < uVar18) {
LAB_140011fff:
        local_208._0_4_ = (undefined4)_DAT_1400354a0;
        local_208._4_2_ = (undefined2)((ulonglong)_DAT_1400354a0 >> 0x20);
        local_208._6_2_ = (undefined2)((ulonglong)_DAT_1400354a0 >> 0x30);
        uStack_200 = _UNK_1400354a8;
        local_1f8 = 0xe1c8fc20;
        local_1f4 = 0xa5c6;
        local_1f2 = 0;
        local_1ea = 0;
        local_410 = ppppppplVar32 + 8;
        local_1e0 = (longlong *******)&local_208;
        goto LAB_14001206d;
      }
      goto LAB_140011db6;
    }
    if (uVar49 == uVar26 + 3) {
LAB_140011d29:
      bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x26U) * -2 + 0x1c;
      *(byte *)((longlong)&local_148 + uVar18) = bVar52;
      uVar18 = (~uVar26 + uVar18) - (ulonglong)bVar52;
LAB_140011d66:
      *(byte *)((longlong)&local_148 + uVar18) =
           (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 + 0x18U) * -2 + 'p';
      lVar27 = uVar18 - uVar49;
      uVar49 = uVar49 + 1;
      bVar60 = *(byte *)((longlong)&local_150 + lVar27 + 6);
      uVar18 = lVar27 - 2;
      uVar26 = uVar19;
      goto LAB_140011d9f;
    }
    if (uVar49 != uVar26 + 5) {
      if (uVar49 != uVar26 + 9) goto LAB_140011dd5;
      goto LAB_140011f20;
    }
    bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x4aU) * -2 + 0x44;
LAB_140011ebc:
    uVar49 = uVar26 + uVar49;
    *(byte *)((longlong)&local_148 + uVar18) =
         cVar53 + bVar60 + (bVar60 & cVar53 + 0x42U) * -2 + bVar52 + 't';
  }
LAB_140011ee5:
  uVar18 = uVar18 + ~(ulonglong)bVar52;
  goto LAB_140011da9;
LAB_14001206d:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      local_1e0 = (longlong *******)&stack0x011d955c;
      goto LAB_14001233f;
    }
    bVar60 = *(byte *)((longlong)&local_208 + uVar18);
    uVar42 = (ulonglong)bVar60;
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    if (uVar19 <= uVar49) {
      if (uVar49 != uVar19) {
        if (uVar49 == uVar26 + 3) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 4U) * -2 + 0x18;
          goto LAB_140012231;
        }
        if (uVar49 == uVar26 + 4) {
          cVar58 = -0x3c;
          cVar57 = -0x1c;
          goto LAB_1400121f4;
        }
        if (uVar49 != uVar26 + 6) {
          if (uVar49 != uVar26 + 9) goto LAB_1400120fb;
          goto LAB_1400121a5;
        }
        goto LAB_1400121c9;
      }
LAB_1400120c5:
      uVar18 = uVar18 + uVar26;
LAB_1400120cc:
      uVar18 = uVar18 + uVar42;
      goto LAB_1400120cf;
    }
LAB_1400120fb:
    if (uVar18 < uVar26) {
      local_1e0 = (longlong *******)&stack0x016707e8;
      goto LAB_14001233f;
    }
    if (uVar18 < uVar26 + uVar49) {
      if ((uVar49 != uVar26 + 3) && (uVar19 = uVar26, uVar49 != uVar26 + 5)) {
        if (uVar49 == uVar26 + 2) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x78U) * -2 + 0x30;
LAB_140012231:
          uVar49 = uVar49 + uVar26;
          uVar42 = ~(ulonglong)bVar52;
          goto LAB_1400120cc;
        }
        if (uVar49 == uVar26 + 0x10) {
LAB_14001208c:
          *(byte *)((longlong)&local_208 + uVar18) =
               (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 - 0x10U) * -2 + '`';
          lVar27 = uVar18 - uVar49;
          uVar49 = uVar49 + 1;
          uVar42 = (ulonglong)*(byte *)((longlong)&uStack_210 + lVar27 + 6);
          uVar18 = lVar27 - 2;
          uVar26 = uVar19;
          goto LAB_1400120c5;
        }
        goto LAB_14001206d;
      }
    }
    else {
      if (uVar49 != uVar19) {
        cVar58 = '$';
        cVar57 = 'D';
        if (uVar49 == uVar26 + 3) {
LAB_1400121f4:
          bVar52 = cVar57 + cVar53 + bVar60 + (cVar57 + cVar53 & bVar60) * -2 + cVar58;
          *(byte *)((longlong)&local_208 + uVar18) =
               cVar53 + bVar60 + (cVar53 + 0x94U & bVar60) * -2 + bVar52 + -0x78;
          goto LAB_140012231;
        }
        if (uVar49 == uVar26 + 4) {
          bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 0x2cU) * -2) - 8;
          goto LAB_140012231;
        }
        if (uVar49 == uVar26 + 2) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x7cU) * -2 + 0x18;
          *(byte *)((longlong)&local_208 + uVar18) = bVar52;
          uVar18 = (uVar18 + ~uVar26) - (ulonglong)bVar52;
          goto LAB_14001208c;
        }
        if (uVar49 == uVar26 + 8) goto LAB_1400120c5;
        cVar58 = -0x28;
        cVar57 = -0x68;
        if (uVar49 == uVar26 + 5) goto LAB_1400121f4;
        uVar19 = uVar26;
        if (uVar49 == uVar26 + 7) goto LAB_1400121c9;
        *(byte *)((longlong)&local_208 + uVar18) =
             cVar53 + bVar60 + (bVar60 & cVar53 + 0x74U) * -2 + 'H';
        goto LAB_1400120cf;
      }
LAB_1400121a5:
      *(byte *)((longlong)&local_208 + uVar18) =
           cVar53 + bVar60 + (bVar60 & cVar53 + 0xacU) * -2 + -8;
    }
LAB_1400121c9:
    uVar26 = uVar19;
    uVar18 = uVar18 - 1;
LAB_1400120cf:
    uVar18 = uVar18 + 1;
    if (0x1f < uVar18) {
LAB_14001233f:
      local_278 = _DAT_1400354b0;
      ppppppuStack_270 = _UNK_1400354b8;
      local_268 = 0x3dc41b13;
      uStack_264 = 0xe1c6;
      uStack_262 = 0;
      uStack_260 = 0;
      uStack_259 = 0;
      uStack_258 = 0;
      Stack_252 = SUB169((undefined1  [16])0x0,7);
      local_3c8 = (short *******)&local_278;
      break;
    }
  } while( true );
LAB_140012384:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  while( true ) {
    if (uVar18 < uVar49) {
      local_3c8 = (short *******)&stack0x00de48ce;
      goto LAB_140012702;
    }
    bVar60 = *(byte *)((longlong)&local_278 + uVar18);
    uVar42 = (ulonglong)bVar60;
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    if (uVar49 < uVar19) break;
    if (uVar49 != uVar19) {
      if (uVar49 == uVar26 + 2) goto LAB_1400124da;
      if (uVar49 != uVar26 + 4) {
        uVar43 = uVar26;
        if ((uVar49 != uVar26 + 6) && (uVar43 = uVar19, uVar49 != uVar26 + 3)) break;
        goto LAB_140012570;
      }
      bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xeU) * -2 + 0xac;
      uVar44 = uVar49;
      goto LAB_140012458;
    }
LAB_140012548:
    uVar18 = uVar18 + uVar26 + uVar42;
joined_r0x000140012469:
    uVar18 = uVar18 + 1;
    if (0x2e < uVar18) {
LAB_140012702:
      local_398 = _DAT_1400354c0;
      ppppppuStack_390 = _UNK_1400354c8;
      local_388 = 0x5126353;
      uStack_384 = 0x391c;
      uStack_382 = 0;
      ppppppuStack_380 = (undefined8 ******)0x0;
      uStack_378 = 0;
      goto LAB_140012759;
    }
  }
  if (uVar18 < uVar26) {
    local_3c8 = (short *******)&stack0x017b55b0;
    goto LAB_140012702;
  }
  if (uVar49 == uVar19 && uVar26 + 8 <= uVar49) {
LAB_1400123e2:
    *(byte *)((longlong)&local_278 + uVar18) =
         cVar53 + bVar60 + (bVar60 & cVar53 + 0x12U) * -2 + -0x6c;
    uVar43 = uVar19;
LAB_140012570:
    uVar18 = uVar18 - 1;
    uVar26 = uVar43;
    goto joined_r0x000140012469;
  }
  uVar44 = uVar26 + uVar49;
  if (uVar44 <= uVar18) {
    if (uVar44 == 3) {
LAB_1400124da:
      bVar52 = (cVar53 + bVar60 + (cVar53 + 0x8aU & bVar60) * -2) - 0x3c;
      *(byte *)((longlong)&local_278 + uVar18) = bVar52;
      lVar27 = (~uVar26 + uVar18) - (ulonglong)bVar52;
      *(byte *)((longlong)&local_278 + lVar27) =
           (char)lVar27 + bVar60 + ((char)lVar27 + 0xa8U & bVar60) * -2 + '\x10';
      lVar27 = lVar27 - uVar49;
      uVar49 = uVar49 + 1;
      uVar42 = (ulonglong)*(byte *)((longlong)&uStack_280 + lVar27 + 6);
      uVar18 = lVar27 - 2;
      uVar26 = uVar19;
      goto LAB_140012548;
    }
    uVar1 = uVar26 + 3;
    if (uVar49 <= uVar1) {
      if (uVar49 == uVar19) goto LAB_1400123e2;
      uVar43 = uVar19;
      if ((uVar49 == uVar26 + 2) || (uVar43 = uVar26, uVar49 == uVar1)) goto LAB_140012570;
      cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x1eU) * -2 + 'L';
      if (uVar49 != uVar26 + 2) goto LAB_1400125c5;
      goto LAB_1400124da;
    }
    if (uVar49 == uVar19) goto LAB_140012548;
    cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x26U) * -2 + '\x1c';
    if (uVar49 == uVar26 + 2) goto LAB_1400124da;
LAB_1400125c5:
    if (uVar49 == uVar26 + 5) {
      bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x38U) * -2 + 0x50;
LAB_140012458:
      uVar18 = uVar18 + ~(ulonglong)bVar52;
      uVar49 = uVar44;
    }
    else {
      if (uVar49 == uVar1) {
        bVar52 = (cVar53 + bVar60 + (cVar53 + 4U & bVar60) * -2) - 0x18;
        *(byte *)((longlong)&local_278 + uVar18) =
             cVar53 + bVar60 + (cVar53 + 0x4eU & bVar60) * -2 + bVar52 + ',';
        goto LAB_140012458;
      }
      uVar43 = uVar26;
      if (uVar49 == uVar26 + 7) goto LAB_140012570;
      if (8 < uVar26) goto LAB_1400123e2;
      *(char *)((longlong)&local_278 + uVar18) = cVar58;
    }
    goto joined_r0x000140012469;
  }
  uVar43 = uVar19;
  if ((uVar49 == uVar26 + 3) || (uVar43 = uVar26, uVar49 == uVar26 + 0x28)) goto LAB_140012570;
  if (uVar49 == uVar26 + 5) {
    bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x10U) * -2 + 0xa0;
    uVar44 = uVar49;
    goto LAB_140012458;
  }
  if (uVar49 == uVar26 + 8) goto LAB_140012548;
  goto LAB_140012384;
LAB_140012759:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      local_400 = (undefined8 *******)&stack0x013e7fe9;
      goto LAB_140012a72;
    }
    bVar60 = *(byte *)((longlong)&local_398 + uVar18);
    uVar43 = (ulonglong)bVar60;
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    uVar42 = uVar49;
    if (uVar19 <= uVar49) {
      if (uVar49 == uVar19) {
LAB_1400128b1:
        uVar18 = uVar18 + uVar26 + uVar43;
      }
      else {
        if (uVar49 == uVar26 + 2) goto LAB_140012842;
        if (uVar49 == uVar26 + 3) {
          iVar59 = -0x66;
          iVar56 = -0x68a3f633;
          goto LAB_1400128d7;
        }
        uVar44 = uVar19;
        if (uVar49 != uVar26 + 4) goto LAB_14001278f;
LAB_140012970:
        uVar18 = uVar18 - 1;
        uVar26 = uVar44;
      }
      goto joined_r0x00014001294a;
    }
LAB_14001278f:
    if (uVar18 < uVar26) {
      local_400 = (undefined8 *******)&stack0x01499b44;
      goto LAB_140012a72;
    }
    uVar1 = uVar26 + 9;
    if (uVar49 == uVar19 && uVar1 <= uVar49) {
LAB_1400127af:
      *(byte *)((longlong)&local_398 + uVar18) =
           cVar53 + bVar60 + (bVar60 & cVar53 + 99U) * -2 + -0x52;
      uVar44 = uVar19;
      goto LAB_140012970;
    }
    uVar2 = uVar26 + uVar49;
    uVar44 = uVar26;
    if (uVar18 < uVar2) {
      if (uVar49 == uVar26 + 5) goto LAB_140012970;
      if (uVar49 != uVar26 + 0x10) {
        if (uVar49 == uVar26 + 6) goto LAB_140012842;
        if (uVar49 == uVar26 + 0x20) goto LAB_1400128b1;
        goto LAB_140012759;
      }
      iVar59 = -0x9f;
      uVar42 = uVar2;
      iVar56 = -0x69e9bf2;
LAB_1400128d7:
      uVar41 = iVar56 + (int)uVar18;
      uVar18 = uVar18 + ((ulonglong)((iVar59 + (uVar41 & bVar60) * 2) - (uVar41 + bVar60)) |
                        0xffffffffffffff00);
      uVar49 = uVar42;
    }
    else {
      if (uVar2 == 0x20) {
LAB_140012842:
        bVar52 = cVar53 + bVar60 + (cVar53 - 9U & bVar60) * -2 + 0x36;
        *(byte *)((longlong)&local_398 + uVar18) = bVar52;
        lVar27 = (~uVar26 + uVar18) - (ulonglong)bVar52;
        *(byte *)((longlong)&local_398 + lVar27) =
             (char)lVar27 + bVar60 + ((char)lVar27 + 0x9cU & bVar60) * -2 + 'X';
        lVar27 = lVar27 - uVar49;
        uVar49 = uVar49 + 1;
        uVar43 = (ulonglong)*(byte *)((longlong)&uStack_3a0 + lVar27 + 6);
        uVar18 = lVar27 - 2;
        uVar26 = uVar19;
        goto LAB_1400128b1;
      }
      if (uVar26 + 6 < uVar49) {
        if (uVar49 <= uVar1) {
          if (uVar49 == uVar19) goto LAB_1400128b1;
          cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x51U) * -2 + '\x1a';
          goto LAB_140012a03;
        }
LAB_14001291d:
        cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x26U) * -2 + -0x1c;
      }
      else {
        if (uVar49 == uVar19) goto LAB_1400127af;
        if (uVar49 == uVar26 + 3) goto LAB_140012970;
        iVar59 = -0xa6;
        iVar56 = 0x495330d;
        if (uVar49 == uVar26 + 5) goto LAB_1400128d7;
        if (uVar1 < uVar49) goto LAB_14001291d;
        cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xa5U) * -2 + '\"';
LAB_140012a03:
        iVar59 = -0xed;
        uVar42 = uVar2;
        iVar56 = 0x7d022b4c;
        if (uVar49 == uVar26 + 5) goto LAB_1400128d7;
        if (uVar49 == uVar26 + 2) goto LAB_1400127af;
      }
      *(char *)((longlong)&local_398 + uVar18) = cVar58;
    }
joined_r0x00014001294a:
    uVar18 = uVar18 + 1;
    if (0x25 < uVar18) {
      local_400 = &local_398;
LAB_140012a72:
      local_308 = _DAT_1400354d0;
      pppppplStack_300 = _UNK_1400354d8;
      local_2f8 = 0xf1ea2113;
      uStack_2f4 = 0xcde8;
      sStack_2f2 = 0;
      pppppplStack_2f0 = (longlong ******)0x0;
      uStack_2e8 = 0;
      local_2e3 = 0;
      local_3d0 = &local_308;
      break;
    }
  } while( true );
LAB_140012ac0:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  local_418 = local_150;
LAB_140012b31:
  if (uVar18 < uVar49) {
    local_3d0 = (undefined8 *******)&stack0x00d233e3;
    goto LAB_140012e21;
  }
  bVar60 = *(byte *)((longlong)&local_308 + uVar18);
  uVar42 = (ulonglong)bVar60;
  uVar19 = uVar26 + 1;
  cVar53 = (char)uVar18;
  if (uVar19 <= uVar49) {
    if (uVar49 == uVar19) {
LAB_140012b1a:
      uVar18 = uVar18 + uVar26 + uVar42;
    }
    else {
      if (uVar49 == uVar26 + 2) goto LAB_140012ae0;
      if (uVar49 != uVar26 + 5) {
        if (uVar49 == uVar26 + 7) goto LAB_140012d65;
        if (uVar49 != uVar26 + 3) goto LAB_140012b50;
        goto LAB_140012b73;
      }
      bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x8bU) * -2 + 0xbe;
LAB_140012d1e:
      *(byte *)((longlong)&local_308 + uVar18) =
           cVar53 + bVar60 + (bVar60 & cVar53 + 0x4fU) * -2 + bVar52 + '&';
LAB_140012d47:
      uVar49 = uVar26 + uVar49;
      uVar18 = uVar18 + ~(ulonglong)bVar52;
    }
    goto LAB_140012b24;
  }
LAB_140012b50:
  if (uVar18 < uVar26) {
    local_3d0 = (undefined8 *******)&stack0x015862ec;
    goto LAB_140012e21;
  }
  if (uVar18 < uVar26 + uVar49) {
    if (uVar49 == uVar26 + 2) {
LAB_140012b73:
      *(byte *)((longlong)&local_308 + uVar18) =
           cVar53 + bVar60 + (bVar60 & cVar53 + 0x61U) * -2 + -0x46;
      uVar26 = uVar19;
LAB_140012d65:
      uVar18 = uVar18 - 1;
LAB_140012b24:
      uVar18 = uVar18 + 1;
      if (0x28 < uVar18) {
LAB_140012e21:
        uStack_180 = _UNK_1400354e8;
        local_188 = (undefined1  [8])_DAT_1400354e0;
        local_178 = 0xc5fad4d3;
        uStack_174 = 0x1fc;
        sStack_172 = 0;
        uStack_170 = 0;
        uStack_16d = 0;
        uStack_16a = 0;
        uStack_168 = 0;
        local_418 = local_418 + 9;
        local_80 = (longlong *******)local_188;
        goto LAB_140012e73;
      }
      goto LAB_140012b31;
    }
    if (uVar49 == uVar26 + 9) goto LAB_140012d65;
    if (uVar49 != uVar26 + 6) {
      if (uVar49 == uVar26 + 0x28) {
        do {
          local_418 = local_150;
          if (uVar26 + 2 == 0x28) {
            uVar49 = 0x28;
            goto LAB_140012b73;
          }
          if (uVar26 + 9 == 0x28) {
            uVar26 = 0x1f;
            uVar49 = 0x28;
            goto LAB_140012d65;
          }
        } while (uVar26 + 6 != 0x28);
        uVar49 = 0x28;
        uVar26 = 0x22;
        goto LAB_140012ae0;
      }
      goto LAB_140012ac0;
    }
  }
  else {
    if (uVar49 < uVar26 + 10) {
      cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 - 9U) * -2 + '6';
    }
    else {
      if (uVar49 == uVar19) goto LAB_140012b1a;
      cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x43U) * -2 + 'n';
    }
    if (uVar26 + uVar49 == 0x28) {
      bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x3dU) * -2 + 0x92;
      *(byte *)((longlong)&local_308 + uVar18) = bVar52;
      uVar18 = (~uVar26 + uVar18) - (ulonglong)bVar52;
      uVar26 = uVar19;
    }
    else {
      if (uVar26 + 5 < uVar49) {
LAB_140012cfb:
        bVar52 = (cVar53 + bVar60 * '\x02' + (bVar60 & cVar53 + 0x58U) * -2) - 0x10;
        goto LAB_140012d1e;
      }
      if (uVar49 == uVar19) goto LAB_140012b73;
      if (uVar49 == uVar26 + 4) {
        bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 0x81U) * -2) - 6;
        goto LAB_140012d47;
      }
      if (uVar49 != uVar26 + 5) {
        if (uVar49 == uVar26 + 2) goto LAB_140012b1a;
        if (uVar49 != 0) goto LAB_140012cfb;
        *(char *)((longlong)&local_308 + uVar18) = cVar58;
        uVar49 = 0;
        goto LAB_140012b24;
      }
    }
  }
LAB_140012ae0:
  *(byte *)((longlong)&local_308 + uVar18) =
       (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 + 0x34U) * -2 + -0x38;
  lVar27 = uVar18 - uVar49;
  uVar49 = uVar49 + 1;
  uVar42 = (ulonglong)*(byte *)((longlong)&uStack_310 + lVar27 + 6);
  uVar18 = lVar27 - 2;
  goto LAB_140012b1a;
LAB_140012e73:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      local_80 = (longlong *******)&stack0x01664b1d;
      goto LAB_1400131cd;
    }
    bVar60 = local_188[uVar18];
    uVar42 = (ulonglong)bVar60;
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    if (uVar19 <= uVar49) {
      if (uVar49 == uVar19) goto LAB_140012ea0;
      if (uVar49 == uVar26 + 2) goto LAB_140012fcc;
      if (uVar49 == uVar26 + 5) {
        bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x53U) * -2 + 0xe;
        uVar49 = uVar49 + uVar26;
        goto LAB_140012fb4;
      }
      uVar43 = uVar26;
      if (uVar49 != uVar26 + 3) goto LAB_140012ed6;
LAB_140012f1e:
      uVar26 = uVar43;
      uVar18 = uVar18 - 1;
      goto LAB_140012eaa;
    }
LAB_140012ed6:
    if (uVar18 < uVar26) {
      local_80 = (longlong *******)&stack0x01446844;
      goto LAB_1400131cd;
    }
    uVar43 = uVar19;
    if (uVar49 == uVar19 && uVar26 + 10 <= uVar49) {
LAB_140012efa:
      local_188[uVar18] = cVar53 + bVar60 + (bVar60 & cVar53 + 0x4fU) * -2 + '&';
      goto LAB_140012f1e;
    }
    uVar44 = uVar26 + uVar49;
    if (uVar18 < uVar44) {
      if (uVar49 == uVar26 + 0x20) {
        bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 6U) * -2) - 0x24;
        uVar49 = uVar44;
        goto LAB_140012fb4;
      }
      if (uVar49 != uVar26 + 6) goto LAB_140012e73;
    }
    else {
      if (uVar44 == 4) {
LAB_140012fcc:
        bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 0xb3U) * -2) - 0x32;
        local_188[uVar18] = bVar52;
        uVar18 = (~uVar26 + uVar18) - (ulonglong)bVar52;
        uVar26 = uVar19;
      }
      else {
        if (uVar26 + 10 < uVar49) {
          if (uVar49 == uVar19) goto LAB_140012ea0;
          cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xb5U) * -2 + -0x3e;
          if (uVar49 == uVar26 + 3) goto LAB_140012fcc;
LAB_140013082:
          if (uVar49 == uVar26 + 2) {
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x4aU) * -2 + 0x44;
          }
          else {
            if (uVar49 != uVar26 + 5) {
              if (uVar49 == uVar26 + 4) goto LAB_140012f1e;
              if (4 < uVar26) goto LAB_140012efa;
              local_188[uVar18] = cVar58;
              goto LAB_140012eaa;
            }
            bVar52 = (cVar53 + bVar60 + (cVar53 + 0xaeU & bVar60) * -2) - 0x14;
            local_188[uVar18] = cVar53 + bVar60 + (cVar53 + 1U & bVar60) * -2 + bVar52 + -6;
            uVar49 = uVar44;
          }
LAB_140012fb4:
          uVar18 = uVar18 + ~(ulonglong)bVar52;
          goto LAB_140012eaa;
        }
        if (uVar49 == uVar19) goto LAB_140012efa;
        if (uVar49 == uVar26 + 3) {
          bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 0x2fU) * -2) - 0x1a;
          uVar49 = uVar44;
          goto LAB_140012fb4;
        }
        if (uVar49 != uVar26 + 5) {
          cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x27U) * -2 + -0x16;
          if (uVar49 != uVar26 + 3) goto LAB_140013082;
          goto LAB_140012fcc;
        }
      }
      local_188[uVar18] = (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 + 0x8cU) * -2 + -0x48;
      lVar27 = uVar18 - uVar49;
      uVar49 = uVar49 + 1;
      uVar42 = (ulonglong)abStack_18a[lVar27];
      uVar18 = lVar27 - 2;
    }
LAB_140012ea0:
    uVar18 = uVar18 + uVar26 + uVar42;
LAB_140012eaa:
    uVar18 = uVar18 + 1;
    if (0x22 < uVar18) {
LAB_1400131cd:
      ppppppplVar32 = local_150;
      local_1b8._8_8_ = _UNK_1400354f8;
      local_1b8._0_8_ = _DAT_1400354f0;
      local_1a8 = 0x657a0f0f;
      uStack_1a4 = 0xa17c;
      uStack_1a2 = 0;
      uStack_1a0 = 0;
      uStack_19a = 0;
      uStack_198 = 0;
      puVar20 = local_1b8;
      break;
    }
  } while( true );
LAB_140013213:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      puVar20 = &stack0x00c8301d;
      break;
    }
    bVar60 = local_1b8[uVar18];
    uVar42 = (ulonglong)bVar60;
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    if (uVar19 <= uVar49) {
      if (uVar49 != uVar19) {
        if (uVar49 != uVar26 + 2) {
          if (uVar49 == uVar26 + 3) {
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x11U) * -2 + 0x9a;
          }
          else {
            if (uVar49 != uVar26 + 6) {
              uVar43 = uVar19;
              if (uVar49 != uVar26 + 4) goto LAB_1400132d8;
              goto LAB_140013422;
            }
            bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 0x35U) * -2) - 0x3e;
LAB_14001345b:
            local_1b8[uVar18] = cVar53 + bVar60 + (bVar60 & cVar53 + 0x71U) * -2 + bVar52 + 'Z';
            uVar49 = uVar26 + uVar49;
          }
          goto LAB_140013555;
        }
LAB_14001322c:
        bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 3U) * -2) - 0x12;
        local_1b8[uVar18] = bVar52;
        uVar18 = (~uVar26 + uVar18) - (ulonglong)bVar52;
LAB_140013269:
        local_1b8[uVar18] = (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 - 0x34U) * -2 + '8';
        lVar27 = uVar18 - uVar49;
        uVar49 = uVar49 + 1;
        uVar42 = (ulonglong)(byte)local_1c8[lVar27 + 0xe];
        uVar18 = lVar27 - 2;
        uVar26 = uVar19;
      }
LAB_1400132a2:
      uVar18 = uVar18 + uVar26;
LAB_1400132a9:
      uVar18 = uVar18 + uVar42;
      goto LAB_1400132ac;
    }
LAB_1400132d8:
    if (uVar18 < uVar26) {
      puVar20 = &stack0x016e9d54;
      break;
    }
    uVar43 = uVar26;
    if (uVar18 < uVar26 + uVar49) {
      if (uVar49 == uVar26 + 2) goto LAB_1400133f0;
      if (uVar49 != uVar26 + 8) {
        if (uVar49 == uVar26 + 5) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x14U) * -2 + 0x88;
          goto LAB_14001345b;
        }
        if (uVar49 == uVar26 + 3) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xa6U) * -2 + 0x1c;
          uVar49 = uVar26 + uVar49;
        }
        else {
          if (uVar49 != uVar26 + 0x10) {
            if (uVar49 == uVar26 + 9) goto LAB_14001322c;
            uVar19 = uVar26;
            if (uVar49 == uVar26 + 6) goto LAB_140013269;
            if (uVar49 == uVar26 + 4) goto LAB_1400132a2;
            goto LAB_140013213;
          }
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x38U) * -2 + 0xb0;
        }
LAB_140013555:
        uVar42 = ~(ulonglong)bVar52;
        goto LAB_1400132a9;
      }
    }
    else {
      if (uVar49 < uVar26 + 6) {
        cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x37U) * -2 + 'J';
      }
      else {
        if (uVar49 == uVar19) goto LAB_1400132a2;
        cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x7dU) * -2 + '\x12';
      }
      if (uVar49 != uVar19) {
        if (uVar49 == uVar26 + 3) goto LAB_140013422;
        if (uVar49 == uVar26 + 5) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x51U) * -2 + 0x1a;
          goto LAB_140013555;
        }
        if (uVar49 == uVar26 + 2) goto LAB_14001322c;
        if (uVar49 == uVar26 + 6) goto LAB_1400132a2;
        if ((uVar26 != 0) || (uVar49 == 4)) goto LAB_1400133f0;
        local_1b8[uVar18] = cVar58;
        uVar26 = 0;
        goto LAB_1400132ac;
      }
LAB_1400133f0:
      local_1b8[uVar18] = cVar53 + bVar60 + (bVar60 & cVar53 - 0x21U) * -2 + -0x3a;
      uVar43 = uVar19;
    }
LAB_140013422:
    uVar26 = uVar43;
    uVar18 = uVar18 - 1;
LAB_1400132ac:
    uVar18 = uVar18 + 1;
  } while (uVar18 < 0x22);
  local_580 = puVar20;
  uVar49 = FUN_140034260();
  pppppplVar22 = ppppppplVar32[7];
  if (((ulonglong)pppppplVar22 ^ 0x7fffffffffffffff) < uVar49) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  ppppppplVar25 = (longlong *******)ppppppplVar32[5];
  pppppplVar30 = ppppppplVar32[8];
  local_448 = (undefined1  [16])0x0;
  uVar26 = (longlong)pppppplVar22 + uVar49;
  if (uVar26 < 0x10) {
    puVar20 = local_448;
    uVar18 = 0xf;
    goto LAB_140013652;
  }
  uVar18 = 0x7fffffffffffffff;
  if ((longlong)uVar26 < 0) {
LAB_140013614:
    lVar27 = FUN_1400329d0(uVar18 + 0x28);
    puVar20 = (undefined1 *)(lVar27 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar20 + -8) = lVar27;
  }
  else {
    uVar19 = uVar26 | 0xf;
    uVar18 = 0x16;
    if (0x16 < uVar19) {
      uVar18 = uVar19;
    }
    if (0xffe < uVar19) goto LAB_140013614;
    puVar20 = (undefined1 *)FUN_1400329d0(uVar18 + 1);
  }
  local_448._0_8_ = puVar20;
LAB_140013652:
  ppppppplVar32 = local_578;
  if ((longlong ******)0xf < pppppplVar30) {
    ppppppplVar32 = ppppppplVar25;
  }
  local_438 = uVar26;
  uStack_430 = uVar18;
  FUN_140034080(puVar20,local_580,uVar49);
  FUN_140034080(puVar20 + uVar49,ppppppplVar32,pppppplVar22);
  puVar20[uVar26] = 0;
  ppppppplVar45 = local_50;
  ppppppplVar25 = local_80;
  ppppppplVar32 = local_150;
  puVar31 = local_3c0;
  uVar49 = local_438;
  if (uStack_430 == local_438) {
    puVar28 = (undefined8 *)FUN_140027740(local_448,1);
    ppppppplVar25 = local_80;
    puVar31 = local_3c0;
    ppppppplVar32 = local_150;
    ppppppplVar45 = local_50;
  }
  else {
    local_438 = local_438 + 1;
    puVar28 = (undefined8 *)local_448;
    puVar48 = puVar28;
    if (0xf < uStack_430) {
      puVar48 = (undefined8 *)local_448._0_8_;
    }
    *(undefined2 *)((longlong)puVar48 + uVar49) = 0x22;
  }
  pppppplVar22 = local_570;
  local_468 = (undefined8 *******)*puVar28;
  uStack_460 = puVar28[1];
  local_458 = puVar28[2];
  uStack_450 = puVar28[3];
  puVar28[2] = 0;
  puVar28[3] = 0xf;
  *(undefined1 *)puVar28 = 0;
  uVar49 = FUN_140034260(ppppppplVar25);
  if (uStack_450 - local_458 < uVar49) {
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_468,uVar49);
  }
  else {
    lVar27 = uVar49 + local_458;
    pppppppuVar23 = &local_468;
    pppppppuVar29 = pppppppuVar23;
    if (0xf < uStack_450) {
      pppppppuVar29 = local_468;
    }
    puVar20 = (undefined1 *)(local_458 + (longlong)pppppppuVar29);
    local_458 = lVar27;
    FUN_140034090(puVar20,local_80,uVar49);
    *(undefined1 *)((longlong)pppppppuVar29 + lVar27) = 0;
  }
  local_488 = (undefined8 *******)*pppppppuVar23;
  ppppppuStack_480 = pppppppuVar23[1];
  local_478 = pppppppuVar23[2];
  ppppppuStack_470 = pppppppuVar23[3];
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  pppppplVar30 = ppppppplVar32[0xb];
  if ((longlong ******)0xf < ppppppplVar32[0xc]) {
    local_418 = (longlong *******)ppppppplVar32[9];
  }
  if ((longlong ******)((longlong)ppppppuStack_470 - (longlong)local_478) < pppppplVar30) {
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_488,pppppplVar30);
  }
  else {
    ppppppuVar50 = (undefined8 ******)((longlong)local_478 + (longlong)pppppplVar30);
    pppppppuVar23 = &local_488;
    pppppppuVar29 = pppppppuVar23;
    if ((undefined8 ******)0xf < ppppppuStack_470) {
      pppppppuVar29 = local_488;
    }
    puVar20 = (undefined1 *)((longlong)local_478 + (longlong)pppppppuVar29);
    local_478 = ppppppuVar50;
    FUN_140034090(puVar20,local_418);
    *(undefined1 *)((longlong)pppppppuVar29 + (longlong)ppppppuVar50) = 0;
  }
  local_4a8 = (undefined8 *******)*pppppppuVar23;
  ppppppuVar50 = pppppppuVar23[2];
  ppppppuStack_490 = pppppppuVar23[3];
  ppppppuStack_4a0 = pppppppuVar23[1];
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  if (ppppppuStack_490 == ppppppuVar50) {
    local_498 = ppppppuVar50;
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_4a8,1);
  }
  else {
    local_498 = (undefined8 ******)((longlong)ppppppuVar50 + 1);
    pppppppuVar23 = &local_4a8;
    pppppppuVar29 = pppppppuVar23;
    if ((undefined8 ******)0xf < ppppppuStack_490) {
      pppppppuVar29 = local_4a8;
    }
    *(undefined2 *)((longlong)pppppppuVar29 + (longlong)ppppppuVar50) = 0x22;
  }
  local_4c8 = (undefined8 *******)*pppppppuVar23;
  ppppppuStack_4c0 = pppppppuVar23[1];
  local_4b8 = pppppppuVar23[2];
  ppppppuStack_4b0 = pppppppuVar23[3];
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  uVar49 = FUN_140034260(local_3d0);
  if ((ulonglong)((longlong)ppppppuStack_4b0 - (longlong)local_4b8) < uVar49) {
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_4c8,uVar49);
  }
  else {
    ppppppuVar50 = (undefined8 ******)(uVar49 + (longlong)local_4b8);
    pppppppuVar23 = &local_4c8;
    pppppppuVar29 = pppppppuVar23;
    if ((undefined8 ******)0xf < ppppppuStack_4b0) {
      pppppppuVar29 = local_4c8;
    }
    puVar20 = (undefined1 *)((longlong)local_4b8 + (longlong)pppppppuVar29);
    local_4b8 = ppppppuVar50;
    FUN_140034090(puVar20,local_3d0,uVar49);
    *(undefined1 *)((longlong)pppppppuVar29 + (longlong)ppppppuVar50) = 0;
  }
  local_4e8 = (undefined8 *******)*pppppppuVar23;
  ppppppuStack_4e0 = pppppppuVar23[1];
  local_4d8 = pppppppuVar23[2];
  ppppppuStack_4d0 = pppppppuVar23[3];
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  uVar49 = puVar31[2];
  if (0xf < (ulonglong)puVar31[3]) {
    puVar31 = (undefined8 *)*puVar31;
  }
  if ((ulonglong)((longlong)ppppppuStack_4d0 - (longlong)local_4d8) < uVar49) {
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_4e8,uVar49);
  }
  else {
    ppppppuVar50 = (undefined8 ******)((longlong)local_4d8 + uVar49);
    pppppppuVar23 = &local_4e8;
    pppppppuVar29 = pppppppuVar23;
    if ((undefined8 ******)0xf < ppppppuStack_4d0) {
      pppppppuVar29 = local_4e8;
    }
    puVar20 = (undefined1 *)((longlong)local_4d8 + (longlong)pppppppuVar29);
    local_4d8 = ppppppuVar50;
    FUN_140034090(puVar20,puVar31);
    *(undefined1 *)((longlong)pppppppuVar29 + (longlong)ppppppuVar50) = 0;
  }
  local_508 = (undefined8 *******)*pppppppuVar23;
  ppppppuVar50 = pppppppuVar23[2];
  ppppppuStack_4f0 = pppppppuVar23[3];
  ppppppuStack_500 = pppppppuVar23[1];
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  pppppppuVar23 = local_400;
  if (ppppppuStack_4f0 == ppppppuVar50) {
    local_4f8 = ppppppuVar50;
    pppppppuVar29 = (undefined8 *******)FUN_140027740(&local_508,1);
    pppppppuVar23 = local_400;
  }
  else {
    local_4f8 = (undefined8 ******)((longlong)ppppppuVar50 + 1);
    pppppppuVar29 = &local_508;
    pppppppuVar51 = pppppppuVar29;
    if ((undefined8 ******)0xf < ppppppuStack_4f0) {
      pppppppuVar51 = local_508;
    }
    *(undefined2 *)((longlong)pppppppuVar51 + (longlong)ppppppuVar50) = 0x22;
  }
  local_528 = (undefined8 *******)*pppppppuVar29;
  ppppppuStack_520 = pppppppuVar29[1];
  local_518 = pppppppuVar29[2];
  ppppppuStack_510 = pppppppuVar29[3];
  pppppppuVar29[2] = (undefined8 ******)0x0;
  pppppppuVar29[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar29 = 0;
  uVar49 = FUN_140034260(pppppppuVar23);
  if ((ulonglong)((longlong)ppppppuStack_510 - (longlong)local_518) < uVar49) {
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_528,uVar49);
  }
  else {
    ppppppuVar50 = (undefined8 ******)(uVar49 + (longlong)local_518);
    pppppppuVar23 = &local_528;
    pppppppuVar29 = pppppppuVar23;
    if ((undefined8 ******)0xf < ppppppuStack_510) {
      pppppppuVar29 = local_528;
    }
    puVar20 = (undefined1 *)((longlong)local_518 + (longlong)pppppppuVar29);
    local_518 = ppppppuVar50;
    FUN_140034090(puVar20,local_400,uVar49);
    *(undefined1 *)((longlong)pppppppuVar29 + (longlong)ppppppuVar50) = 0;
  }
  local_548 = (undefined8 *******)*pppppppuVar23;
  ppppppuStack_540 = pppppppuVar23[1];
  local_538 = pppppppuVar23[2];
  ppppppuStack_530 = pppppppuVar23[3];
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  uVar49 = param_5[2];
  if (0xf < (ulonglong)param_5[3]) {
    param_5 = (undefined8 *)*param_5;
  }
  if ((ulonglong)((longlong)ppppppuStack_530 - (longlong)local_538) < uVar49) {
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_548,uVar49);
  }
  else {
    ppppppuVar50 = (undefined8 ******)((longlong)local_538 + uVar49);
    pppppppuVar23 = &local_548;
    pppppppuVar29 = pppppppuVar23;
    if ((undefined8 ******)0xf < ppppppuStack_530) {
      pppppppuVar29 = local_548;
    }
    puVar20 = (undefined1 *)((longlong)local_538 + (longlong)pppppppuVar29);
    local_538 = ppppppuVar50;
    FUN_140034090(puVar20,param_5);
    *(undefined1 *)((longlong)pppppppuVar29 + (longlong)ppppppuVar50) = 0;
  }
  local_568 = (undefined1 (*) [16])*pppppppuVar23;
  ppppppuVar50 = pppppppuVar23[2];
  ppppppuStack_550 = pppppppuVar23[3];
  ppppppuStack_560 = pppppppuVar23[1];
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  if (ppppppuStack_550 == ppppppuVar50) {
    local_558 = ppppppuVar50;
    pauVar21 = (undefined1 (*) [16])FUN_140027740(&local_568,1);
  }
  else {
    local_558 = (undefined8 ******)((longlong)ppppppuVar50 + 1);
    pauVar21 = (undefined1 (*) [16])&local_568;
    pauVar47 = pauVar21;
    if ((undefined8 ******)0xf < ppppppuStack_550) {
      pauVar47 = local_568;
    }
    *(undefined2 *)(*pauVar47 + (longlong)ppppppuVar50) = 0x22;
  }
  _local_328 = *pauVar21;
  local_318 = *(longlong *)pauVar21[1];
  uStack_310 = *(ulonglong *)(pauVar21[1] + 8);
  *(undefined8 *)pauVar21[1] = 0;
  *(undefined8 *)(pauVar21[1] + 8) = 0xf;
  (*pauVar21)[0] = 0;
  uVar49 = FUN_140034260(local_3c8);
  if (uStack_310 - local_318 < uVar49) {
    pauVar21 = (undefined1 (*) [16])FUN_140027740(local_328,uVar49);
  }
  else {
    lVar27 = uVar49 + local_318;
    pauVar21 = (undefined1 (*) [16])local_328;
    auVar40 = (undefined1  [8])pauVar21;
    if (0xf < uStack_310) {
      auVar40 = local_328;
    }
    puVar20 = *(undefined1 (*) [16])auVar40 + local_318;
    local_318 = lVar27;
    FUN_140034090(puVar20,local_3c8,uVar49);
    (*(undefined1 (*) [16])auVar40)[lVar27] = 0;
  }
  pauVar47 = *(undefined1 (**) [16])*pauVar21;
  _local_348 = *pauVar21;
  local_338 = *(longlong *)pauVar21[1];
  uStack_330 = *(ulonglong *)(pauVar21[1] + 8);
  *(undefined8 *)pauVar21[1] = 0;
  *(undefined8 *)(pauVar21[1] + 8) = 0xf;
  (*pauVar21)[0] = 0;
  uVar49 = param_6[2];
  if (0xf < (ulonglong)param_6[3]) {
    param_6 = (undefined8 *)*param_6;
  }
  if (uStack_330 - local_338 < uVar49) {
    pauVar21 = (undefined1 (*) [16])FUN_140027740(local_348,uVar49);
  }
  else {
    lVar27 = local_338 + uVar49;
    pauVar21 = (undefined1 (*) [16])local_348;
    pauVar46 = pauVar21;
    if (0xf < uStack_330) {
      pauVar46 = pauVar47;
    }
    puVar20 = *pauVar46 + local_338;
    local_338 = lVar27;
    FUN_140034090(puVar20,param_6);
    (*pauVar46)[lVar27] = 0;
  }
  local_1c8 = pauVar21[1];
  local_1d8 = *pauVar21;
  *(undefined8 *)pauVar21[1] = 0;
  *(undefined8 *)(pauVar21[1] + 8) = 0xf;
  (*pauVar21)[0] = 0;
  uVar33 = local_1c8._0_8_;
  if (local_1c8._8_8_ == local_1c8._0_8_) {
    pppppplVar30 = (longlong ******)FUN_140027740(local_1d8,1);
  }
  else {
    local_1c8._0_8_ = local_1c8._0_8_ + 1;
    pppppplVar30 = (longlong ******)local_1d8;
    pppppplVar37 = pppppplVar30;
    if (0xf < (ulonglong)local_1c8._8_8_) {
      pppppplVar37 = (longlong ******)local_1d8._0_8_;
    }
    *(undefined2 *)((longlong)pppppplVar37 + uVar33) = 0x22;
  }
  local_228 = (undefined8 *******)*pppppplVar30;
  ppppplStack_220 = pppppplVar30[1];
  local_218 = pppppplVar30[2];
  uStack_210 = pppppplVar30[3];
  pppppplVar30[2] = (longlong *****)0x0;
  pppppplVar30[3] = (longlong *****)0xf;
  *(undefined1 *)pppppplVar30 = 0;
  uVar49 = FUN_140034260(local_1e0);
  if ((ulonglong)((longlong)uStack_210 - (longlong)local_218) < uVar49) {
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_228,uVar49);
  }
  else {
    ppppplVar34 = (longlong *****)(uVar49 + (longlong)local_218);
    pppppppuVar23 = &local_228;
    pppppppuVar29 = pppppppuVar23;
    if ((longlong *****)0xf < uStack_210) {
      pppppppuVar29 = local_228;
    }
    puVar20 = (undefined1 *)((longlong)local_218 + (longlong)pppppppuVar29);
    local_218 = ppppplVar34;
    FUN_140034090(puVar20,local_1e0,uVar49);
    *(undefined1 *)((longlong)pppppppuVar29 + (longlong)ppppplVar34) = 0;
  }
  local_248 = (undefined8 *******)*pppppppuVar23;
  ppppppuStack_240 = pppppppuVar23[1];
  local_238 = pppppppuVar23[2];
  ppppppuStack_230 = pppppppuVar23[3];
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  pppppplVar30 = ppppppplVar45[10];
  if ((longlong ******)0xf < ppppppplVar45[0xb]) {
    local_410 = (longlong *******)ppppppplVar45[8];
  }
  if ((longlong ******)((longlong)ppppppuStack_230 - (longlong)local_238) < pppppplVar30) {
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_248,pppppplVar30);
  }
  else {
    ppppppuVar50 = (undefined8 ******)((longlong)local_238 + (longlong)pppppplVar30);
    pppppppuVar23 = &local_248;
    pppppppuVar29 = pppppppuVar23;
    if ((undefined8 ******)0xf < ppppppuStack_230) {
      pppppppuVar29 = local_248;
    }
    puVar20 = (undefined1 *)((longlong)local_238 + (longlong)pppppppuVar29);
    local_238 = ppppppuVar50;
    FUN_140034090(puVar20,local_410);
    *(undefined1 *)((longlong)pppppppuVar29 + (longlong)ppppppuVar50) = 0;
  }
  local_298 = (undefined8 *******)*pppppppuVar23;
  ppppppuVar50 = pppppppuVar23[2];
  uStack_280 = pppppppuVar23[3];
  ppppppuStack_290 = pppppppuVar23[1];
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  if (uStack_280 == ppppppuVar50) {
    local_288 = ppppppuVar50;
    pppppppuVar23 = (undefined8 *******)FUN_140027740(&local_298,1);
  }
  else {
    local_288 = (undefined8 ******)((longlong)ppppppuVar50 + 1);
    pppppppuVar23 = &local_298;
    pppppppuVar29 = pppppppuVar23;
    if ((undefined8 ******)0xf < uStack_280) {
      pppppppuVar29 = local_298;
    }
    *(undefined2 *)((longlong)pppppppuVar29 + (longlong)ppppppuVar50) = 0x22;
  }
  local_368 = (undefined1 (*) [16])*pppppppuVar23;
  ppppppuStack_360 = pppppppuVar23[1];
  local_358 = pppppppuVar23[2];
  ppppppuStack_350 = pppppppuVar23[3];
  pppppppuVar23[2] = (undefined8 ******)0x0;
  pppppppuVar23[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar23 = 0;
  uVar49 = FUN_140034260(local_158);
  if ((ulonglong)((longlong)ppppppuStack_350 - (longlong)local_358) < uVar49) {
    pauVar21 = (undefined1 (*) [16])FUN_140027740(&local_368,uVar49);
  }
  else {
    ppppppuVar50 = (undefined8 ******)(uVar49 + (longlong)local_358);
    pauVar21 = (undefined1 (*) [16])&local_368;
    pauVar47 = pauVar21;
    if ((undefined8 ******)0xf < ppppppuStack_350) {
      pauVar47 = local_368;
    }
    puVar20 = *pauVar47 + (longlong)local_358;
    local_358 = ppppppuVar50;
    FUN_140034090(puVar20,local_158,uVar49);
    (*pauVar47)[(longlong)ppppppuVar50] = 0;
  }
  local_2b8 = *pauVar21;
  local_2a8 = pauVar21[1];
  *(undefined8 *)pauVar21[1] = 0;
  *(undefined8 *)(pauVar21[1] + 8) = 0xf;
  (*pauVar21)[0] = 0;
  if (0xf < local_5a0) {
    local_420 = local_5b8[0];
  }
  uVar33 = local_2a8._0_8_;
  if ((ulonglong)(local_2a8._8_8_ - local_2a8._0_8_) < local_5a8) {
    puVar31 = (undefined8 *)FUN_140027740(local_2b8,local_5a8);
  }
  else {
    lVar27 = local_2a8._0_8_ + local_5a8;
    local_2a8._0_8_ = lVar27;
    puVar31 = (undefined8 *)local_2b8;
    puVar28 = puVar31;
    if (0xf < (ulonglong)local_2a8._8_8_) {
      puVar28 = (undefined8 *)local_2b8._0_8_;
    }
    FUN_140034090((undefined1 *)(uVar33 + (longlong)puVar28),local_420);
    *(undefined1 *)((longlong)puVar28 + lVar27) = 0;
  }
  local_2d8[0] = (undefined1 (*) [16])*puVar31;
  uVar49 = puVar31[2];
  uStack_2c0 = puVar31[3];
  local_2d8[1] = (undefined1 (*) [16])puVar31[1];
  puVar31[2] = 0;
  puVar31[3] = 0xf;
  *(undefined1 *)puVar31 = 0;
  if (uStack_2c0 == uVar49) {
    local_2c8 = uVar49;
    pauVar21 = (undefined1 (*) [16])FUN_140027740(local_2d8,1);
  }
  else {
    local_2c8 = uVar49 + 1;
    pauVar21 = (undefined1 (*) [16])local_2d8;
    pauVar47 = pauVar21;
    if (0xf < uStack_2c0) {
      pauVar47 = local_2d8[0];
    }
    *(undefined2 *)(*pauVar47 + uVar49) = 0x22;
  }
  _local_78 = *pauVar21;
  local_68 = pauVar21[1];
  *(undefined8 *)pauVar21[1] = 0;
  *(undefined8 *)(pauVar21[1] + 8) = 0xf;
  (*pauVar21)[0] = 0;
  uVar49 = FUN_140034260(pppppplVar22);
  uVar33 = local_68._0_8_;
  if ((ulonglong)(local_68._8_8_ - local_68._0_8_) < uVar49) {
    pauVar21 = (undefined1 (*) [16])FUN_140027740(local_78,uVar49);
  }
  else {
    lVar27 = uVar49 + local_68._0_8_;
    local_68._0_8_ = lVar27;
    pauVar21 = (undefined1 (*) [16])local_78;
    pauVar47 = pauVar21;
    if (0xf < (ulonglong)local_68._8_8_) {
      pauVar47 = _local_78;
    }
    FUN_140034090(*pauVar47 + uVar33,pppppplVar22,uVar49);
    (*pauVar47)[lVar27] = 0;
  }
  puVar31 = *(undefined8 **)*pauVar21;
  _local_108 = *pauVar21;
  lVar27 = *(longlong *)pauVar21[1];
  uVar49 = *(ulonglong *)(pauVar21[1] + 8);
  _local_f8 = pauVar21[1];
  *(undefined8 *)pauVar21[1] = 0;
  *(undefined8 *)(pauVar21[1] + 8) = 0xf;
  (*pauVar21)[0] = 0;
  pppppplVar30 = ppppppplVar45[6];
  if ((longlong ******)0xf < ppppppplVar45[7]) {
    local_408 = (longlong *******)ppppppplVar45[4];
  }
  if ((longlong ******)(uVar49 - lVar27) < pppppplVar30) {
    puVar28 = (undefined8 *)FUN_140027740(local_108,pppppplVar30);
  }
  else {
    stack0xffffffffffffff10 = (longlong ******)uVar49;
    local_f8._0_8_ = lVar27 + (longlong)pppppplVar30;
    puVar28 = (undefined8 *)local_108;
    puVar48 = puVar28;
    if (0xf < uVar49) {
      puVar48 = puVar31;
    }
    FUN_140034090((undefined1 *)(lVar27 + (longlong)puVar48),local_408);
    *(undefined1 *)((longlong)puVar48 + lVar27 + (longlong)pppppplVar30) = 0;
  }
  local_3b8 = (longlong *******)*puVar28;
  uVar49 = puVar28[2];
  uStack_3a0 = puVar28[3];
  uStack_3b0 = puVar28[1];
  puVar28[2] = 0;
  puVar28[3] = 0xf;
  *(undefined1 *)puVar28 = 0;
  if (uStack_3a0 == uVar49) {
    local_3a8 = uVar49;
    ppppppplVar32 = (longlong *******)FUN_140027740(&local_3b8,1);
  }
  else {
    local_3a8 = uVar49 + 1;
    ppppppplVar32 = (longlong *******)&local_3b8;
    ppppppplVar25 = ppppppplVar32;
    if (0xf < uStack_3a0) {
      ppppppplVar25 = local_3b8;
    }
    *(undefined2 *)((longlong)ppppppplVar25 + uVar49) = 0x22;
  }
  local_3f8 = (undefined8 *******)*ppppppplVar32;
  pppppplStack_3f0 = ppppppplVar32[1];
  local_3e8 = ppppppplVar32[2];
  pppppplStack_3e0 = ppppppplVar32[3];
  ppppppplVar32[2] = (longlong ******)0x0;
  ppppppplVar32[3] = (longlong ******)0xf;
  *(undefined1 *)ppppppplVar32 = 0;
  if (0xf < uStack_3a0) {
    uVar49 = uStack_3a0 + 1;
    ppppppplVar32 = local_3b8;
    if (0xfff < uVar49) {
      ppppppplVar32 = (longlong *******)local_3b8[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_3b8 + (-8 - (longlong)ppppppplVar32)))
      goto LAB_14001b5c6;
      uVar49 = uStack_3a0 + 0x28;
    }
    thunk_FUN_1400340c0(ppppppplVar32,uVar49);
  }
  local_3a8 = 0;
  uStack_3a0 = 0xf;
  local_3b8 = (longlong *******)((ulonglong)local_3b8 & 0xffffffffffffff00);
  if (0xf < stack0xffffffffffffff10) {
    uVar49 = (longlong)stack0xffffffffffffff10 + 1;
    lVar27 = (longlong)_local_108;
    if (0xfff < uVar49) {
      lVar27 = *(longlong *)((longlong)_local_108 + -8);
      if (0x1f < (ulonglong)(((longlong)_local_108 + -8) - lVar27)) goto LAB_14001b5c6;
      uVar49 = (longlong)stack0xffffffffffffff10 + 0x28;
    }
    thunk_FUN_1400340c0(lVar27,uVar49);
  }
  _local_f8 = ZEXT816(0xf) << 0x40;
  auVar105[0xf] = 0;
  auVar105._0_15_ = stack0xfffffffffffffef9;
  _local_108 = auVar105 << 8;
  if (0xf < (ulonglong)local_68._8_8_) {
    uVar49 = local_68._8_8_ + 1;
    pppppplVar30 = (longlong ******)_local_78;
    if (0xfff < uVar49) {
      pppppplVar30 = *(longlong *******)((longlong)_local_78 + -8);
      if (0x1f < (ulonglong)((longlong)_local_78 + (-8 - (longlong)pppppplVar30)))
      goto LAB_14001b5c6;
      uVar49 = local_68._8_8_ + 0x28;
    }
    thunk_FUN_1400340c0(pppppplVar30,uVar49);
  }
  local_68 = ZEXT816(0xf) << 0x40;
  auVar9[0xf] = 0;
  auVar9._0_15_ = stack0xffffffffffffff89;
  _local_78 = auVar9 << 8;
  if (0xf < uStack_2c0) {
    uVar49 = uStack_2c0 + 1;
    pauVar21 = local_2d8[0];
    if (0xfff < uVar49) {
      pauVar21 = *(undefined1 (**) [16])(local_2d8[0][-1] + 8);
      if (0x1f < (ulonglong)((longlong)local_2d8[0] + (-8 - (longlong)pauVar21)))
      goto LAB_14001b5c6;
      uVar49 = uStack_2c0 + 0x28;
    }
    thunk_FUN_1400340c0(pauVar21,uVar49);
  }
  local_2c8 = 0;
  uStack_2c0 = 0xf;
  local_2d8[0] = (undefined1 (*) [16])((ulonglong)local_2d8[0] & 0xffffffffffffff00);
  if (0xf < (ulonglong)local_2a8._8_8_) {
    uVar49 = local_2a8._8_8_ + 1;
    lVar27 = local_2b8._0_8_;
    if (0xfff < uVar49) {
      lVar27 = *(longlong *)(local_2b8._0_8_ + -8);
      if (0x1f < (ulonglong)((local_2b8._0_8_ + -8) - lVar27)) goto LAB_14001b5c6;
      uVar49 = local_2a8._8_8_ + 0x28;
    }
    thunk_FUN_1400340c0(lVar27,uVar49);
  }
  local_2a8 = ZEXT816(0xf) << 0x40;
  auVar10[0xf] = 0;
  auVar10._0_15_ = local_2b8._1_15_;
  local_2b8 = auVar10 << 8;
  if ((undefined8 ******)0xf < ppppppuStack_350) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_350 + 1);
    pauVar21 = local_368;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pauVar21 = *(undefined1 (**) [16])(local_368[-1] + 8);
      if (0x1f < (ulonglong)((longlong)local_368 + (-8 - (longlong)pauVar21))) goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_350 + 5;
    }
    thunk_FUN_1400340c0(pauVar21,ppppppuVar50);
  }
  local_358 = (undefined8 ******)0x0;
  ppppppuStack_350 = (undefined8 ******)0xf;
  local_368 = (undefined1 (*) [16])((ulonglong)local_368 & 0xffffffffffffff00);
  if ((undefined8 ******)0xf < uStack_280) {
    ppppppuVar50 = (undefined8 ******)((longlong)uStack_280 + 1);
    pppppppuVar23 = local_298;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pppppppuVar23 = (undefined8 *******)local_298[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_298 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppppuVar50 = uStack_280 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppppuVar50);
  }
  local_288 = (undefined8 ******)0x0;
  uStack_280 = (undefined8 ******)0xf;
  local_298 = (undefined8 *******)((ulonglong)local_298 & 0xffffffffffffff00);
  if ((undefined8 ******)0xf < ppppppuStack_230) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_230 + 1);
    pppppppuVar23 = local_248;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pppppppuVar23 = (undefined8 *******)local_248[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_248 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_230 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppppuVar50);
  }
  local_238 = (undefined8 ******)0x0;
  ppppppuStack_230 = (undefined8 ******)0xf;
  local_248 = (undefined8 *******)((ulonglong)local_248 & 0xffffffffffffff00);
  if ((longlong *****)0xf < uStack_210) {
    ppppplVar34 = (longlong *****)((longlong)uStack_210 + 1);
    pppppppuVar23 = local_228;
    if ((longlong *****)0xfff < ppppplVar34) {
      pppppppuVar23 = (undefined8 *******)local_228[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_228 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppplVar34 = uStack_210 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppplVar34);
  }
  local_218 = (longlong *****)0x0;
  uStack_210 = (longlong *****)0xf;
  local_228 = (undefined8 *******)((ulonglong)local_228 & 0xffffffffffffff00);
  if (0xf < (ulonglong)local_1c8._8_8_) {
    uVar49 = local_1c8._8_8_ + 1;
    pppppplVar30 = (longlong ******)local_1d8._0_8_;
    if (0xfff < uVar49) {
      pppppplVar30 = *(longlong *******)(local_1d8._0_8_ + -8);
      if (0x1f < (ulonglong)(local_1d8._0_8_ + (-8 - (longlong)pppppplVar30))) goto LAB_14001b5c6;
      uVar49 = local_1c8._8_8_ + 0x28;
    }
    thunk_FUN_1400340c0(pppppplVar30,uVar49);
  }
  local_1c8 = ZEXT816(0xf) << 0x40;
  auVar11[0xf] = 0;
  auVar11._0_15_ = local_1d8._1_15_;
  local_1d8 = auVar11 << 8;
  if (0xf < uStack_330) {
    uVar49 = uStack_330 + 1;
    auVar40 = local_348;
    if (0xfff < uVar49) {
      auVar40 = *(undefined1 (*) [8])((longlong)local_348 + -8);
      if (0x1f < (ulonglong)(((longlong)local_348 + -8) - (longlong)auVar40)) goto LAB_14001b5c6;
      uVar49 = uStack_330 + 0x28;
    }
    thunk_FUN_1400340c0(auVar40,uVar49);
  }
  local_338 = 0;
  uStack_330 = 0xf;
  auVar12[0xf] = 0;
  auVar12._0_15_ = stack0xfffffffffffffcb9;
  _local_348 = auVar12 << 8;
  if (0xf < uStack_310) {
    uVar49 = uStack_310 + 1;
    auVar40 = local_328;
    if (0xfff < uVar49) {
      auVar40 = *(undefined1 (*) [8])((longlong)local_328 + -8);
      if (0x1f < (ulonglong)(((longlong)local_328 + -8) - (longlong)auVar40)) goto LAB_14001b5c6;
      uVar49 = uStack_310 + 0x28;
    }
    thunk_FUN_1400340c0(auVar40,uVar49);
  }
  local_318 = 0;
  uStack_310 = 0xf;
  auVar13[0xf] = 0;
  auVar13._0_15_ = stack0xfffffffffffffcd9;
  _local_328 = auVar13 << 8;
  if ((undefined8 ******)0xf < ppppppuStack_550) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_550 + 1);
    pauVar21 = local_568;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pauVar21 = *(undefined1 (**) [16])(local_568[-1] + 8);
      if (0x1f < (ulonglong)((longlong)local_568 + (-8 - (longlong)pauVar21))) goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_550 + 5;
    }
    thunk_FUN_1400340c0(pauVar21,ppppppuVar50);
  }
  local_558 = (undefined8 ******)0x0;
  ppppppuStack_550 = (undefined8 ******)0xf;
  local_568 = (undefined1 (*) [16])((ulonglong)local_568 & 0xffffffffffffff00);
  if ((undefined8 ******)0xf < ppppppuStack_530) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_530 + 1);
    pppppppuVar23 = local_548;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pppppppuVar23 = (undefined8 *******)local_548[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_548 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_530 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppppuVar50);
  }
  local_538 = (undefined8 ******)0x0;
  ppppppuStack_530 = (undefined8 ******)0xf;
  local_548 = (undefined8 *******)((ulonglong)local_548 & 0xffffffffffffff00);
  if ((undefined8 ******)0xf < ppppppuStack_510) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_510 + 1);
    pppppppuVar23 = local_528;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pppppppuVar23 = (undefined8 *******)local_528[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_528 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_510 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppppuVar50);
  }
  local_518 = (undefined8 ******)0x0;
  ppppppuStack_510 = (undefined8 ******)0xf;
  local_528 = (undefined8 *******)((ulonglong)local_528 & 0xffffffffffffff00);
  if ((undefined8 ******)0xf < ppppppuStack_4f0) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_4f0 + 1);
    pppppppuVar23 = local_508;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pppppppuVar23 = (undefined8 *******)local_508[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_508 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_4f0 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppppuVar50);
  }
  local_4f8 = (undefined8 ******)0x0;
  ppppppuStack_4f0 = (undefined8 ******)0xf;
  local_508 = (undefined8 *******)((ulonglong)local_508 & 0xffffffffffffff00);
  if ((undefined8 ******)0xf < ppppppuStack_4d0) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_4d0 + 1);
    pppppppuVar23 = local_4e8;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pppppppuVar23 = (undefined8 *******)local_4e8[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_4e8 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_4d0 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppppuVar50);
  }
  local_4d8 = (undefined8 ******)0x0;
  ppppppuStack_4d0 = (undefined8 ******)0xf;
  local_4e8 = (undefined8 *******)((ulonglong)local_4e8 & 0xffffffffffffff00);
  if ((undefined8 ******)0xf < ppppppuStack_4b0) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_4b0 + 1);
    pppppppuVar23 = local_4c8;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pppppppuVar23 = (undefined8 *******)local_4c8[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_4c8 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_4b0 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppppuVar50);
  }
  local_4b8 = (undefined8 ******)0x0;
  ppppppuStack_4b0 = (undefined8 ******)0xf;
  local_4c8 = (undefined8 *******)((ulonglong)local_4c8 & 0xffffffffffffff00);
  if ((undefined8 ******)0xf < ppppppuStack_490) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_490 + 1);
    pppppppuVar23 = local_4a8;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pppppppuVar23 = (undefined8 *******)local_4a8[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_4a8 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_490 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppppuVar50);
  }
  local_498 = (undefined8 ******)0x0;
  ppppppuStack_490 = (undefined8 ******)0xf;
  local_4a8 = (undefined8 *******)((ulonglong)local_4a8 & 0xffffffffffffff00);
  if ((undefined8 ******)0xf < ppppppuStack_470) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_470 + 1);
    pppppppuVar23 = local_488;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pppppppuVar23 = (undefined8 *******)local_488[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_488 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_470 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppppuVar50);
  }
  local_478 = (undefined8 ******)0x0;
  ppppppuStack_470 = (undefined8 ******)0xf;
  local_488 = (undefined8 *******)((ulonglong)local_488 & 0xffffffffffffff00);
  if (0xf < uStack_450) {
    uVar49 = uStack_450 + 1;
    pppppppuVar23 = local_468;
    if (0xfff < uVar49) {
      pppppppuVar23 = (undefined8 *******)local_468[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_468 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      uVar49 = uStack_450 + 0x28;
    }
    thunk_FUN_1400340c0(pppppppuVar23,uVar49);
  }
  local_458 = 0;
  uStack_450 = 0xf;
  local_468 = (undefined8 *******)((ulonglong)local_468 & 0xffffffffffffff00);
  if (0xf < uStack_430) {
    uVar49 = uStack_430 + 1;
    lVar27 = local_448._0_8_;
    if (0xfff < uVar49) {
      lVar27 = *(longlong *)(local_448._0_8_ + -8);
      if (0x1f < (ulonglong)((local_448._0_8_ + -8) - lVar27)) goto LAB_14001b5c6;
      uVar49 = uStack_430 + 0x28;
    }
    thunk_FUN_1400340c0(lVar27,uVar49);
  }
  if (pppppplStack_3e0 == local_3e8) {
    FUN_140027740(&local_3f8,1);
  }
  else {
    pppppppuVar23 = local_3f8;
    if (pppppplStack_3e0 < (longlong ******)0x10) {
      pppppppuVar23 = &local_3f8;
    }
    puVar3 = (undefined2 *)((longlong)pppppppuVar23 + (longlong)local_3e8);
    local_3e8 = (longlong ******)((longlong)local_3e8 + 1);
    *puVar3 = 0x7d;
  }
  uVar33 = (*DAT_140039b08)(0);
  FUN_14002be10(&local_278,uVar33);
  pppppppuVar23 = local_3f8;
  if (pppppplStack_3e0 < (longlong ******)0x10) {
    pppppppuVar23 = &local_3f8;
  }
  pppppplVar30 = (longlong ******)&local_e8;
  FUN_1400256c0(pppppplVar30,pppppppuVar23,local_3e8);
  FUN_1400278b0(&local_398,local_e8,lStack_e0 - (longlong)local_e8);
  if (local_e8 != (longlong ******)0x0) {
    uVar49 = CONCAT26(uStack_d2,CONCAT15(uStack_d3,CONCAT14(uStack_d4,local_d8))) -
             (longlong)local_e8;
    pppppplVar37 = local_e8;
    if (0xfff < uVar49) {
      pppppplVar37 = (longlong ******)local_e8[-1];
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppplVar37)))
      goto LAB_14001b5c6;
      uVar49 = uVar49 + 0x27;
    }
    thunk_FUN_1400340c0(pppppplVar37,uVar49);
  }
  local_e8 = _DAT_140035500;
  lStack_e0 = _UNK_140035508;
  local_d8 = 0x99fff8f1;
  uStack_d4 = 0x94;
  uStack_d3 = 0;
  uStack_d2 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  uStack_cd = 0;
  uStack_cc = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
LAB_140014de6:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar18 = 0;
  uVar26 = *puVar17;
LAB_140014e3b:
  if (uVar18 < uVar49) {
    pppppplVar30 = (longlong ******)&stack0x00411a48;
    goto LAB_140015280;
  }
  bVar60 = *(byte *)((longlong)&local_e8 + uVar18);
  uVar19 = uVar26 + 1;
  bVar52 = (byte)uVar18;
  if (uVar19 <= uVar49) {
    if (uVar49 == uVar19) {
      pppppplVar22 = (longlong ******)
                     (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 - 0x30) * -2 + 0x20);
      uVar19 = uVar26;
      goto LAB_140014e25;
    }
    if (uVar49 == uVar26 + 2) {
      pppppplVar22 = (longlong ******)
                     (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 + 0x70) * -2 + 0x60);
    }
    else {
      if (uVar49 != uVar26 + 5) {
        if (uVar49 != uVar26 + 9) goto LAB_140014e7e;
        cVar53 = (bVar52 - 0x30) + bVar60;
        bVar36 = bVar60 & bVar52 - 0x30;
        cVar58 = 'P';
        goto LAB_140015130;
      }
      pppppplVar22 = (longlong ******)
                     (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 + 0x50) * -2 + 0x20);
      uVar49 = uVar49 + uVar26;
    }
LAB_140015038:
    uVar18 = uVar18 + ~(ulonglong)pppppplVar22;
    uVar19 = uVar26;
    goto LAB_140014e2e;
  }
  pppppplVar22 = (longlong ******)
                 (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 - 0x10) * -2 + 0x60);
LAB_140014e7e:
  if (uVar18 < uVar26) {
    pppppplVar30 = (longlong ******)&stack0x01649c58;
    goto LAB_140015280;
  }
  if (uVar49 < uVar26 + 0x28) {
    pppppplVar22 = (longlong ******)
                   (ulonglong)(byte)((bVar52 + bVar60 + (bVar60 & bVar52 + 0xb0) * -2) - 0x20);
  }
  uVar42 = uVar26 + uVar49;
  if (uVar42 <= uVar18) {
    if (uVar49 < uVar26 + 8) {
      pppppplVar22 = (longlong ******)
                     (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 - 0x10) * -2 + 0x60);
    }
    else if (uVar49 == uVar19) {
      pppppplVar22 = (longlong ******)
                     (ulonglong)(byte)((bVar52 + bVar60 + (bVar60 & bVar52 + 0x60) * -2) - 0x40);
      uVar19 = uVar26;
      goto LAB_140014e25;
    }
    if (uVar42 == 3) {
      cVar53 = bVar52 + 0x60 + (bVar52 + 0x60 & bVar60) * -2;
      goto LAB_140015090;
    }
    if (uVar49 == uVar19) {
      cVar53 = bVar52 + 0x10 + bVar60;
      bVar36 = bVar60 & bVar52 + 0x10;
      cVar58 = -0x70;
      goto LAB_140015130;
    }
    if (uVar49 == uVar26 + 3) {
      pppppplVar22 = (longlong ******)
                     (ulonglong)(byte)(bVar52 + bVar60 + (bVar52 - 0x30 & bVar60) * -2 + 0x20);
      uVar18 = uVar18 - 1;
      uVar19 = uVar26;
      goto LAB_140014e2e;
    }
    if (uVar49 != uVar26 + 6) {
      if (uVar26 + 3 < uVar49) {
        pppppplVar22 = (longlong ******)
                       (ulonglong)(byte)((bVar52 + bVar60 + (bVar52 - 0x20 & bVar60) * -2) - 0x40);
      }
      else if (uVar49 == uVar26 + 2) {
        cVar53 = (bVar52 | 0xc0) + bVar60;
        bVar36 = (bVar52 | 0xc0) & bVar60;
        cVar58 = -0x40;
        goto LAB_140015130;
      }
      *(char *)((longlong)&local_e8 + uVar18) = (char)pppppplVar22;
      uVar19 = uVar26;
      goto LAB_140014e2e;
    }
    bVar36 = bVar52 + bVar60 + (bVar52 + 0x50 & bVar60) * -2 + 0x20;
LAB_140015094:
    pppppplVar22 = (longlong ******)(ulonglong)bVar36;
    bVar52 = bVar52 + bVar60 + (bVar52 + 0x50 & bVar60) * -2 + 0x20;
    *(byte *)((longlong)&local_e8 + uVar18) = bVar52;
    lVar27 = (~uVar26 + uVar18) - (ulonglong)bVar52;
    *(byte *)((longlong)&local_e8 + lVar27) =
         (char)lVar27 + bVar60 + ((char)lVar27 + 0x40U & bVar60) * -2 + -0x80;
    lVar27 = lVar27 - uVar49;
    uVar49 = uVar49 + 1;
    bVar60 = local_f8[lVar27 + 0xe];
    uVar18 = lVar27 - 2;
LAB_140014e25:
    uVar18 = uVar18 + uVar19 + (ulonglong)bVar60;
LAB_140014e2e:
    uVar18 = uVar18 + 1;
    uVar26 = uVar19;
    if (0x28 < uVar18) {
LAB_140015280:
      local_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1a2 = 0;
      uStack_1a0 = 0;
      uStack_19a = 0;
      local_1b8 = (undefined1  [16])0x0;
      ppppppplVar32 = (longlong *******)FUN_140034260(pppppplVar30);
      if ((longlong)ppppppplVar32 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140020740();
      }
      if (ppppppplVar32 < (longlong *******)0x10) {
        puVar20 = local_1b8;
        uVar49 = 0xf;
      }
      else {
        uVar26 = (ulonglong)ppppppplVar32 | 0xf;
        uVar49 = 0x16;
        if (0x16 < uVar26) {
          uVar49 = uVar26;
        }
        if (uVar26 < 0xfff) {
          puVar20 = (undefined1 *)FUN_1400329d0(uVar49 + 1);
        }
        else {
          lVar27 = FUN_1400329d0(uVar49 + 0x28);
          puVar20 = (undefined1 *)(lVar27 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar20 + -8) = lVar27;
        }
        local_1b8._0_8_ = puVar20;
      }
      local_1a8 = (uint)ppppppplVar32;
      uStack_1a4 = (undefined2)((ulonglong)ppppppplVar32 >> 0x20);
      uStack_1a2 = (undefined2)((ulonglong)ppppppplVar32 >> 0x30);
      uStack_1a0 = (undefined6)uVar49;
      uStack_19a = (undefined2)(uVar49 >> 0x30);
      FUN_140034080(puVar20,pppppplVar30,ppppppplVar32);
      puVar20[(longlong)ppppppplVar32] = 0;
      uVar49 = CONCAT26(uStack_262,CONCAT24(uStack_264,local_268));
      pppppppsVar24 = (short *******)&local_278;
      if (0xf < CONCAT17(uStack_259,uStack_260)) {
        pppppppsVar24 = local_278;
      }
      lVar27 = CONCAT26(uStack_1a2,CONCAT24(uStack_1a4,local_1a8));
      if (CONCAT26(uStack_19a,uStack_1a0) - lVar27 < uVar49) {
        pauVar21 = (undefined1 (*) [16])FUN_140027740(local_1b8,uVar49);
      }
      else {
        ppppppplVar32 = (longlong *******)(lVar27 + uVar49);
        local_1a8 = (uint)ppppppplVar32;
        uStack_1a4 = (undefined2)((ulonglong)ppppppplVar32 >> 0x20);
        uStack_1a2 = (undefined2)((ulonglong)ppppppplVar32 >> 0x30);
        pauVar21 = &local_1b8;
        pauVar47 = pauVar21;
        if (0xf < CONCAT26(uStack_19a,uStack_1a0)) {
          pauVar47 = (undefined1 (*) [16])local_1b8._0_8_;
        }
        FUN_140034090(*pauVar47 + lVar27,pppppppsVar24);
        (*pauVar47)[(longlong)ppppppplVar32] = 0;
      }
      uVar33 = *(undefined8 *)pauVar21[1];
      uVar7 = *(undefined8 *)(pauVar21[1] + 8);
      local_178 = (undefined4)uVar33;
      uStack_174 = (undefined2)((ulonglong)uVar33 >> 0x20);
      sStack_172 = (short)((ulonglong)uVar33 >> 0x30);
      uStack_170 = (undefined3)uVar7;
      uStack_16d = (undefined3)((ulonglong)uVar7 >> 0x18);
      uStack_16a = (undefined2)((ulonglong)uVar7 >> 0x30);
      _local_188 = *pauVar21;
      *(undefined8 *)pauVar21[1] = 0;
      *(undefined8 *)(pauVar21[1] + 8) = 0xf;
      (*pauVar21)[0] = 0;
      uVar49 = CONCAT26(sStack_172,CONCAT24(uStack_174,local_178));
      uVar26 = CONCAT26(uStack_16a,CONCAT33(uStack_16d,uStack_170));
      if (uVar26 == uVar49) {
        pppppplVar22 = (longlong ******)FUN_140027740(local_188,1);
      }
      else {
        lVar27 = uVar49 + 1;
        local_178 = (undefined4)lVar27;
        uStack_174 = (undefined2)((ulonglong)lVar27 >> 0x20);
        sStack_172 = (short)((ulonglong)lVar27 >> 0x30);
        pppppplVar22 = (longlong ******)local_188;
        auVar40 = (undefined1  [8])pppppplVar22;
        if (0xf < uVar26) {
          auVar40 = local_188;
        }
        *(undefined2 *)((longlong)auVar40 + uVar49) = 10;
      }
      local_148 = (longlong *******)*pppppplVar22;
      pppppppuStack_140 = (undefined8 *******)pppppplVar22[1];
      ppppplVar34 = pppppplVar22[2];
      pppppplStack_130 = (longlong ******)pppppplVar22[3];
      local_138 = SUB84(ppppplVar34,0);
      uStack_134 = (undefined2)((ulonglong)ppppplVar34 >> 0x20);
      uStack_132 = (undefined2)((ulonglong)ppppplVar34 >> 0x30);
      pppppplVar22[2] = (longlong *****)0x0;
      pppppplVar22[3] = (longlong *****)0xf;
      *(undefined1 *)pppppplVar22 = 0;
      uVar49 = CONCAT26(uStack_382,CONCAT24(uStack_384,local_388));
      pppppppuVar23 = &local_398;
      if ((undefined8 ******)0xf < ppppppuStack_380) {
        pppppppuVar23 = local_398;
      }
      lVar27 = CONCAT26(uStack_132,CONCAT24(uStack_134,local_138));
      if ((ulonglong)((longlong)pppppplStack_130 - lVar27) < uVar49) {
        ppppppplVar25 = (longlong *******)FUN_140027740(&local_148,uVar49);
      }
      else {
        lVar4 = lVar27 + uVar49;
        local_138 = (undefined4)lVar4;
        uStack_134 = (undefined2)((ulonglong)lVar4 >> 0x20);
        uStack_132 = (undefined2)((ulonglong)lVar4 >> 0x30);
        ppppppplVar25 = (longlong *******)&local_148;
        ppppppplVar32 = ppppppplVar25;
        if ((longlong ******)0xf < pppppplStack_130) {
          ppppppplVar32 = local_148;
        }
        FUN_140034090(lVar27 + (longlong)ppppppplVar32,pppppppuVar23);
        *(undefined1 *)((longlong)ppppppplVar32 + lVar4) = 0;
      }
      local_308 = (undefined8 *******)*ppppppplVar25;
      pppppplStack_300 = ppppppplVar25[1];
      pppppplVar22 = ppppppplVar25[2];
      pppppplStack_2f0 = ppppppplVar25[3];
      local_2f8 = SUB84(pppppplVar22,0);
      uStack_2f4 = (undefined2)((ulonglong)pppppplVar22 >> 0x20);
      sStack_2f2 = (short)((ulonglong)pppppplVar22 >> 0x30);
      ppppppplVar25[2] = (longlong ******)0x0;
      ppppppplVar25[3] = (longlong ******)0xf;
      *(undefined1 *)ppppppplVar25 = 0;
      if ((longlong ******)0xf < pppppplStack_130) {
        pppppplVar22 = (longlong ******)((longlong)pppppplStack_130 + 1);
        ppppppplVar25 = local_148;
        if ((longlong ******)0xfff < pppppplVar22) {
          ppppppplVar25 = (longlong *******)local_148[-1];
          if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)ppppppplVar25)))
          goto LAB_14001b5c6;
          pppppplVar22 = pppppplStack_130 + 5;
        }
        thunk_FUN_1400340c0(ppppppplVar25,pppppplVar22);
      }
      local_138 = 0;
      uStack_134 = 0;
      uStack_132 = 0;
      pppppplStack_130 = (longlong ******)0xf;
      local_148 = (longlong *******)((ulonglong)local_148 & 0xffffffffffffff00);
      uVar49 = CONCAT26(uStack_16a,CONCAT33(uStack_16d,uStack_170));
      if (0xf < uVar49) {
        uVar26 = uVar49 + 1;
        auVar40 = local_188;
        if (0xfff < uVar26) {
          auVar40 = *(undefined1 (*) [8])((longlong)local_188 + -8);
          if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)auVar40)))
          goto LAB_14001b5c6;
          uVar26 = uVar49 + 0x28;
        }
        thunk_FUN_1400340c0(auVar40,uVar26);
      }
      local_178 = 0;
      uStack_174 = 0;
      sStack_172 = 0;
      uStack_170 = 0xf;
      uStack_16d = 0;
      uStack_16a = 0;
      auVar14[0xf] = 0;
      auVar14._0_15_ = stack0xfffffffffffffe79;
      _local_188 = auVar14 << 8;
      uVar49 = CONCAT26(uStack_19a,uStack_1a0);
      if (0xf < uVar49) {
        uVar26 = uVar49 + 1;
        lVar27 = local_1b8._0_8_;
        if (0xfff < uVar26) {
          lVar27 = *(longlong *)(local_1b8._0_8_ + -8);
          if (0x1f < (ulonglong)((local_1b8._0_8_ + -8) - lVar27)) goto LAB_14001b5c6;
          uVar26 = uVar49 + 0x28;
        }
        thunk_FUN_1400340c0(lVar27,uVar26);
      }
      local_e8 = _DAT_140035510;
      lStack_e0 = _UNK_140035518;
      local_d8 = (undefined4)_DAT_140035520;
      uStack_d4 = (undefined1)((ulonglong)_DAT_140035520 >> 0x20);
      uStack_d3 = (undefined1)((ulonglong)_DAT_140035520 >> 0x28);
      uStack_d2 = (undefined2)((ulonglong)_DAT_140035520 >> 0x30);
      uStack_d0 = (undefined2)_UNK_140035528;
      uStack_ce = (undefined1)((ulonglong)_UNK_140035528 >> 0x10);
      uStack_cd = (undefined1)((ulonglong)_UNK_140035528 >> 0x18);
      uStack_cc = (undefined1)((ulonglong)_UNK_140035528 >> 0x20);
      uStack_cb = (undefined1)((ulonglong)_UNK_140035528 >> 0x28);
      uStack_ca = (undefined1)((ulonglong)_UNK_140035528 >> 0x30);
      uStack_c9 = (undefined1)((ulonglong)_UNK_140035528 >> 0x38);
      uStack_c8 = (undefined1)_DAT_140035530;
      uStack_c7 = (undefined2)((ulonglong)_DAT_140035530 >> 8);
      uStack_c5 = (undefined1)((ulonglong)_DAT_140035530 >> 0x18);
      uStack_c4 = (undefined1)((ulonglong)_DAT_140035530 >> 0x20);
      uStack_c3 = (undefined1)((ulonglong)_DAT_140035530 >> 0x28);
      uStack_c2 = (undefined1)((ulonglong)_DAT_140035530 >> 0x30);
      uStack_c1 = (undefined1)((ulonglong)_DAT_140035530 >> 0x38);
      uStack_c0 = (undefined1)_UNK_140035538;
      uStack_bf = (undefined1)((ulonglong)_UNK_140035538 >> 8);
      uStack_be = (undefined1)((ulonglong)_UNK_140035538 >> 0x10);
      uStack_bd = (undefined1)((ulonglong)_UNK_140035538 >> 0x18);
      uStack_bc = (undefined1)((ulonglong)_UNK_140035538 >> 0x20);
      uStack_bb = (undefined2)((ulonglong)_UNK_140035538 >> 0x28);
      uStack_b9 = (undefined1)((ulonglong)_UNK_140035538 >> 0x38);
      uStack_b8 = (undefined2)_DAT_140035540;
      uStack_b6 = (undefined2)((ulonglong)_DAT_140035540 >> 0x10);
      uStack_b4 = (undefined4)((ulonglong)_DAT_140035540 >> 0x20);
      uStack_b0 = (undefined2)_UNK_140035548;
      uStack_ae = (undefined6)((ulonglong)_UNK_140035548 >> 0x10);
      local_a8 = 0x4c;
      local_a7 = (undefined1  [16])0x0;
      local_97 = 0;
LAB_140015671:
      puVar17 = (ulonglong *)FUN_140031690();
      uVar49 = *puVar17;
      puVar17 = (ulonglong *)FUN_1400316a0();
      uVar26 = *puVar17;
LAB_140015683:
      uVar18 = 0;
LAB_1400156ca:
      if (uVar49 <= uVar18) {
        bVar60 = *(byte *)((longlong)&local_e8 + uVar18);
        local_158 = (longlong *******)CONCAT71(local_158._1_7_,bVar60);
        ppppppplVar25 = (longlong *******)(ulonglong)bVar60;
        iVar56 = (int)uVar18 + (uint)bVar60 + 0x1ca7cc82 +
                 ((int)uVar18 + 0x1ca7cc82U & (uint)bVar60) * -2;
        bVar52 = (char)iVar56 + 0x72;
        uVar41 = CONCAT31((int3)((uint)iVar56 >> 8),bVar52);
        cVar53 = (char)uVar18;
        local_50 = ppppppplVar25;
        local_80 = (longlong *******)CONCAT44(local_80._4_4_,uVar41);
LAB_140015764:
        bVar36 = bVar52;
        if (uVar49 < uVar26 + 1) {
LAB_1400157ad:
          if (uVar26 <= uVar18) goto code_r0x0001400157b6;
LAB_1400163d1:
          pppppplVar22 = (longlong ******)&stack0x017d6670;
          goto LAB_1400163e1;
        }
        if (uVar49 != uVar26 + 1) {
          if (uVar49 != uVar26 + 2) {
            if (uVar49 == uVar26 + 3) {
              ppppppplVar32 =
                   (longlong *******)
                   (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x8eU) * -2 + 0xac);
              goto LAB_140016218;
            }
            if (uVar49 == uVar26 + 5) {
              ppppppplVar32 =
                   (longlong *******)
                   (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x96U) * -2 + 0x7c);
              goto LAB_1400156ad;
            }
            bVar36 = (byte)ppppppplVar32;
            if (uVar49 != uVar26 + 6) goto LAB_1400157ad;
            ppppppplVar32 =
                 (longlong *******)
                 (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0xa6U) * -2 + 0x1c);
            goto LAB_140015f6d;
          }
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x8aU) * -2) - 0x3c);
          goto LAB_140016255;
        }
        ppppppplVar32 =
             (longlong *******)
             (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x86U) * -2) - 0x24);
        goto LAB_14001628e;
      }
LAB_1400163c8:
      pppppplVar22 = (longlong ******)&stack0x016532f2;
      goto LAB_1400163e1;
    }
    goto LAB_140014e3b;
  }
  if (uVar49 == uVar26 + 2) {
    cVar53 = bVar52 + 0x20 + bVar60;
    bVar36 = bVar52 + 0x20 & bVar60;
    cVar58 = ' ';
LAB_140015130:
    pppppplVar22 = (longlong ******)(ulonglong)(byte)(cVar53 + bVar36 * -2 + cVar58);
    *(byte *)((longlong)&local_e8 + uVar18) =
         bVar52 + bVar60 + (bVar60 & bVar52 + 0x90) * -2 + -0x60;
    uVar18 = uVar18 - 1;
    goto LAB_140014e2e;
  }
  if (uVar49 == uVar26 + 0x10) {
    bVar36 = bVar52 + bVar60 + ((bVar52 | 0xc0) & bVar60) * -2 + 0x80;
    pppppplVar22 = (longlong ******)(ulonglong)bVar36;
    *(byte *)((longlong)&local_e8 + uVar18) =
         bVar52 + bVar60 + (bVar52 + 0x70 & bVar60) * -2 + bVar36 + '`';
    uVar49 = uVar42;
    goto LAB_140015038;
  }
  if (uVar49 == uVar26 + 10) {
    cVar53 = bVar52 + bVar60 + '`' + (bVar60 & bVar52 + 0x60) * -2;
LAB_140015090:
    bVar36 = cVar53 + 0x60;
    goto LAB_140015094;
  }
  if (uVar49 == uVar26 + 3) {
    pppppplVar22 = (longlong ******)
                   (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 + 0x20) * -2 + 0x40);
    uVar19 = uVar26;
    goto LAB_140014e25;
  }
  pppppplVar22 = (longlong ******)
                 (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 - 0x30) * -2 + 0x20);
  goto LAB_140014de6;
code_r0x0001400157b6:
  uVar19 = uVar26 + uVar49;
joined_r0x0001400157bd:
  if (uVar18 < uVar19) {
    while (uVar49 != uVar26 + 0x400) {
      bVar61 = uVar49 == uVar26 + 0x10;
      bVar62 = uVar49 == uVar26 + 9;
      bVar63 = uVar49 == uVar26 + 0x7a;
      bVar64 = uVar49 == uVar26 + 0x1000;
      bVar65 = uVar49 == uVar26 + 10;
      bVar66 = uVar49 == uVar26 + 8;
      uVar19 = uVar26;
      while( true ) {
        if (uVar49 == uVar19 + 0x61) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 - 0x20U) * -2) - 0x40);
          goto LAB_140015f93;
        }
        if (bVar66) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0x1cU) * -2 + 0xa8);
          uVar18 = uVar18 - 1;
          goto LAB_1400156ba;
        }
        if (bVar65) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0x18U) * -2 + 0x90);
          goto LAB_140015fcb;
        }
        uVar26 = uVar19;
        if (bVar64) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0x14U) * -2 + 0x78);
          goto LAB_1400156ad;
        }
        if (bVar63) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0x10U) * -2 + 0x60);
          goto LAB_1400156b0;
        }
        if (bVar62) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0xcU) * -2 + 0x48);
          goto LAB_140016218;
        }
        if (bVar61) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 8U) * -2 + 0x30);
          goto LAB_140016255;
        }
        uVar49 = uVar19 + 0x5a;
        if (uVar49 < uVar19 + 0x74) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x86U) * -2) - 0x24);
          goto LAB_140015671;
        }
        uVar26 = uVar19 + 100;
        if (uVar49 < uVar19 + 0x8c) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x8aU) * -2) - 0x3c);
          goto LAB_140015683;
        }
        if (uVar49 < uVar19 + 0xa5) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 + 0x8eU & bVar60) * -2 + 0xac);
          if (uVar49 <= uVar18) goto LAB_140015764;
          goto LAB_1400163c8;
        }
        if (uVar49 < uVar19 + 0x8e) {
          if (uVar18 < uVar26) goto LAB_1400163d1;
          uVar19 = uVar26 + uVar49;
          bVar36 = cVar53 + bVar60 + (cVar53 + 0x92U & bVar60) * -2 + 0x94;
          goto joined_r0x0001400157bd;
        }
        if (uVar49 < uVar19 + 0x84) break;
        if (uVar49 < uVar19 + 0xa4) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x9aU) * -2 + 100);
          lVar27 = uVar26 + uVar49;
          uVar19 = uVar26;
          goto joined_r0x00014001635b;
        }
        if (uVar49 < uVar19 + 0xbe) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x9eU) * -2 + 0x4c);
          goto LAB_140015f2a;
        }
        if (uVar49 < uVar19 + 0x65) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0xa2U) * -2 + 0x34);
          goto LAB_140015c3f;
        }
        if (uVar19 + 0xa6 <= uVar49) {
          uVar49 = uVar19 + 200;
          uVar26 = uVar19 + 0xf2;
          if (uVar19 + 0xf3 < uVar49) {
            ppppppplVar32 =
                 (longlong *******)
                 (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x30U) * -2) - 0x20);
            goto LAB_14001628e;
          }
          if (uVar19 + 0xf5 < uVar49) {
            ppppppplVar32 =
                 (longlong *******)
                 (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x34U) * -2) - 0x38);
            goto LAB_140016255;
          }
          if (uVar19 + 0x134 < uVar49) {
            ppppppplVar32 =
                 (longlong *******)
                 (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x38U) * -2 + 0xb0);
            goto LAB_140016218;
          }
          if (uVar19 + 0x172 < uVar49) {
            ppppppplVar32 =
                 (longlong *******)
                 (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x3cU) * -2 + 0x98);
            uVar19 = uVar26;
            goto LAB_1400156b0;
          }
          if (uVar19 + 0xf4 < uVar49) {
            ppppppplVar32 =
                 (longlong *******)
                 (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x40U) * -2 + 0x80);
            goto LAB_1400156ad;
          }
          if (uVar19 + 0xf6 < uVar49) {
            ppppppplVar32 =
                 (longlong *******)
                 (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x44U) * -2 + 0x68);
            uVar19 = uVar26;
            goto LAB_140015fcb;
          }
          if (uVar19 + 0x156 < uVar49) {
            ppppppplVar32 =
                 (longlong *******)
                 (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x48U) * -2 + 0x50);
            goto LAB_140015f96;
          }
          if (uVar19 + 0x2f2 < uVar49) {
            ppppppplVar32 =
                 (longlong *******)
                 (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x4cU) * -2 + 0x38);
            uVar19 = uVar26;
            goto LAB_140015f93;
          }
          if (uVar49 <= uVar19 + 0xf7) {
            uVar49 = uVar19 + 0xf8;
            uVar26 = uVar19 + 0x178;
          }
        }
        bVar66 = uVar49 == uVar26 + 8;
        bVar65 = uVar49 == uVar26 + 10;
        bVar64 = uVar49 == uVar26 + 0x1000;
        bVar63 = uVar49 == uVar26 + 0x7a;
        bVar62 = uVar49 == uVar26 + 9;
        bVar61 = uVar49 == uVar26 + 0x10;
        uVar19 = uVar26;
        if (uVar49 == uVar26 + 0x400) goto LAB_140015a4c;
      }
      if (uVar26 + uVar49 <= uVar18) {
        bVar36 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x96U) * -2 + 0x7c;
        goto LAB_140015eda;
      }
    }
LAB_140015a4c:
    ppppppplVar32 =
         (longlong *******)
         (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 - 0x24U) * -2) - 0x28);
    goto LAB_140015f6d;
  }
  if (uVar49 < uVar26 + 8) {
    bVar36 = cVar53 + bVar60 + (cVar53 + 0xaaU & bVar60) * -2 + 4;
  }
LAB_140015eda:
  ppppppplVar32 = (longlong *******)(ulonglong)bVar36;
  uVar19 = uVar26;
  if (uVar49 < uVar26 + 0x7a) {
    ppppppplVar32 = (longlong *******)(ulonglong)uVar41;
    lVar27 = uVar26 + uVar49;
joined_r0x00014001635b:
    uVar26 = uVar19;
    if (lVar27 == 0x20) {
      ppppppplVar32 =
           (longlong *******)(ulonglong)(byte)(cVar53 + (bVar60 & cVar53 - 0x2cU) * -2 + 8);
      goto LAB_140016218;
    }
    if (uVar19 + 0x28 < uVar49) {
      ppppppplVar32 =
           (longlong *******)(ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 6U) * -2 + 0x24)
      ;
LAB_140015f2a:
      uVar19 = uVar26;
      if (1 < uVar49) {
        ppppppplVar32 =
             (longlong *******)
             (ulonglong)(byte)(cVar53 + bVar60 * '\x02' + (bVar60 & cVar53 - 0x30U) * -2 + 0x20);
        goto LAB_140015fcb;
      }
      if (uVar26 + 3 < uVar49) {
        uVar49 = 1;
        uVar26 = 0xfffffffffffffffd;
      }
      else {
        if (uVar49 == uVar26 + 1) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0xa8U) * -2 + 0x10);
          goto LAB_14001628e;
        }
        if (uVar49 == uVar26 + 2) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0xb0U) * -2) - 0x20);
LAB_140016218:
          bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 0x56U) * -2) - 4;
          *(byte *)((longlong)&local_e8 + uVar18) = bVar52;
          uVar18 = (uVar18 - bVar52) + ~uVar26;
          uVar26 = uVar26 + 1;
LAB_140016255:
          *(byte *)((longlong)&local_e8 + uVar18) =
               (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 - 0x28U) * -2 + -0x10;
          lVar27 = uVar18 - uVar49;
          uVar49 = uVar49 + 1;
          ppppppplVar25 = (longlong *******)(ulonglong)(byte)local_f8[lVar27 + 0xe];
          uVar18 = lVar27 - 2;
LAB_14001628e:
          uVar18 = uVar18 + uVar26 + (longlong)ppppppplVar25;
          uVar19 = uVar26;
LAB_1400156ba:
          uVar18 = uVar18 + 1;
          uVar26 = uVar19;
          if (0x58 < uVar18) {
            pppppplVar22 = (longlong ******)&local_e8;
LAB_1400163e1:
            uVar49 = FUN_140034260();
            _local_188 = (undefined1  [16])0x0;
            local_178 = 0;
            uStack_174 = 0;
            sStack_172 = 0;
            uStack_170 = 0;
            uStack_16d = 0;
            uStack_16a = 0;
            if ((longlong)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140020740();
            }
            uVar26 = 0xf;
            pppppplVar30 = (longlong ******)local_188;
            if (0xf < uVar49) {
              uVar18 = uVar49 | 0xf;
              uVar26 = 0x16;
              if (0x16 < uVar18) {
                uVar26 = uVar18;
              }
              if (uVar18 < 0xfff) {
                pppppplVar30 = (longlong ******)FUN_1400329d0(uVar26 + 1);
              }
              else {
                ppppplVar34 = (longlong *****)FUN_1400329d0(uVar26 + 0x28);
                pppppplVar30 = (longlong ******)((longlong)ppppplVar34 + 0x27U & 0xffffffffffffffe0)
                ;
                pppppplVar30[-1] = ppppplVar34;
              }
              local_188 = (undefined1  [8])pppppplVar30;
            }
            local_178 = (undefined4)uVar49;
            uStack_174 = (undefined2)(uVar49 >> 0x20);
            sStack_172 = (short)(uVar49 >> 0x30);
            uStack_170 = (undefined3)uVar26;
            uStack_16d = (undefined3)(uVar26 >> 0x18);
            uStack_16a = (undefined2)(uVar26 >> 0x30);
            FUN_140034080(pppppplVar30,pppppplVar22,uVar49);
            *(undefined1 *)((longlong)pppppplVar30 + uVar49) = 0;
            uVar49 = CONCAT26(sStack_172,CONCAT24(uStack_174,local_178));
            auVar40 = (undefined1  [8])local_188;
            if (0xf < CONCAT26(uStack_16a,CONCAT33(uStack_16d,uStack_170))) {
              auVar40 = local_188;
            }
            _local_348 = (undefined1  [16])0x0;
            local_338 = 0;
            if (uVar49 != 0) {
              if (sStack_172 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_140020c20();
              }
              if (uVar49 < 0x1000) {
                uVar26 = FUN_1400329d0(uVar49);
              }
              else {
                lVar27 = FUN_1400329d0(uVar49 + 0x27);
                uVar26 = lVar27 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(uVar26 - 8) = lVar27;
              }
              uStack_340 = uVar26;
              local_348 = (undefined1  [8])uVar26;
              local_338 = uVar26 + uVar49;
              FUN_140034080(uVar26,auVar40,uVar49);
              uStack_340 = uVar26 + uVar49;
            }
            uVar49 = CONCAT26(sStack_2f2,CONCAT24(uStack_2f4,local_2f8));
            pppppppuVar23 = local_308;
            if (pppppplStack_2f0 < (longlong ******)0x10) {
              pppppppuVar23 = &local_308;
            }
            _local_328 = (undefined1  [16])0x0;
            local_318 = 0;
            if (uVar49 != 0) {
              if (sStack_2f2 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_140020c20();
              }
              if (uVar49 < 0x1000) {
                uVar26 = FUN_1400329d0(uVar49);
              }
              else {
                lVar27 = FUN_1400329d0(uVar49 + 0x27);
                uVar26 = lVar27 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(uVar26 - 8) = lVar27;
              }
              uStack_320 = uVar26;
              local_328 = (undefined1  [8])uVar26;
              local_318 = uVar26 + uVar49;
              FUN_140034080(uVar26,pppppppuVar23,uVar49);
              uStack_320 = uVar26 + uVar49;
            }
            local_50 = &local_e8;
            FUN_1400295c0(local_50,local_348,local_328);
            FUN_1400278b0(local_1b8,local_e8,lStack_e0 - (longlong)local_e8);
            if (local_e8 != (longlong ******)0x0) {
              uVar49 = CONCAT26(uStack_d2,CONCAT15(uStack_d3,CONCAT14(uStack_d4,local_d8))) -
                       (longlong)local_e8;
              pppppplVar22 = local_e8;
              if (0xfff < uVar49) {
                pppppplVar22 = (longlong ******)local_e8[-1];
                if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppplVar22)))
                goto LAB_14001b5c6;
                uVar49 = uVar49 + 0x27;
              }
              thunk_FUN_1400340c0(pppppplVar22,uVar49);
            }
            local_e8 = _DAT_140035550;
            lStack_e0 = _UNK_140035558;
            local_d8 = (undefined4)_DAT_140035560;
            uStack_d4 = (undefined1)((ulonglong)_DAT_140035560 >> 0x20);
            uStack_d3 = (undefined1)((ulonglong)_DAT_140035560 >> 0x28);
            uStack_d2 = (undefined2)((ulonglong)_DAT_140035560 >> 0x30);
            uStack_d0 = (undefined2)_UNK_140035568;
            uStack_ce = (undefined1)((ulonglong)_UNK_140035568 >> 0x10);
            uStack_cd = (undefined1)((ulonglong)_UNK_140035568 >> 0x18);
            uStack_cc = (undefined1)((ulonglong)_UNK_140035568 >> 0x20);
            uStack_cb = (undefined1)((ulonglong)_UNK_140035568 >> 0x28);
            uStack_ca = (undefined1)((ulonglong)_UNK_140035568 >> 0x30);
            uStack_c9 = (undefined1)((ulonglong)_UNK_140035568 >> 0x38);
            uStack_c8 = 0x48;
            uStack_c7 = 0x7475;
            uStack_c5 = 0x6b;
            uStack_c4 = 0;
            uStack_c3 = 0;
            uStack_c2 = 0;
            uStack_c1 = 0;
            uStack_c0 = 0;
            uStack_bf = 0;
            uStack_be = 0;
            uStack_bd = 0;
            uStack_bc = 0;
            uStack_bb = 0;
            uStack_b9 = 0;
            uStack_b8 = 0;
            uStack_b6 = 0;
            uStack_b4 = 0;
            uStack_b0 = 0;
            goto LAB_14001667f;
          }
          goto LAB_1400156ca;
        }
        if (uVar49 == uVar26 + 3) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0xbcU) * -2 + 0x98);
          goto LAB_140015fcb;
        }
        if (uVar49 == uVar26 + 6) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0x3cU) * -2 + 0x68);
          goto LAB_140015f93;
        }
        if (uVar49 == uVar26 + 9) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0x38U) * -2 + 0x50);
          goto LAB_140015f6d;
        }
LAB_140015c3f:
        if (uVar26 < 1000) {
          *(char *)((longlong)&local_e8 + uVar18) = (char)ppppppplVar32;
          uVar19 = uVar26;
          goto LAB_1400156ba;
        }
      }
      ppppppplVar32 =
           (longlong *******)
           (ulonglong)
           (byte)((cVar53 + bVar60 + -0x34 + (bVar60 & cVar53 - 0x34U) * -2) * '\x02' - 0x28);
    }
    else {
      if (uVar49 != uVar19 + 1) {
        if (uVar49 == uVar19 + 3) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 6U) * -2) - 0x24);
          goto LAB_140015f96;
        }
        if (uVar49 == uVar19 + 2) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x12U) * -2 + 0x94);
          goto LAB_1400156b0;
        }
        if (uVar49 == uVar19 + 4) {
          ppppppplVar32 =
               (longlong *******)
               (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x16U) * -2 + 0x7c);
          goto LAB_140016218;
        }
        goto LAB_140015f2a;
      }
      ppppppplVar32 =
           (longlong *******)(ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 2U) * -2 + 0xc);
    }
LAB_140015f6d:
    *(byte *)((longlong)&local_e8 + uVar18) = cVar53 + bVar60 + (bVar60 & cVar53 + 0x4eU) * -2 + ','
    ;
    uVar19 = uVar26;
  }
  else {
    if (uVar49 == uVar26 + 1) {
      ppppppplVar32 =
           (longlong *******)(ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x54U) * -2 + 8)
      ;
      goto LAB_14001628e;
    }
    if (uVar49 == uVar26 + 3) {
      ppppppplVar32 =
           (longlong *******)
           (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x5cU) * -2) - 0x28);
      goto LAB_140016218;
    }
    if (uVar49 == uVar26 + 5) {
      ppppppplVar32 =
           (longlong *******)
           (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x68U) * -2 + 0x90);
LAB_140015fcb:
      *(byte *)((longlong)&local_e8 + uVar18) =
           cVar53 + bVar60 + (bVar60 & cVar53 + 0x52U) * -2 + (char)ppppppplVar32 + '\x14';
      uVar26 = uVar19;
LAB_1400156ad:
      uVar49 = uVar49 + uVar26;
      uVar19 = uVar26;
LAB_1400156b0:
      uVar18 = uVar18 + ~(ulonglong)ppppppplVar32;
      goto LAB_1400156ba;
    }
    if (uVar49 == uVar26 + 6) {
      ppppppplVar32 =
           (longlong *******)
           (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x6cU) * -2 + 0x78);
      goto LAB_140015f96;
    }
    if (uVar49 != uVar26 + 2) {
      if (uVar49 != uVar26 + 7) {
        lVar27 = uVar26 + uVar49;
        goto joined_r0x00014001635b;
      }
      ppppppplVar32 =
           (longlong *******)
           (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x74U) * -2 + 0x48);
      goto LAB_140015f6d;
    }
    ppppppplVar32 =
         (longlong *******)
         (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x70U) * -2 + 0x60);
  }
LAB_140015f93:
  uVar26 = uVar19 + 1;
LAB_140015f96:
  uVar18 = uVar18 - 1;
  uVar19 = uVar26;
  goto LAB_1400156ba;
LAB_14001667f:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      local_50 = (longlong *******)&stack0x00484ba1;
      goto LAB_140016a0d;
    }
    bVar60 = *(byte *)((longlong)&local_e8 + uVar18);
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    if (uVar49 < uVar19) {
LAB_140016744:
      if (uVar18 < uVar26) {
        local_50 = (longlong *******)&stack0x016340d4;
        goto LAB_140016a0d;
      }
      if (uVar26 + uVar49 <= uVar18) {
        if (uVar26 + 0x2a <= uVar49) {
          if (uVar49 == uVar19) goto LAB_14001670e;
          cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x2fU) * -2 + '\x1a';
          if (uVar49 != uVar19) goto LAB_140016845;
LAB_140016910:
          *(byte *)((longlong)&local_e8 + uVar18) =
               cVar53 + bVar60 + (bVar60 & cVar53 + 0x7bU) * -2 + '\x1e';
          uVar42 = uVar19;
          goto LAB_140016934;
        }
        cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x33U) * -2 + '2';
        if (uVar49 == uVar19) goto LAB_140016910;
LAB_140016845:
        if (uVar49 == uVar26 + 3) {
          bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 - 0x25U) * -2) - 0x22;
          goto LAB_1400169e7;
        }
        if (uVar49 == uVar26 + 2) goto LAB_1400166d5;
        if (uVar49 == uVar26 + 8) goto LAB_14001670e;
        if (8 < uVar49) {
          bVar52 = cVar53 + bVar60 * '\x02' + (bVar60 & cVar53 + 0x48U) * -2 + 0x50;
          goto LAB_1400169be;
        }
        uVar42 = uVar26;
        if (uVar49 == uVar26 + 4) goto LAB_140016934;
        if (2 < uVar26 || uVar49 == uVar26 + 6) goto LAB_140016910;
        *(char *)((longlong)&local_e8 + uVar18) = cVar58;
        goto LAB_140016718;
      }
      if (uVar49 == uVar26 + 0x20) goto LAB_140016910;
      uVar42 = uVar19;
      if ((uVar49 != uVar26 + 10) && (uVar42 = uVar26, uVar49 != uVar26 + 8)) {
        if (uVar49 == uVar26 + 5) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x1cU) * -2 + 0xa8;
          goto LAB_1400169be;
        }
        if (uVar49 == uVar26 + 3) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x7eU) * -2 + 0xc;
          goto LAB_1400169e7;
        }
        goto LAB_14001667f;
      }
LAB_140016934:
      uVar26 = uVar42;
      uVar18 = uVar18 - 1;
    }
    else {
      if (uVar49 == uVar19) {
LAB_14001670e:
        uVar19 = (ulonglong)bVar60;
        uVar18 = uVar18 + uVar26;
      }
      else {
        if (uVar49 == uVar26 + 3) {
          bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 0xafU) * -2) - 0x1a;
          *(byte *)((longlong)&local_e8 + uVar18) = bVar52;
          uVar18 = (~uVar26 + uVar18) - (ulonglong)bVar52;
          uVar26 = uVar19;
LAB_1400166d5:
          *(byte *)((longlong)&local_e8 + uVar18) =
               (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 + 0x7cU) * -2 + '\x18';
          lVar27 = uVar18 - uVar49;
          uVar49 = uVar49 + 1;
          bVar60 = local_f8[lVar27 + 0xe];
          uVar18 = lVar27 - 2;
          goto LAB_14001670e;
        }
        if (uVar49 == uVar26 + 4) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x31U) * -2 + 0x26;
        }
        else {
          if (uVar49 != uVar26 + 6) {
            if (uVar49 != uVar26 + 2) goto LAB_140016744;
            goto LAB_140016910;
          }
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x69U) * -2 + 0x8a;
LAB_1400169be:
          *(byte *)((longlong)&local_e8 + uVar18) =
               cVar53 + bVar60 + (bVar60 & cVar53 + 0x15U) * -2 + bVar52 + -0x7e;
        }
LAB_1400169e7:
        uVar49 = uVar49 + uVar26;
        uVar19 = ~(ulonglong)bVar52;
      }
      uVar18 = uVar18 + uVar19;
    }
LAB_140016718:
    uVar18 = uVar18 + 1;
    if (0x39 < uVar18) {
LAB_140016a0d:
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_68._8_8_;
      local_68 = auVar15 << 0x40;
      auStack_74 = SUB1612((undefined1  [16])0x0,4);
      _local_78 = 0x45445b50596d;
      local_80 = (longlong *******)local_78;
      break;
    }
  } while( true );
LAB_140016a59:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar41 = local_1a8;
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      local_80 = (longlong *******)&stack0x009c4d24;
LAB_140016db2:
      break;
    }
    bVar60 = local_78[uVar18];
    uVar42 = (ulonglong)bVar60;
    uVar19 = uVar26 + 1;
    bVar52 = (byte)uVar18;
    if (uVar49 < uVar19) {
LAB_140016b22:
      if (uVar18 < uVar26) {
        local_80 = (longlong *******)&stack0x0165c198;
        goto LAB_140016db2;
      }
      if (uVar26 + uVar49 <= uVar18) {
        if (uVar49 < uVar26 + 4) {
          cVar57 = bVar52 + bVar60 + (bVar60 & bVar52 + 0x8c) * -2 + -0x48;
          if (uVar49 <= uVar26 + 0x10) goto LAB_140016d22;
LAB_140016c18:
          cVar57 = bVar52 + bVar60 + (bVar60 & bVar52 + 0x5c) * -2 + -0x28;
        }
        else {
          if (uVar49 == uVar19) goto LAB_140016ae8;
          if (uVar49 == uVar26 + 4) {
            bVar36 = bVar52 + bVar60 + (bVar60 & (bVar52 | 0x40)) * -2 + 0x80;
            goto LAB_140016ce5;
          }
          cVar57 = bVar52 + bVar60 + (bVar60 & bVar52 + 0x7c) * -2 + '\x18';
          if (uVar26 + 0x10 < uVar49) goto LAB_140016c18;
LAB_140016d22:
          if (uVar49 == uVar19) goto LAB_140016d27;
          uVar43 = uVar26;
          if (uVar49 == uVar26 + 3) goto LAB_140016d59;
          if (uVar49 == uVar26 + 5) {
            bVar36 = bVar52 + bVar60 + (bVar60 & bVar52 - 0x14) * -2 + 0x78;
            goto LAB_140016ce5;
          }
          if (uVar49 == uVar26 + 6) goto LAB_140016ae8;
        }
        if (uVar49 == uVar19) goto LAB_140016ae8;
        if (uVar49 == uVar26 + 2) goto LAB_140016aaf;
        cVar58 = '(';
        cVar53 = 'h';
        if (uVar49 == uVar26 + 3) goto LAB_140016b58;
        uVar43 = uVar26;
        if (uVar49 == uVar26 + 7) goto LAB_140016d59;
        if (3 < uVar26) goto LAB_140016d27;
        local_78[uVar18] = cVar57;
        goto LAB_140016af2;
      }
      if (uVar49 == uVar26 + 0x10) {
LAB_140016d27:
        local_78[uVar18] = bVar52 + bVar60 + (bVar60 & bVar52 + 0x54) * -2 + '\b';
        uVar43 = uVar19;
        goto LAB_140016d59;
      }
      cVar58 = -0x10;
      cVar53 = 'p';
      if (uVar49 == uVar26 + 2) {
LAB_140016b58:
        bVar36 = cVar53 + bVar52 + bVar60 + (cVar53 + bVar52 & bVar60) * -2 + cVar58;
        local_78[uVar18] = bVar52 + bVar60 + (bVar52 + 0x6c & bVar60) * -2 + bVar36 + 'x';
        uVar49 = uVar26 + uVar49;
      }
      else {
        if (uVar49 != uVar26 + 5) goto LAB_140016a59;
        bVar36 = bVar52 + bVar60 + (bVar60 & (bVar52 | 0xa0)) * -2 + 0x40;
      }
LAB_140016ce5:
      uVar18 = uVar18 + ~(ulonglong)bVar36;
    }
    else {
      if (uVar49 != uVar19) {
        if (uVar49 != uVar26 + 2) {
          uVar43 = uVar26;
          if ((uVar49 != uVar26 + 3) && (uVar43 = uVar19, uVar49 != uVar26 + 5)) goto LAB_140016b22;
LAB_140016d59:
          uVar26 = uVar43;
          uVar18 = uVar18 - 1;
          goto LAB_140016af2;
        }
        bVar52 = (bVar52 + bVar60 + (bVar60 & bVar52 + 0x84) * -2) - 0x18;
        local_78[uVar18] = bVar52;
        uVar18 = (~uVar26 + uVar18) - (ulonglong)bVar52;
        uVar26 = uVar19;
LAB_140016aaf:
        local_78[uVar18] = (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 + 0x10U) * -2 + -0x60;
        lVar27 = uVar18 - uVar49;
        uVar49 = uVar49 + 1;
        uVar42 = (ulonglong)(byte)local_78[lVar27 + -2];
        uVar18 = lVar27 - 2;
      }
LAB_140016ae8:
      uVar18 = uVar18 + uVar26 + uVar42;
    }
LAB_140016af2:
    uVar18 = uVar18 + 1;
  } while (uVar18 < 0x18);
  uVar49 = CONCAT26(uStack_1a2,CONCAT24(uStack_1a4,local_1a8));
  psVar38 = (short *)local_1b8;
  if (0xf < CONCAT26(uStack_19a,uStack_1a0)) {
    psVar38 = (short *)local_1b8._0_8_;
  }
  local_2b8 = (undefined1  [16])0x0;
  if (uVar49 == 0) {
    local_2a8 = ZEXT816(7) << 0x40;
    goto LAB_140016f95;
  }
  local_2a8 = ZEXT816(7) << 0x40;
  if (0x7ffffffffffffffe < uVar49) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  if (uVar49 < 8) {
    psVar35 = (short *)local_2b8;
  }
  else {
    uVar26 = uVar49 | 7;
    if (0x7ffffffffffffffe < uVar26) {
LAB_14001b62e:
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
    uVar18 = 10;
    if (10 < uVar26) {
      uVar18 = uVar26;
    }
    if (uVar26 < 0x7ff) {
      psVar35 = (short *)FUN_1400329d0(uVar18 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar26) goto LAB_14001b62e;
      lVar27 = FUN_1400329d0(uVar18 * 2 + 0x29);
      psVar35 = (short *)(lVar27 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(psVar35 + -4) = lVar27;
    }
    local_2b8._0_8_ = psVar35;
    local_2a8._8_8_ = uVar18;
  }
  uVar26 = uVar49;
  psVar55 = psVar35;
  if ((uVar49 < 4) ||
     ((psVar35 < (short *)((longlong)psVar38 + uVar49) && (psVar38 < psVar35 + uVar49))))
  goto LAB_140016ed4;
  if (uVar49 < 0x10) {
    uVar18 = 0;
    goto LAB_14001b4b4;
  }
  uVar18 = uVar49 & 0x7ffffffffffffff0;
  uVar26 = 0;
  do {
    uVar19 = *(ulonglong *)((longlong)psVar38 + uVar26);
    uVar86 = (undefined1)(uVar19 >> 0x38);
    auVar74._8_6_ = 0;
    auVar74._0_8_ = uVar19;
    auVar74[0xe] = uVar86;
    auVar74[0xf] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x30);
    auVar73._14_2_ = auVar74._14_2_;
    auVar73._8_5_ = 0;
    auVar73._0_8_ = uVar19;
    auVar73[0xd] = uVar86;
    auVar72._13_3_ = auVar73._13_3_;
    auVar72._8_4_ = 0;
    auVar72._0_8_ = uVar19;
    auVar72[0xc] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x28);
    auVar71._12_4_ = auVar72._12_4_;
    auVar71._8_3_ = 0;
    auVar71._0_8_ = uVar19;
    auVar71[0xb] = uVar86;
    auVar70._11_5_ = auVar71._11_5_;
    auVar70._8_2_ = 0;
    auVar70._0_8_ = uVar19;
    auVar70[10] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x20);
    auVar69._10_6_ = auVar70._10_6_;
    auVar69[8] = 0;
    auVar69._0_8_ = uVar19;
    auVar69[9] = uVar86;
    auVar68._9_7_ = auVar69._9_7_;
    auVar68[8] = uVar86;
    auVar68._0_8_ = uVar19;
    uVar86 = (undefined1)(uVar19 >> 0x18);
    auVar67._8_8_ = auVar68._8_8_;
    auVar67[7] = uVar86;
    auVar67[6] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x10);
    auVar67[5] = uVar86;
    auVar67[4] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 8);
    auVar67[3] = uVar86;
    auVar67[2] = uVar86;
    auVar67[0] = (undefined1)uVar19;
    auVar67[1] = auVar67[0];
    uVar19 = *(ulonglong *)((longlong)psVar38 + uVar26 + 8);
    uVar86 = (undefined1)(uVar19 >> 0x38);
    auVar96._8_6_ = 0;
    auVar96._0_8_ = uVar19;
    auVar96[0xe] = uVar86;
    auVar96[0xf] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x30);
    auVar95._14_2_ = auVar96._14_2_;
    auVar95._8_5_ = 0;
    auVar95._0_8_ = uVar19;
    auVar95[0xd] = uVar86;
    auVar94._13_3_ = auVar95._13_3_;
    auVar94._8_4_ = 0;
    auVar94._0_8_ = uVar19;
    auVar94[0xc] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x28);
    auVar93._12_4_ = auVar94._12_4_;
    auVar93._8_3_ = 0;
    auVar93._0_8_ = uVar19;
    auVar93[0xb] = uVar86;
    auVar92._11_5_ = auVar93._11_5_;
    auVar92._8_2_ = 0;
    auVar92._0_8_ = uVar19;
    auVar92[10] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x20);
    auVar91._10_6_ = auVar92._10_6_;
    auVar91[8] = 0;
    auVar91._0_8_ = uVar19;
    auVar91[9] = uVar86;
    auVar90._9_7_ = auVar91._9_7_;
    auVar90[8] = uVar86;
    auVar90._0_8_ = uVar19;
    uVar86 = (undefined1)(uVar19 >> 0x18);
    auVar89._8_8_ = auVar90._8_8_;
    auVar89[7] = uVar86;
    auVar89[6] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x10);
    auVar89[5] = uVar86;
    auVar89[4] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 8);
    auVar89[3] = uVar86;
    auVar89[2] = uVar86;
    auVar89[0] = (undefined1)uVar19;
    auVar89[1] = auVar89[0];
    auVar85 = psraw(auVar67,8);
    auVar105 = psraw(auVar89,8);
    *(undefined1 (*) [16])(psVar35 + uVar26) = auVar85;
    *(undefined1 (*) [16])(psVar35 + uVar26 + 8) = auVar105;
    uVar26 = uVar26 + 0x10;
  } while (uVar18 != uVar26);
  if (uVar49 != uVar18) {
    if ((uVar41 & 0xc) == 0) {
      psVar38 = (short *)((longlong)psVar38 + uVar18);
      uVar26 = (ulonglong)(uVar41 & 0xf);
      psVar55 = psVar35 + uVar18;
    }
    else {
LAB_14001b4b4:
      uVar19 = uVar49 & 0x7ffffffffffffffc;
      do {
        uVar5 = *(undefined4 *)((longlong)psVar38 + uVar18);
        uVar88 = (undefined1)((uint)uVar5 >> 0x18);
        uVar87 = (undefined1)((uint)uVar5 >> 0x10);
        uVar86 = (undefined1)((uint)uVar5 >> 8);
        auVar75._4_4_ =
             (int)(CONCAT35(CONCAT21(CONCAT11(uVar88,uVar88),uVar87),CONCAT14(uVar87,uVar5)) >> 0x20
                  );
        auVar75[3] = uVar86;
        auVar75[2] = uVar86;
        auVar75[0] = (undefined1)uVar5;
        auVar75[1] = auVar75[0];
        auVar75._8_8_ = 0;
        auVar85 = psraw(auVar75,8);
        *(longlong *)(psVar35 + uVar18) = auVar85._0_8_;
        uVar18 = uVar18 + 4;
      } while (uVar19 != uVar18);
      psVar38 = (short *)((longlong)psVar38 + uVar19);
      uVar26 = (ulonglong)(uVar41 & 3);
      psVar55 = psVar35 + uVar19;
      if (uVar49 == uVar19) goto LAB_140016f87;
    }
LAB_140016ed4:
    uVar18 = uVar26 - 1;
    if ((uVar26 & 7) != 0) {
      uVar19 = 0;
      do {
        *psVar55 = (short)*(char *)((longlong)psVar38 + uVar19);
        psVar55 = psVar55 + 1;
        uVar19 = uVar19 + 1;
      } while ((uVar26 & 7) != uVar19);
      psVar38 = (short *)((longlong)psVar38 + uVar19);
      uVar26 = uVar26 - uVar19;
    }
    if (6 < uVar18) {
      uVar18 = 0;
      do {
        psVar55[uVar18] = (short)*(char *)((longlong)psVar38 + uVar18);
        psVar55[uVar18 + 1] = (short)*(char *)((longlong)psVar38 + uVar18 + 1);
        psVar55[uVar18 + 2] = (short)*(char *)((longlong)psVar38 + uVar18 + 2);
        psVar55[uVar18 + 3] = (short)*(char *)((longlong)psVar38 + uVar18 + 3);
        psVar55[uVar18 + 4] = (short)*(char *)((longlong)psVar38 + uVar18 + 4);
        psVar55[uVar18 + 5] = (short)*(char *)((longlong)psVar38 + uVar18 + 5);
        psVar55[uVar18 + 6] = (short)*(char *)((longlong)psVar38 + uVar18 + 6);
        psVar55[uVar18 + 7] = (short)*(char *)((longlong)psVar38 + uVar18 + 7);
        uVar18 = uVar18 + 8;
      } while (uVar26 != uVar18);
    }
  }
LAB_140016f87:
  local_2a8._0_8_ = uVar49;
  psVar35[uVar49] = 0;
LAB_140016f95:
  local_298 = _DAT_140035570;
  ppppppuStack_290 = _UNK_140035578;
  local_288 = (undefined8 ******)0x47a641be43e97dd5;
  uStack_280 = (undefined8 ******)0x4544;
  pppppppuVar23 = &local_298;
LAB_140016fd9:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      pppppppuVar23 = (undefined8 *******)&stack0x00fb52de;
      goto LAB_140017205;
    }
    bVar60 = *(byte *)((longlong)&local_298 + uVar18);
    uVar43 = (ulonglong)bVar60;
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    uVar42 = uVar26;
    if (uVar19 <= uVar49) {
      if (uVar49 == uVar19) {
LAB_140016ff0:
        uVar18 = uVar18 + uVar26;
      }
      else {
        if (uVar49 != uVar26 + 3) {
          if (uVar49 != uVar26 + 5) goto LAB_140017022;
          goto LAB_140017173;
        }
        bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xb6U) * -2 + 0xbc;
LAB_1400170df:
        uVar49 = uVar26 + uVar49;
        *(byte *)((longlong)&local_298 + uVar18) =
             cVar53 + bVar60 + (bVar60 & cVar53 + 0xbeU) * -2 + bVar52 + -0x74;
LAB_140017108:
        uVar43 = ~(ulonglong)bVar52;
      }
      uVar18 = uVar18 + uVar43;
      goto LAB_140016ff6;
    }
LAB_140017022:
    if (uVar18 < uVar26) {
      pppppppuVar23 = (undefined8 *******)&stack0x014556d0;
      goto LAB_140017205;
    }
    if (uVar18 < uVar26 + uVar49) {
      if (uVar49 != uVar26 + 0x10) {
        if (uVar49 == uVar26 + 5) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x74U) * -2 + 0x48;
          uVar49 = uVar26 + uVar49;
          goto LAB_140017108;
        }
        goto LAB_140016fd9;
      }
    }
    else {
      if (uVar26 + 9 < uVar49) {
LAB_1400170b9:
        bVar52 = (cVar53 + bVar60 * '\x02' + (bVar60 & cVar53 + 0xb0U) * -2) - 0x20;
        goto LAB_1400170df;
      }
      if (uVar49 == uVar19) {
        *(byte *)((longlong)&local_298 + uVar18) =
             cVar53 + bVar60 + (bVar60 & cVar53 + 0xa2U) * -2 + '4';
        uVar42 = uVar49;
      }
      else {
        uVar42 = uVar19;
        if ((uVar49 != uVar26 + 2) && (uVar42 = uVar26, uVar49 != uVar26 + 3)) {
          if (uVar49 == uVar26 + 5) {
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 2U) * -2 + 0xc;
            goto LAB_140017108;
          }
          if (uVar49 == uVar26 + 7) goto LAB_140016ff0;
          if (8 < uVar49) goto LAB_1400170b9;
          if (uVar49 == uVar26 + 6) goto LAB_140017173;
          *(byte *)((longlong)&local_298 + uVar18) =
               cVar53 + bVar60 + (bVar60 & cVar53 + 0xeU) * -2 + -0x54;
          goto LAB_140016ff6;
        }
      }
    }
LAB_140017173:
    uVar26 = uVar42;
    uVar18 = uVar18 - 1;
LAB_140016ff6:
    uVar18 = uVar18 + 1;
    if (0x1f < uVar18) {
LAB_140017205:
      local_208._0_4_ = 0x2bdc2dd9;
      local_208._4_2_ = 0x2928;
      local_208._6_2_ = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      local_1f4 = 0;
      local_1f2 = local_1f2 & 0xffffffffffffff00;
      puVar31 = &local_208;
      break;
    }
  } while( true );
LAB_140017232:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar41 = local_268;
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      puVar31 = (undefined8 *)&stack0x0097cb4a;
      break;
    }
    bVar60 = *(byte *)((longlong)&local_208 + uVar18);
    uVar42 = (ulonglong)bVar60;
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    if (uVar49 < uVar19) {
LAB_1400172f7:
      if (uVar18 < uVar26) {
        puVar31 = (undefined8 *)&stack0x014e6870;
        break;
      }
      if (uVar26 + uVar49 <= uVar18) {
        if (uVar49 == uVar19) {
LAB_140017316:
          *(byte *)((longlong)&local_208 + uVar18) =
               cVar53 + bVar60 + (bVar60 & cVar53 + 0xb6U) * -2 + -0x44;
          uVar26 = uVar19;
        }
        else if (uVar49 != uVar26 + 2) {
          if (uVar49 == uVar26 + 3) {
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x3eU) * -2 + 0x74;
          }
          else {
            if (uVar49 == uVar26 + 4) goto LAB_1400172c1;
            if (uVar49 != uVar26 + 5) {
              if (uVar49 == uVar26 + 9) goto LAB_140017316;
              *(byte *)((longlong)&local_208 + uVar18) =
                   cVar53 + bVar60 + (bVar60 & cVar53 - 0x26U) * -2 + -0x1c;
              goto LAB_1400172cb;
            }
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xcU) * -2 + 0xb8;
          }
LAB_1400173e2:
          uVar49 = uVar26 + uVar49;
          *(byte *)((longlong)&local_208 + uVar18) =
               cVar53 + bVar60 + (bVar60 & cVar53 + 0x6aU) * -2 + bVar52 + -0x7c;
          uVar18 = uVar18 + ~(ulonglong)bVar52;
          goto LAB_1400172cb;
        }
LAB_1400173ac:
        uVar18 = uVar18 - 1;
        goto LAB_1400172cb;
      }
      goto LAB_140017232;
    }
    if (uVar49 != uVar19) {
      if (uVar49 != uVar26 + 2) {
        if (uVar49 != uVar26 + 3) {
          if (uVar49 == uVar26 + 5) {
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x12U) * -2 + 0x94;
            goto LAB_1400173e2;
          }
          if (uVar49 == uVar26 + 4) goto LAB_1400173ac;
          if (uVar49 != uVar26 + 9) goto LAB_1400172f7;
          goto LAB_140017316;
        }
        bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x1eU) * -2 + 0x4c;
        *(byte *)((longlong)&local_208 + uVar18) = bVar52;
        uVar18 = (~uVar26 + uVar18) - (ulonglong)bVar52;
        uVar26 = uVar19;
      }
      *(byte *)((longlong)&local_208 + uVar18) =
           (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 - 8U) * -2 + '0';
      lVar27 = uVar18 - uVar49;
      uVar49 = uVar49 + 1;
      uVar42 = (ulonglong)*(byte *)((longlong)&uStack_210 + lVar27 + 6);
      uVar18 = lVar27 - 2;
    }
LAB_1400172c1:
    uVar18 = uVar18 + uVar26 + uVar42;
LAB_1400172cb:
    uVar18 = uVar18 + 1;
  } while (uVar18 < 0x17);
  uVar49 = CONCAT26(uStack_262,CONCAT24(uStack_264,local_268));
  pppppppsVar24 = local_278;
  if (CONCAT17(uStack_259,uStack_260) < 0x10) {
    pppppppsVar24 = (short *******)&local_278;
  }
  local_1d8 = (undefined1  [16])0x0;
  if (uVar49 == 0) {
    local_1c8 = ZEXT816(7) << 0x40;
    goto LAB_1400176c5;
  }
  local_1c8 = ZEXT816(7) << 0x40;
  if (0x7ffffffffffffffe < uVar49) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  if (uVar49 < 8) {
    psVar38 = (short *)local_1d8;
  }
  else {
    uVar26 = uVar49 | 7;
    if (0x7ffffffffffffffe < uVar26) {
LAB_14001b634:
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
    uVar18 = 10;
    if (10 < uVar26) {
      uVar18 = uVar26;
    }
    if (uVar26 < 0x7ff) {
      psVar38 = (short *)FUN_1400329d0(uVar18 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar26) goto LAB_14001b634;
      lVar27 = FUN_1400329d0(uVar18 * 2 + 0x29);
      psVar38 = (short *)(lVar27 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(psVar38 + -4) = lVar27;
    }
    local_1d8._0_8_ = psVar38;
    local_1c8._8_8_ = uVar18;
  }
  uVar26 = uVar49;
  psVar35 = psVar38;
  if ((uVar49 < 4) ||
     ((psVar38 < (short *)((longlong)pppppppsVar24 + uVar49) && (pppppppsVar24 < psVar38 + uVar49)))
     ) goto LAB_140017607;
  if (uVar49 < 0x10) {
    uVar18 = 0;
    goto LAB_14001b552;
  }
  uVar18 = uVar49 & 0x7ffffffffffffff0;
  uVar26 = 0;
  do {
    uVar19 = *(ulonglong *)((longlong)pppppppsVar24 + uVar26);
    uVar86 = (undefined1)(uVar19 >> 0x38);
    auVar83._8_6_ = 0;
    auVar83._0_8_ = uVar19;
    auVar83[0xe] = uVar86;
    auVar83[0xf] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x30);
    auVar82._14_2_ = auVar83._14_2_;
    auVar82._8_5_ = 0;
    auVar82._0_8_ = uVar19;
    auVar82[0xd] = uVar86;
    auVar81._13_3_ = auVar82._13_3_;
    auVar81._8_4_ = 0;
    auVar81._0_8_ = uVar19;
    auVar81[0xc] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x28);
    auVar80._12_4_ = auVar81._12_4_;
    auVar80._8_3_ = 0;
    auVar80._0_8_ = uVar19;
    auVar80[0xb] = uVar86;
    auVar79._11_5_ = auVar80._11_5_;
    auVar79._8_2_ = 0;
    auVar79._0_8_ = uVar19;
    auVar79[10] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x20);
    auVar78._10_6_ = auVar79._10_6_;
    auVar78[8] = 0;
    auVar78._0_8_ = uVar19;
    auVar78[9] = uVar86;
    auVar77._9_7_ = auVar78._9_7_;
    auVar77[8] = uVar86;
    auVar77._0_8_ = uVar19;
    uVar86 = (undefined1)(uVar19 >> 0x18);
    auVar76._8_8_ = auVar77._8_8_;
    auVar76[7] = uVar86;
    auVar76[6] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x10);
    auVar76[5] = uVar86;
    auVar76[4] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 8);
    auVar76[3] = uVar86;
    auVar76[2] = uVar86;
    auVar76[0] = (undefined1)uVar19;
    auVar76[1] = auVar76[0];
    uVar19 = *(ulonglong *)((longlong)pppppppsVar24 + uVar26 + 8);
    uVar86 = (undefined1)(uVar19 >> 0x38);
    auVar104._8_6_ = 0;
    auVar104._0_8_ = uVar19;
    auVar104[0xe] = uVar86;
    auVar104[0xf] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x30);
    auVar103._14_2_ = auVar104._14_2_;
    auVar103._8_5_ = 0;
    auVar103._0_8_ = uVar19;
    auVar103[0xd] = uVar86;
    auVar102._13_3_ = auVar103._13_3_;
    auVar102._8_4_ = 0;
    auVar102._0_8_ = uVar19;
    auVar102[0xc] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x28);
    auVar101._12_4_ = auVar102._12_4_;
    auVar101._8_3_ = 0;
    auVar101._0_8_ = uVar19;
    auVar101[0xb] = uVar86;
    auVar100._11_5_ = auVar101._11_5_;
    auVar100._8_2_ = 0;
    auVar100._0_8_ = uVar19;
    auVar100[10] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x20);
    auVar99._10_6_ = auVar100._10_6_;
    auVar99[8] = 0;
    auVar99._0_8_ = uVar19;
    auVar99[9] = uVar86;
    auVar98._9_7_ = auVar99._9_7_;
    auVar98[8] = uVar86;
    auVar98._0_8_ = uVar19;
    uVar86 = (undefined1)(uVar19 >> 0x18);
    auVar97._8_8_ = auVar98._8_8_;
    auVar97[7] = uVar86;
    auVar97[6] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 0x10);
    auVar97[5] = uVar86;
    auVar97[4] = uVar86;
    uVar86 = (undefined1)(uVar19 >> 8);
    auVar97[3] = uVar86;
    auVar97[2] = uVar86;
    auVar97[0] = (undefined1)uVar19;
    auVar97[1] = auVar97[0];
    auVar85 = psraw(auVar76,8);
    auVar105 = psraw(auVar97,8);
    *(undefined1 (*) [16])(psVar38 + uVar26) = auVar85;
    *(undefined1 (*) [16])(psVar38 + uVar26 + 8) = auVar105;
    uVar26 = uVar26 + 0x10;
  } while (uVar18 != uVar26);
  if (uVar49 != uVar18) {
    if ((uVar41 & 0xc) == 0) {
      pppppppsVar24 = (short *******)((longlong)pppppppsVar24 + uVar18);
      uVar26 = (ulonglong)(uVar41 & 0xf);
      psVar35 = psVar38 + uVar18;
    }
    else {
LAB_14001b552:
      uVar19 = uVar49 & 0x7ffffffffffffffc;
      do {
        uVar5 = *(undefined4 *)((longlong)pppppppsVar24 + uVar18);
        uVar88 = (undefined1)((uint)uVar5 >> 0x18);
        uVar87 = (undefined1)((uint)uVar5 >> 0x10);
        uVar86 = (undefined1)((uint)uVar5 >> 8);
        auVar84._4_4_ =
             (int)(CONCAT35(CONCAT21(CONCAT11(uVar88,uVar88),uVar87),CONCAT14(uVar87,uVar5)) >> 0x20
                  );
        auVar84[3] = uVar86;
        auVar84[2] = uVar86;
        auVar84[0] = (undefined1)uVar5;
        auVar84[1] = auVar84[0];
        auVar84._8_8_ = 0;
        auVar85 = psraw(auVar84,8);
        *(longlong *)(psVar38 + uVar18) = auVar85._0_8_;
        uVar18 = uVar18 + 4;
      } while (uVar19 != uVar18);
      pppppppsVar24 = (short *******)((longlong)pppppppsVar24 + uVar19);
      uVar26 = (ulonglong)(uVar41 & 3);
      psVar35 = psVar38 + uVar19;
      if (uVar49 == uVar19) goto LAB_1400176b7;
    }
LAB_140017607:
    uVar18 = uVar26 - 1;
    if ((uVar26 & 7) != 0) {
      uVar19 = 0;
      do {
        *psVar35 = (short)*(char *)((longlong)pppppppsVar24 + uVar19);
        psVar35 = psVar35 + 1;
        uVar19 = uVar19 + 1;
      } while ((uVar26 & 7) != uVar19);
      pppppppsVar24 = (short *******)((longlong)pppppppsVar24 + uVar19);
      uVar26 = uVar26 - uVar19;
    }
    if (6 < uVar18) {
      uVar18 = 0;
      do {
        psVar35[uVar18] = (short)*(char *)((longlong)pppppppsVar24 + uVar18);
        psVar35[uVar18 + 1] = (short)*(char *)((longlong)pppppppsVar24 + uVar18 + 1);
        psVar35[uVar18 + 2] = (short)*(char *)((longlong)pppppppsVar24 + uVar18 + 2);
        psVar35[uVar18 + 3] = (short)*(char *)((longlong)pppppppsVar24 + uVar18 + 3);
        psVar35[uVar18 + 4] = (short)*(char *)((longlong)pppppppsVar24 + uVar18 + 4);
        psVar35[uVar18 + 5] = (short)*(char *)((longlong)pppppppsVar24 + uVar18 + 5);
        psVar35[uVar18 + 6] = (short)*(char *)((longlong)pppppppsVar24 + uVar18 + 6);
        psVar35[uVar18 + 7] = (short)*(char *)((longlong)pppppppsVar24 + uVar18 + 7);
        uVar18 = uVar18 + 8;
      } while (uVar26 != uVar18);
    }
  }
LAB_1400176b7:
  local_1c8._0_8_ = uVar49;
  psVar38[uVar49] = 0;
LAB_1400176c5:
  local_148 = _DAT_140035580;
  pppppppuStack_140 = _UNK_140035588;
  local_138 = 0xeb90e95b;
  uStack_134 = 0xf594;
  uStack_132 = 0xf7f6;
  pppppplStack_130 = (longlong ******)0x0;
  uStack_128 = 0;
  local_122 = 0;
  uStack_120 = 0;
  uStack_11e = 0;
  ppppppplVar32 = (longlong *******)&local_148;
LAB_140017704:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      ppppppplVar32 = (longlong *******)&stack0x0124a244;
      goto LAB_1400179e7;
    }
    bVar60 = *(byte *)((longlong)&local_148 + uVar18);
    uVar42 = (ulonglong)bVar60;
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    if (uVar19 <= uVar49) {
      if (uVar49 != uVar19) {
        if (uVar49 != uVar26 + 2) {
          if (uVar49 == uVar26 + 5) {
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x94U) * -2 + 0x88;
          }
          else {
            if (uVar49 != uVar26 + 6) goto LAB_1400177c7;
            bVar52 = cVar53 + bVar60 + (cVar53 + 0xcU & bVar60) * -2 + 0xb8;
            *(byte *)((longlong)&local_148 + uVar18) =
                 cVar53 + bVar60 + (cVar53 + 0x9cU & bVar60) * -2 + bVar52 + 'X';
          }
          goto LAB_14001792c;
        }
LAB_140017720:
        bVar52 = cVar53 + bVar60 + (cVar53 + 0x14U & bVar60) * -2 + 0x88;
        *(byte *)((longlong)&local_148 + uVar18) = bVar52;
        lVar27 = (~uVar26 + uVar18) - (ulonglong)bVar52;
        *(byte *)((longlong)&local_148 + lVar27) =
             (char)lVar27 + bVar60 + ((char)lVar27 + 0x50U & bVar60) * -2 + ' ';
        lVar27 = lVar27 - uVar49;
        uVar49 = uVar49 + 1;
        uVar42 = (ulonglong)*(byte *)((longlong)&local_150 + lVar27 + 6);
        uVar18 = lVar27 - 2;
        uVar26 = uVar19;
      }
LAB_14001778e:
      uVar18 = uVar18 + uVar26 + uVar42;
      goto LAB_14001779b;
    }
LAB_1400177c7:
    if (uVar18 < uVar26) {
      ppppppplVar32 = (longlong *******)&stack0x014ddb08;
      goto LAB_1400179e7;
    }
    if (uVar18 < uVar26 + uVar49) {
      if (uVar49 == uVar26 + 3) goto LAB_14001783f;
      if (uVar49 != uVar26 + 9) {
        if (uVar49 == uVar26 + 4) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xa8U) * -2 + 0x10;
LAB_14001792c:
          uVar49 = uVar49 + uVar26;
          uVar18 = uVar18 + ~(ulonglong)bVar52;
          goto LAB_14001779b;
        }
        if (uVar49 == uVar26 + 0x2a) goto LAB_140017720;
        if (uVar49 == uVar26 + 5) goto LAB_14001778e;
        goto LAB_140017704;
      }
    }
    else {
      if (uVar26 + uVar49 == 0x2a) goto LAB_140017720;
      if (uVar49 != uVar19) {
        if (uVar49 == uVar26 + 3) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xa4U) * -2 + 0x28;
          goto LAB_14001792c;
        }
        cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x3cU) * -2 + -0x68;
        if (uVar49 == uVar26 + 4) goto LAB_14001778e;
        if (uVar26 + 4 < uVar49) {
          cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x38U) * -2 + -0x50;
        }
        else if (uVar49 == uVar26 + 2) goto LAB_140017720;
        if (uVar26 < 2) {
          *(char *)((longlong)&local_148 + uVar18) = cVar58;
          goto LAB_14001779b;
        }
      }
LAB_14001783f:
      *(byte *)((longlong)&local_148 + uVar18) =
           cVar53 + bVar60 + (bVar60 & cVar53 + 0x24U) * -2 + '(';
      uVar26 = uVar19;
    }
    uVar18 = uVar18 - 1;
LAB_14001779b:
    uVar18 = uVar18 + 1;
    if (0x2d < uVar18) {
LAB_1400179e7:
      uVar49 = (*DAT_140039af8)(ppppppplVar32);
      uVar33 = local_1c8._0_8_;
      if ((ulonglong)(local_1c8._8_8_ - local_1c8._0_8_) < uVar49) {
        puVar28 = (undefined8 *)FUN_14002c380(local_1d8,uVar49,local_1c8._8_8_ - local_1c8._0_8_,0);
      }
      else {
        local_1c8._0_8_ = local_1c8._0_8_ + uVar49;
        if ((ulonglong)local_1c8._8_8_ < 8) {
          ppppppplVar25 = (longlong *******)local_1d8;
        }
        else {
          ppppppplVar25 = (longlong *******)local_1d8._0_8_;
        }
        ppppppplVar45 = (longlong *******)((longlong)ppppppplVar32 + uVar49 * 2);
        uVar26 = uVar49;
        if (ppppppplVar32 <= (longlong *******)((longlong)ppppppplVar25 + uVar33 * 2) &&
            ppppppplVar25 < ppppppplVar45) {
          if (ppppppplVar25 < ppppppplVar32 ||
              (longlong)ppppppplVar25 - (longlong)ppppppplVar32 == 0) {
            uVar26 = 0;
          }
          else {
            uVar26 = (longlong)ppppppplVar25 - (longlong)ppppppplVar32 >> 1;
          }
        }
        FUN_140034090((longlong)ppppppplVar25 + uVar49 * 2,ppppppplVar25,uVar33 * 2 + 2);
        FUN_140034080(ppppppplVar25,ppppppplVar32,uVar26 * 2);
        FUN_140034080((longlong)ppppppplVar25 + uVar26 * 2,(longlong)ppppppplVar45 + uVar26 * 2,
                      (uVar49 - uVar26) * 2);
        puVar28 = (undefined8 *)local_1d8;
      }
      local_228 = (undefined8 *******)*puVar28;
      ppppplStack_220 = (longlong *****)puVar28[1];
      local_218 = (longlong *****)puVar28[2];
      uStack_210 = (longlong *****)puVar28[3];
      puVar28[2] = 0;
      puVar28[3] = 7;
      *(undefined2 *)puVar28 = 0;
      uVar49 = (*DAT_140039af8)(puVar31);
      if ((ulonglong)((longlong)uStack_210 - (longlong)local_218) < uVar49) {
        pppppppuVar29 =
             (undefined8 *******)
             FUN_14002c000(&local_228,uVar49,(longlong)uStack_210 - (longlong)local_218,puVar31);
      }
      else {
        ppppplVar34 = (longlong *****)((longlong)local_218 + uVar49);
        pppppppuVar29 = &local_228;
        pppppppuVar51 = pppppppuVar29;
        if ((longlong *****)0x7 < uStack_210) {
          pppppppuVar51 = local_228;
        }
        lVar27 = (longlong)local_218 * 2;
        local_218 = ppppplVar34;
        FUN_140034090((undefined1 *)((longlong)pppppppuVar51 + lVar27),puVar31,uVar49 * 2);
        *(undefined2 *)((longlong)pppppppuVar51 + (longlong)ppppplVar34 * 2) = 0;
      }
      local_248 = (undefined8 *******)*pppppppuVar29;
      ppppppuStack_240 = pppppppuVar29[1];
      local_238 = pppppppuVar29[2];
      ppppppuStack_230 = pppppppuVar29[3];
      pppppppuVar29[2] = (undefined8 ******)0x0;
      pppppppuVar29[3] = (undefined8 ******)0x7;
      *(undefined2 *)pppppppuVar29 = 0;
      uVar49 = (*DAT_140039af8)(pppppppuVar23);
      if ((ulonglong)((longlong)ppppppuStack_230 - (longlong)local_238) < uVar49) {
        pppppppuVar29 =
             (undefined8 *******)
             FUN_14002c000(&local_248,uVar49,(longlong)ppppppuStack_230 - (longlong)local_238,
                           pppppppuVar23);
      }
      else {
        ppppppuVar50 = (undefined8 ******)((longlong)local_238 + uVar49);
        pppppppuVar29 = &local_248;
        pppppppuVar51 = pppppppuVar29;
        if ((undefined8 ******)0x7 < ppppppuStack_230) {
          pppppppuVar51 = local_248;
        }
        lVar27 = (longlong)local_238 * 2;
        local_238 = ppppppuVar50;
        FUN_140034090((undefined1 *)((longlong)pppppppuVar51 + lVar27),pppppppuVar23,uVar49 * 2);
        *(undefined2 *)((longlong)pppppppuVar51 + (longlong)ppppppuVar50 * 2) = 0;
      }
      local_368 = (undefined1 (*) [16])*pppppppuVar29;
      ppppppuStack_360 = pppppppuVar29[1];
      local_358 = pppppppuVar29[2];
      ppppppuStack_350 = pppppppuVar29[3];
      pppppppuVar29[2] = (undefined8 ******)0x0;
      pppppppuVar29[3] = (undefined8 ******)0x7;
      *(undefined2 *)pppppppuVar29 = 0;
      pauVar21 = (undefined1 (*) [16])local_2d8;
      FUN_14002c190(pauVar21,local_358,&local_368,local_2b8);
      ppppppplVar32 = local_80;
      uVar49 = (*DAT_140039af8)(local_80);
      if (uStack_2c0 - local_2c8 < uVar49) {
        pauVar21 = (undefined1 (*) [16])
                   FUN_14002c000(local_2d8,uVar49,uStack_2c0 - local_2c8,ppppppplVar32);
      }
      else {
        uVar26 = local_2c8 + uVar49;
        pauVar47 = pauVar21;
        if (7 < uStack_2c0) {
          pauVar47 = local_2d8[0];
        }
        lVar27 = local_2c8 * 2;
        local_2c8 = uVar26;
        FUN_140034090(*pauVar47 + lVar27,ppppppplVar32,uVar49 * 2);
        *(undefined2 *)(*pauVar47 + uVar26 * 2) = 0;
      }
      _local_108 = *pauVar21;
      _local_f8 = pauVar21[1];
      *(undefined8 *)pauVar21[1] = 0;
      *(undefined8 *)(pauVar21[1] + 8) = 7;
      *(undefined2 *)*pauVar21 = 0;
      ppppppplVar32 = local_50;
      uVar49 = (*DAT_140039af8)(local_50);
      uVar33 = local_f8._0_8_;
      if ((ulonglong)((longlong)stack0xffffffffffffff10 - local_f8._0_8_) < uVar49) {
        puVar31 = (undefined8 *)
                  FUN_14002c000(local_108,uVar49,(longlong)stack0xffffffffffffff10 - local_f8._0_8_,
                                ppppppplVar32);
      }
      else {
        lVar27 = local_f8._0_8_ + uVar49;
        local_f8._0_8_ = lVar27;
        puVar31 = (undefined8 *)local_108;
        puVar28 = puVar31;
        if (7 < stack0xffffffffffffff10) {
          puVar28 = _local_108;
        }
        FUN_140034090((longlong)puVar28 + uVar33 * 2,local_50,uVar49 * 2);
        *(undefined2 *)((longlong)puVar28 + lVar27 * 2) = 0;
      }
      local_3b8 = (longlong *******)*puVar31;
      uStack_3b0 = puVar31[1];
      local_3a8 = puVar31[2];
      uStack_3a0 = puVar31[3];
      puVar31[2] = 0;
      puVar31[3] = 7;
      *(undefined2 *)puVar31 = 0;
      if (7 < stack0xffffffffffffff10) {
        uVar49 = (longlong)stack0xffffffffffffff10 * 2 + 2;
        lVar27 = (longlong)_local_108;
        if (0xfff < uVar49) {
          lVar27 = *(longlong *)((longlong)_local_108 + -8);
          if (0x1f < (ulonglong)(((longlong)_local_108 + -8) - lVar27)) goto LAB_14001b5c6;
          uVar49 = (longlong)stack0xffffffffffffff10 * 2 + 0x29;
        }
        thunk_FUN_1400340c0(lVar27,uVar49);
      }
      _local_f8 = ZEXT816(7) << 0x40;
      auVar16._14_2_ = 0;
      auVar16._0_14_ = auStack_106;
      _local_108 = auVar16 << 0x10;
      if (7 < uStack_2c0) {
        uVar49 = uStack_2c0 * 2 + 2;
        pauVar21 = local_2d8[0];
        if (0xfff < uVar49) {
          pauVar21 = *(undefined1 (**) [16])(local_2d8[0][-1] + 8);
          if (0x1f < (ulonglong)((longlong)local_2d8[0] + (-8 - (longlong)pauVar21)))
          goto LAB_14001b5c6;
          uVar49 = uStack_2c0 * 2 + 0x29;
        }
        thunk_FUN_1400340c0(pauVar21,uVar49);
      }
      local_2c8 = 0;
      uStack_2c0 = 7;
      local_2d8[0] = (undefined1 (*) [16])((ulonglong)local_2d8[0] & 0xffffffffffff0000);
      if ((undefined8 ******)0x7 < ppppppuStack_350) {
        uVar49 = (longlong)ppppppuStack_350 * 2 + 2;
        pauVar21 = local_368;
        if (0xfff < uVar49) {
          pauVar21 = *(undefined1 (**) [16])(local_368[-1] + 8);
          if (0x1f < (ulonglong)((longlong)local_368 + (-8 - (longlong)pauVar21)))
          goto LAB_14001b5c6;
          uVar49 = (longlong)ppppppuStack_350 * 2 + 0x29;
        }
        thunk_FUN_1400340c0(pauVar21,uVar49);
      }
      local_358 = (undefined8 ******)0x0;
      ppppppuStack_350 = (undefined8 ******)0x7;
      local_368 = (undefined1 (*) [16])((ulonglong)local_368 & 0xffffffffffff0000);
      if ((undefined8 ******)0x7 < ppppppuStack_230) {
        uVar49 = (longlong)ppppppuStack_230 * 2 + 2;
        pppppppuVar23 = local_248;
        if (0xfff < uVar49) {
          pppppppuVar23 = (undefined8 *******)local_248[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_248 + (-8 - (longlong)pppppppuVar23)))
          goto LAB_14001b5c6;
          uVar49 = (longlong)ppppppuStack_230 * 2 + 0x29;
        }
        thunk_FUN_1400340c0(pppppppuVar23,uVar49);
      }
      local_238 = (undefined8 ******)0x0;
      ppppppuStack_230 = (undefined8 ******)0x7;
      local_248 = (undefined8 *******)((ulonglong)local_248 & 0xffffffffffff0000);
      if ((longlong *****)0x7 < uStack_210) {
        uVar49 = (longlong)uStack_210 * 2 + 2;
        pppppppuVar23 = local_228;
        if (0xfff < uVar49) {
          pppppppuVar23 = (undefined8 *******)local_228[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_228 + (-8 - (longlong)pppppppuVar23)))
          goto LAB_14001b5c6;
          uVar49 = (longlong)uStack_210 * 2 + 0x29;
        }
        thunk_FUN_1400340c0(pppppppuVar23,uVar49);
      }
      local_218 = (longlong *****)0x0;
      uStack_210 = (longlong *****)0x7;
      local_228 = (undefined8 *******)((ulonglong)local_228 & 0xffffffffffff0000);
      if (7 < (ulonglong)local_1c8._8_8_) {
        uVar49 = local_1c8._8_8_ * 2 + 2;
        pppppplVar22 = (longlong ******)local_1d8._0_8_;
        if (0xfff < uVar49) {
          pppppplVar22 = *(longlong *******)(local_1d8._0_8_ + -8);
          if (0x1f < (ulonglong)(local_1d8._0_8_ + (-8 - (longlong)pppppplVar22)))
          goto LAB_14001b5c6;
          uVar49 = local_1c8._8_8_ * 2 + 0x29;
        }
        thunk_FUN_1400340c0(pppppplVar22,uVar49);
      }
      if (7 < (ulonglong)local_2a8._8_8_) {
        uVar49 = local_2a8._8_8_ * 2 + 2;
        lVar27 = local_2b8._0_8_;
        if (0xfff < uVar49) {
          lVar27 = *(longlong *)(local_2b8._0_8_ + -8);
          if (0x1f < (ulonglong)((local_2b8._0_8_ + -8) - lVar27)) goto LAB_14001b5c6;
          uVar49 = local_2a8._8_8_ * 2 + 0x29;
        }
        thunk_FUN_1400340c0(lVar27,uVar49);
      }
      local_e8 = _DAT_140035590;
      lStack_e0 = _UNK_140035598;
      local_d8 = 0xe345fd2f;
      uStack_d4 = 0x4c;
      uStack_d3 = 0xe1;
      uStack_d2 = 0xe747;
      uStack_d0 = 0xe54d;
      uStack_ce = 0x47;
      uStack_cd = 0xeb;
      uStack_cc = 0xe8;
      uStack_cb = 0xe9;
      uStack_ca = 0;
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      uStack_c3 = 0;
      uStack_c2 = 0;
      uStack_c1 = 0;
      uStack_c0 = 0;
      uStack_bf = 0;
      uStack_be = 0;
      pppppplVar22 = (longlong ******)&local_e8;
      break;
    }
  } while( true );
LAB_1400180d4:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      pppppplVar22 = (longlong ******)&stack0x014652be;
      break;
    }
    bVar60 = *(byte *)((longlong)&local_e8 + uVar18);
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    if (uVar49 < uVar19) {
LAB_14001819c:
      if (uVar18 < uVar26) {
        pppppplVar22 = (longlong ******)&stack0x017d09c0;
        break;
      }
      if (uVar26 + uVar49 <= uVar18) {
        if (uVar26 + uVar49 == 0x10) goto LAB_1400180f0;
        uVar42 = uVar26 + 2;
        if (uVar49 <= uVar42) {
          if (uVar49 != uVar19) {
            if (uVar49 == uVar42) goto LAB_1400183fc;
            cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 - 2U) * -2 + '\f';
            goto joined_r0x0001400182ff;
          }
LAB_1400183d8:
          *(byte *)((longlong)&local_e8 + uVar18) =
               cVar53 + bVar60 + (bVar60 & cVar53 + 0x32U) * -2 + -0x2c;
          uVar26 = uVar19;
          goto LAB_1400183fc;
        }
        cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x86U) * -2 + -0x24;
joined_r0x0001400182ff:
        if (0x29 < uVar49) {
          bVar52 = (cVar53 + bVar60 * '\x02' + (bVar60 & cVar53 + 0x30U) * -2) - 0x20;
LAB_14001835b:
          *(byte *)((longlong)&local_e8 + uVar18) =
               cVar53 + bVar60 + (bVar60 & cVar53 + 0x2eU) * -2 + bVar52 + -0x14;
          goto LAB_140018384;
        }
        if (uVar19 < uVar49) {
          *(byte *)((longlong)&local_e8 + uVar18) =
               cVar53 + bVar60 + (bVar60 & cVar53 + 0x5cU) * -2 + -0x28;
        }
        else {
          if (uVar49 == uVar19) goto LAB_140018166;
          if (uVar49 == uVar26 + 3) goto LAB_1400180f0;
          if (uVar49 == uVar42) {
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x4cU) * -2 + 0x38;
            goto LAB_140018387;
          }
          if (uVar49 == uVar26 + 4) {
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x48U) * -2 + 0x50;
            goto LAB_140018384;
          }
          if (uVar49 == uVar26 + 5) {
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x44U) * -2 + 0x68;
            goto LAB_14001835b;
          }
          if (uVar49 == uVar26 + 6) goto LAB_1400183d8;
          *(char *)((longlong)&local_e8 + uVar18) = cVar58;
        }
        goto LAB_140018170;
      }
      if (uVar49 != uVar26 + 8) {
        uVar19 = uVar26;
        if (uVar49 == uVar26 + 6) goto LAB_14001812d;
        goto LAB_1400180d4;
      }
LAB_1400183fc:
      uVar18 = uVar18 - 1;
    }
    else {
      if (uVar49 == uVar19) {
LAB_140018166:
        uVar19 = (ulonglong)bVar60;
        uVar18 = uVar18 + uVar26;
      }
      else {
        if (uVar49 == uVar26 + 3) {
LAB_1400180f0:
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x2aU) * -2 + 4;
          *(byte *)((longlong)&local_e8 + uVar18) = bVar52;
          uVar18 = (~uVar26 + uVar18) - (ulonglong)bVar52;
LAB_14001812d:
          *(byte *)((longlong)&local_e8 + uVar18) =
               (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 + 0x28U) * -2 + '\x10';
          lVar27 = uVar18 - uVar49;
          uVar49 = uVar49 + 1;
          bVar60 = local_f8[lVar27 + 0xe];
          uVar18 = lVar27 - 2;
          uVar26 = uVar19;
          goto LAB_140018166;
        }
        if (uVar49 == uVar26 + 2) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x12U) * -2 + 0x6c;
        }
        else {
          if (uVar49 != uVar26 + 4) {
            if (uVar49 != uVar26 + 5) {
              if (uVar49 != uVar26 + 6) goto LAB_14001819c;
              goto LAB_1400183d8;
            }
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x1aU) * -2 + 0x9c;
            goto LAB_14001835b;
          }
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x16U) * -2 + 0x84;
LAB_140018384:
          uVar49 = uVar49 + uVar26;
        }
LAB_140018387:
        uVar19 = ~(ulonglong)bVar52;
      }
      uVar18 = uVar18 + uVar19;
    }
LAB_140018170:
    uVar18 = uVar18 + 1;
  } while (uVar18 < 0x2b);
  _local_f8 = (undefined1  [16])0x0;
  _local_108 = (undefined1  [16])0x0;
  uVar49 = (*DAT_140039af8)(pppppplVar22);
  if (0x7ffffffffffffffe < uVar49) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  if (uVar49 < 8) {
    puVar20 = local_108;
    uVar18 = 7;
  }
  else {
    uVar26 = uVar49 | 7;
    if (0x7ffffffffffffffe < uVar26) {
LAB_14001b5e6:
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
    uVar18 = 10;
    if (10 < uVar26) {
      uVar18 = uVar26;
    }
    if (uVar26 < 0x7ff) {
      puVar20 = (undefined1 *)FUN_1400329d0(uVar18 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar26) goto LAB_14001b5e6;
      lVar27 = FUN_1400329d0(uVar18 * 2 + 0x29);
      puVar20 = (undefined1 *)(lVar27 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar20 + -8) = lVar27;
    }
    _local_108 = (longlong ******)puVar20;
  }
  stack0xffffffffffffff10 = (longlong ******)uVar18;
  local_f8._0_8_ = uVar49;
  FUN_140034080(puVar20,pppppplVar22,uVar49 * 2);
  *(undefined2 *)(puVar20 + uVar49 * 2) = 0;
  FUN_1400298a0(&local_148,local_150,local_108,&local_3f8);
  ppppppplVar32 = local_110;
  if (7 < stack0xffffffffffffff10) {
    uVar26 = (longlong)stack0xffffffffffffff10 * 2 + 2;
    lVar27 = (longlong)_local_108;
    if (0xfff < uVar26) {
      lVar27 = *(longlong *)((longlong)_local_108 + -8);
      if (0x1f < (ulonglong)(((longlong)_local_108 + -8) - lVar27)) goto LAB_14001b5c6;
      uVar26 = (longlong)stack0xffffffffffffff10 * 2 + 0x29;
    }
    thunk_FUN_1400340c0(lVar27,uVar26);
  }
  ppppppplVar45 = local_110;
  pppppplVar22 = pppppplStack_130;
  ppppppplVar25 = ppppppplVar32 + 1;
  *(undefined1 (*) [16])(ppppppplVar32 + 1) = (undefined1  [16])0x0;
  ppppppplVar32[3] = (longlong ******)0x0;
  ppppppplVar32[4] = (longlong ******)0xf;
  *(undefined1 (*) [16])(ppppppplVar32 + 5) = (undefined1  [16])0x0;
  ppppppplVar32[7] = (longlong ******)0x0;
  ppppppplVar32[8] = (longlong ******)0xf;
  *(undefined1 (*) [16])(ppppppplVar32 + 9) = (undefined1  [16])0x0;
  ppppppplVar32[0xb] = (longlong ******)0x0;
  ppppppplVar32[0xc] = (longlong ******)0xf;
  *(undefined1 (*) [16])(ppppppplVar32 + 0xd) = (undefined1  [16])0x0;
  ppppppplVar32[0xf] = (longlong ******)0x0;
  ppppppplVar32[0x10] = (longlong ******)0xf;
  *(undefined1 (*) [16])(ppppppplVar32 + 0x11) = (undefined1  [16])0x0;
  ppppppplVar32[0x13] = (longlong ******)0x0;
  ppppppplVar32[0x14] = (longlong ******)0xf;
  *(undefined1 (*) [16])(ppppppplVar32 + 0x15) = (undefined1  [16])0x0;
  ppppppplVar32[0x17] = (longlong ******)0x0;
  ppppppplVar32[0x18] = (longlong ******)0xf;
  *(undefined1 (*) [16])(ppppppplVar32 + 0x19) = (undefined1  [16])0x0;
  ppppppplVar32[0x1b] = (longlong ******)0x0;
  ppppppplVar32[0x1c] = (longlong ******)0xf;
  *(bool *)ppppppplVar32 = (int)local_148 == 200;
  if ((int)local_148 == 200) {
    local_50 = ppppppplVar32 + 9;
    local_80 = ppppppplVar32 + 0xd;
    local_158 = ppppppplVar32 + 0x11;
    local_150 = ppppppplVar32 + 0x15;
    local_1e0 = ppppppplVar32 + 0x19;
    local_e8 = _DAT_1400355a0;
    lStack_e0 = _UNK_1400355a8;
    local_d8 = 0x76;
    uStack_d4 = 0;
    uStack_d3 = 0;
    uStack_d2 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cd = 0;
    uStack_cc = 0;
    uStack_cb = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c5 = 0;
    pppppplVar22 = (longlong ******)&local_e8;
    goto LAB_14001873e;
  }
  if ((longlong ********)ppppppplVar32 != &local_148) {
    pppppppuVar23 = pppppppuStack_140;
    if (CONCAT26(local_122,uStack_128) < 0x10) {
      pppppppuVar23 = &pppppppuStack_140;
    }
    if (pppppplStack_130 < (longlong ******)0x10) {
      local_110[3] = pppppplStack_130;
      FUN_140034090(ppppppplVar25,pppppppuVar23,pppppplStack_130);
      *(undefined1 *)((longlong)ppppppplVar45 + (longlong)(pppppplVar22 + 1)) = 0;
    }
    else {
      FUN_140027b50(ppppppplVar25,pppppplStack_130);
    }
  }
  goto LAB_14001b0db;
LAB_14001873e:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar26 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar18 = *puVar17;
  uVar19 = 0;
  do {
    if (uVar19 < uVar26) {
      pppppplVar22 = (longlong ******)&stack0x0072507b;
      goto LAB_140018ad2;
    }
    bVar60 = *(byte *)((longlong)&local_e8 + uVar19);
    uVar42 = uVar18 + 1;
    cVar53 = (char)uVar19;
    if (uVar26 < uVar42) {
LAB_1400187fe:
      if (uVar19 < uVar18) {
        pppppplVar22 = (longlong ******)&stack0x0160442c;
        goto LAB_140018ad2;
      }
      if (uVar18 + uVar26 <= uVar19) {
        if (uVar18 + 10 < uVar26) {
LAB_1400188a9:
          bVar52 = cVar53 + bVar60 * '\x02' + (bVar60 & cVar53 + 0x18U) * -2 + 0x70;
          goto LAB_1400188ce;
        }
        if (uVar26 == uVar42) goto LAB_14001899a;
        uVar43 = uVar42;
        if ((uVar26 == uVar18 + 2) || (uVar43 = uVar18, uVar26 == uVar18 + 3)) goto LAB_1400189be;
        if (uVar26 == uVar18 + 5) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x17U) * -2 + 0x8a;
          goto LAB_1400188f7;
        }
        if (uVar26 == uVar18 + 6) goto LAB_1400187c8;
        if (3 < uVar26) goto LAB_1400188a9;
        if (5 < uVar18) goto LAB_14001899a;
        *(byte *)((longlong)&local_e8 + uVar19) =
             cVar53 + bVar60 + (bVar60 & cVar53 + 0x4fU) * -2 + '&';
        goto LAB_1400187d2;
      }
      if (uVar26 != uVar18 + 10) {
        if (uVar26 == uVar18 + 3) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x6aU) * -2 + 0x84;
          goto LAB_1400188f7;
        }
        if (uVar26 == uVar18 + 0x10) {
          bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 8U) * -2) - 0x30;
          goto LAB_1400188fa;
        }
        if (uVar26 == uVar18 + 6) goto LAB_1400187c8;
        goto LAB_14001873e;
      }
LAB_14001899a:
      *(byte *)((longlong)&local_e8 + uVar19) =
           cVar53 + bVar60 + (bVar60 & cVar53 - 0x37U) * -2 + 'J';
      uVar43 = uVar42;
LAB_1400189be:
      uVar18 = uVar43;
      uVar19 = uVar19 - 1;
    }
    else {
      if (uVar26 == uVar42) {
LAB_1400187c8:
        uVar42 = (ulonglong)bVar60;
        uVar19 = uVar19 + uVar18;
      }
      else {
        if (uVar26 == uVar18 + 2) {
          bVar52 = (cVar53 + bVar60 + (cVar53 + 5U & bVar60) * -2) - 0x1e;
          *(byte *)((longlong)&local_e8 + uVar19) = bVar52;
          lVar27 = (~uVar18 + uVar19) - (ulonglong)bVar52;
          *(byte *)((longlong)&local_e8 + lVar27) =
               (char)lVar27 + bVar60 + ((char)lVar27 + 0x54U & bVar60) * -2 + '\b';
          lVar27 = lVar27 - uVar26;
          uVar26 = uVar26 + 1;
          bVar60 = local_f8[lVar27 + 0xe];
          uVar19 = lVar27 - 2;
          uVar18 = uVar42;
          goto LAB_1400187c8;
        }
        if (uVar26 == uVar18 + 3) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x65U) * -2 + 0xa2;
          goto LAB_1400188f7;
        }
        if (uVar26 != uVar18 + 5) {
          if (uVar26 != uVar18 + 6) goto LAB_1400187fe;
          goto LAB_14001899a;
        }
        bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 3U) * -2) - 0x12;
LAB_1400188ce:
        *(byte *)((longlong)&local_e8 + uVar19) =
             cVar53 + bVar60 + (bVar60 & cVar53 + 0x67U) * -2 + bVar52 + -0x6a;
LAB_1400188f7:
        uVar26 = uVar26 + uVar18;
LAB_1400188fa:
        uVar42 = ~(ulonglong)bVar52;
      }
      uVar19 = uVar19 + uVar42;
    }
LAB_1400187d2:
    uVar19 = uVar19 + 1;
    if (0x23 < uVar19) {
LAB_140018ad2:
      local_68 = (undefined1  [16])0x0;
      _local_78 = (undefined1  [16])0x0;
      uVar26 = FUN_140034260(pppppplVar22);
      if ((longlong)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140020740();
      }
      if (uVar26 < 0x10) {
        puVar20 = local_78;
        uVar18 = 0xf;
      }
      else {
        uVar19 = uVar26 | 0xf;
        uVar18 = 0x16;
        if (0x16 < uVar19) {
          uVar18 = uVar19;
        }
        if (uVar19 < 0xfff) {
          puVar20 = (undefined1 *)FUN_1400329d0(uVar18 + 1);
        }
        else {
          lVar27 = FUN_1400329d0(uVar18 + 0x28);
          puVar20 = (undefined1 *)(lVar27 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar20 + -8) = lVar27;
        }
        _local_78 = (undefined1 (*) [16])puVar20;
      }
      local_68._8_8_ = uVar18;
      local_68._0_8_ = uVar26;
      FUN_140034080(puVar20,pppppplVar22,uVar26);
      puVar20[uVar26] = 0;
      puVar20 = local_78;
      FUN_14002b0c0(local_108,&pppppppuStack_140,puVar20);
      pppppplVar22 = local_110[4];
      if ((longlong ******)0xf < pppppplVar22) {
        pppppplVar37 = *ppppppplVar25;
        pppppplVar30 = (longlong ******)((longlong)pppppplVar22 + 1);
        pppppplVar39 = pppppplVar37;
        if ((longlong ******)0xfff < pppppplVar30) {
          pppppplVar39 = (longlong ******)pppppplVar37[-1];
          if (0x1f < (ulonglong)((longlong)pppppplVar37 + (-8 - (longlong)pppppplVar39)))
          goto LAB_14001b5c6;
          pppppplVar30 = pppppplVar22 + 5;
        }
        thunk_FUN_1400340c0(pppppplVar39,pppppplVar30);
      }
      ppppppplVar32[3] = (longlong ******)local_f8._0_8_;
      ppppppplVar32[4] = stack0xffffffffffffff10;
      *ppppppplVar25 = _local_108;
      ppppppplVar32[2] = (longlong ******)auStack_106._6_8_;
      if (0xf < (ulonglong)local_68._8_8_) {
        uVar26 = local_68._8_8_ + 1;
        pppppplVar22 = (longlong ******)_local_78;
        if (0xfff < uVar26) {
          pppppplVar22 = *(longlong *******)((longlong)_local_78 + -8);
          if (0x1f < (ulonglong)((longlong)_local_78 + (-8 - (longlong)pppppplVar22)))
          goto LAB_14001b5c6;
          uVar26 = local_68._8_8_ + 0x28;
        }
        thunk_FUN_1400340c0(pppppplVar22,uVar26);
      }
      local_e8 = _DAT_1400355b0;
      lStack_e0 = _UNK_1400355b8;
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_d3 = 0;
      uStack_d2 = 0;
      uStack_d0 = 0;
      uStack_ce = 0;
      uStack_cd = 0;
      uStack_cc = 0;
      uStack_cb = 0;
      uStack_ca = 0;
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      uStack_c3 = 0;
      uStack_c2 = 0;
      uStack_c1 = 0;
      uStack_c0 = 0;
      uStack_bf = 0;
      uStack_be = 0;
      uStack_bd = 0;
      uVar26 = 0x6a96799a066babe8;
      pppppplVar22 = (longlong ******)&local_e8;
      break;
    }
  } while( true );
LAB_140018c72:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar18 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar19 = *puVar17;
  uVar42 = 0;
LAB_140018cc5:
  if (uVar42 < uVar18) {
    pppppplVar22 = (longlong ******)&stack0x01218690;
    goto LAB_140019260;
  }
  bVar60 = *(byte *)((longlong)&local_e8 + uVar42);
  uVar41 = (uint)bVar60;
  uVar44 = (ulonglong)uVar41;
  uVar43 = uVar19 + 1;
  bVar52 = (byte)uVar42;
  if (uVar43 <= uVar18) {
    if (uVar18 == uVar43) {
      uVar49 = (ulonglong)(byte)((bVar52 + bVar60 + (bVar60 & bVar52 + 8) * -2) - 0x30);
    }
    else {
      if (uVar18 != uVar19 + 3) {
        if (uVar18 == uVar19 + 5) {
          bVar36 = bVar52 + bVar60 + (bVar60 & bVar52 + 0x78) * -2 + 0x30;
LAB_140018e70:
          uVar49 = (ulonglong)bVar36;
          *(byte *)((longlong)&local_e8 + uVar42) =
               bVar52 + bVar60 + (bVar60 & bVar52 + 0x18) * -2 + bVar36 + 'p';
          uVar18 = uVar19 + uVar18;
LAB_140019060:
          uVar42 = uVar42 + ~uVar49;
        }
        else {
          if (uVar18 != uVar19 + 4) {
            cVar53 = 'H';
            cVar58 = -0x78;
            if (uVar18 != uVar19 + 2) goto LAB_140018d04;
            goto LAB_140018d8b;
          }
          uVar49 = (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 + 0x28) * -2 + 0x10);
          uVar42 = uVar42 - 1;
        }
        goto LAB_140018cb8;
      }
      uVar49 = (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 + 0x68) * -2 + 0x90);
LAB_140018f26:
      bVar52 = bVar52 + bVar60 + (bVar60 & bVar52 - 0x38) * -2 + 0x50;
      *(byte *)((longlong)&local_e8 + uVar42) = bVar52;
      uVar42 = (~uVar19 + uVar42) - (ulonglong)bVar52;
      uVar19 = uVar43;
LAB_140018f63:
      *(byte *)((longlong)&local_e8 + uVar42) =
           (char)uVar42 + bVar60 + (bVar60 & (char)uVar42 + 0x20U) * -2 + '@';
      lVar27 = uVar42 - uVar18;
      uVar18 = uVar18 + 1;
      uVar44 = (ulonglong)(byte)local_f8[lVar27 + 0xe];
      uVar42 = lVar27 - 2;
    }
LAB_140018cb2:
    uVar42 = uVar42 + uVar19 + uVar44;
LAB_140018cb8:
    uVar42 = uVar42 + 1;
    if (0x2b < uVar42) {
LAB_140019260:
      local_68 = (undefined1  [16])0x0;
      _local_78 = (undefined1  [16])0x0;
      uVar49 = FUN_140034260(pppppplVar22);
      if ((longlong)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140020740();
      }
      uVar18 = 0xf;
      if (0xf < uVar49) {
        uVar19 = uVar49 | 0xf;
        uVar18 = 0x16;
        if (0x16 < uVar19) {
          uVar18 = uVar19;
        }
        if (uVar19 < 0xfff) {
          puVar20 = (undefined1 *)FUN_1400329d0(uVar18 + 1);
        }
        else {
          lVar27 = FUN_1400329d0(uVar18 + 0x28);
          puVar20 = (undefined1 *)(lVar27 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar20 + -8) = lVar27;
        }
        _local_78 = (undefined1 (*) [16])puVar20;
      }
      local_68._8_8_ = uVar18;
      local_68._0_8_ = uVar49;
      FUN_140034080(puVar20,pppppplVar22,uVar49);
      puVar20[uVar49] = 0;
      puVar20 = local_78;
      FUN_14002b0c0(local_108,&pppppppuStack_140,puVar20);
      pppppplVar22 = local_110[8];
      if ((longlong ******)0xf < pppppplVar22) {
        pppppplVar37 = ppppppplVar32[5];
        pppppplVar30 = (longlong ******)((longlong)pppppplVar22 + 1);
        pppppplVar39 = pppppplVar37;
        if ((longlong ******)0xfff < pppppplVar30) {
          pppppplVar39 = (longlong ******)pppppplVar37[-1];
          if (0x1f < (ulonglong)((longlong)pppppplVar37 + (-8 - (longlong)pppppplVar39)))
          goto LAB_14001b5c6;
          pppppplVar30 = pppppplVar22 + 5;
        }
        thunk_FUN_1400340c0(pppppplVar39,pppppplVar30);
      }
      ppppppplVar32[7] = (longlong ******)local_f8._0_8_;
      ppppppplVar32[8] = stack0xffffffffffffff10;
      ppppppplVar32[5] = _local_108;
      ppppppplVar32[6] = (longlong ******)auStack_106._6_8_;
      if (0xf < (ulonglong)local_68._8_8_) {
        uVar49 = local_68._8_8_ + 1;
        pppppplVar22 = (longlong ******)_local_78;
        if (0xfff < uVar49) {
          pppppplVar22 = *(longlong *******)((longlong)_local_78 + -8);
          if (0x1f < (ulonglong)((longlong)_local_78 + (-8 - (longlong)pppppplVar22)))
          goto LAB_14001b5c6;
          uVar49 = local_68._8_8_ + 0x28;
        }
        thunk_FUN_1400340c0(pppppplVar22,uVar49);
      }
      local_e8 = _DAT_1400355c0;
      lStack_e0 = _UNK_1400355c8;
      local_d8 = 0xdc;
      uStack_d4 = 0;
      uStack_d3 = 0;
      uStack_d2 = 0;
      uStack_d0 = 0;
      uStack_ce = 0;
      uStack_cd = 0;
      uStack_cc = 0;
      uStack_cb = 0;
      uStack_ca = 0;
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      uStack_c3 = 0;
      uStack_c2 = 0;
      uStack_c1 = 0;
      uStack_c0 = 0;
      uStack_bf = 0;
      pppppplVar22 = (longlong ******)&local_e8;
      goto LAB_1400193f6;
    }
    goto LAB_140018cc5;
  }
  uVar49 = (ulonglong)(byte)((bVar52 + bVar60 + (bVar60 & bVar52 + 0x58) * -2) - 0x10);
LAB_140018d04:
  if (uVar42 < uVar19) {
    pppppplVar22 = (longlong ******)&stack0x016d8a38;
    goto LAB_140019260;
  }
  if (uVar19 + 0x2a <= uVar18) {
    cVar53 = -0x58;
    cVar58 = -0x18;
    if (uVar18 != uVar43) goto LAB_140018dd0;
LAB_140018d8b:
    uVar49 = (ulonglong)(byte)(cVar58 + bVar52 + bVar60 + (cVar58 + bVar52 & bVar60) * -2 + cVar53);
    *(byte *)((longlong)&local_e8 + uVar42) =
         bVar52 + bVar60 + (bVar52 + 0x68 & bVar60) * -2 + -0x70;
    uVar42 = uVar42 - 1;
    uVar19 = uVar43;
    goto LAB_140018cb8;
  }
  uVar49 = (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 + 0x38) * -2 + 0xb0);
LAB_140018dd0:
  uVar1 = uVar19 + uVar18;
  if (uVar1 <= uVar42) {
    if (uVar18 < uVar19 + 9) {
      uVar49 = (ulonglong)(byte)((bVar52 + bVar60 + (bVar60 & bVar52 + 0x58) * -2) - 0x10);
    }
    else if (uVar18 == uVar43) {
      uVar49 = (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 + 0x70) * -2 + 0x60);
      goto LAB_140018cb2;
    }
    if (uVar1 == 0x28) {
      uVar49 = (ulonglong)(byte)(bVar52 + (bVar52 + 0x70 & bVar60) * -2 + 0x60);
      goto LAB_140018f26;
    }
    if (uVar19 + 8 < uVar18) {
      uVar49 = (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 - 8) * -2 + 0x30);
    }
    else {
      cVar53 = 'h';
      cVar58 = -0x58;
      if (uVar18 == uVar43) goto LAB_140018d8b;
      if (uVar18 == uVar19 + 2) {
        uVar49 = (ulonglong)(byte)((bVar52 + bVar60 + (bVar60 & bVar52 + 8) * -2) - 0x30);
        uVar42 = uVar42 - 1;
        goto LAB_140018cb8;
      }
      if (uVar18 == uVar19 + 3) {
        uVar49 = (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 + 0x68) * -2 + 0x90);
        uVar18 = uVar1;
        goto LAB_140019060;
      }
      if (uVar18 == uVar19 + 5) {
        bVar60 = bVar52 + bVar60 + (bVar52 + 0x18 & bVar60) * -2 + 0x70;
        goto LAB_14001905d;
      }
      if (uVar18 == uVar19 + 7) {
        uVar49 = (ulonglong)(byte)(bVar52 + bVar60 + (bVar52 - 0x38 & bVar60) * -2 + 0x50);
        goto LAB_140018f26;
      }
    }
    if (uVar18 == uVar43) {
      uVar49 = (ulonglong)(byte)((bVar52 + bVar60 + (bVar52 - 0x20 & bVar60) * -2) - 0x40);
      goto LAB_140018cb2;
    }
    if (uVar18 == uVar19 + 3) {
      uVar49 = (ulonglong)(byte)(bVar52 + bVar60 + ((bVar52 | 0x40) & bVar60) * -2 + 0x80);
      goto LAB_140018f26;
    }
    if (uVar18 == uVar19 + 7) {
      uVar49 = (ulonglong)((uint)uVar42 + uVar41 + (uVar41 & (uint)uVar42) * -2);
      uVar42 = uVar42 - 1;
    }
    else {
      cVar53 = '`';
      cVar58 = '`';
      if (uVar18 == uVar19 + 8) goto LAB_140018d8b;
      *(char *)((longlong)&local_e8 + uVar42) = (char)uVar49;
    }
    goto LAB_140018cb8;
  }
  if (uVar18 == uVar19 + 4) {
    bVar36 = (bVar52 + bVar60 + (bVar52 - 0x20 & bVar60) * -2) - 0x40;
    goto LAB_140018e70;
  }
  if (uVar18 == uVar19 + 3) {
    uVar49 = (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 + 0x90) * -2 + 0xa0);
    uVar18 = uVar1;
    goto LAB_140019060;
  }
  if (uVar18 == uVar19 + 2) {
    bVar60 = bVar52 + bVar60 + (bVar60 & (bVar52 | 0x40)) * -2 + 0x80;
LAB_14001905d:
    uVar49 = (ulonglong)bVar60;
    goto LAB_140019060;
  }
  if (uVar18 == uVar43) {
    uVar49 = (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 - 0x10) * -2 + 0x60);
    goto LAB_140018f26;
  }
  if (uVar18 == uVar19 + 0x2a) {
    uVar49 = (ulonglong)(byte)(bVar52 + bVar60 + (bVar60 & bVar52 + 0xa0) * -2 + 0x40);
    goto LAB_140018f63;
  }
  uVar49 = (ulonglong)(byte)((bVar52 + bVar60 + (bVar60 & bVar52 + 8) * -2) - 0x30);
  goto LAB_140018c72;
LAB_1400193f6:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar18 = *puVar17;
  uVar19 = 0;
  do {
    if (uVar19 < uVar49) {
      pppppplVar22 = (longlong ******)&stack0x011b418a;
      goto LAB_1400197ca;
    }
    bVar60 = *(byte *)((longlong)&local_e8 + uVar19);
    uVar43 = (ulonglong)bVar60;
    uVar42 = uVar18 + 1;
    cVar53 = (char)uVar19;
    iVar56 = (int)uVar19;
    if (uVar42 <= uVar49) {
      if (uVar49 == uVar42) goto LAB_140019420;
      if (uVar49 == uVar18 + 2) {
LAB_1400194b3:
        bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 2U) * -2 + 0xc;
        *(byte *)((longlong)&local_e8 + uVar19) = bVar52;
        uVar19 = (~uVar18 + uVar19) - (ulonglong)bVar52;
        uVar18 = uVar42;
LAB_1400194f0:
        *(byte *)((longlong)&local_e8 + uVar19) =
             (char)uVar19 + bVar60 + (bVar60 & (char)uVar19 + 0x78U) * -2 + '0';
        lVar27 = uVar19 - uVar49;
        uVar49 = uVar49 + 1;
        uVar43 = (ulonglong)(byte)local_f8[lVar27 + 0xe];
        uVar19 = lVar27 - 2;
        goto LAB_140019420;
      }
      if (uVar49 == uVar18 + 3) {
        bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 0x32U) * -2) - 0x2c;
LAB_1400196cf:
        *(byte *)((longlong)&local_e8 + uVar19) =
             cVar53 + bVar60 + (bVar60 & cVar53 + 10U) * -2 + bVar52 + -0x3c;
        uVar49 = uVar18 + uVar49;
        goto LAB_1400196f8;
      }
      if (uVar49 != uVar18 + 5) {
        if (uVar49 != uVar18 + 8) goto LAB_140019456;
        goto LAB_140019740;
      }
LAB_140019772:
      uVar19 = uVar19 - 1;
      goto LAB_14001942a;
    }
LAB_140019456:
    if (uVar19 < uVar18) {
      pppppplVar22 = (longlong ******)&stack0x01669110;
      goto LAB_1400197ca;
    }
    uVar1 = uVar18 + uVar49;
    uVar44 = uVar18 + 4;
    if (uVar19 < uVar1) {
      if (uVar49 == uVar44) {
        bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x3cU) * -2 + 0x98;
        uVar49 = uVar1;
      }
      else {
        if (uVar49 != uVar18 + 9) {
          if (uVar49 == uVar18 + 0x28) goto LAB_1400194b3;
          if (uVar49 == uVar18 + 0x20) {
LAB_140019420:
            uVar19 = uVar19 + uVar18 + uVar43;
            goto LAB_14001942a;
          }
          goto LAB_1400193f6;
        }
        bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 0x30U) * -2) - 0x20;
      }
LAB_1400196f8:
      uVar19 = uVar19 + ~(ulonglong)bVar52;
    }
    else {
      if (uVar44 <= uVar49) {
        if (uVar49 == uVar42) goto LAB_140019420;
        if (uVar49 == uVar18 + 5) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x2cU) * -2 + 8;
          uVar49 = uVar1;
          goto LAB_1400196f8;
        }
        if (uVar49 == uVar18 + 7) goto LAB_140019772;
        uVar41 = iVar56 + 0x58527a02;
        cVar58 = cVar53 + bVar60 + (bVar60 & (byte)uVar41) * -2 + -0xc;
        if (uVar42 < uVar49) goto LAB_140019564;
LAB_14001973e:
        uVar26 = (ulonglong)uVar41;
        if (uVar49 != uVar42) {
          uVar26 = uVar18 + 2;
          if (uVar49 == uVar26) goto LAB_140019772;
          uVar26 = uVar18 + 3;
          if (uVar49 == uVar26) {
            bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x36U) * -2 + 0x44;
            goto LAB_1400196f8;
          }
          if (uVar49 == uVar44) goto LAB_140019420;
          goto LAB_140019586;
        }
LAB_140019740:
        *(byte *)((longlong)&local_e8 + uVar19) =
             cVar53 + bVar60 + (bVar60 & cVar53 + 0x16U) * -2 + '|';
        uVar18 = uVar42;
        goto LAB_140019772;
      }
      uVar41 = iVar56 + 0x434b07a;
      cVar58 = cVar53 + bVar60 + (bVar60 & (byte)uVar41) * -2 + '$';
      if (uVar49 <= uVar42) goto LAB_14001973e;
LAB_140019564:
      uVar26 = (ulonglong)(iVar56 + 0x8e0d12U);
      cVar58 = cVar53 + bVar60 + (bVar60 & (byte)(iVar56 + 0x8e0d12U)) * -2 + -0x6c;
LAB_140019586:
      if (7 < uVar49) {
        bVar52 = cVar53 + bVar60 * '\x02' + (bVar60 & cVar53 + 0x90U) * -2 + 0xa0;
        goto LAB_1400196cf;
      }
      if (uVar49 == uVar42) goto LAB_140019420;
      if (uVar49 == uVar18 + 2) goto LAB_1400194f0;
      if (uVar49 == uVar44) goto LAB_140019772;
      if (5 < uVar18 || uVar49 == uVar18 + 3) goto LAB_140019740;
      *(char *)((longlong)&local_e8 + uVar19) = cVar58;
    }
LAB_14001942a:
    uVar19 = uVar19 + 1;
    if (0x29 < uVar19) {
LAB_1400197ca:
      local_68 = (undefined1  [16])0x0;
      _local_78 = (undefined1  [16])0x0;
      uVar49 = FUN_140034260(pppppplVar22);
      if ((longlong)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140020740();
      }
      uVar18 = 0xf;
      if (0xf < uVar49) {
        uVar19 = uVar49 | 0xf;
        uVar18 = 0x16;
        if (0x16 < uVar19) {
          uVar18 = uVar19;
        }
        if (uVar19 < 0xfff) {
          puVar20 = (undefined1 *)FUN_1400329d0(uVar18 + 1);
        }
        else {
          lVar27 = FUN_1400329d0(uVar18 + 0x28);
          puVar20 = (undefined1 *)(lVar27 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar20 + -8) = lVar27;
        }
        _local_78 = (undefined1 (*) [16])puVar20;
      }
      local_68._8_8_ = uVar18;
      local_68._0_8_ = uVar49;
      FUN_140034080(puVar20,pppppplVar22,uVar49);
      puVar20[uVar49] = 0;
      FUN_14002b0c0(local_108,&pppppppuStack_140,local_78);
      ppppppplVar32 = local_50;
      pppppplVar22 = local_110[0xc];
      if ((longlong ******)0xf < pppppplVar22) {
        pppppplVar37 = *local_50;
        pppppplVar30 = (longlong ******)((longlong)pppppplVar22 + 1);
        pppppplVar39 = pppppplVar37;
        if ((longlong ******)0xfff < pppppplVar30) {
          pppppplVar39 = (longlong ******)pppppplVar37[-1];
          if (0x1f < (ulonglong)((longlong)pppppplVar37 + (-8 - (longlong)pppppplVar39)))
          goto LAB_14001b5c6;
          pppppplVar30 = pppppplVar22 + 5;
        }
        thunk_FUN_1400340c0(pppppplVar39,pppppplVar30);
      }
      ppppppplVar32[2] = (longlong ******)local_f8._0_8_;
      ppppppplVar32[3] = stack0xffffffffffffff10;
      *ppppppplVar32 = _local_108;
      ppppppplVar32[1] = (longlong ******)auStack_106._6_8_;
      if (0xf < (ulonglong)local_68._8_8_) {
        uVar49 = local_68._8_8_ + 1;
        pppppplVar22 = (longlong ******)_local_78;
        if (0xfff < uVar49) {
          pppppplVar22 = *(longlong *******)((longlong)_local_78 + -8);
          if (0x1f < (ulonglong)((longlong)_local_78 + (-8 - (longlong)pppppplVar22)))
          goto LAB_14001b5c6;
          uVar49 = local_68._8_8_ + 0x28;
        }
        thunk_FUN_1400340c0(pppppplVar22,uVar49);
      }
      local_e8 = _DAT_1400355d0;
      lStack_e0 = _UNK_1400355d8;
      local_d8 = 0x46;
      uStack_d4 = 0;
      uStack_d3 = 0;
      uStack_d2 = 0;
      uStack_d0 = 0;
      uStack_ce = 0;
      uStack_cd = 0;
      uStack_cc = 0;
      uStack_cb = 0;
      uStack_ca = 0;
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      uStack_c3 = 0;
      uStack_c2 = 0;
      uStack_c1 = 0;
      uStack_c0 = 0;
      pppppplVar22 = (longlong ******)&local_e8;
      break;
    }
  } while( true );
LAB_140019984:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar18 = *puVar17;
  uVar19 = 0;
LAB_1400199d8:
  if (uVar19 < uVar49) {
    pppppplVar22 = (longlong ******)&stack0x00a8ff21;
    goto LAB_140019f3f;
  }
  bVar60 = *(byte *)((longlong)&local_e8 + uVar19);
  uVar42 = uVar18 + 1;
  cVar53 = (char)uVar19;
  if (uVar42 <= uVar49) {
    if (uVar49 == uVar42) {
      uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0x19U) * -2 + 0x96);
    }
    else {
      if (uVar49 != uVar18 + 3) {
        if (uVar49 == uVar18 + 2) {
          uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x4fU) * -2 + 0x26);
        }
        else {
          cVar58 = -0x5f;
          cVar57 = -0x17;
          if (uVar49 != uVar18 + 4) {
            if (uVar49 == uVar18 + 5) {
              uVar26 = (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x83U) * -2) - 0x12);
              uVar19 = uVar19 - 1;
              goto LAB_1400199cb;
            }
            if (uVar49 != uVar18 + 6) goto LAB_140019a1b;
            uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x1dU) * -2 + 0x52);
            goto LAB_140019c97;
          }
LAB_140019d01:
          bVar52 = cVar57 + cVar53 + bVar60 + (cVar57 + cVar53 & bVar60) * -2 + cVar58;
          uVar26 = (ulonglong)bVar52;
          *(byte *)((longlong)&local_e8 + uVar19) =
               cVar53 + bVar60 + (cVar53 + 0x95U & bVar60) * -2 + bVar52 + -0x7e;
        }
LAB_140019d3e:
        uVar49 = uVar49 + uVar18;
        goto LAB_140019d41;
      }
      uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x1bU) * -2 + 0x5e);
LAB_140019ba6:
      bVar52 = (cVar53 + bVar60 + (cVar53 + 0x2fU & bVar60) * -2) - 0x1a;
      *(byte *)((longlong)&local_e8 + uVar19) = bVar52;
      lVar27 = (~uVar18 + uVar19) - (ulonglong)bVar52;
      *(byte *)((longlong)&local_e8 + lVar27) =
           (char)lVar27 + bVar60 + ((char)lVar27 + 0x7cU & bVar60) * -2 + '\x18';
      lVar27 = lVar27 - uVar49;
      uVar49 = uVar49 + 1;
      bVar60 = local_f8[lVar27 + 0xe];
      uVar19 = lVar27 - 2;
      uVar18 = uVar42;
    }
    uVar42 = (ulonglong)bVar60;
    uVar19 = uVar19 + uVar18;
LAB_1400199c8:
    uVar19 = uVar19 + uVar42;
LAB_1400199cb:
    uVar19 = uVar19 + 1;
    if (0x28 < uVar19) {
LAB_140019f3f:
      puVar20 = local_78;
      local_68 = (undefined1  [16])0x0;
      _local_78 = (undefined1  [16])0x0;
      uVar49 = FUN_140034260(pppppplVar22);
      if ((longlong)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140020740();
      }
      uVar26 = 0xf;
      if (0xf < uVar49) {
        uVar18 = uVar49 | 0xf;
        uVar26 = 0x16;
        if (0x16 < uVar18) {
          uVar26 = uVar18;
        }
        if (uVar18 < 0xfff) {
          puVar20 = (undefined1 *)FUN_1400329d0(uVar26 + 1);
        }
        else {
          lVar27 = FUN_1400329d0(uVar26 + 0x28);
          puVar20 = (undefined1 *)(lVar27 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar20 + -8) = lVar27;
        }
        _local_78 = (undefined1 (*) [16])puVar20;
      }
      local_68._8_8_ = uVar26;
      local_68._0_8_ = uVar49;
      FUN_140034080(puVar20,pppppplVar22,uVar49);
      puVar20[uVar49] = 0;
      puVar20 = local_78;
      FUN_14002b0c0(local_108,&pppppppuStack_140,puVar20);
      ppppppplVar32 = local_80;
      pppppplVar22 = local_110[0x10];
      if ((longlong ******)0xf < pppppplVar22) {
        pppppplVar37 = *local_80;
        pppppplVar30 = (longlong ******)((longlong)pppppplVar22 + 1);
        pppppplVar39 = pppppplVar37;
        if ((longlong ******)0xfff < pppppplVar30) {
          pppppplVar39 = (longlong ******)pppppplVar37[-1];
          if (0x1f < (ulonglong)((longlong)pppppplVar37 + (-8 - (longlong)pppppplVar39)))
          goto LAB_14001b5c6;
          pppppplVar30 = pppppplVar22 + 5;
        }
        thunk_FUN_1400340c0(pppppplVar39,pppppplVar30);
      }
      ppppppplVar32[2] = (longlong ******)local_f8._0_8_;
      ppppppplVar32[3] = stack0xffffffffffffff10;
      *ppppppplVar32 = _local_108;
      ppppppplVar32[1] = (longlong ******)auStack_106._6_8_;
      if (0xf < (ulonglong)local_68._8_8_) {
        uVar26 = local_68._8_8_ + 1;
        pppppplVar22 = (longlong ******)_local_78;
        if (0xfff < uVar26) {
          pppppplVar22 = *(longlong *******)((longlong)_local_78 + -8);
          if (0x1f < (ulonglong)((longlong)_local_78 + (-8 - (longlong)pppppplVar22)))
          goto LAB_14001b5c6;
          uVar26 = local_68._8_8_ + 0x28;
        }
        thunk_FUN_1400340c0(pppppplVar22,uVar26);
      }
      local_e8 = _DAT_1400355e0;
      lStack_e0 = _UNK_1400355e8;
      local_d8 = 0xa6;
      uStack_d4 = 0;
      uStack_d3 = 0;
      uStack_d2 = 0;
      uStack_d0 = 0;
      uStack_ce = 0;
      uStack_cd = 0;
      uStack_cc = 0;
      uStack_cb = 0;
      uStack_ca = 0;
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      uStack_c3 = 0;
      uStack_c2 = 0;
      uStack_c1 = 0;
      uStack_c0 = 0;
      uStack_bf = 0;
      uStack_be = 0;
      pppppplVar22 = (longlong ******)&local_e8;
      goto LAB_14001a0ef;
    }
    goto LAB_1400199d8;
  }
  uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x4dU) * -2 + 0x32);
LAB_140019a1b:
  if (uVar19 < uVar18) {
    pppppplVar22 = (longlong ******)&stack0x015f82d4;
    goto LAB_140019f3f;
  }
  uVar43 = uVar18 + 2;
  if (uVar43 <= uVar49) {
    cVar58 = -0x6d;
    cVar57 = -0x15;
    if (uVar49 == uVar42) {
LAB_140019c60:
      uVar26 = (ulonglong)
               (byte)(cVar57 + cVar53 + bVar60 + (cVar57 + cVar53 & bVar60) * -2 + cVar58);
      *(byte *)((longlong)&local_e8 + uVar19) =
           cVar53 + bVar60 + (cVar53 - 5U & bVar60) * -2 + '\x1e';
LAB_140019c97:
      uVar19 = uVar19 - 1;
      uVar18 = uVar42;
    }
    else {
      if (uVar49 != uVar18 + 3) {
        cVar58 = -0xf;
        cVar57 = -0x47;
        if (uVar49 == uVar43) goto LAB_140019d01;
        if (uVar49 != uVar18 + 5) {
          if (uVar49 == uVar18 + 6) {
            uVar26 = (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x87U) * -2) - 0x2a);
            goto LAB_140019ba6;
          }
          goto LAB_140019a53;
        }
        uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0x13U) * -2 + 0x72);
        goto LAB_140019d41;
      }
      uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x1fU) * -2 + 0x46);
      uVar19 = uVar19 - 1;
    }
    goto LAB_1400199cb;
  }
  uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x51U) * -2 + 0x1a);
LAB_140019a53:
  if (uVar18 + uVar49 <= uVar19) {
    if (uVar49 < uVar18 + 0x28) {
      uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x4dU) * -2 + 0x32);
    }
    if (uVar18 + uVar49 == 9) {
      uVar26 = (ulonglong)(byte)(cVar53 + (cVar53 - 0x1eU & bVar60) * -2 + 0xb4);
      goto LAB_140019ba6;
    }
    cVar58 = '[';
    cVar57 = -0xd;
    if (uVar49 == uVar42) goto LAB_140019c60;
    if (uVar49 != uVar43) {
      if (uVar49 == uVar18 + 5) {
        uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 - 0xbU & bVar60) * -2 + 0x42);
      }
      else {
        if (uVar49 != uVar18 + 3) {
          cVar58 = '\x16';
          cVar57 = 'F';
          if (uVar49 == uVar18 + 4) goto LAB_140019d01;
          cVar58 = 't';
          cVar57 = '\x14';
          if (uVar49 == uVar18 + 8) goto LAB_140019c60;
          *(char *)((longlong)&local_e8 + uVar19) = (char)uVar26;
          goto LAB_1400199cb;
        }
        uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 + 0x12U & bVar60) * -2 + 0x94);
      }
LAB_140019d41:
      uVar42 = ~uVar26;
      goto LAB_1400199c8;
    }
    uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 + 0x27U & bVar60) * -2 + 0x16);
    uVar19 = uVar19 - 1;
    goto LAB_1400199cb;
  }
  cVar58 = 'f';
  cVar57 = '\x16';
  if (uVar49 == uVar18 + 8) goto LAB_140019c60;
  if (uVar49 == uVar18 + 0x10) {
    uVar26 = (ulonglong)(byte)((cVar53 + bVar60 + (cVar53 + 0xb0U & bVar60) * -2) - 0x20);
    goto LAB_140019c97;
  }
  if (uVar49 == uVar18 + 4) {
    uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 + 0x4aU & bVar60) * -2 + 0x44);
    uVar19 = uVar19 - 1;
    goto LAB_1400199cb;
  }
  if (uVar49 == uVar42) {
    uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x7eU) * -2 + 0xc);
    goto LAB_140019d3e;
  }
  uVar26 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x67U) * -2 + 0x96);
  goto LAB_140019984;
LAB_14001a0ef:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar26 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar18 = *puVar17;
  uVar19 = 0;
LAB_14001a145:
  if (uVar19 < uVar26) {
    pppppplVar22 = (longlong ******)&stack0x008b4db3;
    goto LAB_14001a59a;
  }
  bVar60 = *(byte *)((longlong)&local_e8 + uVar19);
  uVar43 = (ulonglong)bVar60;
  uVar42 = uVar18 + 1;
  cVar53 = (char)uVar19;
  if (uVar42 <= uVar26) {
    if (uVar26 == uVar42) {
      uVar49 = (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 + 0x35U) * -2) - 0x3e);
LAB_14001a132:
      uVar19 = uVar19 + uVar18;
    }
    else {
      cVar58 = 'I';
      cVar57 = -0x2f;
      if (uVar26 == uVar18 + 3) {
LAB_14001a1f0:
        bVar36 = cVar57 + cVar53 + bVar60 + (cVar57 + cVar53 & bVar60) * -2 + cVar58;
        bVar52 = cVar53 + bVar60 + (cVar53 + 0xdU & bVar60) * -2 + 0xb2;
        *(byte *)((longlong)&local_e8 + uVar19) = bVar52;
        uVar19 = (~uVar18 + uVar19) - (ulonglong)bVar52;
LAB_14001a23d:
        uVar49 = (ulonglong)bVar36;
        *(byte *)((longlong)&local_e8 + uVar19) =
             (char)uVar19 + bVar60 + (bVar60 & (char)uVar19 + 0x74U) * -2 + 'H';
        lVar27 = uVar19 - uVar26;
        uVar26 = uVar26 + 1;
        uVar43 = (ulonglong)(byte)local_f8[lVar27 + 0xe];
        uVar19 = lVar27 - 2;
        uVar18 = uVar42;
        goto LAB_14001a132;
      }
      if (uVar26 == uVar18 + 4) {
        uVar49 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x9fU) * -2 + 0x46);
      }
      else {
        if (uVar26 != uVar18 + 5) {
          if (uVar26 != uVar18 + 6) {
            cVar58 = '}';
            cVar57 = -0x5b;
            if (uVar26 != uVar18 + 2) goto LAB_14001a184;
            goto LAB_14001a30b;
          }
          uVar49 = (ulonglong)(byte)((cVar53 + bVar60 + (bVar60 & cVar53 - 0x29U) * -2) - 10);
          goto LAB_14001a370;
        }
        bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x3bU) * -2 + 0x9e;
LAB_14001a40d:
        uVar26 = uVar18 + uVar26;
        uVar49 = (ulonglong)bVar52;
        *(byte *)((longlong)&local_e8 + uVar19) =
             cVar53 + bVar60 + (bVar60 & cVar53 + 0x3fU) * -2 + bVar52 + -0x7a;
      }
LAB_14001a460:
      uVar43 = ~uVar49;
    }
    uVar19 = uVar19 + uVar43;
LAB_14001a138:
    uVar19 = uVar19 + 1;
    if (0x2a < uVar19) {
LAB_14001a59a:
      local_68 = (undefined1  [16])0x0;
      _local_78 = (undefined1  [16])0x0;
      uVar49 = FUN_140034260(pppppplVar22);
      if ((longlong)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140020740();
      }
      uVar26 = 0xf;
      if (0xf < uVar49) {
        uVar18 = uVar49 | 0xf;
        uVar26 = 0x16;
        if (0x16 < uVar18) {
          uVar26 = uVar18;
        }
        if (uVar18 < 0xfff) {
          puVar20 = (undefined1 *)FUN_1400329d0(uVar26 + 1);
        }
        else {
          lVar27 = FUN_1400329d0(uVar26 + 0x28);
          puVar20 = (undefined1 *)(lVar27 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar20 + -8) = lVar27;
        }
        _local_78 = (undefined1 (*) [16])puVar20;
      }
      local_68._8_8_ = uVar26;
      local_68._0_8_ = uVar49;
      FUN_140034080(puVar20,pppppplVar22,uVar49);
      puVar20[uVar49] = 0;
      puVar20 = local_78;
      FUN_14002b0c0(local_108,&pppppppuStack_140,puVar20);
      ppppppplVar32 = local_158;
      pppppplVar22 = local_110[0x14];
      if ((longlong ******)0xf < pppppplVar22) {
        pppppplVar37 = *local_158;
        pppppplVar30 = (longlong ******)((longlong)pppppplVar22 + 1);
        pppppplVar39 = pppppplVar37;
        if ((longlong ******)0xfff < pppppplVar30) {
          pppppplVar39 = (longlong ******)pppppplVar37[-1];
          if (0x1f < (ulonglong)((longlong)pppppplVar37 + (-8 - (longlong)pppppplVar39)))
          goto LAB_14001b5c6;
          pppppplVar30 = pppppplVar22 + 5;
        }
        thunk_FUN_1400340c0(pppppplVar39,pppppplVar30);
      }
      ppppppplVar32[2] = (longlong ******)local_f8._0_8_;
      ppppppplVar32[3] = stack0xffffffffffffff10;
      *ppppppplVar32 = _local_108;
      ppppppplVar32[1] = (longlong ******)auStack_106._6_8_;
      if (0xf < (ulonglong)local_68._8_8_) {
        uVar49 = local_68._8_8_ + 1;
        pppppplVar22 = (longlong ******)_local_78;
        if (0xfff < uVar49) {
          pppppplVar22 = *(longlong *******)((longlong)_local_78 + -8);
          if (0x1f < (ulonglong)((longlong)_local_78 + (-8 - (longlong)pppppplVar22)))
          goto LAB_14001b5c6;
          uVar49 = local_68._8_8_ + 0x28;
        }
        thunk_FUN_1400340c0(pppppplVar22,uVar49);
      }
      local_e8 = _DAT_1400355f0;
      lStack_e0 = _UNK_1400355f8;
      local_d8 = 0x36;
      uStack_d4 = 0;
      uStack_d3 = 0;
      uStack_d2 = 0;
      uStack_d0 = 0;
      uStack_ce = 0;
      uStack_cd = 0;
      uStack_cc = 0;
      uStack_cb = 0;
      uStack_ca = 0;
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      uStack_c3 = 0;
      uStack_c2 = 0;
      uStack_c1 = 0;
      uStack_c0 = 0;
      uStack_bf = 0;
      uStack_be = 0;
      uStack_bd = 0;
      uStack_bc = 0;
      pppppplVar22 = (longlong ******)&local_e8;
      goto LAB_14001a736;
    }
    goto LAB_14001a145;
  }
  uVar49 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x67U) * -2 + 0x96);
LAB_14001a184:
  if (uVar19 < uVar18) {
    pppppplVar22 = (longlong ******)&stack0x0178004c;
    goto LAB_14001a59a;
  }
  if (uVar18 + 6 <= uVar26) {
    cVar58 = '9';
    cVar57 = 'A';
    if (uVar26 != uVar42) goto LAB_14001a292;
LAB_14001a30b:
    uVar49 = (ulonglong)(byte)(cVar57 + cVar53 + bVar60 + (cVar57 + cVar53 & bVar60) * -2 + cVar58);
    *(byte *)((longlong)&local_e8 + uVar19) = cVar53 + bVar60 + (cVar53 + 0x71U & bVar60) * -2 + 'Z'
    ;
LAB_14001a370:
    uVar19 = uVar19 - 1;
    uVar18 = uVar42;
    goto LAB_14001a138;
  }
  uVar49 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x73U) * -2 + 0x4e);
LAB_14001a292:
  if (uVar18 + uVar26 <= uVar19) {
    if (uVar26 < uVar18 + 0x20) {
      uVar49 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x67U) * -2 + 0x96);
    }
    else if (uVar26 == uVar42) {
      uVar49 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 - 0x1aU) * -2 + 0x9c);
      goto LAB_14001a132;
    }
    cVar58 = -0x6f;
    cVar57 = 'Y';
    if (uVar26 == uVar42) goto LAB_14001a30b;
    if (uVar26 == uVar18 + 2) {
      uVar49 = (ulonglong)(byte)(cVar53 + bVar60 + (bVar60 & cVar53 + 0x27U) * -2 + 0x16);
      goto LAB_14001a370;
    }
    if (uVar26 == uVar18 + 3) {
      uVar49 = (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 - 0xbU & bVar60) * -2 + 0x42);
      uVar19 = uVar19 - 1;
    }
    else {
      if (uVar26 == uVar18 + 4) {
        uVar49 = (ulonglong)(byte)((cVar53 + bVar60 + (cVar53 + 0x5fU & bVar60) * -2) - 0x3a);
        goto LAB_14001a460;
      }
      cVar58 = -0x3b;
      cVar57 = '-';
      if (uVar26 == uVar18 + 7) goto LAB_14001a1f0;
      if (uVar26 == uVar18 + 5) {
        bVar36 = cVar53 + bVar60 + (cVar53 - 5U & bVar60) * -2 + 0x1e;
        uVar42 = uVar18;
        goto LAB_14001a23d;
      }
      if (4 < uVar26) {
        bVar52 = (cVar53 + bVar60 * '\x02' + (cVar53 - 0x28U & bVar60) * -2) - 0x10;
        goto LAB_14001a40d;
      }
      if (uVar18 + 3 < uVar26) {
        uVar49 = (ulonglong)(byte)(cVar53 + bVar60 + (cVar53 - 2U & bVar60) * -2 + 0xc);
      }
      *(char *)((longlong)&local_e8 + uVar19) = (char)uVar49;
    }
    goto LAB_14001a138;
  }
  uVar49 = (ulonglong)(byte)((cVar53 + bVar60 + (cVar53 + 0xb5U & bVar60) * -2) - 0x3e);
  goto LAB_14001a0ef;
LAB_14001a736:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      pppppplVar22 = (longlong ******)&stack0x00e5cd19;
      goto LAB_14001aad5;
    }
    bVar60 = *(byte *)((longlong)&local_e8 + uVar18);
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    if (uVar19 <= uVar49) {
      if (uVar49 == uVar19) {
LAB_14001a7c4:
        uVar19 = (ulonglong)bVar60;
        uVar18 = uVar18 + uVar26;
        goto LAB_14001a7cb;
      }
      if (uVar49 == uVar26 + 3) {
LAB_14001a750:
        bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x77U) * -2 + 0x36;
        *(byte *)((longlong)&local_e8 + uVar18) = bVar52;
        uVar18 = (~uVar26 + uVar18) - (ulonglong)bVar52;
        uVar26 = uVar19;
LAB_14001a78a:
        *(byte *)((longlong)&local_e8 + uVar18) =
             (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 + 0x9cU) * -2 + 'X';
        lVar27 = uVar18 - uVar49;
        uVar49 = uVar49 + 1;
        bVar60 = local_f8[lVar27 + 0xe];
        uVar18 = lVar27 - 2;
        goto LAB_14001a7c4;
      }
      if (uVar49 == uVar26 + 5) {
        bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x1fU) * -2 + 0xba;
        goto LAB_14001aa69;
      }
      uVar42 = uVar19;
      if (uVar49 == uVar26 + 2) goto LAB_14001a97e;
      if (uVar49 != uVar26 + 6) goto LAB_14001a7fa;
LAB_14001a95a:
      *(byte *)((longlong)&local_e8 + uVar18) =
           cVar53 + bVar60 + (bVar60 & cVar53 - 0x1dU) * -2 + -0x52;
      uVar42 = uVar19;
LAB_14001a97e:
      uVar26 = uVar42;
      uVar18 = uVar18 - 1;
      goto LAB_14001a7ce;
    }
LAB_14001a7fa:
    if (uVar18 < uVar26) {
      pppppplVar22 = (longlong ******)&stack0x0173a3f4;
      goto LAB_14001aad5;
    }
    uVar42 = uVar26;
    if (uVar18 < uVar26 + uVar49) {
      if (uVar49 == uVar26 + 8) goto LAB_14001a97e;
      if (uVar49 == uVar26 + 5) {
        bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x3cU) * -2 + 0x68;
        goto LAB_14001aa69;
      }
      if (uVar49 != uVar26 + 3) {
        if (uVar49 == uVar26 + 4) goto LAB_14001a78a;
        if (uVar49 == uVar26 + 2) goto LAB_14001a7c4;
        goto LAB_14001a736;
      }
      bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xeU) * -2 + 0xac;
LAB_14001aa92:
      uVar49 = uVar26 + uVar49;
    }
    else {
      if (uVar26 + uVar49 == 1) goto LAB_14001a750;
      if (uVar26 + 9 < uVar49) {
        cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 - 0x2fU) * -2 + '\x1a';
joined_r0x00014001aa40:
        if (uVar49 < 0x20) {
          if (uVar49 == uVar19) goto LAB_14001a7c4;
          if (uVar49 == uVar26 + 2) goto LAB_14001a78a;
          if (uVar49 != uVar26 + 5) {
            uVar42 = uVar19;
            if (uVar49 == uVar26 + 3) goto LAB_14001a97e;
            if (0x27 < uVar26) goto LAB_14001a95a;
            *(char *)((longlong)&local_e8 + uVar18) = cVar58;
            goto LAB_14001a7ce;
          }
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x96U) * -2 + 0x7c;
        }
        else {
          bVar52 = (cVar53 + bVar60 * '\x02' + (bVar60 & cVar53 + 8U) * -2) - 0x30;
        }
LAB_14001aa69:
        *(byte *)((longlong)&local_e8 + uVar18) =
             cVar53 + bVar60 + (bVar60 & cVar53 + 0x2dU) * -2 + bVar52 + -0xe;
        goto LAB_14001aa92;
      }
      if (uVar49 == uVar19) goto LAB_14001a95a;
      if (uVar49 == uVar26 + 2) goto LAB_14001a97e;
      if (uVar49 != uVar26 + 4) {
        if (uVar49 == uVar26 + 3) goto LAB_14001a78a;
        cVar58 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x25U) * -2 + '\"';
        goto joined_r0x00014001aa40;
      }
      bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x8dU) * -2 + 0xb2;
    }
    uVar19 = ~(ulonglong)bVar52;
LAB_14001a7cb:
    uVar18 = uVar18 + uVar19;
LAB_14001a7ce:
    uVar18 = uVar18 + 1;
    if (0x2c < uVar18) {
LAB_14001aad5:
      local_68 = (undefined1  [16])0x0;
      _local_78 = (undefined1  [16])0x0;
      uVar49 = FUN_140034260(pppppplVar22);
      if ((longlong)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140020740();
      }
      uVar26 = 0xf;
      if (0xf < uVar49) {
        uVar18 = uVar49 | 0xf;
        uVar26 = 0x16;
        if (0x16 < uVar18) {
          uVar26 = uVar18;
        }
        if (uVar18 < 0xfff) {
          puVar20 = (undefined1 *)FUN_1400329d0(uVar26 + 1);
        }
        else {
          lVar27 = FUN_1400329d0(uVar26 + 0x28);
          puVar20 = (undefined1 *)(lVar27 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar20 + -8) = lVar27;
        }
        _local_78 = (undefined1 (*) [16])puVar20;
      }
      local_68._8_8_ = uVar26;
      local_68._0_8_ = uVar49;
      FUN_140034080(puVar20,pppppplVar22,uVar49);
      puVar20[uVar49] = 0;
      puVar20 = local_78;
      FUN_14002b0c0(local_108,&pppppppuStack_140,puVar20);
      ppppppplVar32 = local_150;
      pppppplVar22 = local_110[0x18];
      if ((longlong ******)0xf < pppppplVar22) {
        pppppplVar37 = *local_150;
        pppppplVar30 = (longlong ******)((longlong)pppppplVar22 + 1);
        pppppplVar39 = pppppplVar37;
        if ((longlong ******)0xfff < pppppplVar30) {
          pppppplVar39 = (longlong ******)pppppplVar37[-1];
          if (0x1f < (ulonglong)((longlong)pppppplVar37 + (-8 - (longlong)pppppplVar39)))
          goto LAB_14001b5c6;
          pppppplVar30 = pppppplVar22 + 5;
        }
        thunk_FUN_1400340c0(pppppplVar39,pppppplVar30);
      }
      ppppppplVar32[2] = (longlong ******)local_f8._0_8_;
      ppppppplVar32[3] = stack0xffffffffffffff10;
      *ppppppplVar32 = _local_108;
      ppppppplVar32[1] = (longlong ******)auStack_106._6_8_;
      if (0xf < (ulonglong)local_68._8_8_) {
        uVar49 = local_68._8_8_ + 1;
        pppppplVar22 = (longlong ******)_local_78;
        if (0xfff < uVar49) {
          pppppplVar22 = *(longlong *******)((longlong)_local_78 + -8);
          if (0x1f < (ulonglong)((longlong)_local_78 + (-8 - (longlong)pppppplVar22)))
          goto LAB_14001b5c6;
          uVar49 = local_68._8_8_ + 0x28;
        }
        thunk_FUN_1400340c0(pppppplVar22,uVar49);
      }
      local_e8 = _DAT_140035600;
      lStack_e0 = _UNK_140035608;
      local_d8 = 0x80;
      uStack_d4 = 0;
      uStack_d3 = 0;
      uStack_d2 = 0;
      uStack_d0 = 0;
      uStack_ce = 0;
      uStack_cd = 0;
      uStack_cc = 0;
      uStack_cb = 0;
      uStack_ca = 0;
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      uStack_c3 = 0;
      uStack_c2 = 0;
      uStack_c1 = 0;
      uStack_c0 = 0;
      pppppplVar22 = (longlong ******)&local_e8;
      break;
    }
  } while( true );
LAB_14001ac74:
  puVar17 = (ulonglong *)FUN_140031690();
  uVar49 = *puVar17;
  puVar17 = (ulonglong *)FUN_1400316a0();
  uVar26 = *puVar17;
  uVar18 = 0;
  do {
    if (uVar18 < uVar49) {
      pppppplVar22 = (longlong ******)&stack0x00ada850;
      break;
    }
    bVar60 = *(byte *)((longlong)&local_e8 + uVar18);
    uVar19 = uVar26 + 1;
    cVar53 = (char)uVar18;
    if (uVar49 < uVar19) {
LAB_14001ad37:
      if (uVar18 < uVar26) {
        pppppplVar22 = (longlong ******)&stack0x016b8b38;
        break;
      }
      if (uVar26 + uVar49 <= uVar18) {
        if (uVar49 == uVar19) {
LAB_14001add5:
          *(byte *)((longlong)&local_e8 + uVar18) =
               cVar53 + bVar60 + (bVar60 & cVar53 + 0xa8U) * -2 + '\x10';
          goto LAB_14001adf9;
        }
        if (uVar49 == uVar26 + 2) goto LAB_14001adf9;
        if (uVar49 == uVar26 + 5) goto LAB_14001ae2c;
        if (uVar49 == uVar26 + 3) goto LAB_14001acc7;
        if (uVar26 + 6 < uVar49) {
          cVar53 = cVar53 + bVar60 + (bVar60 & cVar53 + 0xb0U) * -2 + -0x20;
        }
        else {
          cVar53 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x18U) * -2 + 'p';
        }
        *(char *)((longlong)&local_e8 + uVar18) = cVar53;
        goto LAB_14001ad0b;
      }
      if (uVar49 == uVar26 + 3) goto LAB_14001add5;
      if (uVar49 != uVar26 + 9) {
        if (uVar49 == uVar26 + 2) {
          bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 - 0x20U) * -2) - 0x40;
          goto LAB_14001ae68;
        }
        if (uVar49 == uVar26 + 8) {
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x10U) * -2 + 0xa0;
          uVar49 = uVar26 + uVar49;
          goto LAB_14001ae91;
        }
        if (uVar49 == uVar19) goto LAB_14001ac8d;
        if (uVar49 == uVar26 + 6) goto LAB_14001acc7;
        if (uVar49 == uVar26 + 0x20) goto LAB_14001ad01;
        goto LAB_14001ac74;
      }
LAB_14001adf9:
      uVar18 = uVar18 - 1;
      uVar26 = uVar19;
    }
    else {
      if (uVar49 == uVar19) {
LAB_14001ad01:
        uVar19 = (ulonglong)bVar60;
        uVar18 = uVar18 + uVar26;
      }
      else {
        if (uVar49 == uVar26 + 3) {
LAB_14001ac8d:
          bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 + 8U) * -2) - 0x30;
          *(byte *)((longlong)&local_e8 + uVar18) = bVar52;
          uVar18 = (~uVar26 + uVar18) - (ulonglong)bVar52;
          uVar26 = uVar19;
LAB_14001acc7:
          *(byte *)((longlong)&local_e8 + uVar18) =
               (char)uVar18 + bVar60 + (bVar60 & (char)uVar18 + 0x20U) * -2 + '@';
          lVar27 = uVar18 - uVar49;
          uVar49 = uVar49 + 1;
          bVar60 = local_f8[lVar27 + 0xe];
          uVar18 = lVar27 - 2;
          goto LAB_14001ad01;
        }
        if (uVar49 == uVar26 + 2) {
LAB_14001ae2c:
          bVar52 = (cVar53 + bVar60 + (bVar60 & cVar53 - 0x28U) * -2) - 0x10;
        }
        else {
          if (uVar49 != uVar26 + 5) {
            if (uVar49 != uVar26 + 4) goto LAB_14001ad37;
            goto LAB_14001add5;
          }
          bVar52 = cVar53 + bVar60 + (bVar60 & cVar53 + 0x38U) * -2 + 0xb0;
LAB_14001ae68:
          *(byte *)((longlong)&local_e8 + uVar18) =
               cVar53 + bVar60 + (bVar60 & cVar53 - 0x28U) * -2 + bVar52 + -0x10;
          uVar49 = uVar26 + uVar49;
        }
LAB_14001ae91:
        uVar19 = ~(ulonglong)bVar52;
      }
      uVar18 = uVar18 + uVar19;
    }
LAB_14001ad0b:
    uVar18 = uVar18 + 1;
  } while (uVar18 < 0x29);
  local_68 = (undefined1  [16])0x0;
  _local_78 = (undefined1  [16])0x0;
  uVar49 = FUN_140034260(pppppplVar22);
  if ((longlong)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  uVar26 = 0xf;
  if (0xf < uVar49) {
    uVar18 = uVar49 | 0xf;
    uVar26 = 0x16;
    if (0x16 < uVar18) {
      uVar26 = uVar18;
    }
    if (uVar18 < 0xfff) {
      puVar20 = (undefined1 *)FUN_1400329d0(uVar26 + 1);
    }
    else {
      lVar27 = FUN_1400329d0(uVar26 + 0x28);
      puVar20 = (undefined1 *)(lVar27 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar20 + -8) = lVar27;
    }
    _local_78 = (undefined1 (*) [16])puVar20;
  }
  local_68._8_8_ = uVar26;
  local_68._0_8_ = uVar49;
  FUN_140034080(puVar20,pppppplVar22,uVar49);
  puVar20[uVar49] = 0;
  FUN_14002b0c0(local_108,&pppppppuStack_140,local_78);
  ppppppplVar32 = local_1e0;
  pppppplVar22 = local_110[0x1c];
  if ((longlong ******)0xf < pppppplVar22) {
    pppppplVar37 = *local_1e0;
    pppppplVar30 = (longlong ******)((longlong)pppppplVar22 + 1);
    pppppplVar39 = pppppplVar37;
    if ((longlong ******)0xfff < pppppplVar30) {
      pppppplVar39 = (longlong ******)pppppplVar37[-1];
      if (0x1f < (ulonglong)((longlong)pppppplVar37 + (-8 - (longlong)pppppplVar39)))
      goto LAB_14001b5c6;
      pppppplVar30 = pppppplVar22 + 5;
    }
    thunk_FUN_1400340c0(pppppplVar39,pppppplVar30);
  }
  ppppppplVar32[2] = (longlong ******)local_f8._0_8_;
  ppppppplVar32[3] = stack0xffffffffffffff10;
  *ppppppplVar32 = _local_108;
  ppppppplVar32[1] = (longlong ******)auStack_106._6_8_;
  if ((ulonglong)local_68._8_8_ < 0x10) goto LAB_14001b0db;
  uVar49 = local_68._8_8_ + 1;
  pppppplVar22 = (longlong ******)_local_78;
  if (0xfff < uVar49) {
    pppppplVar22 = *(longlong *******)((longlong)_local_78 + -8);
    if (0x1f < (ulonglong)((longlong)_local_78 + (-8 - (longlong)pppppplVar22))) goto LAB_14001b5c6;
    uVar49 = local_68._8_8_ + 0x28;
  }
  thunk_FUN_1400340c0(pppppplVar22,uVar49);
LAB_14001b0db:
  ppppppplVar32 = local_110;
  uVar49 = CONCAT26(local_122,uStack_128);
  if (0xf < uVar49) {
    uVar26 = uVar49 + 1;
    pppppppuVar23 = pppppppuStack_140;
    if (0xfff < uVar26) {
      pppppppuVar23 = (undefined8 *******)pppppppuStack_140[-1];
      if (0x1f < (ulonglong)((longlong)pppppppuStack_140 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      uVar26 = uVar49 + 0x28;
    }
    thunk_FUN_1400340c0(pppppppuVar23,uVar26);
  }
  if (7 < uStack_3a0) {
    uVar49 = uStack_3a0 * 2 + 2;
    ppppppplVar25 = local_3b8;
    if (0xfff < uVar49) {
      ppppppplVar25 = (longlong *******)local_3b8[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_3b8 + (-8 - (longlong)ppppppplVar25)))
      goto LAB_14001b5c6;
      uVar49 = uStack_3a0 * 2 + 0x29;
    }
    thunk_FUN_1400340c0(ppppppplVar25,uVar49);
  }
  uVar49 = CONCAT26(uStack_19a,uStack_1a0);
  if (0xf < uVar49) {
    uVar26 = uVar49 + 1;
    lVar27 = local_1b8._0_8_;
    if (0xfff < uVar26) {
      lVar27 = *(longlong *)(local_1b8._0_8_ + -8);
      if (0x1f < (ulonglong)((local_1b8._0_8_ + -8) - lVar27)) goto LAB_14001b5c6;
      uVar26 = uVar49 + 0x28;
    }
    thunk_FUN_1400340c0(lVar27,uVar26);
  }
  if (local_328 != (undefined1  [8])0x0) {
    uVar49 = local_318 - (longlong)local_328;
    auVar40 = local_328;
    if (0xfff < uVar49) {
      auVar40 = *(undefined1 (*) [8])((longlong)local_328 + -8);
      if (0x1f < (ulonglong)(((longlong)local_328 + -8) - (longlong)auVar40)) goto LAB_14001b5c6;
      uVar49 = uVar49 + 0x27;
    }
    thunk_FUN_1400340c0(auVar40,uVar49);
  }
  if (local_348 != (undefined1  [8])0x0) {
    uVar49 = local_338 - (longlong)local_348;
    auVar40 = local_348;
    if (0xfff < uVar49) {
      auVar40 = *(undefined1 (*) [8])((longlong)local_348 + -8);
      if (0x1f < (ulonglong)(((longlong)local_348 + -8) - (longlong)auVar40)) goto LAB_14001b5c6;
      uVar49 = uVar49 + 0x27;
    }
    thunk_FUN_1400340c0(auVar40,uVar49);
  }
  uVar49 = CONCAT26(uStack_16a,CONCAT33(uStack_16d,uStack_170));
  if (0xf < uVar49) {
    uVar26 = uVar49 + 1;
    auVar40 = local_188;
    if (0xfff < uVar26) {
      auVar40 = *(undefined1 (*) [8])((longlong)local_188 + -8);
      if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)auVar40))) goto LAB_14001b5c6;
      uVar26 = uVar49 + 0x28;
    }
    thunk_FUN_1400340c0(auVar40,uVar26);
  }
  if ((longlong ******)0xf < pppppplStack_2f0) {
    pppppplVar22 = (longlong ******)((longlong)pppppplStack_2f0 + 1);
    pppppppuVar23 = local_308;
    if ((longlong ******)0xfff < pppppplVar22) {
      pppppppuVar23 = (undefined8 *******)local_308[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_308 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      pppppplVar22 = pppppplStack_2f0 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,pppppplVar22);
  }
  if ((undefined8 ******)0xf < ppppppuStack_380) {
    ppppppuVar50 = (undefined8 ******)((longlong)ppppppuStack_380 + 1);
    pppppppuVar23 = local_398;
    if ((undefined8 ******)0xfff < ppppppuVar50) {
      pppppppuVar23 = (undefined8 *******)local_398[-1];
      if (0x1f < (ulonglong)((longlong)local_398 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      ppppppuVar50 = ppppppuStack_380 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,ppppppuVar50);
  }
  uVar49 = CONCAT17(uStack_259,uStack_260);
  if (0xf < uVar49) {
    uVar26 = uVar49 + 1;
    pppppppsVar24 = local_278;
    if (0xfff < uVar26) {
      pppppppsVar24 = (short *******)local_278[-1];
      if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)pppppppsVar24)))
      goto LAB_14001b5c6;
      uVar26 = uVar49 + 0x28;
    }
    thunk_FUN_1400340c0(pppppppsVar24,uVar26);
  }
  if ((longlong ******)0xf < pppppplStack_3e0) {
    pppppplVar22 = (longlong ******)((longlong)pppppplStack_3e0 + 1);
    pppppppuVar23 = local_3f8;
    if ((longlong ******)0xfff < pppppplVar22) {
      pppppppuVar23 = (undefined8 *******)local_3f8[-1];
      if (0x1f < (ulonglong)((longlong)local_3f8 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      pppppplVar22 = pppppplStack_3e0 + 5;
    }
    thunk_FUN_1400340c0(pppppppuVar23,pppppplVar22);
  }
  if (0xf < local_5a0) {
    uVar49 = local_5a0 + 1;
    pppppppuVar23 = local_5b8[0];
    if (0xfff < uVar49) {
      pppppppuVar23 = (undefined8 *******)local_5b8[0][-1];
      if (0x1f < (ulonglong)((longlong)local_5b8[0] + (-8 - (longlong)pppppppuVar23)))
      goto LAB_14001b5c6;
      uVar49 = local_5a0 + 0x28;
    }
    thunk_FUN_1400340c0(pppppppuVar23,uVar49);
  }
  if (local_598 != 0) {
    uVar49 = local_588 - local_598;
    lVar27 = local_598;
    if (0xfff < uVar49) {
      lVar27 = *(longlong *)(local_598 + -8);
      if (0x1f < (ulonglong)((local_598 + -8) - lVar27)) goto LAB_14001b5c6;
      uVar49 = uVar49 + 0x27;
    }
    thunk_FUN_1400340c0(lVar27,uVar49);
  }
  if ((longlong ******)0xf < pppppplStack_5c0) {
    pppppplVar22 = (longlong ******)((longlong)pppppplStack_5c0 + 1);
    pppppplVar30 = local_5d8;
    if ((longlong ******)0xfff < pppppplVar22) {
      pppppplVar30 = (longlong ******)local_5d8[-1];
      if (0x1f < (ulonglong)((longlong)local_5d8 + (-8 - (longlong)pppppplVar30))) {
LAB_14001b5c6:
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      pppppplVar22 = pppppplStack_5c0 + 5;
    }
    thunk_FUN_1400340c0(pppppplVar30,pppppplVar22);
  }
  return ppppppplVar32;
}


/* Unwind@14001b640 */

void Unwind_14001b640(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x590);
  return;
}


/* Unwind@14001b680 */

void Unwind_14001b680(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x590);
  return;
}


/* Unwind@14001b6c0 */

void Unwind_14001b6c0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x590);
  return;
}


/* Unwind@14001b700 */

void Unwind_14001b700(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x590);
  return;
}


/* Unwind@14001b740 */

void Unwind_14001b740(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x590);
  return;
}


/* Unwind@14001b780 */

void Unwind_14001b780(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x590);
  return;
}


/* Unwind@14001b7c0 */

void Unwind_14001b7c0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x590);
  return;
}


/* Unwind@14001b800 */

void Unwind_14001b800(undefined8 param_1,longlong param_2)

{
  FUN_140029830(param_2 + 0x500);
  return;
}


/* Unwind@14001b840 */

void Unwind_14001b840(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x4c0);
  return;
}


/* Unwind@14001b880 */

void Unwind_14001b880(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x250);
  return;
}


/* Unwind@14001b8c0 */

void Unwind_14001b8c0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x4c0);
  return;
}


/* Unwind@14001b900 */

void Unwind_14001b900(undefined8 param_1,longlong param_2)

{
  FUN_140029830(param_2 + 0x500);
  return;
}


/* Unwind@14001b940 */

void Unwind_14001b940(undefined8 param_1,longlong param_2)

{
  FUN_140029830(param_2 + 0x330);
  return;
}


/* Unwind@14001b980 */

void Unwind_14001b980(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x520);
  return;
}


/* Unwind@14001b9c0 */

void Unwind_14001b9c0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x480);
  return;
}


/* Unwind@14001ba00 */

void Unwind_14001ba00(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x520);
  return;
}


/* Unwind@14001ba40 */

void Unwind_14001ba40(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x500);
  return;
}


/* Unwind@14001ba80 */

void Unwind_14001ba80(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x390);
  return;
}


/* Unwind@14001bac0 */

void Unwind_14001bac0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x450);
  return;
}


/* Unwind@14001bb00 */

void Unwind_14001bb00(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x590);
  return;
}


/* Unwind@14001bb40 */

void Unwind_14001bb40(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x270);
  return;
}


/* Unwind@14001bb80 */

void Unwind_14001bb80(undefined8 param_1,longlong param_2)

{
  FUN_140029830(param_2 + 0x2a0);
  return;
}


/* Unwind@14001bbc0 */

void Unwind_14001bbc0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x330);
  return;
}


/* Unwind@14001bc00 */

void Unwind_14001bc00(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x300);
  return;
}


/* Unwind@14001bc40 */

void Unwind_14001bc40(undefined8 param_1,longlong param_2)

{
  FUN_140029830(param_2 + 0x3c0);
  return;
}


/* Unwind@14001bc80 */

void Unwind_14001bc80(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x350);
  return;
}


/* Unwind@14001bcc0 */

void Unwind_14001bcc0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x480);
  return;
}


/* Unwind@14001bd00 */

void Unwind_14001bd00(undefined8 param_1,longlong param_2)

{
  FUN_140029830(param_2 + 0x3e0);
  return;
}


/* Unwind@14001bd40 */

void Unwind_14001bd40(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x2a0);
  return;
}


/* Unwind@14001bd80 */

void Unwind_14001bd80(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x450);
  return;
}


/* Unwind@14001bdc0 */

void Unwind_14001bdc0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x370);
  return;
}


/* Unwind@14001be00 */

void Unwind_14001be00(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x3c0);
  return;
}


/* Unwind@14001be40 */

void Unwind_14001be40(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x3e0);
  return;
}


/* Unwind@14001be80 */

void Unwind_14001be80(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x430);
  return;
}


/* Unwind@14001bec0 */

void Unwind_14001bec0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x2c0);
  return;
}


/* Unwind@14001bf00 */

void Unwind_14001bf00(undefined8 param_1,longlong param_2)

{
  FUN_140029830(param_2 + 0x430);
  return;
}


/* Unwind@14001bf40 */

void Unwind_14001bf40(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x2e0);
  return;
}


/* Unwind@14001bf80 */

void Unwind_14001bf80(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xa0);
  return;
}


/* Unwind@14001bfc0 */

void Unwind_14001bfc0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xc0);
  return;
}


/* Unwind@14001c000 */

void Unwind_14001c000(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0xe0);
  return;
}


/* Unwind@14001c040 */

void Unwind_14001c040(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x100);
  return;
}


/* Unwind@14001c080 */

void Unwind_14001c080(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x120);
  return;
}


/* Unwind@14001c0c0 */

void Unwind_14001c0c0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x140);
  return;
}


/* Unwind@14001c100 */

void Unwind_14001c100(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x160);
  return;
}


/* Unwind@14001c140 */

void Unwind_14001c140(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x180);
  return;
}


/* Unwind@14001c180 */

void Unwind_14001c180(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x1a0);
  return;
}


/* Unwind@14001c1c0 */

void Unwind_14001c1c0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x1c0);
  return;
}


/* Unwind@14001c200 */

void Unwind_14001c200(undefined8 param_1,longlong param_2)

{
  FUN_140029830(param_2 + 0x350);
  return;
}


/* Unwind@14001c240 */

void Unwind_14001c240(undefined8 param_1,longlong param_2)

{
  FUN_14001c980(*(undefined8 *)(param_2 + 0x4f8));
  FUN_14001f550(param_2 + 0x4c0);
  return;
}


/* Unwind@14001c290 */

void Unwind_14001c290(undefined8 param_1,longlong param_2)

{
  FUN_140029830(param_2 + 0x250);
  return;
}


/* Unwind@14001c2d0 */

void Unwind_14001c2d0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x450);
  return;
}


/* Unwind@14001c310 */

void Unwind_14001c310(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x2e0);
  return;
}


/* Unwind@14001c350 */

void Unwind_14001c350(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x2c0);
  return;
}


/* Unwind@14001c390 */

void Unwind_14001c390(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x480);
  return;
}


/* Unwind@14001c3d0 */

void Unwind_14001c3d0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x300);
  return;
}


/* Unwind@14001c410 */

void Unwind_14001c410(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x270);
  return;
}


/* Unwind@14001c450 */

void Unwind_14001c450(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x390);
  return;
}


/* Unwind@14001c490 */

void Unwind_14001c490(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x210);
  return;
}


/* Unwind@14001c4d0 */

void Unwind_14001c4d0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x50);
  return;
}


/* Unwind@14001c510 */

void Unwind_14001c510(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x70);
  return;
}


/* Unwind@14001c550 */

void Unwind_14001c550(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x30);
  return;
}


/* FUN_14001c590 */

undefined1 * FUN_14001c590(undefined1 *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    uVar1 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar1) {
      lVar2 = *(longlong *)(param_1 + 8);
      uVar13 = uVar1 + 1;
      lVar14 = lVar2;
      if (0xfff < uVar13) {
        lVar14 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar14)) goto LAB_14001c970;
        uVar13 = uVar1 + 0x28;
      }
      thunk_FUN_1400340c0(lVar14,uVar13);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0xf;
    param_1[8] = 0;
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    uVar6 = *(undefined4 *)(param_2 + 0x10);
    uVar7 = *(undefined4 *)(param_2 + 0x14);
    uVar8 = *(undefined4 *)(param_2 + 0x1c);
    uVar9 = *(undefined4 *)(param_2 + 0x20);
    uVar10 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = uVar8;
    *(undefined4 *)(param_1 + 0x20) = uVar9;
    *(undefined4 *)(param_1 + 0x24) = uVar10;
    *(undefined4 *)(param_1 + 8) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    *(undefined4 *)(param_1 + 0x14) = uVar7;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0xf;
    param_2[8] = 0;
    uVar1 = *(ulonglong *)(param_1 + 0x40);
    if (0xf < uVar1) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      uVar13 = uVar1 + 1;
      lVar14 = lVar2;
      if (0xfff < uVar13) {
        lVar14 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar14)) goto LAB_14001c970;
        uVar13 = uVar1 + 0x28;
      }
      thunk_FUN_1400340c0(lVar14,uVar13);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0xf;
    param_1[0x28] = 0;
    uVar4 = *(undefined4 *)(param_2 + 0x28);
    uVar5 = *(undefined4 *)(param_2 + 0x2c);
    uVar6 = *(undefined4 *)(param_2 + 0x30);
    uVar7 = *(undefined4 *)(param_2 + 0x34);
    uVar8 = *(undefined4 *)(param_2 + 0x3c);
    uVar9 = *(undefined4 *)(param_2 + 0x40);
    uVar10 = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = uVar8;
    *(undefined4 *)(param_1 + 0x40) = uVar9;
    *(undefined4 *)(param_1 + 0x44) = uVar10;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(undefined4 *)(param_1 + 0x30) = uVar6;
    *(undefined4 *)(param_1 + 0x34) = uVar7;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0xf;
    param_2[0x28] = 0;
    uVar1 = *(ulonglong *)(param_1 + 0x60);
    if (0xf < uVar1) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      uVar13 = uVar1 + 1;
      lVar14 = lVar2;
      if (0xfff < uVar13) {
        lVar14 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar14)) goto LAB_14001c970;
        uVar13 = uVar1 + 0x28;
      }
      thunk_FUN_1400340c0(lVar14,uVar13);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0xf;
    param_1[0x48] = 0;
    uVar4 = *(undefined4 *)(param_2 + 0x48);
    uVar5 = *(undefined4 *)(param_2 + 0x4c);
    uVar6 = *(undefined4 *)(param_2 + 0x50);
    uVar7 = *(undefined4 *)(param_2 + 0x54);
    uVar8 = *(undefined4 *)(param_2 + 0x5c);
    uVar9 = *(undefined4 *)(param_2 + 0x60);
    uVar10 = *(undefined4 *)(param_2 + 100);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = uVar8;
    *(undefined4 *)(param_1 + 0x60) = uVar9;
    *(undefined4 *)(param_1 + 100) = uVar10;
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    *(undefined4 *)(param_1 + 0x4c) = uVar5;
    *(undefined4 *)(param_1 + 0x50) = uVar6;
    *(undefined4 *)(param_1 + 0x54) = uVar7;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0xf;
    param_2[0x48] = 0;
    uVar1 = *(ulonglong *)(param_1 + 0x80);
    if (0xf < uVar1) {
      lVar2 = *(longlong *)(param_1 + 0x68);
      uVar13 = uVar1 + 1;
      lVar14 = lVar2;
      if (0xfff < uVar13) {
        lVar14 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar14)) goto LAB_14001c970;
        uVar13 = uVar1 + 0x28;
      }
      thunk_FUN_1400340c0(lVar14,uVar13);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0xf;
    param_1[0x68] = 0;
    uVar4 = *(undefined4 *)(param_2 + 0x68);
    uVar5 = *(undefined4 *)(param_2 + 0x6c);
    uVar6 = *(undefined4 *)(param_2 + 0x70);
    uVar7 = *(undefined4 *)(param_2 + 0x74);
    uVar8 = *(undefined4 *)(param_2 + 0x7c);
    uVar9 = *(undefined4 *)(param_2 + 0x80);
    uVar10 = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x7c) = uVar8;
    *(undefined4 *)(param_1 + 0x80) = uVar9;
    *(undefined4 *)(param_1 + 0x84) = uVar10;
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    *(undefined4 *)(param_1 + 0x70) = uVar6;
    *(undefined4 *)(param_1 + 0x74) = uVar7;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0xf;
    param_2[0x68] = 0;
    uVar1 = *(ulonglong *)(param_1 + 0xa0);
    if (0xf < uVar1) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      uVar13 = uVar1 + 1;
      lVar14 = lVar2;
      if (0xfff < uVar13) {
        lVar14 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar14)) goto LAB_14001c970;
        uVar13 = uVar1 + 0x28;
      }
      thunk_FUN_1400340c0(lVar14,uVar13);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0xf;
    param_1[0x88] = 0;
    uVar4 = *(undefined4 *)(param_2 + 0x88);
    uVar5 = *(undefined4 *)(param_2 + 0x8c);
    uVar6 = *(undefined4 *)(param_2 + 0x90);
    uVar7 = *(undefined4 *)(param_2 + 0x94);
    uVar8 = *(undefined4 *)(param_2 + 0x9c);
    uVar9 = *(undefined4 *)(param_2 + 0xa0);
    uVar10 = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0x9c) = uVar8;
    *(undefined4 *)(param_1 + 0xa0) = uVar9;
    *(undefined4 *)(param_1 + 0xa4) = uVar10;
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    *(undefined4 *)(param_1 + 0x8c) = uVar5;
    *(undefined4 *)(param_1 + 0x90) = uVar6;
    *(undefined4 *)(param_1 + 0x94) = uVar7;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0xf;
    param_2[0x88] = 0;
    uVar1 = *(ulonglong *)(param_1 + 0xc0);
    if (0xf < uVar1) {
      lVar2 = *(longlong *)(param_1 + 0xa8);
      uVar13 = uVar1 + 1;
      lVar14 = lVar2;
      if (0xfff < uVar13) {
        lVar14 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar14)) goto LAB_14001c970;
        uVar13 = uVar1 + 0x28;
      }
      thunk_FUN_1400340c0(lVar14,uVar13);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0xf;
    param_1[0xa8] = 0;
    uVar4 = *(undefined4 *)(param_2 + 0xa8);
    uVar5 = *(undefined4 *)(param_2 + 0xac);
    uVar6 = *(undefined4 *)(param_2 + 0xb0);
    uVar7 = *(undefined4 *)(param_2 + 0xb4);
    uVar8 = *(undefined4 *)(param_2 + 0xbc);
    uVar9 = *(undefined4 *)(param_2 + 0xc0);
    uVar10 = *(undefined4 *)(param_2 + 0xc4);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xbc) = uVar8;
    *(undefined4 *)(param_1 + 0xc0) = uVar9;
    *(undefined4 *)(param_1 + 0xc4) = uVar10;
    *(undefined4 *)(param_1 + 0xa8) = uVar4;
    *(undefined4 *)(param_1 + 0xac) = uVar5;
    *(undefined4 *)(param_1 + 0xb0) = uVar6;
    *(undefined4 *)(param_1 + 0xb4) = uVar7;
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined8 *)(param_2 + 0xc0) = 0xf;
    param_2[0xa8] = 0;
    uVar1 = *(ulonglong *)(param_1 + 0xe0);
    if (0xf < uVar1) {
      lVar2 = *(longlong *)(param_1 + 200);
      uVar13 = uVar1 + 1;
      lVar14 = lVar2;
      if (0xfff < uVar13) {
        lVar14 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar14)) {
LAB_14001c970:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar13 = uVar1 + 0x28;
      }
      thunk_FUN_1400340c0(lVar14,uVar13);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0xf;
    param_1[200] = 0;
    lVar2 = *(longlong *)(param_2 + 200);
    uVar11 = *(undefined8 *)(param_2 + 0xd0);
    uVar12 = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(param_1 + 0xe0) = uVar12;
    *(longlong *)(param_1 + 200) = lVar2;
    *(undefined8 *)(param_1 + 0xd0) = uVar11;
    *(undefined8 *)(param_2 + 0xd8) = 0;
    *(undefined8 *)(param_2 + 0xe0) = 0xf;
    param_2[200] = 0;
  }
  return param_1;
}


/* FUN_14001c980 */

void FUN_14001c980(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe0);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 200);
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_14001cbfe;
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0xf;
  *(undefined1 *)(param_1 + 200) = 0;
  uVar1 = *(ulonglong *)(param_1 + 0xc0);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_14001cbfe;
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0xf;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_14001cbfe;
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0xf;
  *(undefined1 *)(param_1 + 0x88) = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x80);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_14001cbfe;
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0xf;
  *(undefined1 *)(param_1 + 0x68) = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_14001cbfe;
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0xf;
  *(undefined1 *)(param_1 + 0x48) = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x40);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_14001cbfe;
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xf;
  *(undefined1 *)(param_1 + 0x28) = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
LAB_14001cbfe:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}


/* FUN_14001cc00 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_14001cc00(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  unkuint10 Var8;
  undefined8 uVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  char *pcVar14;
  undefined1 *puVar15;
  uint uVar16;
  char *pcVar17;
  ulonglong uVar18;
  char cVar28;
  char cVar29;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte local_a8;
  byte local_98;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_55;
  uint local_54;
  undefined8 local_50;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  local_50 = 0xfffffffffffffffe;
  local_68 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  uVar18 = *(ulonglong *)param_2[1];
  if (0xf < *(ulonglong *)(param_2[1] + 8)) {
    param_2 = *(undefined1 (**) [16])*param_2;
  }
  if ((longlong)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  if (uVar18 < 0x10) {
    local_68._8_8_ = 0xf;
    local_68._0_8_ = uVar18;
    local_78 = *param_2;
    if (uVar18 != 0) {
      pcVar17 = local_78;
      goto joined_r0x00014001ccb1;
    }
  }
  else {
    uVar11 = uVar18 | 0xf;
    uVar13 = 0x16;
    if (0x16 < uVar11) {
      uVar13 = uVar11;
    }
    if (uVar11 < 0xfff) {
      pcVar17 = (char *)FUN_1400329d0(uVar13 + 1);
    }
    else {
      lVar12 = FUN_1400329d0(uVar13 + 0x28);
      pcVar17 = (char *)(lVar12 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(pcVar17 + -8) = lVar12;
    }
    local_78._0_8_ = pcVar17;
    local_68._8_8_ = uVar13;
    local_68._0_8_ = uVar18;
    FUN_140034080(pcVar17,param_2,uVar18 + 1);
joined_r0x00014001ccb1:
    pcVar14 = pcVar17;
    if (3 < uVar18) {
      if (uVar18 < 0x10) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar18 & 0x7ffffffffffffff0;
        uVar11 = 0;
        do {
          pcVar14 = pcVar17 + uVar11;
          auVar30[0] = -(*pcVar14 == s___3______________________________14003560d[3]);
          auVar30[1] = -(pcVar14[1] == s___3______________________________14003560d[4]);
          auVar30[2] = -(pcVar14[2] == s___3______________________________14003560d[5]);
          auVar30[3] = -(pcVar14[3] == s___3______________________________14003560d[6]);
          auVar30[4] = -(pcVar14[4] == s___3______________________________14003560d[7]);
          auVar30[5] = -(pcVar14[5] == s___3______________________________14003560d[8]);
          auVar30[6] = -(pcVar14[6] == s___3______________________________14003560d[9]);
          auVar30[7] = -(pcVar14[7] == s___3______________________________14003560d[10]);
          auVar30[8] = -(pcVar14[8] == s___3______________________________14003560d[0xb]);
          auVar30[9] = -(pcVar14[9] == s___3______________________________14003560d[0xc]);
          auVar30[10] = -(pcVar14[10] == s___3______________________________14003560d[0xd]);
          auVar30[0xb] = -(pcVar14[0xb] == s___3______________________________14003560d[0xe]);
          auVar30[0xc] = -(pcVar14[0xc] == s___3______________________________14003560d[0xf]);
          auVar30[0xd] = -(pcVar14[0xd] == s___3______________________________14003560d[0x10]);
          auVar30[0xe] = -(pcVar14[0xe] == s___3______________________________14003560d[0x11]);
          auVar30[0xf] = -(pcVar14[0xf] == s___3______________________________14003560d[0x12]);
          auVar19[0] = -(*pcVar14 == s___3______________________________14003560d[0x13]);
          auVar19[1] = -(pcVar14[1] == s___3______________________________14003560d[0x14]);
          auVar19[2] = -(pcVar14[2] == s___3______________________________14003560d[0x15]);
          auVar19[3] = -(pcVar14[3] == s___3______________________________14003560d[0x16]);
          auVar19[4] = -(pcVar14[4] == s___3______________________________14003560d[0x17]);
          auVar19[5] = -(pcVar14[5] == s___3______________________________14003560d[0x18]);
          auVar19[6] = -(pcVar14[6] == s___3______________________________14003560d[0x19]);
          auVar19[7] = -(pcVar14[7] == s___3______________________________14003560d[0x1a]);
          auVar19[8] = -(pcVar14[8] == s___3______________________________14003560d[0x1b]);
          auVar19[9] = -(pcVar14[9] == s___3______________________________14003560d[0x1c]);
          auVar19[10] = -(pcVar14[10] == s___3______________________________14003560d[0x1d]);
          auVar19[0xb] = -(pcVar14[0xb] == s___3______________________________14003560d[0x1e]);
          auVar19[0xc] = -(pcVar14[0xc] == s___3______________________________14003560d[0x1f]);
          auVar19[0xd] = -(pcVar14[0xd] == s___3______________________________14003560d[0x20]);
          auVar19[0xe] = -(pcVar14[0xe] == s___3______________________________14003560d[0x21]);
          auVar19[0xf] = -(pcVar14[0xf] == s___3______________________________14003560d[0x22]);
          auVar30 = auVar30 | auVar19;
          auVar19 = auVar19 & s___3______________________________14003560d._51_16_ |
                    ~auVar19 & s___3______________________________14003560d._35_16_;
          local_a8 = auVar30[0];
          if ((local_a8 & 1) != 0) {
            pcVar17[uVar11] = auVar19[0];
          }
          uVar16 = auVar30._0_4_;
          if ((uVar16 >> 8 & 1) != 0) {
            pcVar17[uVar11 + 1] = auVar19[1];
          }
          if ((uVar16 >> 0x10 & 1) != 0) {
            pcVar17[uVar11 + 2] = auVar19[2];
          }
          if ((uVar16 >> 0x18 & 1) != 0) {
            pcVar17[uVar11 + 3] = auVar19[3];
          }
          if ((auVar30._4_2_ & 1) != 0) {
            pcVar17[uVar11 + 4] = auVar19[4];
          }
          if ((auVar30._4_2_ >> 8 & 1) != 0) {
            pcVar17[uVar11 + 5] = auVar19[5];
          }
          if ((auVar30._6_2_ & 1) != 0) {
            pcVar17[uVar11 + 6] = auVar19[6];
          }
          if ((auVar30._6_2_ >> 8 & 1) != 0) {
            pcVar17[uVar11 + 7] = auVar19[7];
          }
          if ((auVar30._8_2_ & 1) != 0) {
            pcVar17[uVar11 + 8] = auVar19[8];
          }
          if ((auVar30._8_2_ >> 8 & 1) != 0) {
            pcVar17[uVar11 + 9] = auVar19[9];
          }
          if ((auVar30._10_2_ & 1) != 0) {
            pcVar17[uVar11 + 10] = auVar19[10];
          }
          if ((auVar30._10_2_ >> 8 & 1) != 0) {
            pcVar17[uVar11 + 0xb] = auVar19[0xb];
          }
          if ((auVar30._12_2_ & 1) != 0) {
            pcVar17[uVar11 + 0xc] = auVar19[0xc];
          }
          if ((auVar30._12_2_ >> 8 & 1) != 0) {
            pcVar17[uVar11 + 0xd] = auVar19[0xd];
          }
          if ((auVar30._14_2_ & 1) != 0) {
            pcVar17[uVar11 + 0xe] = auVar19[0xe];
          }
          if ((auVar30._14_2_ >> 8 & 1) != 0) {
            pcVar17[uVar11 + 0xf] = auVar19[0xf];
          }
          uVar11 = uVar11 + 0x10;
        } while (uVar13 != uVar11);
        if (uVar18 == uVar13) goto LAB_14001d112;
        if ((uVar18 & 0xc) == 0) {
          pcVar14 = pcVar17 + uVar13;
          goto LAB_14001d0cd;
        }
      }
      uVar11 = uVar18 & 0x7ffffffffffffffc;
      pcVar14 = pcVar17 + uVar11;
      do {
        uVar1 = *(undefined4 *)(pcVar17 + uVar13);
        auVar20[0] = -((char)uVar1 == s___3______________________________14003560d[0x43]);
        cVar28 = (char)((uint)uVar1 >> 8);
        auVar20[1] = -(cVar28 == s___3______________________________14003560d[0x44]);
        cVar29 = (char)((uint)uVar1 >> 0x10);
        cVar10 = (char)((uint)uVar1 >> 0x18);
        auVar20[2] = -(cVar29 == s___3______________________________14003560d[0x45]);
        auVar20[3] = -(cVar10 == s___3______________________________14003560d[0x46]);
        auVar20[4] = -(s___3______________________________14003560d[0x47] == '\0');
        auVar20[5] = -(s___3______________________________14003560d[0x48] == '\0');
        auVar20[6] = -(s___3______________________________14003560d[0x49] == '\0');
        auVar20[7] = -(s___3______________________________14003560d[0x4a] == '\0');
        auVar20[8] = -(s___3______________________________14003560d[0x4b] == '\0');
        auVar20[9] = -(s___3______________________________14003560d[0x4c] == '\0');
        auVar20[10] = -(s___3______________________________14003560d[0x4d] == '\0');
        auVar20[0xb] = -(s___3______________________________14003560d[0x4e] == '\0');
        auVar20[0xc] = -(s___3______________________________14003560d[0x4f] == '\0');
        auVar20[0xd] = -(s___3______________________________14003560d[0x50] == '\0');
        auVar20[0xe] = -(s___3______________________________14003560d[0x51] == '\0');
        auVar20[0xf] = -(s___3______________________________14003560d[0x52] == '\0');
        auVar31._0_4_ =
             CONCAT13(-(cVar10 == UNK_140035663),
                      CONCAT12(-(cVar29 == UNK_140035662),
                               CONCAT11(-(cVar28 == UNK_140035661),-((char)uVar1 == DAT_140035660)))
                     );
        auVar31[4] = -(UNK_140035664 == '\0');
        auVar31[5] = -(UNK_140035665 == '\0');
        auVar31[6] = -(UNK_140035666 == '\0');
        auVar31[7] = -(UNK_140035667 == '\0');
        auVar31[8] = -(UNK_140035668 == '\0');
        auVar31[9] = -(UNK_140035669 == '\0');
        auVar31[10] = -(UNK_14003566a == '\0');
        auVar31[0xb] = -(UNK_14003566b == '\0');
        auVar31[0xc] = -(UNK_14003566c == '\0');
        auVar31[0xd] = -(UNK_14003566d == '\0');
        auVar31[0xe] = -(UNK_14003566e == '\0');
        auVar31[0xf] = -(UNK_14003566f == '\0');
        auVar20 = auVar20 | auVar31;
        uVar16 = auVar31._0_4_ & _DAT_140035680 | ~auVar31._0_4_ & (uint)DAT_140035670;
        local_98 = auVar20[0];
        if ((local_98 & 1) != 0) {
          pcVar17[uVar13] = (char)uVar16;
        }
        auVar27._0_14_ = auVar20._0_14_;
        auVar27[0xe] = auVar20[7];
        auVar27[0xf] = auVar20[7];
        auVar26._14_2_ = auVar27._14_2_;
        auVar26._0_13_ = auVar20._0_13_;
        auVar26[0xd] = auVar20[6];
        auVar25._13_3_ = auVar26._13_3_;
        auVar25._0_12_ = auVar20._0_12_;
        auVar25[0xc] = auVar20[6];
        auVar24._12_4_ = auVar25._12_4_;
        auVar24._0_11_ = auVar20._0_11_;
        auVar24[0xb] = auVar20[5];
        auVar23._11_5_ = auVar24._11_5_;
        auVar23._0_10_ = auVar20._0_10_;
        auVar23[10] = auVar20[5];
        auVar22._10_6_ = auVar23._10_6_;
        auVar22._0_9_ = auVar20._0_9_;
        auVar22[9] = auVar20[4];
        auVar21._9_7_ = auVar22._9_7_;
        auVar21._0_8_ = auVar20._0_8_;
        auVar21[8] = auVar20[4];
        Var8 = CONCAT91(CONCAT81(auVar21._8_8_,auVar20[3]),auVar20[3]);
        auVar7._10_6_ = 0;
        auVar7._0_10_ = Var8;
        auVar6._1_11_ = SUB1611(auVar7 << 0x30,5);
        auVar6[0] = auVar20[2];
        auVar5._12_4_ = 0;
        auVar5._0_12_ = auVar6;
        auVar4._1_13_ = SUB1613(auVar5 << 0x20,3);
        auVar4[0] = auVar20[1];
        if ((auVar4._0_2_ & 1) != 0) {
          pcVar17[uVar13 + 1] = (char)(uVar16 >> 8);
        }
        if ((auVar6._0_2_ & 1) != 0) {
          pcVar17[uVar13 + 2] = (char)(uVar16 >> 0x10);
        }
        if (((ushort)Var8 & 1) != 0) {
          pcVar17[uVar13 + 3] = (char)(uVar16 >> 0x18);
        }
        uVar13 = uVar13 + 4;
      } while (uVar11 != uVar13);
      if (uVar18 == uVar11) goto LAB_14001d112;
    }
LAB_14001d0cd:
    do {
      if (*pcVar14 == '-') {
        cVar10 = '+';
LAB_14001d0e2:
        *pcVar14 = cVar10;
      }
      else if (*pcVar14 == '_') {
        cVar10 = '/';
        goto LAB_14001d0e2;
      }
      pcVar14 = pcVar14 + 1;
    } while (pcVar14 != pcVar17 + uVar18);
  }
LAB_14001d112:
  while( true ) {
    uVar9 = local_68._0_8_;
    if ((local_68._0_8_ & 3) == 0) break;
    if ((ulonglong)local_68._0_8_ < (ulonglong)local_68._8_8_) {
      local_68._0_8_ = local_68._0_8_ + 1;
      if ((ulonglong)local_68._8_8_ < 0x10) {
        *(undefined2 *)(local_78 + uVar9) = 0x3d;
      }
      else {
        *(undefined2 *)(local_78._0_8_ + uVar9) = 0x3d;
      }
    }
    else {
      FUN_1400205f0(local_78,1);
    }
  }
  local_54 = 0;
  puVar15 = (undefined1 *)local_78._0_8_;
  if ((ulonglong)local_68._8_8_ < 0x10) {
    puVar15 = local_78;
  }
  uVar18 = 0;
  (*DAT_140039898)(puVar15,local_68._0_8_,1,0,&local_54,(undefined1  [16])0x0);
  uVar13 = (ulonglong)local_54;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  if (uVar13 != 0) {
    if (local_54 < 0x1000) {
      uVar18 = FUN_1400329d0(uVar13);
    }
    else {
      lVar12 = FUN_1400329d0(uVar13 + 0x27);
      uVar18 = lVar12 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar18 - 8) = lVar12;
    }
    *(ulonglong *)*param_1 = uVar18;
    *(ulonglong *)param_1[1] = uVar18 + uVar13;
    FUN_1400340a0(uVar18,0,uVar13);
    *(ulonglong *)(*param_1 + 8) = uVar18 + uVar13;
  }
  if ((ulonglong)local_68._8_8_ < 0x10) {
    puVar15 = local_78;
  }
  else {
    puVar15 = (undefined1 *)local_78._0_8_;
  }
  (*DAT_140039898)(puVar15,local_68._0_4_,1,uVar18,&local_54,(undefined1  [16])0x0);
  uVar13 = (ulonglong)local_54;
  lVar12 = *(longlong *)*param_1;
  lVar2 = *(longlong *)(*param_1 + 8);
  uVar18 = lVar2 - lVar12;
  if (uVar13 < uVar18) {
    lVar12 = lVar12 + uVar13;
  }
  else {
    if (uVar13 < uVar18 || uVar13 - uVar18 == 0) goto LAB_14001d25e;
    if ((ulonglong)(*(longlong *)param_1[1] - lVar12) < uVar13) {
      FUN_14002b8d0(param_1,uVar13,&local_55);
      goto LAB_14001d25e;
    }
    lVar12 = lVar2 + (uVar13 - uVar18);
    FUN_1400340a0(lVar2,0);
  }
  *(longlong *)(*param_1 + 8) = lVar12;
LAB_14001d25e:
  if (0xf < (ulonglong)local_68._8_8_) {
    uVar18 = local_68._8_8_ + 1;
    lVar12 = local_78._0_8_;
    if (0xfff < uVar18) {
      lVar12 = *(longlong *)(local_78._0_8_ + -8);
      if (0x1f < (ulonglong)((local_78._0_8_ + -8) - lVar12)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar18 = local_68._8_8_ + 0x28;
    }
    thunk_FUN_1400340c0(lVar12,uVar18);
  }
  return param_1;
}


/* Unwind@14001d2e0 */

void Unwind_14001d2e0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(*(undefined8 *)(param_2 + 0x68));
  return;
}


/* Unwind@14001d320 */

void Unwind_14001d320(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x70);
  return;
}


/* FUN_14001d360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14001d360(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 ***pppuVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  ulonglong uVar14;
  undefined8 ****ppppuVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 ***local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined4 local_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined1 uStack_5a;
  undefined7 uStack_59;
  undefined1 uStack_52;
  undefined8 uStack_51;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78[0] = _DAT_140035690;
  local_78[1] = _UNK_140035698;
  local_68 = 0xf157918e;
  uStack_64 = 0x792d;
  uStack_62 = 0;
  uStack_60 = 0;
  uStack_5a = 0;
  uStack_59 = 0;
  uStack_52 = 0;
  uStack_51 = 0;
  local_a0 = param_1;
LAB_14001d3b6:
  puVar5 = (ulonglong *)FUN_140031690();
  uVar7 = *puVar5;
  puVar5 = (ulonglong *)FUN_1400316a0();
  uVar16 = *puVar5;
  uVar6 = 0;
  do {
    if (uVar6 < uVar7) {
      plVar17 = (longlong *)&stack0x0051adf1;
      break;
    }
    bVar12 = *(byte *)((longlong)local_78 + uVar6);
    uVar1 = uVar16 + 1;
    cVar3 = (char)uVar6;
    uVar4 = uVar1;
    if (uVar1 <= uVar7) {
      if (uVar7 != uVar1) {
        if (uVar7 != uVar16 + 2) {
          if (uVar7 == uVar16 + 3) {
            bVar11 = cVar3 + bVar12 + (bVar12 & cVar3 + 0x95U) * -2 + 0x82;
            uVar14 = uVar7;
          }
          else {
            if (uVar7 != uVar16 + 5) {
              if (uVar7 != uVar16 + 6) goto LAB_14001d476;
              goto LAB_14001d496;
            }
            bVar11 = cVar3 + bVar12 + (bVar12 & cVar3 + 0x49U) * -2 + 0x4a;
LAB_14001d5c6:
            *(byte *)((longlong)local_78 + uVar6) =
                 cVar3 + bVar12 + (bVar12 & cVar3 + 0x75U) * -2 + bVar11 + 'B';
            uVar14 = uVar16 + uVar7;
          }
          goto LAB_14001d671;
        }
LAB_14001d3d6:
        bVar11 = cVar3 + bVar12 + (bVar12 & cVar3 - 0x31U) * -2 + 0x26;
        *(byte *)((longlong)local_78 + uVar6) = bVar11;
        uVar6 = (~uVar16 + uVar6) - (ulonglong)bVar11;
        uVar16 = uVar1;
LAB_14001d410:
        *(byte *)((longlong)local_78 + uVar6) =
             (char)uVar6 + bVar12 + (bVar12 & (char)uVar6 - 4U) * -2 + '\x18';
        bVar12 = *(byte *)((longlong)&local_80 + (uVar6 - uVar7) + 6);
        uVar6 = (uVar6 - uVar7) - 2;
        uVar7 = uVar7 + 1;
      }
LAB_14001d443:
      uVar14 = uVar7;
      uVar7 = (ulonglong)bVar12;
      uVar6 = uVar6 + uVar16;
LAB_14001d44a:
      uVar6 = uVar6 + uVar7;
      uVar7 = uVar14;
      goto LAB_14001d44d;
    }
LAB_14001d476:
    if (uVar6 < uVar16) {
      plVar17 = (longlong *)&stack0x0157ddc4;
      break;
    }
    if (uVar7 < uVar16 + 9 || uVar7 != uVar1) {
      uVar14 = uVar16 + uVar7;
      if (uVar14 <= uVar6) {
        if (uVar16 + 6 < uVar7) {
          if (uVar16 + 0x20 < uVar7) goto LAB_14001d55f;
          if (uVar7 == uVar1) goto LAB_14001d443;
          cVar13 = cVar3 + bVar12 + (bVar12 & cVar3 + 0xb9U) * -2 + -0x56;
          if (uVar7 == uVar16 + 2) goto LAB_14001d410;
LAB_14001d6b5:
          if (uVar7 == uVar16 + 5) {
            bVar11 = (cVar3 + bVar12 + (bVar12 & cVar3 + 0x2cU) * -2) - 8;
            goto LAB_14001d671;
          }
          if (uVar7 == uVar16 + 3) {
            bVar11 = (cVar3 + bVar12 + (bVar12 & cVar3 + 0x86U) * -2) - 0x24;
            goto LAB_14001d5c6;
          }
          uVar4 = uVar16;
          if (uVar7 == uVar16 + 4) goto LAB_14001d4b7;
        }
        else {
          if (uVar7 == uVar1) goto LAB_14001d496;
          if (uVar7 == uVar16 + 2) goto LAB_14001d4b7;
          if (uVar7 == uVar16 + 3) {
            bVar11 = cVar3 + bVar12 + (bVar12 & cVar3 - 0x2bU) * -2 + 2;
            uVar14 = uVar7;
            goto LAB_14001d671;
          }
          if (uVar7 == uVar16 + 5) goto LAB_14001d3d6;
          if (uVar7 <= uVar16 + 0x20) {
            cVar13 = cVar3 + bVar12 + (bVar12 & cVar3 + 0x2dU) * -2 + -0xe;
            if (uVar7 != uVar16 + 2) goto LAB_14001d6b5;
            goto LAB_14001d410;
          }
LAB_14001d55f:
          cVar13 = cVar3 + bVar12 + (bVar12 & cVar3 + 0x6aU) * -2 + -0x7c;
        }
        if (uVar16 < 2) {
          *(char *)((longlong)local_78 + uVar6) = cVar13;
          goto LAB_14001d44d;
        }
        goto LAB_14001d496;
      }
      if (uVar7 != uVar16 + 0x10) {
        if (uVar7 == uVar16 + 3) {
          bVar11 = cVar3 + bVar12 + (bVar12 & cVar3 + 0xbeU) * -2 + 0x8c;
        }
        else {
          if (uVar7 != uVar16 + 6) {
            if (uVar7 == uVar16 + 10) goto LAB_14001d3d6;
            goto LAB_14001d3b6;
          }
          bVar11 = cVar3 + bVar12 + (bVar12 & cVar3 + 0x18U) * -2 + 0x70;
          uVar14 = uVar7;
        }
LAB_14001d671:
        uVar7 = ~(ulonglong)bVar11;
        goto LAB_14001d44a;
      }
    }
    else {
LAB_14001d496:
      *(byte *)((longlong)local_78 + uVar6) = cVar3 + bVar12 + (bVar12 & cVar3 + 0x1bU) * -2 + '^';
      uVar4 = uVar1;
    }
LAB_14001d4b7:
    uVar16 = uVar4;
    uVar6 = uVar6 - 1;
LAB_14001d44d:
    uVar6 = uVar6 + 1;
    plVar17 = local_78;
  } while (uVar6 < 0x2f);
  local_98 = (undefined8 ****)0x0;
  uStack_90 = 0;
  uVar7 = FUN_140034260(plVar17);
  if ((longlong)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  if (uVar7 < 0x10) {
    ppppuVar15 = &local_98;
    uVar16 = 0xf;
  }
  else {
    uVar6 = uVar7 | 0xf;
    uVar16 = 0x16;
    if (0x16 < uVar6) {
      uVar16 = uVar6;
    }
    if (uVar6 < 0xfff) {
      ppppuVar15 = (undefined8 ****)FUN_1400329d0(uVar16 + 1);
      local_98 = ppppuVar15;
    }
    else {
      pppuVar8 = (undefined8 ***)FUN_1400329d0(uVar16 + 0x28);
      ppppuVar15 = (undefined8 ****)((longlong)pppuVar8 + 0x27U & 0xffffffffffffffe0);
      ppppuVar15[-1] = pppuVar8;
      local_98 = ppppuVar15;
    }
  }
  local_88 = uVar7;
  local_80 = uVar16;
  FUN_140034080(ppppuVar15,plVar17,uVar7);
  *(undefined1 *)((longlong)ppppuVar15 + uVar7) = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_62 = 0;
  FUN_14001cc00(&local_d0,param_2);
  ppppuVar15 = (undefined8 ****)local_98;
  if (local_80 < 0x10) {
    ppppuVar15 = &local_98;
  }
  uVar9 = FUN_140034260(ppppuVar15);
  FUN_140028930(local_78,local_78[1],ppppuVar15,uVar9);
  FUN_140028930(local_78,local_78[1],local_d0,local_c8 - local_d0);
  FUN_140028930(local_78,local_78[1],*param_3,param_3[1] - *param_3);
  FUN_140028930(local_78,local_78[1],*param_4,param_4[1] - *param_4);
  FUN_140028930(local_78,local_78[1],*param_5,param_5[1] - *param_5);
  FUN_1400256c0(&local_b8,local_78[0],local_78[1] - local_78[0]);
  uVar9 = local_a0;
  FUN_1400278b0(local_a0,local_b8,local_b0 - local_b8);
  if (local_b8 != 0) {
    uVar7 = local_a8 - local_b8;
    lVar10 = local_b8;
    if (0xfff < uVar7) {
      lVar10 = *(longlong *)(local_b8 + -8);
      if (0x1f < (ulonglong)((local_b8 + -8) - lVar10)) goto LAB_14001d9e6;
      uVar7 = uVar7 + 0x27;
    }
    thunk_FUN_1400340c0(lVar10,uVar7);
  }
  if (local_d0 != 0) {
    uVar7 = local_c0 - local_d0;
    lVar10 = local_d0;
    if (0xfff < uVar7) {
      lVar10 = *(longlong *)(local_d0 + -8);
      if (0x1f < (ulonglong)((local_d0 + -8) - lVar10)) goto LAB_14001d9e6;
      uVar7 = uVar7 + 0x27;
    }
    thunk_FUN_1400340c0(lVar10,uVar7);
  }
  if (local_78[0] != 0) {
    uVar7 = CONCAT26(uStack_62,CONCAT24(uStack_64,local_68)) - local_78[0];
    lVar10 = local_78[0];
    if (0xfff < uVar7) {
      lVar10 = *(longlong *)(local_78[0] + -8);
      if (0x1f < (ulonglong)((local_78[0] + -8) - lVar10)) goto LAB_14001d9e6;
      uVar7 = uVar7 + 0x27;
    }
    thunk_FUN_1400340c0(lVar10,uVar7);
  }
  if (0xf < local_80) {
    uVar7 = local_80 + 1;
    ppppuVar15 = (undefined8 ****)local_98;
    if (0xfff < uVar7) {
      ppppuVar15 = (undefined8 ****)local_98[-1];
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)ppppuVar15))) {
LAB_14001d9e6:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar7 = local_80 + 0x28;
    }
    thunk_FUN_1400340c0(ppppuVar15,uVar7);
  }
  return uVar9;
}


/* Unwind@14001d9f0 */

void Unwind_14001d9f0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x40);
  return;
}


/* Unwind@14001da30 */

void Unwind_14001da30(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x28);
  return;
}


/* Unwind@14001da70 */

void Unwind_14001da70(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x80);
  FUN_14000fb30(param_2 + 0x60);
  return;
}


/* FUN_14001dab0 */

undefined8 * FUN_14001dab0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  uVar5 = FUN_140034260(param_3);
  lVar1 = param_2[2];
  if ((ulonglong)(param_2[3] - lVar1) < uVar5) {
    param_2 = (undefined8 *)FUN_140027740(param_2,uVar5,uVar5,param_3,uVar5);
  }
  else {
    param_2[2] = uVar5 + lVar1;
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    FUN_140034090((undefined1 *)(lVar1 + (longlong)puVar6),param_3);
    *(undefined1 *)((longlong)puVar6 + uVar5 + lVar1) = 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return param_1;
}


/* FUN_14001db50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14001db50(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  code *pcVar1;
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [14];
  undefined1 auVar5 [15];
  undefined1 auVar6 [14];
  undefined1 auVar7 [15];
  undefined1 auVar8 [14];
  undefined1 auVar9 [15];
  undefined1 auVar10 [14];
  undefined1 auVar11 [15];
  undefined1 auVar12 [14];
  undefined1 auVar13 [15];
  undefined1 auVar14 [14];
  undefined1 auVar15 [15];
  undefined1 auVar16 [14];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [14];
  undefined1 auVar35 [15];
  undefined1 auVar36 [14];
  undefined1 auVar37 [15];
  undefined1 auVar38 [14];
  undefined1 auVar39 [15];
  undefined1 auVar40 [14];
  undefined1 auVar41 [15];
  undefined1 auVar42 [14];
  undefined1 auVar43 [15];
  undefined1 auVar44 [14];
  undefined1 auVar45 [15];
  undefined1 auVar46 [14];
  undefined1 auVar47 [15];
  undefined1 auVar48 [14];
  undefined1 auVar49 [15];
  undefined1 auVar50 [14];
  undefined1 auVar51 [15];
  undefined1 auVar52 [14];
  undefined1 auVar53 [15];
  undefined1 auVar54 [14];
  undefined1 auVar55 [15];
  undefined1 auVar56 [14];
  undefined1 auVar57 [15];
  undefined1 auVar58 [14];
  undefined1 auVar59 [15];
  undefined1 auVar60 [14];
  undefined1 auVar61 [15];
  undefined1 auVar62 [14];
  undefined1 auVar63 [15];
  undefined1 auVar64 [14];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [13];
  undefined1 auVar74 [13];
  undefined1 auVar75 [13];
  undefined1 auVar76 [13];
  undefined1 auVar77 [13];
  undefined1 auVar78 [13];
  undefined1 auVar79 [13];
  undefined1 auVar80 [13];
  undefined1 auVar81 [13];
  undefined1 auVar82 [13];
  undefined1 auVar83 [13];
  undefined1 auVar84 [13];
  undefined1 auVar85 [13];
  undefined1 auVar86 [13];
  undefined1 auVar87 [13];
  undefined1 auVar88 [13];
  undefined1 auVar89 [13];
  undefined1 auVar90 [13];
  undefined1 auVar91 [13];
  undefined1 auVar92 [13];
  undefined1 auVar93 [13];
  undefined1 auVar94 [13];
  undefined1 auVar95 [13];
  undefined1 auVar96 [13];
  undefined1 auVar97 [13];
  undefined1 auVar98 [13];
  undefined1 auVar99 [13];
  undefined1 auVar100 [13];
  undefined1 auVar101 [13];
  undefined1 auVar102 [13];
  undefined1 auVar103 [13];
  undefined1 auVar104 [13];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined1 auVar114 [15];
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  undefined1 auVar120 [15];
  undefined8 uVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [15];
  unkuint9 Var127;
  undefined1 auVar128 [11];
  undefined1 auVar129 [14];
  undefined1 auVar130 [13];
  undefined1 auVar131 [15];
  undefined1 auVar132 [11];
  undefined1 auVar133 [14];
  undefined1 auVar134 [13];
  undefined1 auVar135 [15];
  undefined1 auVar136 [11];
  undefined1 auVar137 [14];
  undefined1 auVar138 [13];
  undefined1 auVar139 [15];
  undefined1 auVar140 [11];
  undefined1 auVar141 [14];
  undefined1 auVar142 [13];
  undefined1 auVar143 [15];
  undefined1 auVar144 [11];
  undefined1 auVar145 [14];
  undefined1 auVar146 [13];
  undefined1 auVar147 [15];
  undefined1 auVar148 [11];
  undefined1 auVar149 [14];
  undefined1 auVar150 [13];
  undefined1 auVar151 [15];
  undefined1 auVar152 [11];
  undefined1 auVar153 [14];
  undefined1 auVar154 [13];
  undefined1 auVar155 [15];
  undefined1 auVar156 [11];
  undefined1 auVar157 [14];
  undefined1 auVar158 [13];
  undefined1 auVar159 [15];
  undefined1 auVar160 [15];
  undefined1 auVar161 [15];
  undefined1 auVar162 [15];
  undefined1 auVar163 [15];
  undefined1 auVar164 [15];
  undefined1 auVar165 [15];
  undefined1 auVar166 [15];
  undefined1 auVar167 [15];
  undefined1 auVar168 [15];
  undefined1 auVar169 [15];
  undefined1 auVar170 [15];
  undefined1 auVar171 [15];
  undefined1 auVar172 [15];
  undefined1 auVar173 [15];
  undefined1 auVar174 [15];
  char *pcVar175;
  longlong lVar176;
  undefined1 *puVar177;
  int iVar178;
  undefined8 *puVar179;
  undefined8 *puVar180;
  longlong lVar181;
  longlong lVar182;
  ulonglong uVar183;
  ulonglong uVar184;
  uint uVar185;
  ulonglong uVar186;
  bool bVar187;
  undefined1 auVar188 [16];
  undefined2 uVar191;
  undefined1 uVar193;
  undefined1 uVar194;
  undefined1 auVar189 [14];
  undefined1 uVar192;
  undefined1 auVar190 [16];
  char local_b08 [128];
  char local_a88;
  char cStack_a87;
  char cStack_a86;
  char cStack_a85;
  char cStack_a84;
  char cStack_a83;
  char cStack_a82;
  char cStack_a81;
  char cStack_a80;
  char cStack_a7f;
  char cStack_a7e;
  char cStack_a7d;
  char cStack_a7c;
  char cStack_a7b;
  char cStack_a7a;
  char cStack_a79;
  char local_a78;
  char cStack_a77;
  char cStack_a76;
  char cStack_a75;
  char cStack_a74;
  char cStack_a73;
  char cStack_a72;
  char cStack_a71;
  char cStack_a70;
  char cStack_a6f;
  char cStack_a6e;
  char cStack_a6d;
  char cStack_a6c;
  char cStack_a6b;
  char cStack_a6a;
  byte bStack_a69;
  ulonglong local_a08 [16];
  longlong local_988;
  longlong lStack_980;
  longlong local_978;
  longlong lStack_970;
  longlong local_968;
  longlong lStack_960;
  longlong local_958;
  longlong lStack_950;
  longlong local_948;
  longlong lStack_940;
  longlong local_938;
  longlong lStack_930;
  longlong local_928;
  longlong lStack_920;
  longlong local_918;
  longlong lStack_910;
  undefined1 local_908 [16];
  undefined1 local_8f8 [16];
  undefined1 local_8e8 [16];
  undefined1 local_8d8 [16];
  undefined1 local_8c8 [16];
  undefined1 local_8b8 [16];
  undefined1 local_8a8 [16];
  undefined1 local_898 [16];
  undefined8 local_888;
  undefined1 local_880 [16];
  undefined1 local_870 [16];
  undefined1 local_860 [16];
  undefined1 local_850 [16];
  undefined1 local_840 [16];
  undefined1 local_830 [16];
  undefined1 local_820 [16];
  undefined8 local_810;
  undefined1 local_808 [128];
  undefined1 local_788 [16];
  undefined1 local_778 [16];
  undefined1 local_768 [16];
  undefined1 local_758 [16];
  undefined1 local_748 [16];
  undefined1 local_738 [16];
  undefined1 local_728 [16];
  undefined1 local_718 [16];
  undefined8 local_708;
  undefined1 local_700 [16];
  undefined1 local_6f0 [16];
  undefined1 local_6e0 [16];
  undefined1 local_6d0 [16];
  undefined1 local_6c0 [16];
  undefined1 local_6b0 [16];
  undefined1 local_6a0 [16];
  undefined8 local_690;
  undefined8 local_688;
  undefined1 local_680 [16];
  undefined1 local_670 [16];
  undefined1 local_660 [16];
  undefined1 local_650 [16];
  undefined1 local_640 [16];
  undefined1 local_630 [16];
  undefined1 local_620 [16];
  undefined1 local_610 [16];
  undefined1 local_600 [16];
  undefined1 local_5f0 [16];
  undefined1 local_5e0 [16];
  undefined1 local_5d0 [16];
  undefined1 local_5c0 [16];
  undefined1 local_5b0 [16];
  undefined1 local_5a0 [16];
  undefined8 local_590;
  ulonglong local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  longlong alStack_358 [11];
  ulonglong local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  char *local_f8;
  undefined8 *local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (0x1f < (byte)param_3[0x3f]) {
    return 0;
  }
  local_888 = 1;
  local_880 = (undefined1  [16])0x0;
  local_870 = (undefined1  [16])0x0;
  local_860 = (undefined1  [16])0x0;
  local_850 = (undefined1  [16])0x0;
  local_840 = (undefined1  [16])0x0;
  local_830 = (undefined1  [16])0x0;
  local_820 = (undefined1  [16])0x0;
  local_810 = 0;
  uVar191 = (undefined2)((uint)*(undefined4 *)param_1 >> 0x10);
  local_908._0_8_ = (ulonglong)CONCAT24(uVar191,*(undefined4 *)param_1) & 0xffff;
  local_908._8_2_ = uVar191;
  local_908._10_6_ = 0;
  uVar191 = (undefined2)((uint)*(undefined4 *)((longlong)param_1 + 4) >> 0x10);
  local_8f8._0_8_ = (ulonglong)CONCAT24(uVar191,*(undefined4 *)((longlong)param_1 + 4)) & 0xffff;
  local_8f8._8_2_ = uVar191;
  local_8f8._10_6_ = 0;
  uVar191 = (undefined2)((uint)*(undefined4 *)(param_1 + 1) >> 0x10);
  local_8e8._0_8_ = (ulonglong)CONCAT24(uVar191,*(undefined4 *)(param_1 + 1)) & 0xffff;
  local_8e8._8_2_ = uVar191;
  local_8e8._10_6_ = 0;
  uVar191 = (undefined2)((uint)*(undefined4 *)((longlong)param_1 + 0xc) >> 0x10);
  local_8d8._0_8_ = (ulonglong)CONCAT24(uVar191,*(undefined4 *)((longlong)param_1 + 0xc)) & 0xffff;
  local_8d8._8_2_ = uVar191;
  local_8d8._10_6_ = 0;
  uVar191 = (undefined2)((uint)*(undefined4 *)(param_1 + 2) >> 0x10);
  local_8c8._0_8_ = (ulonglong)CONCAT24(uVar191,*(undefined4 *)(param_1 + 2)) & 0xffff;
  local_8c8._8_2_ = uVar191;
  local_8c8._10_6_ = 0;
  uVar191 = (undefined2)((uint)*(undefined4 *)((longlong)param_1 + 0x14) >> 0x10);
  local_8b8._0_8_ = (ulonglong)CONCAT24(uVar191,*(undefined4 *)((longlong)param_1 + 0x14)) & 0xffff;
  local_8b8._8_2_ = uVar191;
  local_8b8._10_6_ = 0;
  uVar191 = (undefined2)((uint)*(undefined4 *)(param_1 + 3) >> 0x10);
  local_8a8._0_8_ = (ulonglong)CONCAT24(uVar191,*(undefined4 *)(param_1 + 3)) & 0xffff;
  local_8a8._8_2_ = uVar191;
  local_8a8._10_6_ = 0;
  auVar189 = ZEXT414(*(uint *)((longlong)param_1 + 0x1c)) & DAT_1400356a0._0_14_;
  local_f8 = (char *)CONCAT62(local_f8._2_6_,*(undefined2 *)((longlong)param_1 + 0x1e));
  uVar191 = auVar189._2_2_;
  local_898._0_8_ = (ulonglong)(CONCAT24(uVar191,auVar189._0_4_) & 0xffff0000ffff) & 0xffffffff;
  local_898._8_2_ = uVar191;
  local_898._10_6_ = 0;
  local_f0 = param_1;
  FUN_14002e3d0(local_a08,local_908,local_908);
  FUN_14002e3d0(&local_588,local_a08,&DAT_1400350a0);
  local_a08[0] = local_a08[0] - 1;
  local_588 = local_588 + 1;
  FUN_14002e3d0(local_e8,&local_588,&local_588);
  FUN_14002e3d0(local_b08,local_e8,local_e8);
  FUN_14002e3d0(&local_a88,local_b08,local_e8);
  FUN_14002e3d0(&local_508,&local_a88,local_a08);
  FUN_14002e3d0(&local_508,&local_508,&local_588);
  local_2f8._8_8_ = uStack_500;
  local_2f8._0_8_ = local_508;
  local_2e8._8_8_ = uStack_4f0;
  local_2e8._0_8_ = local_4f8;
  local_2d8._8_8_ = uStack_4e0;
  local_2d8._0_8_ = local_4e8;
  local_2c8._8_8_ = uStack_4d0;
  local_2c8._0_8_ = local_4d8;
  local_2b8._8_8_ = uStack_4c0;
  local_2b8._0_8_ = local_4c8;
  local_2a8._8_8_ = uStack_4b0;
  local_2a8._0_8_ = local_4b8;
  local_298._8_8_ = uStack_4a0;
  local_298._0_8_ = local_4a8;
  local_288._8_8_ = uStack_490;
  local_288._0_8_ = local_498;
  iVar178 = 0xfb;
  do {
    FUN_14002e3d0(local_2f8,local_2f8,local_2f8);
    if (iVar178 != 2) {
      FUN_14002e3d0(local_2f8,local_2f8,&local_508);
    }
    iVar178 = iVar178 + -1;
  } while (iVar178 != 0);
  local_508 = local_2f8._0_8_;
  uStack_500 = local_2f8._8_8_;
  local_4f8 = local_2e8._0_8_;
  uStack_4f0 = local_2e8._8_8_;
  local_4e8 = local_2d8._0_8_;
  uStack_4e0 = local_2d8._8_8_;
  local_4d8 = local_2c8._0_8_;
  uStack_4d0 = local_2c8._8_8_;
  local_4c8 = local_2b8._0_8_;
  uStack_4c0 = local_2b8._8_8_;
  local_4b8 = local_2a8._0_8_;
  uStack_4b0 = local_2a8._8_8_;
  local_4a8 = local_298._0_8_;
  uStack_4a0 = local_298._8_8_;
  local_498 = local_288._0_8_;
  uStack_490 = local_288._8_8_;
  FUN_14002e3d0(&local_508,&local_508,local_a08);
  FUN_14002e3d0(&local_508,&local_508,&local_588);
  FUN_14002e3d0(&local_508,&local_508,&local_588);
  FUN_14002e3d0(&local_988,&local_508,&local_588);
  FUN_14002e3d0(local_788,&local_988,&local_988);
  FUN_14002e3d0(local_788,local_788,&local_588);
  iVar178 = FUN_14002ed80(local_788,local_a08);
  if (iVar178 != 0) {
    FUN_14002e3d0(&local_988,&local_988,&DAT_140035120);
  }
  FUN_14002e3d0(local_788,&local_988,&local_988);
  FUN_14002e3d0(local_788,local_788,&local_588);
  iVar178 = FUN_14002ed80(local_788,local_a08);
  if (iVar178 != 0) {
    return 0;
  }
  FUN_14002ede0(local_2f8,&local_988);
  if ((byte)(local_2f8[0] & 1) == (byte)-((char)((ulonglong)local_f8 >> 8) >> 7)) {
    local_988 = -local_988;
    lStack_980 = -lStack_980;
    local_978 = -local_978;
    lStack_970 = -lStack_970;
    local_968 = -local_968;
    lStack_960 = -lStack_960;
    local_958 = -local_958;
    lStack_950 = -lStack_950;
    local_948 = -local_948;
    lStack_940 = -lStack_940;
    local_938 = -local_938;
    lStack_930 = -lStack_930;
    local_928 = -local_928;
    lStack_920 = -lStack_920;
    local_918 = -local_918;
    lStack_910 = -lStack_910;
  }
  FUN_14002e3d0(local_808,&local_988,local_908);
  uVar184 = param_2[2] + 0x40;
  local_2f8 = (undefined1  [16])0x0;
  auVar124._8_8_ = 0;
  auVar124._0_8_ = local_2e8._8_8_;
  local_2e8 = auVar124 << 0x40;
  if ((longlong)uVar184 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140020c20();
  }
  if (uVar184 < 0x1000) {
    puVar179 = (undefined8 *)FUN_1400329d0(uVar184);
  }
  else {
    lVar176 = FUN_1400329d0(param_2[2] + 0x67);
    puVar179 = (undefined8 *)(lVar176 + 0x27U & 0xffffffffffffffe0);
    puVar179[-1] = lVar176;
  }
  local_2f8._0_8_ = puVar179;
  local_2e8._0_8_ = (longlong)puVar179 + uVar184;
  FUN_1400340a0(puVar179,0,uVar184);
  local_2f8._8_8_ = (longlong)puVar179 + uVar184;
  uVar121 = *(undefined8 *)param_3;
  uVar122 = *(undefined8 *)(param_3 + 8);
  uVar123 = *(undefined8 *)(param_3 + 0x18);
  puVar179[2] = *(undefined8 *)(param_3 + 0x10);
  puVar179[3] = uVar123;
  *puVar179 = uVar121;
  puVar179[1] = uVar122;
  uVar121 = local_f0[1];
  uVar122 = local_f0[2];
  uVar123 = local_f0[3];
  puVar179[4] = *local_f0;
  puVar179[5] = uVar121;
  puVar179[6] = uVar122;
  puVar179[7] = uVar123;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140034080(puVar179 + 8,param_2);
  local_508 = 0;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = local_788._8_8_;
  local_788 = auVar125 << 0x40;
  iVar178 = FUN_140033f50(&local_508,L"SHA512");
  if (iVar178 < 0) {
    local_b8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
  }
  else {
    local_a08[0] = local_a08[0] & 0xffffffff00000000;
    local_588 = local_588 & 0xffffffff00000000;
    FUN_140033f30(local_508,L"ObjectLength",local_a08,4,&local_588,0);
    uVar185 = (uint)local_a08[0];
    uVar183 = local_a08[0] & 0xffffffff;
    if (uVar183 == 0) {
      FUN_140033ee0(local_508,0);
      local_e8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      local_b8 = (undefined1  [16])0x0;
    }
    else {
      if ((uint)local_a08[0] < 0x1000) {
        uVar186 = FUN_1400329d0(uVar183);
      }
      else {
        lVar176 = FUN_1400329d0(uVar183 + 0x27);
        uVar186 = lVar176 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar186 - 8) = lVar176;
      }
      FUN_1400340a0(uVar186,0,uVar183);
      iVar178 = FUN_140033ef0(local_508,local_788,uVar186,local_a08[0] & 0xffffffff,0,0,0);
      if (iVar178 < 0) {
        FUN_140033ee0(local_508,0);
        local_e8 = (undefined1  [16])0x0;
        local_d8 = (undefined1  [16])0x0;
        local_c8 = (undefined1  [16])0x0;
        local_b8 = (undefined1  [16])0x0;
      }
      else {
        FUN_140033f40(local_788._0_8_,puVar179,uVar184 & 0xffffffff);
        FUN_140033f10(local_788._0_8_,local_e8);
        FUN_140033f00(local_788._0_8_);
        FUN_140033ee0(local_508,0);
      }
      if (0xfff < uVar185) {
        if (0x1f < (uVar186 - 8) - *(ulonglong *)(uVar186 - 8)) goto LAB_14001f184;
        uVar183 = uVar183 + 0x27;
        uVar186 = *(ulonglong *)(uVar186 - 8);
      }
      thunk_FUN_1400340c0(uVar186,uVar183);
      puVar179 = (undefined8 *)local_2f8._0_8_;
      if ((undefined8 *)local_2f8._0_8_ == (undefined8 *)0x0) goto LAB_14001e336;
    }
  }
  uVar184 = local_2e8._0_8_ - (longlong)puVar179;
  puVar180 = puVar179;
  if (0xfff < uVar184) {
    puVar180 = (undefined8 *)puVar179[-1];
    if (0x1f < (ulonglong)((longlong)puVar179 + (-8 - (longlong)puVar180))) {
LAB_14001f184:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar184 = uVar184 + 0x27;
  }
  thunk_FUN_1400340c0(puVar180,uVar184);
LAB_14001e336:
  uVar194 = local_e8[7];
  auVar2[0xd] = 0;
  auVar2._0_13_ = local_e8._0_13_;
  auVar2[0xe] = uVar194;
  auVar17[0xc] = local_e8[6];
  auVar17._0_12_ = local_e8._0_12_;
  auVar17._13_2_ = auVar2._13_2_;
  auVar25[0xb] = 0;
  auVar25._0_11_ = local_e8._0_11_;
  auVar25._12_3_ = auVar17._12_3_;
  uVar193 = local_e8[5];
  auVar33[10] = uVar193;
  auVar33._0_10_ = local_e8._0_10_;
  auVar33._11_4_ = auVar25._11_4_;
  auVar49[9] = 0;
  auVar49._0_9_ = local_e8._0_9_;
  auVar49._10_5_ = auVar33._10_5_;
  auVar65[8] = local_e8[4];
  auVar65._0_8_ = local_e8._0_8_;
  auVar65._9_6_ = auVar49._9_6_;
  auVar126._7_8_ = 0;
  auVar126._0_7_ = auVar65._8_7_;
  uVar192 = local_e8[3];
  Var127 = CONCAT81(SUB158(auVar126 << 0x40,7),uVar192);
  auVar159._9_6_ = 0;
  auVar159._0_9_ = Var127;
  auVar128._1_10_ = SUB1510(auVar159 << 0x30,5);
  auVar128[0] = local_e8[2];
  auVar160._11_4_ = 0;
  auVar160._0_11_ = auVar128;
  auVar105[2] = local_e8[1];
  auVar105._0_2_ = local_e8._0_2_;
  auVar105._3_12_ = SUB1512(auVar160 << 0x20,3);
  auVar113._2_13_ = auVar105._2_13_;
  auVar113._0_2_ = local_e8._0_2_ & 0xff;
  auVar189._10_2_ = 0;
  auVar189._0_10_ = auVar113._0_10_;
  auVar189._12_2_ = (short)Var127;
  auVar129._2_4_ = auVar189._10_4_;
  auVar129._0_2_ = auVar128._0_2_;
  auVar129._6_8_ = 0;
  auVar34._4_2_ = auVar105._2_2_;
  auVar34._0_4_ = auVar113._0_4_;
  auVar34._6_8_ = SUB148(auVar129 << 0x40,6);
  auVar50._4_10_ = auVar34._4_10_;
  auVar50._0_4_ = auVar113._0_4_ & 0xffff;
  local_2f8._0_8_ = auVar50._0_8_ & 0xffffffff;
  local_2f8._8_4_ = auVar34._4_4_;
  local_2f8._12_4_ = 0;
  local_2e8._0_8_ =
       (ulonglong)(CONCAT14(uVar192,(uint)CONCAT12(uVar192,local_e8._2_2_)) & 0xffffff00ff) & 0xffff
  ;
  local_2e8[8] = uVar192;
  local_2e8._9_7_ = 0;
  uVar184 = (ulonglong)CONCAT12(uVar193,local_e8._4_2_) & 0xffffffffffff00ff;
  auVar73._8_4_ = 0;
  auVar73._0_8_ = uVar184;
  auVar73[0xc] = uVar194;
  auVar74[8] = local_e8[6];
  auVar74._0_8_ = uVar184;
  auVar74[9] = 0;
  auVar74._10_3_ = auVar73._10_3_;
  auVar130._5_8_ = 0;
  auVar130._0_5_ = auVar74._8_5_;
  auVar75[4] = uVar193;
  auVar75._0_4_ = (uint)uVar184;
  auVar75[5] = 0;
  auVar75._6_7_ = SUB137(auVar130 << 0x40,6);
  auVar76._4_9_ = auVar75._4_9_;
  auVar76._0_4_ = (uint)uVar184 & 0xffff;
  local_2d8._0_8_ = auVar76._0_8_ & 0xffffffff;
  local_2d8._8_4_ = auVar75._4_4_;
  local_2d8._12_4_ = 0;
  local_2c8._0_8_ =
       (ulonglong)(CONCAT14(uVar194,(uint)CONCAT12(uVar194,local_e8._6_2_)) & 0xffffff00ff) & 0xffff
  ;
  local_2c8[8] = uVar194;
  local_2c8._9_7_ = 0;
  uVar194 = local_e8[0xf];
  auVar3._8_6_ = 0;
  auVar3._0_8_ = local_e8._8_8_;
  auVar3[0xe] = uVar194;
  auVar18._8_4_ = 0;
  auVar18._0_8_ = local_e8._8_8_;
  auVar18[0xc] = local_e8[0xe];
  auVar18._13_2_ = auVar3._13_2_;
  auVar26._8_4_ = 0;
  auVar26._0_8_ = local_e8._8_8_;
  auVar26._12_3_ = auVar18._12_3_;
  uVar193 = local_e8[0xd];
  auVar35._8_2_ = 0;
  auVar35._0_8_ = local_e8._8_8_;
  auVar35[10] = uVar193;
  auVar35._11_4_ = auVar26._11_4_;
  auVar51._8_2_ = 0;
  auVar51._0_8_ = local_e8._8_8_;
  auVar51._10_5_ = auVar35._10_5_;
  auVar66[8] = local_e8[0xc];
  auVar66._0_8_ = local_e8._8_8_;
  auVar66._9_6_ = auVar51._9_6_;
  auVar131._7_8_ = 0;
  auVar131._0_7_ = auVar66._8_7_;
  uVar192 = local_e8[0xb];
  Var127 = CONCAT81(SUB158(auVar131 << 0x40,7),uVar192);
  auVar161._9_6_ = 0;
  auVar161._0_9_ = Var127;
  auVar132._1_10_ = SUB1510(auVar161 << 0x30,5);
  auVar132[0] = local_e8[10];
  auVar162._11_4_ = 0;
  auVar162._0_11_ = auVar132;
  auVar106[2] = local_e8[9];
  auVar106._0_2_ = local_e8._8_2_;
  auVar106._3_12_ = SUB1512(auVar162 << 0x20,3);
  auVar114._2_13_ = auVar106._2_13_;
  auVar114._0_2_ = local_e8._8_2_ & 0xff;
  auVar4._10_2_ = 0;
  auVar4._0_10_ = auVar114._0_10_;
  auVar4._12_2_ = (short)Var127;
  auVar133._2_4_ = auVar4._10_4_;
  auVar133._0_2_ = auVar132._0_2_;
  auVar133._6_8_ = 0;
  auVar36._4_2_ = auVar106._2_2_;
  auVar36._0_4_ = auVar114._0_4_;
  auVar36._6_8_ = SUB148(auVar133 << 0x40,6);
  auVar52._4_10_ = auVar36._4_10_;
  auVar52._0_4_ = auVar114._0_4_ & 0xffff;
  local_2b8._0_8_ = auVar52._0_8_ & 0xffffffff;
  local_2b8._8_4_ = auVar36._4_4_;
  local_2b8._12_4_ = 0;
  local_2a8._0_8_ =
       (ulonglong)(CONCAT14(uVar192,(uint)CONCAT12(uVar192,local_e8._10_2_)) & 0xffffff00ff) &
       0xffff;
  local_2a8[8] = uVar192;
  local_2a8._9_7_ = 0;
  uVar184 = (ulonglong)CONCAT12(uVar193,local_e8._12_2_) & 0xffffffffffff00ff;
  auVar77._8_4_ = 0;
  auVar77._0_8_ = uVar184;
  auVar77[0xc] = uVar194;
  auVar78[8] = local_e8[0xe];
  auVar78._0_8_ = uVar184;
  auVar78[9] = 0;
  auVar78._10_3_ = auVar77._10_3_;
  auVar134._5_8_ = 0;
  auVar134._0_5_ = auVar78._8_5_;
  auVar79[4] = uVar193;
  auVar79._0_4_ = (uint)uVar184;
  auVar79[5] = 0;
  auVar79._6_7_ = SUB137(auVar134 << 0x40,6);
  auVar80._4_9_ = auVar79._4_9_;
  auVar80._0_4_ = (uint)uVar184 & 0xffff;
  local_298._0_8_ = auVar80._0_8_ & 0xffffffff;
  local_298._8_4_ = auVar79._4_4_;
  local_298._12_4_ = 0;
  local_288._0_8_ =
       (ulonglong)(CONCAT14(uVar194,(uint)CONCAT12(uVar194,local_e8._14_2_)) & 0xffffff00ff) &
       0xffff;
  local_288[8] = uVar194;
  local_288._9_7_ = 0;
  uVar194 = local_d8[7];
  auVar5[0xd] = 0;
  auVar5._0_13_ = local_d8._0_13_;
  auVar5[0xe] = uVar194;
  auVar19[0xc] = local_d8[6];
  auVar19._0_12_ = local_d8._0_12_;
  auVar19._13_2_ = auVar5._13_2_;
  auVar27[0xb] = 0;
  auVar27._0_11_ = local_d8._0_11_;
  auVar27._12_3_ = auVar19._12_3_;
  uVar193 = local_d8[5];
  auVar37[10] = uVar193;
  auVar37._0_10_ = local_d8._0_10_;
  auVar37._11_4_ = auVar27._11_4_;
  auVar53[9] = 0;
  auVar53._0_9_ = local_d8._0_9_;
  auVar53._10_5_ = auVar37._10_5_;
  auVar67[8] = local_d8[4];
  auVar67._0_8_ = local_d8._0_8_;
  auVar67._9_6_ = auVar53._9_6_;
  auVar135._7_8_ = 0;
  auVar135._0_7_ = auVar67._8_7_;
  uVar192 = local_d8[3];
  Var127 = CONCAT81(SUB158(auVar135 << 0x40,7),uVar192);
  auVar163._9_6_ = 0;
  auVar163._0_9_ = Var127;
  auVar136._1_10_ = SUB1510(auVar163 << 0x30,5);
  auVar136[0] = local_d8[2];
  auVar164._11_4_ = 0;
  auVar164._0_11_ = auVar136;
  auVar107[2] = local_d8[1];
  auVar107._0_2_ = local_d8._0_2_;
  auVar107._3_12_ = SUB1512(auVar164 << 0x20,3);
  auVar115._2_13_ = auVar107._2_13_;
  auVar115._0_2_ = local_d8._0_2_ & 0xff;
  auVar6._10_2_ = 0;
  auVar6._0_10_ = auVar115._0_10_;
  auVar6._12_2_ = (short)Var127;
  auVar137._2_4_ = auVar6._10_4_;
  auVar137._0_2_ = auVar136._0_2_;
  auVar137._6_8_ = 0;
  auVar38._4_2_ = auVar107._2_2_;
  auVar38._0_4_ = auVar115._0_4_;
  auVar38._6_8_ = SUB148(auVar137 << 0x40,6);
  auVar54._4_10_ = auVar38._4_10_;
  auVar54._0_4_ = auVar115._0_4_ & 0xffff;
  local_278._0_8_ = auVar54._0_8_ & 0xffffffff;
  local_278._8_4_ = auVar38._4_4_;
  local_278._12_4_ = 0;
  local_268._0_8_ =
       (ulonglong)(CONCAT14(uVar192,(uint)CONCAT12(uVar192,local_d8._2_2_)) & 0xffffff00ff) & 0xffff
  ;
  local_268[8] = uVar192;
  local_268._9_7_ = 0;
  uVar184 = (ulonglong)CONCAT12(uVar193,local_d8._4_2_) & 0xffffffffffff00ff;
  auVar81._8_4_ = 0;
  auVar81._0_8_ = uVar184;
  auVar81[0xc] = uVar194;
  auVar82[8] = local_d8[6];
  auVar82._0_8_ = uVar184;
  auVar82[9] = 0;
  auVar82._10_3_ = auVar81._10_3_;
  auVar138._5_8_ = 0;
  auVar138._0_5_ = auVar82._8_5_;
  auVar83[4] = uVar193;
  auVar83._0_4_ = (uint)uVar184;
  auVar83[5] = 0;
  auVar83._6_7_ = SUB137(auVar138 << 0x40,6);
  auVar84._4_9_ = auVar83._4_9_;
  auVar84._0_4_ = (uint)uVar184 & 0xffff;
  local_258._0_8_ = auVar84._0_8_ & 0xffffffff;
  local_258._8_4_ = auVar83._4_4_;
  local_258._12_4_ = 0;
  local_248._0_8_ =
       (ulonglong)(CONCAT14(uVar194,(uint)CONCAT12(uVar194,local_d8._6_2_)) & 0xffffff00ff) & 0xffff
  ;
  local_248[8] = uVar194;
  local_248._9_7_ = 0;
  uVar194 = local_d8[0xf];
  auVar7._8_6_ = 0;
  auVar7._0_8_ = local_d8._8_8_;
  auVar7[0xe] = uVar194;
  auVar20._8_4_ = 0;
  auVar20._0_8_ = local_d8._8_8_;
  auVar20[0xc] = local_d8[0xe];
  auVar20._13_2_ = auVar7._13_2_;
  auVar28._8_4_ = 0;
  auVar28._0_8_ = local_d8._8_8_;
  auVar28._12_3_ = auVar20._12_3_;
  uVar193 = local_d8[0xd];
  auVar39._8_2_ = 0;
  auVar39._0_8_ = local_d8._8_8_;
  auVar39[10] = uVar193;
  auVar39._11_4_ = auVar28._11_4_;
  auVar55._8_2_ = 0;
  auVar55._0_8_ = local_d8._8_8_;
  auVar55._10_5_ = auVar39._10_5_;
  auVar68[8] = local_d8[0xc];
  auVar68._0_8_ = local_d8._8_8_;
  auVar68._9_6_ = auVar55._9_6_;
  auVar139._7_8_ = 0;
  auVar139._0_7_ = auVar68._8_7_;
  uVar192 = local_d8[0xb];
  Var127 = CONCAT81(SUB158(auVar139 << 0x40,7),uVar192);
  auVar165._9_6_ = 0;
  auVar165._0_9_ = Var127;
  auVar140._1_10_ = SUB1510(auVar165 << 0x30,5);
  auVar140[0] = local_d8[10];
  auVar166._11_4_ = 0;
  auVar166._0_11_ = auVar140;
  auVar108[2] = local_d8[9];
  auVar108._0_2_ = local_d8._8_2_;
  auVar108._3_12_ = SUB1512(auVar166 << 0x20,3);
  auVar116._2_13_ = auVar108._2_13_;
  auVar116._0_2_ = local_d8._8_2_ & 0xff;
  auVar8._10_2_ = 0;
  auVar8._0_10_ = auVar116._0_10_;
  auVar8._12_2_ = (short)Var127;
  auVar141._2_4_ = auVar8._10_4_;
  auVar141._0_2_ = auVar140._0_2_;
  auVar141._6_8_ = 0;
  auVar40._4_2_ = auVar108._2_2_;
  auVar40._0_4_ = auVar116._0_4_;
  auVar40._6_8_ = SUB148(auVar141 << 0x40,6);
  auVar56._4_10_ = auVar40._4_10_;
  auVar56._0_4_ = auVar116._0_4_ & 0xffff;
  local_238._0_8_ = auVar56._0_8_ & 0xffffffff;
  local_238._8_4_ = auVar40._4_4_;
  local_238._12_4_ = 0;
  local_228._0_8_ =
       (ulonglong)(CONCAT14(uVar192,(uint)CONCAT12(uVar192,local_d8._10_2_)) & 0xffffff00ff) &
       0xffff;
  local_228[8] = uVar192;
  local_228._9_7_ = 0;
  uVar184 = (ulonglong)CONCAT12(uVar193,local_d8._12_2_) & 0xffffffffffff00ff;
  auVar85._8_4_ = 0;
  auVar85._0_8_ = uVar184;
  auVar85[0xc] = uVar194;
  auVar86[8] = local_d8[0xe];
  auVar86._0_8_ = uVar184;
  auVar86[9] = 0;
  auVar86._10_3_ = auVar85._10_3_;
  auVar142._5_8_ = 0;
  auVar142._0_5_ = auVar86._8_5_;
  auVar87[4] = uVar193;
  auVar87._0_4_ = (uint)uVar184;
  auVar87[5] = 0;
  auVar87._6_7_ = SUB137(auVar142 << 0x40,6);
  auVar88._4_9_ = auVar87._4_9_;
  auVar88._0_4_ = (uint)uVar184 & 0xffff;
  local_218._0_8_ = auVar88._0_8_ & 0xffffffff;
  local_218._8_4_ = auVar87._4_4_;
  local_218._12_4_ = 0;
  local_208._0_8_ =
       (ulonglong)(CONCAT14(uVar194,(uint)CONCAT12(uVar194,local_d8._14_2_)) & 0xffffff00ff) &
       0xffff;
  local_208[8] = uVar194;
  local_208._9_7_ = 0;
  uVar194 = local_c8[7];
  auVar9[0xd] = 0;
  auVar9._0_13_ = local_c8._0_13_;
  auVar9[0xe] = uVar194;
  auVar21[0xc] = local_c8[6];
  auVar21._0_12_ = local_c8._0_12_;
  auVar21._13_2_ = auVar9._13_2_;
  auVar29[0xb] = 0;
  auVar29._0_11_ = local_c8._0_11_;
  auVar29._12_3_ = auVar21._12_3_;
  uVar193 = local_c8[5];
  auVar41[10] = uVar193;
  auVar41._0_10_ = local_c8._0_10_;
  auVar41._11_4_ = auVar29._11_4_;
  auVar57[9] = 0;
  auVar57._0_9_ = local_c8._0_9_;
  auVar57._10_5_ = auVar41._10_5_;
  auVar69[8] = local_c8[4];
  auVar69._0_8_ = local_c8._0_8_;
  auVar69._9_6_ = auVar57._9_6_;
  auVar143._7_8_ = 0;
  auVar143._0_7_ = auVar69._8_7_;
  uVar192 = local_c8[3];
  Var127 = CONCAT81(SUB158(auVar143 << 0x40,7),uVar192);
  auVar167._9_6_ = 0;
  auVar167._0_9_ = Var127;
  auVar144._1_10_ = SUB1510(auVar167 << 0x30,5);
  auVar144[0] = local_c8[2];
  auVar168._11_4_ = 0;
  auVar168._0_11_ = auVar144;
  auVar109[2] = local_c8[1];
  auVar109._0_2_ = local_c8._0_2_;
  auVar109._3_12_ = SUB1512(auVar168 << 0x20,3);
  auVar117._2_13_ = auVar109._2_13_;
  auVar117._0_2_ = local_c8._0_2_ & 0xff;
  auVar10._10_2_ = 0;
  auVar10._0_10_ = auVar117._0_10_;
  auVar10._12_2_ = (short)Var127;
  auVar145._2_4_ = auVar10._10_4_;
  auVar145._0_2_ = auVar144._0_2_;
  auVar145._6_8_ = 0;
  auVar42._4_2_ = auVar109._2_2_;
  auVar42._0_4_ = auVar117._0_4_;
  auVar42._6_8_ = SUB148(auVar145 << 0x40,6);
  auVar58._4_10_ = auVar42._4_10_;
  auVar58._0_4_ = auVar117._0_4_ & 0xffff;
  local_1f8._0_8_ = auVar58._0_8_ & 0xffffffff;
  local_1f8._8_4_ = auVar42._4_4_;
  local_1f8._12_4_ = 0;
  local_1e8._0_8_ =
       (ulonglong)(CONCAT14(uVar192,(uint)CONCAT12(uVar192,local_c8._2_2_)) & 0xffffff00ff) & 0xffff
  ;
  local_1e8[8] = uVar192;
  local_1e8._9_7_ = 0;
  uVar184 = (ulonglong)CONCAT12(uVar193,local_c8._4_2_) & 0xffffffffffff00ff;
  auVar89._8_4_ = 0;
  auVar89._0_8_ = uVar184;
  auVar89[0xc] = uVar194;
  auVar90[8] = local_c8[6];
  auVar90._0_8_ = uVar184;
  auVar90[9] = 0;
  auVar90._10_3_ = auVar89._10_3_;
  auVar146._5_8_ = 0;
  auVar146._0_5_ = auVar90._8_5_;
  auVar91[4] = uVar193;
  auVar91._0_4_ = (uint)uVar184;
  auVar91[5] = 0;
  auVar91._6_7_ = SUB137(auVar146 << 0x40,6);
  auVar92._4_9_ = auVar91._4_9_;
  auVar92._0_4_ = (uint)uVar184 & 0xffff;
  local_1d8._0_8_ = auVar92._0_8_ & 0xffffffff;
  local_1d8._8_4_ = auVar91._4_4_;
  local_1d8._12_4_ = 0;
  local_1c8._0_8_ =
       (ulonglong)(CONCAT14(uVar194,(uint)CONCAT12(uVar194,local_c8._6_2_)) & 0xffffff00ff) & 0xffff
  ;
  local_1c8[8] = uVar194;
  local_1c8._9_7_ = 0;
  uVar194 = local_c8[0xf];
  auVar11._8_6_ = 0;
  auVar11._0_8_ = local_c8._8_8_;
  auVar11[0xe] = uVar194;
  auVar22._8_4_ = 0;
  auVar22._0_8_ = local_c8._8_8_;
  auVar22[0xc] = local_c8[0xe];
  auVar22._13_2_ = auVar11._13_2_;
  auVar30._8_4_ = 0;
  auVar30._0_8_ = local_c8._8_8_;
  auVar30._12_3_ = auVar22._12_3_;
  uVar193 = local_c8[0xd];
  auVar43._8_2_ = 0;
  auVar43._0_8_ = local_c8._8_8_;
  auVar43[10] = uVar193;
  auVar43._11_4_ = auVar30._11_4_;
  auVar59._8_2_ = 0;
  auVar59._0_8_ = local_c8._8_8_;
  auVar59._10_5_ = auVar43._10_5_;
  auVar70[8] = local_c8[0xc];
  auVar70._0_8_ = local_c8._8_8_;
  auVar70._9_6_ = auVar59._9_6_;
  auVar147._7_8_ = 0;
  auVar147._0_7_ = auVar70._8_7_;
  uVar192 = local_c8[0xb];
  Var127 = CONCAT81(SUB158(auVar147 << 0x40,7),uVar192);
  auVar169._9_6_ = 0;
  auVar169._0_9_ = Var127;
  auVar148._1_10_ = SUB1510(auVar169 << 0x30,5);
  auVar148[0] = local_c8[10];
  auVar170._11_4_ = 0;
  auVar170._0_11_ = auVar148;
  auVar110[2] = local_c8[9];
  auVar110._0_2_ = local_c8._8_2_;
  auVar110._3_12_ = SUB1512(auVar170 << 0x20,3);
  auVar118._2_13_ = auVar110._2_13_;
  auVar118._0_2_ = local_c8._8_2_ & 0xff;
  auVar12._10_2_ = 0;
  auVar12._0_10_ = auVar118._0_10_;
  auVar12._12_2_ = (short)Var127;
  auVar149._2_4_ = auVar12._10_4_;
  auVar149._0_2_ = auVar148._0_2_;
  auVar149._6_8_ = 0;
  auVar44._4_2_ = auVar110._2_2_;
  auVar44._0_4_ = auVar118._0_4_;
  auVar44._6_8_ = SUB148(auVar149 << 0x40,6);
  auVar60._4_10_ = auVar44._4_10_;
  auVar60._0_4_ = auVar118._0_4_ & 0xffff;
  local_1b8._0_8_ = auVar60._0_8_ & 0xffffffff;
  local_1b8._8_4_ = auVar44._4_4_;
  local_1b8._12_4_ = 0;
  local_1a8._0_8_ =
       (ulonglong)(CONCAT14(uVar192,(uint)CONCAT12(uVar192,local_c8._10_2_)) & 0xffffff00ff) &
       0xffff;
  local_1a8[8] = uVar192;
  local_1a8._9_7_ = 0;
  uVar184 = (ulonglong)CONCAT12(uVar193,local_c8._12_2_) & 0xffffffffffff00ff;
  auVar93._8_4_ = 0;
  auVar93._0_8_ = uVar184;
  auVar93[0xc] = uVar194;
  auVar94[8] = local_c8[0xe];
  auVar94._0_8_ = uVar184;
  auVar94[9] = 0;
  auVar94._10_3_ = auVar93._10_3_;
  auVar150._5_8_ = 0;
  auVar150._0_5_ = auVar94._8_5_;
  auVar95[4] = uVar193;
  auVar95._0_4_ = (uint)uVar184;
  auVar95[5] = 0;
  auVar95._6_7_ = SUB137(auVar150 << 0x40,6);
  auVar96._4_9_ = auVar95._4_9_;
  auVar96._0_4_ = (uint)uVar184 & 0xffff;
  local_198._0_8_ = auVar96._0_8_ & 0xffffffff;
  local_198._8_4_ = auVar95._4_4_;
  local_198._12_4_ = 0;
  local_188._0_8_ =
       (ulonglong)(CONCAT14(uVar194,(uint)CONCAT12(uVar194,local_c8._14_2_)) & 0xffffff00ff) &
       0xffff;
  local_188[8] = uVar194;
  local_188._9_7_ = 0;
  uVar194 = local_b8[7];
  auVar13[0xd] = 0;
  auVar13._0_13_ = local_b8._0_13_;
  auVar13[0xe] = uVar194;
  auVar23[0xc] = local_b8[6];
  auVar23._0_12_ = local_b8._0_12_;
  auVar23._13_2_ = auVar13._13_2_;
  auVar31[0xb] = 0;
  auVar31._0_11_ = local_b8._0_11_;
  auVar31._12_3_ = auVar23._12_3_;
  uVar193 = local_b8[5];
  auVar45[10] = uVar193;
  auVar45._0_10_ = local_b8._0_10_;
  auVar45._11_4_ = auVar31._11_4_;
  auVar61[9] = 0;
  auVar61._0_9_ = local_b8._0_9_;
  auVar61._10_5_ = auVar45._10_5_;
  auVar71[8] = local_b8[4];
  auVar71._0_8_ = local_b8._0_8_;
  auVar71._9_6_ = auVar61._9_6_;
  auVar151._7_8_ = 0;
  auVar151._0_7_ = auVar71._8_7_;
  uVar192 = local_b8[3];
  Var127 = CONCAT81(SUB158(auVar151 << 0x40,7),uVar192);
  auVar171._9_6_ = 0;
  auVar171._0_9_ = Var127;
  auVar152._1_10_ = SUB1510(auVar171 << 0x30,5);
  auVar152[0] = local_b8[2];
  auVar172._11_4_ = 0;
  auVar172._0_11_ = auVar152;
  auVar111[2] = local_b8[1];
  auVar111._0_2_ = local_b8._0_2_;
  auVar111._3_12_ = SUB1512(auVar172 << 0x20,3);
  auVar119._2_13_ = auVar111._2_13_;
  auVar119._0_2_ = local_b8._0_2_ & 0xff;
  auVar14._10_2_ = 0;
  auVar14._0_10_ = auVar119._0_10_;
  auVar14._12_2_ = (short)Var127;
  auVar153._2_4_ = auVar14._10_4_;
  auVar153._0_2_ = auVar152._0_2_;
  auVar153._6_8_ = 0;
  auVar46._4_2_ = auVar111._2_2_;
  auVar46._0_4_ = auVar119._0_4_;
  auVar46._6_8_ = SUB148(auVar153 << 0x40,6);
  auVar62._4_10_ = auVar46._4_10_;
  auVar62._0_4_ = auVar119._0_4_ & 0xffff;
  local_178._0_8_ = auVar62._0_8_ & 0xffffffff;
  local_178._8_4_ = auVar46._4_4_;
  local_178._12_4_ = 0;
  local_168._0_8_ =
       (ulonglong)(CONCAT14(uVar192,(uint)CONCAT12(uVar192,local_b8._2_2_)) & 0xffffff00ff) & 0xffff
  ;
  local_168[8] = uVar192;
  local_168._9_7_ = 0;
  uVar184 = (ulonglong)CONCAT12(uVar193,local_b8._4_2_) & 0xffffffffffff00ff;
  auVar97._8_4_ = 0;
  auVar97._0_8_ = uVar184;
  auVar97[0xc] = uVar194;
  auVar98[8] = local_b8[6];
  auVar98._0_8_ = uVar184;
  auVar98[9] = 0;
  auVar98._10_3_ = auVar97._10_3_;
  auVar154._5_8_ = 0;
  auVar154._0_5_ = auVar98._8_5_;
  auVar99[4] = uVar193;
  auVar99._0_4_ = (uint)uVar184;
  auVar99[5] = 0;
  auVar99._6_7_ = SUB137(auVar154 << 0x40,6);
  auVar100._4_9_ = auVar99._4_9_;
  auVar100._0_4_ = (uint)uVar184 & 0xffff;
  local_158._0_8_ = auVar100._0_8_ & 0xffffffff;
  local_158._8_4_ = auVar99._4_4_;
  local_158._12_4_ = 0;
  local_148._0_8_ =
       (ulonglong)(CONCAT14(uVar194,(uint)CONCAT12(uVar194,local_b8._6_2_)) & 0xffffff00ff) & 0xffff
  ;
  local_148[8] = uVar194;
  local_148._9_7_ = 0;
  uVar194 = local_b8[0xf];
  auVar15._8_6_ = 0;
  auVar15._0_8_ = local_b8._8_8_;
  auVar15[0xe] = uVar194;
  auVar24._8_4_ = 0;
  auVar24._0_8_ = local_b8._8_8_;
  auVar24[0xc] = local_b8[0xe];
  auVar24._13_2_ = auVar15._13_2_;
  auVar32._8_4_ = 0;
  auVar32._0_8_ = local_b8._8_8_;
  auVar32._12_3_ = auVar24._12_3_;
  uVar193 = local_b8[0xd];
  auVar47._8_2_ = 0;
  auVar47._0_8_ = local_b8._8_8_;
  auVar47[10] = uVar193;
  auVar47._11_4_ = auVar32._11_4_;
  auVar63._8_2_ = 0;
  auVar63._0_8_ = local_b8._8_8_;
  auVar63._10_5_ = auVar47._10_5_;
  auVar72[8] = local_b8[0xc];
  auVar72._0_8_ = local_b8._8_8_;
  auVar72._9_6_ = auVar63._9_6_;
  auVar155._7_8_ = 0;
  auVar155._0_7_ = auVar72._8_7_;
  uVar192 = local_b8[0xb];
  Var127 = CONCAT81(SUB158(auVar155 << 0x40,7),uVar192);
  auVar173._9_6_ = 0;
  auVar173._0_9_ = Var127;
  auVar156._1_10_ = SUB1510(auVar173 << 0x30,5);
  auVar156[0] = local_b8[10];
  auVar174._11_4_ = 0;
  auVar174._0_11_ = auVar156;
  auVar112[2] = local_b8[9];
  auVar112._0_2_ = local_b8._8_2_;
  auVar112._3_12_ = SUB1512(auVar174 << 0x20,3);
  auVar120._2_13_ = auVar112._2_13_;
  auVar120._0_2_ = local_b8._8_2_ & 0xff;
  auVar16._10_2_ = 0;
  auVar16._0_10_ = auVar120._0_10_;
  auVar16._12_2_ = (short)Var127;
  auVar157._2_4_ = auVar16._10_4_;
  auVar157._0_2_ = auVar156._0_2_;
  auVar157._6_8_ = 0;
  auVar48._4_2_ = auVar112._2_2_;
  auVar48._0_4_ = auVar120._0_4_;
  auVar48._6_8_ = SUB148(auVar157 << 0x40,6);
  auVar64._4_10_ = auVar48._4_10_;
  auVar64._0_4_ = auVar120._0_4_ & 0xffff;
  local_138._0_8_ = auVar64._0_8_ & 0xffffffff;
  local_138._8_4_ = auVar48._4_4_;
  local_138._12_4_ = 0;
  local_128._0_8_ =
       (ulonglong)(CONCAT14(uVar192,(uint)CONCAT12(uVar192,local_b8._10_2_)) & 0xffffff00ff) &
       0xffff;
  local_128[8] = uVar192;
  local_128._9_7_ = 0;
  uVar184 = (ulonglong)CONCAT12(uVar193,local_b8._12_2_) & 0xffffffffffff00ff;
  auVar101._8_4_ = 0;
  auVar101._0_8_ = uVar184;
  auVar101[0xc] = uVar194;
  auVar102[8] = local_b8[0xe];
  auVar102._0_8_ = uVar184;
  auVar102[9] = 0;
  auVar102._10_3_ = auVar101._10_3_;
  auVar158._5_8_ = 0;
  auVar158._0_5_ = auVar102._8_5_;
  auVar103[4] = uVar193;
  auVar103._0_4_ = (uint)uVar184;
  auVar103[5] = 0;
  auVar103._6_7_ = SUB137(auVar158 << 0x40,6);
  auVar104._4_9_ = auVar103._4_9_;
  auVar104._0_4_ = (uint)uVar184 & 0xffff;
  local_118._0_8_ = auVar104._0_8_ & 0xffffffff;
  local_118._8_4_ = auVar103._4_4_;
  local_118._12_4_ = 0;
  local_108._0_8_ =
       (ulonglong)(CONCAT14(uVar194,(uint)CONCAT12(uVar194,local_b8._14_2_)) & 0xffffff00ff) &
       0xffff;
  local_108[8] = uVar194;
  local_108._9_7_ = 0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  puVar177 = local_208 + 8;
  uVar184 = 0x3f;
  do {
    lVar176 = 0;
    lVar182 = 0;
    do {
      lVar181 = lVar182 + (ulonglong)(byte)(&DAT_1400351a0)[lVar176] *
                          *(longlong *)(local_2f8 + uVar184 * 8) * -0x10;
      uVar183 = *(longlong *)(puVar177 + lVar176 * 8) + lVar181 + 0x80;
      lVar182 = (longlong)uVar183 >> 8;
      *(ulonglong *)(puVar177 + lVar176 * 8) =
           (lVar181 + *(longlong *)(puVar177 + lVar176 * 8)) - (uVar183 & 0xffffffffffffff00);
      lVar176 = lVar176 + 1;
    } while (lVar176 != 0x14);
    alStack_358[uVar184] = alStack_358[uVar184] + lVar182;
    *(undefined8 *)(local_2f8 + uVar184 * 8) = 0;
    puVar177 = puVar177 + -8;
    bVar187 = 0x20 < uVar184;
    uVar184 = uVar184 - 1;
  } while (bVar187);
  local_f8 = param_3;
  lVar182 = 1;
  lVar176 = 0;
  do {
    uVar184 = (lVar176 -
              (ulonglong)(byte)(&UNK_14003519f)[lVar182] * ((longlong)local_208._8_8_ >> 4)) +
              *(longlong *)(local_2f8 + lVar182 * 8 + -8);
    *(ulonglong *)(local_2f8 + lVar182 * 8 + -8) = uVar184 & 0xff;
    uVar184 = (((longlong)uVar184 >> 8) -
              (ulonglong)(byte)(&DAT_1400351a0)[lVar182] * ((longlong)local_208._8_8_ >> 4)) +
              *(longlong *)(local_2f8 + lVar182 * 8);
    lVar176 = (longlong)uVar184 >> 8;
    *(ulonglong *)(local_2f8 + lVar182 * 8) = uVar184 & 0xff;
    lVar182 = lVar182 + 2;
  } while (lVar182 != 0x21);
  lVar182 = lVar176 * -0xed + local_2f8._0_8_;
  local_300 = local_298._0_8_ + lVar176 * -0xde;
  local_f0 = (undefined8 *)(local_288._0_8_ + lVar176 * -0xde);
  lVar181 = (lVar182 >> 8) + lVar176 * -0xd3 + local_2f8._8_8_;
  local_e8[1] = (char)lVar181;
  local_e8[0] = (char)lVar182;
  lVar182 = (lVar181 >> 8) + lVar176 * -0xf5 + local_2e8._0_8_;
  local_e8[2] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + lVar176 * -0x5c + local_2e8._8_8_;
  local_e8[3] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + lVar176 * -0x1a + local_2d8._0_8_;
  local_e8[4] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + lVar176 * -99 + local_2d8._8_8_;
  local_e8[5] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + local_2c8._0_8_ + lVar176 * -0x12;
  local_e8[6] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + lVar176 * -0x58 + local_2c8._8_8_;
  local_e8[7] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + lVar176 * -0xd6 + local_2b8._0_8_;
  local_e8[8] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + lVar176 * -0x9c + local_2b8._8_8_;
  local_e8[9] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + lVar176 * -0xf7 + local_2a8._0_8_;
  local_e8[10] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + lVar176 * -0xa2 + local_2a8._8_8_;
  local_e8[0xb] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + local_300;
  local_e8[0xc] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + lVar176 * -0xf9 + local_298._8_8_;
  local_e8[0xd] = (char)lVar182;
  lVar182 = (lVar182 >> 8) + (longlong)local_f0;
  local_e8[0xe] = (char)lVar182;
  lVar176 = (lVar182 >> 8) + local_288._8_8_ + lVar176 * -0x14;
  local_e8[0xf] = (char)lVar176;
  lVar176 = (lVar176 >> 8) + local_278._0_8_;
  lVar182 = (lVar176 >> 8) + local_278._8_8_;
  local_d8[1] = (char)lVar182;
  local_d8[0] = (char)lVar176;
  lVar176 = (lVar182 >> 8) + local_268._0_8_;
  local_d8[2] = (char)lVar176;
  lVar176 = (lVar176 >> 8) + local_268._8_8_;
  local_d8[3] = (char)lVar176;
  lVar182 = (lVar176 >> 8) + local_258._0_8_;
  lVar176 = (lVar182 >> 8) + local_258._8_8_;
  local_d8[4] = (char)lVar182;
  local_d8[5] = (char)lVar176;
  lVar176 = (lVar176 >> 8) + local_248._0_8_;
  local_d8[6] = (char)lVar176;
  lVar176 = (lVar176 >> 8) + local_248._8_8_;
  local_d8[7] = (char)lVar176;
  lVar176 = (lVar176 >> 8) + local_238._0_8_;
  local_d8[8] = (char)lVar176;
  lVar176 = (lVar176 >> 8) + local_238._8_8_;
  local_d8[9] = (char)lVar176;
  lVar176 = (lVar176 >> 8) + local_228._0_8_;
  local_d8[10] = (char)lVar176;
  lVar176 = (lVar176 >> 8) + local_228._8_8_;
  local_d8[0xb] = (char)lVar176;
  lVar176 = (lVar176 >> 8) + local_218._0_8_;
  local_d8[0xc] = (char)lVar176;
  lVar176 = (lVar176 >> 8) + local_218._8_8_;
  local_d8[0xd] = (char)lVar176;
  lVar176 = (lVar176 >> 8) + local_208._0_8_;
  local_d8[0xe] = (char)lVar176;
  local_d8[0xf] = (char)((ulonglong)lVar176 >> 8) + local_208[8] + (char)(uVar184 >> 8) * -0x10;
  local_718 = (undefined1  [16])0x0;
  local_728 = (undefined1  [16])0x0;
  local_738 = (undefined1  [16])0x0;
  local_748 = (undefined1  [16])0x0;
  local_758 = (undefined1  [16])0x0;
  local_768 = (undefined1  [16])0x0;
  local_778 = (undefined1  [16])0x0;
  local_788 = (undefined1  [16])0x0;
  local_708 = 1;
  local_700 = (undefined1  [16])0x0;
  local_6f0 = (undefined1  [16])0x0;
  local_6e0 = (undefined1  [16])0x0;
  local_6d0 = (undefined1  [16])0x0;
  local_6c0 = (undefined1  [16])0x0;
  local_6b0 = (undefined1  [16])0x0;
  local_6a0 = (undefined1  [16])0x0;
  local_690 = 0;
  local_688 = 1;
  local_5a0 = (undefined1  [16])0x0;
  local_5b0 = (undefined1  [16])0x0;
  local_5c0 = (undefined1  [16])0x0;
  local_5d0 = (undefined1  [16])0x0;
  local_5e0 = (undefined1  [16])0x0;
  local_5f0 = (undefined1  [16])0x0;
  local_600 = (undefined1  [16])0x0;
  local_610 = (undefined1  [16])0x0;
  local_620 = (undefined1  [16])0x0;
  local_630 = (undefined1  [16])0x0;
  local_640 = (undefined1  [16])0x0;
  local_650 = (undefined1  [16])0x0;
  local_660 = (undefined1  [16])0x0;
  local_670 = (undefined1  [16])0x0;
  local_680 = (undefined1  [16])0x0;
  local_590 = 0;
  uVar185 = 0xff;
  do {
    bVar187 = ((byte)local_e8[uVar185 >> 3] >> (uVar185 & 7) & 1) != 0;
    FUN_14002f9b0(local_788,&local_988,bVar187);
    FUN_14002d3a0(&local_988,local_788);
    FUN_14002d3a0(local_788,local_788);
    FUN_14002f9b0(local_788,&local_988,bVar187);
    bVar187 = uVar185 != 0;
    uVar185 = uVar185 - 1;
  } while (bVar187);
  local_2f8._8_8_ = 0x8f25;
  local_2f8._0_8_ = 0xd51a;
  local_2e8._8_8_ = 0xc956;
  local_2e8._0_8_ = 0x2d60;
  local_2d8._8_8_ = 0x9525;
  local_2d8._0_8_ = 0xa7b2;
  local_2c8._8_8_ = 0x692c;
  local_2c8._0_8_ = 0xc760;
  local_2b8._8_8_ = 0xfdd6;
  local_2b8._0_8_ = 0xdc5c;
  local_2a8._8_8_ = 0xc0a4;
  local_2a8._0_8_ = 0xe231;
  local_298._8_8_ = 0xcd6e;
  local_298._0_8_ = 0x53fe;
  local_288._8_8_ = 0x2169;
  local_288._0_8_ = 0x36d3;
  local_278._8_8_ = 0x6666;
  local_278._0_8_ = 0x6658;
  local_268._8_8_ = 0x6666;
  local_268._0_8_ = 0x6666;
  local_258._8_8_ = 0x6666;
  local_258._0_8_ = 0x6666;
  local_248._8_8_ = 0x6666;
  local_248._0_8_ = 0x6666;
  local_238._8_8_ = 0x6666;
  local_238._0_8_ = 0x6666;
  local_228._8_8_ = 0x6666;
  local_228._0_8_ = 0x6666;
  local_218._8_8_ = 0x6666;
  local_218._0_8_ = 0x6666;
  local_208._8_8_ = 0x6666;
  local_208._0_8_ = 0x6666;
  local_198 = ZEXT816(0);
  local_1a8 = ZEXT816(0);
  local_1b8 = ZEXT816(0);
  local_1c8 = ZEXT816(0);
  local_1d8 = ZEXT816(0);
  local_1f8 = ZEXT816(1);
  local_1e8 = ZEXT816(0);
  local_188 = ZEXT816(0);
  FUN_14002e3d0(local_178,&DAT_1400351c0,&DAT_140035240);
  pcVar175 = local_f8;
  local_498 = 0;
  uStack_490 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_488 = 1;
  local_480 = 0;
  uStack_478 = 0;
  local_470 = 0;
  uStack_468 = 0;
  local_460 = 0;
  uStack_458 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_440 = 0;
  uStack_438 = 0;
  local_430 = 0;
  uStack_428 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_410 = 0;
  local_408 = 1;
  alStack_358[7] = 0;
  alStack_358[8] = 0;
  alStack_358[5] = 0;
  alStack_358[6] = 0;
  alStack_358[3] = 0;
  alStack_358[4] = 0;
  alStack_358[1] = 0;
  alStack_358[2] = 0;
  local_360 = 0;
  alStack_358[0] = 0;
  local_370 = 0;
  uStack_368 = 0;
  local_380 = 0;
  uStack_378 = 0;
  local_390 = 0;
  uStack_388 = 0;
  local_3a0 = 0;
  uStack_398 = 0;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_3c0 = 0;
  uStack_3b8 = 0;
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  alStack_358[9] = 0;
  uVar185 = 0xff;
  do {
    bVar187 = ((byte)pcVar175[(ulonglong)(uVar185 >> 3) + 0x20] >> (uVar185 & 7) & 1) != 0;
    FUN_14002f9b0(&local_508,local_2f8,bVar187);
    FUN_14002d3a0(local_2f8,&local_508);
    FUN_14002d3a0(&local_508,&local_508);
    FUN_14002f9b0(&local_508,local_2f8,bVar187);
    bVar187 = uVar185 != 0;
    uVar185 = uVar185 - 1;
  } while (bVar187);
  FUN_14002d3a0(&local_508,local_788);
  local_2f8._8_8_ = uStack_400;
  local_2f8._0_8_ = local_408;
  local_2e8._8_8_ = uStack_3f0;
  local_2e8._0_8_ = uStack_3f8;
  local_2d8._8_8_ = local_3e0;
  local_2d8._0_8_ = uStack_3e8;
  local_2c8._8_8_ = local_3d0;
  local_2c8._0_8_ = uStack_3d8;
  local_2b8._8_8_ = local_3c0;
  local_2b8._0_8_ = uStack_3c8;
  local_2a8._8_8_ = local_3b0;
  local_2a8._0_8_ = uStack_3b8;
  local_298._8_8_ = local_3a0;
  local_298._0_8_ = uStack_3a8;
  local_288._8_8_ = local_390;
  local_288._0_8_ = uStack_398;
  iVar178 = 0xfd;
  do {
    FUN_14002e3d0(local_2f8,local_2f8,local_2f8);
    if ((iVar178 != 2) && (iVar178 != 4)) {
      FUN_14002e3d0(local_2f8,local_2f8,&local_408);
    }
    bVar187 = iVar178 != 0;
    iVar178 = iVar178 + -1;
  } while (bVar187);
  local_588 = local_2f8._0_8_;
  uStack_580 = local_2f8._8_8_;
  local_578 = local_2e8._0_8_;
  uStack_570 = local_2e8._8_8_;
  local_568 = local_2d8._0_8_;
  uStack_560 = local_2d8._8_8_;
  local_558 = local_2c8._0_4_;
  uStack_554 = local_2c8._4_4_;
  uStack_550 = local_2c8._8_4_;
  uStack_54c = local_2c8._12_4_;
  local_548 = local_2b8._0_8_;
  uStack_540 = local_2b8._8_8_;
  local_538 = local_2a8._0_8_;
  uStack_530 = local_2a8._8_8_;
  local_528 = local_298._0_8_;
  uStack_520 = local_298._8_8_;
  local_518 = local_288._0_8_;
  uStack_510 = local_288._8_8_;
  FUN_14002e3d0(local_2f8,&local_508,&local_588);
  FUN_14002e3d0(local_a08,&local_488,&local_588);
  FUN_14002ede0(&local_a88,local_a08);
  FUN_14002ede0(local_b08,local_2f8);
  auVar190[0] = -(pcVar175[0x10] == local_a78);
  auVar190[1] = -(pcVar175[0x11] == cStack_a77);
  auVar190[2] = -(pcVar175[0x12] == cStack_a76);
  auVar190[3] = -(pcVar175[0x13] == cStack_a75);
  auVar190[4] = -(pcVar175[0x14] == cStack_a74);
  auVar190[5] = -(pcVar175[0x15] == cStack_a73);
  auVar190[6] = -(pcVar175[0x16] == cStack_a72);
  auVar190[7] = -(pcVar175[0x17] == cStack_a71);
  auVar190[8] = -(pcVar175[0x18] == cStack_a70);
  auVar190[9] = -(pcVar175[0x19] == cStack_a6f);
  auVar190[10] = -(pcVar175[0x1a] == cStack_a6e);
  auVar190[0xb] = -(pcVar175[0x1b] == cStack_a6d);
  auVar190[0xc] = -(pcVar175[0x1c] == cStack_a6c);
  auVar190[0xd] = -(pcVar175[0x1d] == cStack_a6b);
  auVar190[0xe] = -(pcVar175[0x1e] == cStack_a6a);
  auVar190[0xf] = -(pcVar175[0x1f] == (byte)(bStack_a69 ^ local_b08[0] << 7));
  auVar188[0] = -(*pcVar175 == local_a88);
  auVar188[1] = -(pcVar175[1] == cStack_a87);
  auVar188[2] = -(pcVar175[2] == cStack_a86);
  auVar188[3] = -(pcVar175[3] == cStack_a85);
  auVar188[4] = -(pcVar175[4] == cStack_a84);
  auVar188[5] = -(pcVar175[5] == cStack_a83);
  auVar188[6] = -(pcVar175[6] == cStack_a82);
  auVar188[7] = -(pcVar175[7] == cStack_a81);
  auVar188[8] = -(pcVar175[8] == cStack_a80);
  auVar188[9] = -(pcVar175[9] == cStack_a7f);
  auVar188[10] = -(pcVar175[10] == cStack_a7e);
  auVar188[0xb] = -(pcVar175[0xb] == cStack_a7d);
  auVar188[0xc] = -(pcVar175[0xc] == cStack_a7c);
  auVar188[0xd] = -(pcVar175[0xd] == cStack_a7b);
  auVar188[0xe] = -(pcVar175[0xe] == cStack_a7a);
  auVar188[0xf] = -(pcVar175[0xf] == cStack_a79);
  auVar188 = auVar188 & auVar190;
  uVar185 = (ushort)((ushort)(SUB161(auVar188 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar188 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar188 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar188 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar188 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar188 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar188 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar188 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar188 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar188 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar188 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar188 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar188 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar188 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar188 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar188[0xf] >> 7) << 0xf) ^ 0xffff;
  return CONCAT31((int3)(uVar185 >> 8),uVar185 == 0);
}


/* Unwind@14001f190 */

void Unwind_14001f190(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x850);
  return;
}


/* FUN_14001f1e0 */

void FUN_14001f1e0(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar4 = param_1[2] - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* FUN_14001f240 */

undefined8 * FUN_14001f240(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_140034260(param_2);
  if (-1 < (longlong)uVar1) {
    uVar5 = 0xf;
    puVar4 = param_1;
    if (0xf < uVar1) {
      uVar2 = uVar1 | 0xf;
      uVar5 = 0x16;
      if (0x16 < uVar2) {
        uVar5 = uVar2;
      }
      if (uVar2 < 0xfff) {
        puVar4 = (undefined8 *)FUN_1400329d0(uVar5 + 1);
      }
      else {
        lVar3 = FUN_1400329d0(uVar5 + 0x28);
        puVar4 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
        puVar4[-1] = lVar3;
      }
      *param_1 = puVar4;
    }
    param_1[2] = uVar1;
    param_1[3] = uVar5;
    FUN_140034080(puVar4,param_2,uVar1);
    *(undefined1 *)((longlong)puVar4 + uVar1) = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140020740();
}


/* FUN_14001f2f0 */

void FUN_14001f2f0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb0;
  param_1[2] = (longlong)std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((param_1[0x12] == 0) || (*(longlong **)param_1[5] != param_1 + 0x10)) {
    cVar1 = *(char *)((longlong)param_1 + 0x8c);
  }
  else {
    lVar3 = param_1[0x14];
    lVar2 = param_1[0x13];
    *(longlong *)param_1[5] = lVar2;
    *(longlong *)param_1[9] = lVar2;
    *(int *)param_1[0xc] = (int)lVar3 - (int)lVar2;
    cVar1 = *(char *)((longlong)param_1 + 0x8c);
  }
  if (cVar1 == '\x01') {
    FUN_14001f660(param_1 + 2);
  }
  (*DAT_140039690)(param_1 + 2);
  (*DAT_1400396a0)(param_1 + 0x16);
  return;
}


/* Unwind@14001f3c0 */

void Unwind_14001f3c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* FUN_14001f3e0 */

void FUN_14001f3e0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = param_1[0x10];
  if (0xf < uVar1) {
    lVar2 = param_1[0xd];
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_14001f53f;
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0xf;
  *(undefined1 *)(param_1 + 0xd) = 0;
  uVar1 = param_1[0xc];
  if (0xf < uVar1) {
    lVar2 = param_1[9];
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_14001f53f;
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0xf;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = param_1[8];
  if (0xf < uVar1) {
    lVar2 = param_1[5];
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_14001f53f;
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  uVar1 = param_1[3];
  if (7 < uVar1) {
    lVar2 = *param_1;
    uVar4 = uVar1 * 2 + 2;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
LAB_14001f53f:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar4 = uVar1 * 2 + 0x29;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}


/* FUN_14001f550 */

void FUN_14001f550(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}


/* FUN_14001f5b0 */

void FUN_14001f5b0(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((param_1[0x10] == 0) || (*(undefined8 **)param_1[3] != param_1 + 0xe)) {
    cVar1 = *(char *)((longlong)param_1 + 0x7c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x12);
    lVar3 = param_1[0x11];
    *(longlong *)param_1[3] = lVar3;
    *(longlong *)param_1[7] = lVar3;
    *(int *)param_1[10] = iVar2 - (int)lVar3;
    cVar1 = *(char *)((longlong)param_1 + 0x7c);
  }
  if (cVar1 == '\x01') {
    FUN_14001f660();
  }
  (*DAT_140039690)(param_1);
  return;
}


/* Unwind@14001f630 */

void Unwind_14001f630(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* FUN_14001f650 */

void FUN_14001f650(longlong param_1)

{
  FUN_140020b10(param_1 + -*(int *)(param_1 + -4));
  return;
}


/* FUN_14001f660 */

longlong * FUN_14001f660(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_40;
  undefined1 local_38 [32];
  
  if (param_1[0x10] == 0) {
    plVar2 = (longlong *)0x0;
    goto LAB_14001f75d;
  }
  if (*(longlong **)param_1[3] == param_1 + 0xe) {
    lVar3 = param_1[0x12];
    lVar4 = param_1[0x11];
    *(longlong *)param_1[3] = lVar4;
    *(longlong *)param_1[7] = lVar4;
    *(int *)param_1[10] = (int)lVar3 - (int)lVar4;
    lVar4 = param_1[0xd];
  }
  else {
    lVar4 = param_1[0xd];
  }
  plVar5 = param_1;
  if ((lVar4 != 0) && (*(char *)((longlong)param_1 + 0x71) == '\x01')) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if (iVar1 == -1) {
LAB_14001f73b:
      plVar5 = (longlong *)0x0;
    }
    else {
      iVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))
                        ((longlong *)param_1[0xd],(longlong)param_1 + 0x74,local_38,
                         &stack0xffffffffffffffe8,&local_40);
      if (iVar1 == 3) {
        *(undefined1 *)((longlong)param_1 + 0x71) = 0;
      }
      else {
        if (iVar1 != 1) {
          if (iVar1 != 0) goto LAB_14001f73b;
          *(undefined1 *)((longlong)param_1 + 0x71) = 0;
        }
        lVar4 = local_40 - (longlong)local_38;
        if (((lVar4 != 0) &&
            (lVar3 = (*DAT_1400399e8)(local_38,1,lVar4,param_1[0x10]), lVar4 != lVar3)) ||
           (*(char *)((longlong)param_1 + 0x71) != '\0')) goto LAB_14001f73b;
      }
    }
  }
  iVar1 = (*DAT_1400399b0)(param_1[0x10]);
  plVar2 = (longlong *)0x0;
  if (iVar1 == 0) {
    plVar2 = plVar5;
  }
LAB_14001f75d:
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  param_1[3] = (longlong)(param_1 + 1);
  param_1[4] = (longlong)(param_1 + 2);
  param_1[7] = (longlong)(param_1 + 5);
  param_1[8] = (longlong)(param_1 + 6);
  param_1[10] = (longlong)(param_1 + 9);
  param_1[0xb] = (longlong)param_1 + 0x4c;
  param_1[9] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = DAT_14003f948;
  param_1[0xd] = 0;
  return plVar2;
}


/* FUN_14001f7d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001f7d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (*_DAT_140039aa8)();
    return;
  }
  return;
}


/* FUN_14001f7f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001f7f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (*_DAT_140039ab0)();
    return;
  }
  return;
}


/* FUN_14001f810 */

int FUN_14001f810(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  char local_69;
  longlong local_68;
  char *local_60;
  undefined1 local_58 [32];
  undefined1 local_38 [8];
  
  if (param_2 == -1) {
    param_2 = 0;
  }
  else {
    local_69 = (char)param_2;
    if (**(longlong **)(param_1 + 0x40) != 0) {
      iVar4 = **(int **)(param_1 + 0x58);
      if (0 < iVar4) {
        **(int **)(param_1 + 0x58) = iVar4 + -1;
        pcVar1 = (char *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(pcVar1 + 1);
        *pcVar1 = local_69;
        return param_2;
      }
    }
    if (*(longlong *)(param_1 + 0x80) == 0) {
      param_2 = -1;
    }
    else {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        iVar4 = *(int *)(param_1 + 0x90);
        lVar6 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar6;
        **(longlong **)(param_1 + 0x38) = lVar6;
        **(int **)(param_1 + 0x50) = iVar4 - (int)lVar6;
        plVar2 = *(longlong **)(param_1 + 0x68);
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x68);
      }
      if (plVar2 == (longlong *)0x0) {
        iVar4 = (*DAT_1400399d0)((int)local_69,*(undefined8 *)(param_1 + 0x80));
        if (iVar4 == -1) {
          param_2 = -1;
        }
      }
      else {
        uVar3 = (**(code **)(*plVar2 + 0x38))
                          (plVar2,param_1 + 0x74,&local_69,&local_68,&local_60,local_58,local_38,
                           &local_68);
        if (uVar3 < 2) {
          lVar6 = local_68 - (longlong)local_58;
          if ((lVar6 != 0) &&
             (lVar5 = (*DAT_1400399e8)(local_58,1,lVar6,*(undefined8 *)(param_1 + 0x80)),
             lVar6 != lVar5)) {
            return -1;
          }
          *(undefined1 *)(param_1 + 0x71) = 1;
          bVar7 = local_60 == &local_69;
          iVar4 = -1;
        }
        else {
          if (uVar3 != 3) {
            return -1;
          }
          iVar4 = (*DAT_1400399d0)((int)local_69,*(undefined8 *)(param_1 + 0x80));
          bVar7 = iVar4 == -1;
        }
        if (bVar7) {
          param_2 = iVar4;
        }
      }
    }
  }
  return param_2;
}


/* FUN_14001f9b0 */

uint FUN_14001f9b0(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulonglong *puVar5;
  
  puVar5 = *(ulonglong **)(param_1 + 0x38);
  uVar2 = *puVar5;
  if ((uVar2 == 0) || (uVar2 <= **(ulonglong **)(param_1 + 0x18))) {
LAB_14001f9e1:
    if (param_2 == 0xffffffff) {
      return 0xffffffff;
    }
    if (*(longlong *)(param_1 + 0x80) == 0) {
      return 0xffffffff;
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      iVar4 = (*DAT_1400399f8)(param_2 & 0xff,*(longlong *)(param_1 + 0x80));
      if (iVar4 != -1) {
        return param_2;
      }
      puVar5 = *(ulonglong **)(param_1 + 0x38);
      if (*puVar5 == param_1 + 0x70U) {
        return 0xffffffff;
      }
    }
    else if (uVar2 == param_1 + 0x70U) {
      return 0xffffffff;
    }
    puVar1 = (undefined1 *)(param_1 + 0x70);
    *puVar1 = (char)param_2;
    puVar3 = (undefined1 *)**(longlong **)(param_1 + 0x18);
    if (puVar3 != puVar1) {
      *(undefined1 **)(param_1 + 0x88) = puVar3;
      *(ulonglong *)(param_1 + 0x90) = (longlong)**(int **)(param_1 + 0x50) + *puVar5;
    }
    **(longlong **)(param_1 + 0x18) = (longlong)puVar1;
    **(longlong **)(param_1 + 0x38) = (longlong)puVar1;
    **(undefined4 **)(param_1 + 0x50) = 1;
  }
  else {
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    else if (param_2 != *(byte *)(uVar2 - 1)) goto LAB_14001f9e1;
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
  }
  return param_2;
}


/* FUN_14001faa0 */

uint FUN_14001faa0(longlong *param_1)

{
  uint uVar1;
  
  if ((*(byte **)param_1[7] != (byte *)0x0) && (0 < *(int *)param_1[10])) {
    return (uint)**(byte **)param_1[7];
  }
  uVar1 = (**(code **)(*param_1 + 0x38))();
  if (uVar1 != 0xffffffff) {
    (**(code **)(*param_1 + 0x20))(param_1,uVar1);
    return uVar1;
  }
  return 0xffffffff;
}


/* FUN_14001fb00 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_14001fb00(longlong param_1)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  char *******pppppppcVar8;
  ulonglong uVar9;
  uint uVar10;
  char *pcVar11;
  byte *local_88;
  longlong local_80;
  char *******local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (**(longlong **)(param_1 + 0x38) != 0) {
    iVar5 = **(int **)(param_1 + 0x50);
    if (0 < iVar5) {
      **(int **)(param_1 + 0x50) = iVar5 + -1;
      pbVar2 = (byte *)**(longlong **)(param_1 + 0x38);
      **(longlong **)(param_1 + 0x38) = (longlong)(pbVar2 + 1);
      return (uint)*pbVar2;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar10 = 0xffffffff;
  }
  else {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      iVar5 = *(int *)(param_1 + 0x90);
      lVar3 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar3;
      **(longlong **)(param_1 + 0x38) = lVar3;
      **(int **)(param_1 + 0x50) = iVar5 - (int)lVar3;
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    if (lVar3 == 0) {
      uVar6 = (*DAT_1400399c0)(*(undefined8 *)(param_1 + 0x80));
      uVar10 = uVar6 & 0xff;
      if (uVar6 == 0xffffffff) {
        uVar10 = 0xffffffff;
      }
    }
    else {
      local_78 = (char *******)0x0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0xf;
      iVar5 = (*DAT_1400399c0)(*(undefined8 *)(param_1 + 0x80));
      uVar10 = 0xffffffff;
      if (iVar5 != -1) {
LAB_14001fc0b:
        uVar7 = local_68;
        if (local_68 < local_60) {
          pppppppcVar8 = (char *******)&local_78;
          if (0xf < local_60) {
            pppppppcVar8 = local_78;
          }
          pcVar11 = (char *)((longlong)pppppppcVar8 + local_68);
          local_68 = local_68 + 1;
          *pcVar11 = (char)iVar5;
          *(char *)((longlong)pppppppcVar8 + uVar7 + 1) = '\0';
        }
        else {
          FUN_1400205f0(&local_78,1);
        }
        pppppppcVar8 = (char *******)&local_78;
        if (0xf < local_60) {
          pppppppcVar8 = local_78;
        }
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),param_1 + 0x74,pppppppcVar8,
                           (char *)((longlong)pppppppcVar8 + local_68),&local_80,&local_49,&local_48
                           ,&local_88);
        pcVar4 = DAT_1400399f8;
        if (uVar6 < 2) {
          if (local_88 == &local_49) goto code_r0x00014001fc9f;
          pppppppcVar8 = local_78;
          if (local_60 < 0x10) {
            pppppppcVar8 = (char *******)&local_78;
          }
          pcVar11 = (char *)((longlong)pppppppcVar8 + (local_68 - local_80));
          if (0 < (longlong)pcVar11) {
            pcVar11 = pcVar11 + 1;
            do {
              (*pcVar4)((int)pcVar11[local_80 + -2],*(undefined8 *)(param_1 + 0x80));
              pcVar11 = pcVar11 + -1;
            } while ((char *)0x1 < pcVar11);
          }
          uVar10 = (uint)local_49;
        }
        else if (uVar6 == 3) {
          if (local_60 < 0x10) {
            cVar1 = (char)local_78;
          }
          else {
            cVar1 = *(char *)local_78;
          }
          uVar10 = (uint)cVar1;
        }
      }
joined_r0x00014001fddf:
      if (0xf < local_60) {
        uVar7 = local_60 + 1;
        pppppppcVar8 = local_78;
        if (0xfff < uVar7) {
          pppppppcVar8 = (char *******)local_78[-1];
          if ((char *)0x1f < (char *)((longlong)local_78 + (-8 - (longlong)pppppppcVar8))) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar7 = local_60 + 0x28;
        }
        thunk_FUN_1400340c0(pppppppcVar8,uVar7);
      }
    }
  }
  return uVar10;
code_r0x00014001fc9f:
  pppppppcVar8 = (char *******)&local_78;
  if (0xf < local_60) {
    pppppppcVar8 = local_78;
  }
  uVar7 = local_80 - (longlong)pppppppcVar8;
  if (local_68 < (ulonglong)(local_80 - (longlong)pppppppcVar8)) {
    uVar7 = local_68;
  }
  uVar9 = local_68 - uVar7;
  FUN_140034090(pppppppcVar8,(char *)((longlong)pppppppcVar8 + uVar7),uVar9 + 1);
  local_68 = uVar9;
  iVar5 = (*DAT_1400399c0)(*(undefined8 *)(param_1 + 0x80));
  if (iVar5 == -1) goto joined_r0x00014001fddf;
  goto LAB_14001fc0b;
}


/* Unwind@14001fdf0 */

void Unwind_14001fdf0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x50);
  return;
}


/* FUN_14001fe30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14001fe30(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((longlong)param_3 < 1) {
    lVar3 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar3 = (*_DAT_140039798)(param_1,param_2,param_3);
      return lVar3;
    }
    if ((**(longlong **)(param_1 + 0x38) == 0) ||
       (uVar5 = (ulonglong)**(int **)(param_1 + 0x50), uVar5 == 0)) {
      lVar3 = *(longlong *)(param_1 + 0x80);
      uVar4 = param_3;
    }
    else {
      if (param_3 < uVar5) {
        uVar5 = param_3;
      }
      FUN_140034080(param_2,**(longlong **)(param_1 + 0x38),uVar5);
      param_2 = param_2 + uVar5;
      uVar4 = param_3 - uVar5;
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) - (int)uVar5;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + (longlong)(int)uVar5;
      lVar3 = *(longlong *)(param_1 + 0x80);
    }
    if (lVar3 != 0) {
      pcVar2 = DAT_1400399d8;
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        iVar1 = *(int *)(param_1 + 0x90);
        lVar3 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar3;
        **(longlong **)(param_1 + 0x38) = lVar3;
        **(int **)(param_1 + 0x50) = iVar1 - (int)lVar3;
        pcVar2 = DAT_1400399d8;
      }
      do {
        if (uVar4 < 0x1000) {
          if (uVar4 == 0) {
            uVar4 = 0;
          }
          else {
            lVar3 = (*DAT_1400399d8)(param_2,1,uVar4,*(undefined8 *)(param_1 + 0x80));
            uVar4 = uVar4 - lVar3;
          }
          break;
        }
        lVar3 = (*pcVar2)(param_2,1,0xfff,*(undefined8 *)(param_1 + 0x80));
        param_2 = param_2 + lVar3;
        uVar4 = uVar4 - lVar3;
      } while (lVar3 == 0xfff);
    }
    lVar3 = param_3 - uVar4;
  }
  return lVar3;
}


/* FUN_14001ff80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14001ff80(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar1 = (*_DAT_1400397a0)();
    return lVar1;
  }
  uVar2 = param_3;
  if ((**(longlong **)(param_1 + 0x40) != 0) &&
     (uVar3 = (ulonglong)**(int **)(param_1 + 0x58), 0 < (longlong)param_3 && 0 < (longlong)uVar3))
  {
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    FUN_140034080(**(longlong **)(param_1 + 0x40),param_2,uVar3);
    param_2 = param_2 + uVar3;
    **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) - (int)uVar3;
    **(longlong **)(param_1 + 0x40) = **(longlong **)(param_1 + 0x40) + uVar3;
    uVar2 = param_3 - uVar3;
  }
  if ((0 < (longlong)uVar2) && (*(longlong *)(param_1 + 0x80) != 0)) {
    lVar1 = (*DAT_1400399e8)(param_2,1,uVar2);
    uVar2 = uVar2 - lVar1;
  }
  return param_3 - uVar2;
}


/* FUN_140020050 */

undefined8 * FUN_140020050(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_70;
  undefined8 local_68 [4];
  undefined1 local_48 [8];
  
  plVar1 = *(longlong **)param_1[7];
  lVar2 = param_1[0xd];
  if (param_1[0x10] != 0) {
    if ((lVar2 != 0) && (*(char *)((longlong)param_1 + 0x71) == '\x01')) {
      iVar4 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
      if (iVar4 == -1) goto LAB_1400201a4;
      iVar4 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))
                        ((longlong *)param_1[0xd],(longlong)param_1 + 0x74,local_68,local_48,
                         &local_70);
      if (iVar4 == 3) {
        *(undefined1 *)((longlong)param_1 + 0x71) = 0;
      }
      else {
        if (iVar4 != 1) {
          if (iVar4 != 0) goto LAB_1400201a4;
          *(undefined1 *)((longlong)param_1 + 0x71) = 0;
        }
        lVar6 = local_70 - (longlong)local_68;
        if (((lVar6 != 0) &&
            (lVar5 = (*DAT_1400399e8)(local_68,1,lVar6,param_1[0x10]), lVar6 != lVar5)) ||
           (*(char *)((longlong)param_1 + 0x71) != '\0')) goto LAB_1400201a4;
      }
    }
    param_3 = param_3 - (ulonglong)((param_4 == 1 && lVar2 == 0) && plVar1 == param_1 + 0xe);
    if ((param_4 == 1) && (param_3 == 0)) {
      iVar4 = (*DAT_1400399c8)(param_1[0x10],local_68);
    }
    else {
      iVar4 = (*DAT_140039998)(param_1[0x10],param_3,param_4);
      if (iVar4 != 0) goto LAB_1400201a4;
      iVar4 = (*DAT_1400399c8)(param_1[0x10],local_68);
    }
    if (iVar4 == 0) {
      if (*(longlong **)param_1[3] == param_1 + 0xe) {
        lVar6 = param_1[0x12];
        lVar2 = param_1[0x11];
        *(longlong *)param_1[3] = lVar2;
        *(longlong *)param_1[7] = lVar2;
        *(int *)param_1[10] = (int)lVar6 - (int)lVar2;
      }
      uVar3 = *(undefined8 *)((longlong)param_1 + 0x74);
      *param_2 = local_68[0];
      param_2[1] = 0;
      param_2[2] = uVar3;
      return param_2;
    }
  }
LAB_1400201a4:
  *param_2 = 0xffffffffffffffff;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}


/* FUN_140020210 */

longlong * FUN_140020210(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [32];
  
  local_58 = param_3[1] + *param_3;
  if (param_1[0x10] != 0) {
    if ((param_1[0xd] != 0) && (*(char *)((longlong)param_1 + 0x71) == '\x01')) {
      iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
      if (iVar1 == -1) goto LAB_1400202ea;
      iVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))
                        ((longlong *)param_1[0xd],(longlong)param_1 + 0x74,local_48,
                         &stack0xffffffffffffffd8,&local_50);
      if (iVar1 == 3) {
        *(undefined1 *)((longlong)param_1 + 0x71) = 0;
      }
      else {
        if (iVar1 != 1) {
          if (iVar1 != 0) goto LAB_1400202ea;
          *(undefined1 *)((longlong)param_1 + 0x71) = 0;
        }
        lVar3 = local_50 - (longlong)local_48;
        if (((lVar3 != 0) &&
            (lVar2 = (*DAT_1400399e8)(local_48,1,lVar3,param_1[0x10]), lVar3 != lVar2)) ||
           (*(char *)((longlong)param_1 + 0x71) != '\0')) goto LAB_1400202ea;
      }
    }
    iVar1 = (*DAT_1400399e0)(param_1[0x10],&local_58);
    if (iVar1 == 0) {
      lVar3 = param_3[2];
      *(longlong *)((longlong)param_1 + 0x74) = lVar3;
      if (*(longlong **)param_1[3] == param_1 + 0xe) {
        lVar2 = param_1[0x12];
        lVar3 = param_1[0x11];
        *(longlong *)param_1[3] = lVar3;
        *(longlong *)param_1[7] = lVar3;
        *(int *)param_1[10] = (int)lVar2 - (int)lVar3;
        lVar3 = *(longlong *)((longlong)param_1 + 0x74);
      }
      *param_2 = local_58;
      param_2[1] = 0;
      param_2[2] = lVar3;
      return param_2;
    }
  }
LAB_1400202ea:
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}


/* FUN_140020360 */

longlong FUN_140020360(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     (iVar2 = (*DAT_1400399f0)(*(longlong *)(param_1 + 0x80),param_2,
                               (ulonglong)(param_2 == 0 && param_3 == 0) << 2), iVar2 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0x7c) = 1;
    *(undefined1 *)(param_1 + 0x71) = 0;
    *(longlong *)(param_1 + 0x18) = param_1 + 8;
    *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
    *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
    *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
    *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
    *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar1 != 0) {
      local_18 = 0;
      local_20 = 0;
      local_28 = 0;
      (*DAT_1400399a0)(lVar1,&local_18,&local_20,&local_28);
      *(undefined8 *)(param_1 + 0x18) = local_18;
      *(undefined8 *)(param_1 + 0x20) = local_18;
      *(undefined8 *)(param_1 + 0x38) = local_20;
      *(undefined8 *)(param_1 + 0x40) = local_20;
      *(undefined8 *)(param_1 + 0x50) = local_28;
      *(undefined8 *)(param_1 + 0x58) = local_28;
    }
    *(longlong *)(param_1 + 0x80) = lVar1;
    *(undefined8 *)(param_1 + 0x74) = DAT_14003f948;
    *(undefined8 *)(param_1 + 0x68) = 0;
    return param_1;
  }
  return 0;
}


/* FUN_140020470 */

int FUN_140020470(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    iVar2 = 0;
    if (iVar1 != -1) {
      iVar2 = (*DAT_1400399b8)(param_1[0x10]);
      iVar2 = iVar2 >> 0x1f;
    }
  }
  return iVar2;
}


/* FUN_1400204b0 */

void FUN_1400204b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1400208e0(param_2);
  cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  if (cVar1 == '\0') {
    *(longlong *)(param_1 + 0x18) = param_1 + 8;
    *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
    *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
    *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
    *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
    *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    plVar2 = (longlong *)0x0;
  }
  *(longlong **)(param_1 + 0x68) = plVar2;
  return;
}


/* FUN_140020530 */

undefined8 * FUN_140020530(undefined8 *param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((param_1[0x10] == 0) || (*(undefined8 **)param_1[3] != param_1 + 0xe)) {
    cVar1 = *(char *)((longlong)param_1 + 0x7c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x12);
    lVar3 = param_1[0x11];
    *(longlong *)param_1[3] = lVar3;
    *(longlong *)param_1[7] = lVar3;
    *(int *)param_1[10] = iVar2 - (int)lVar3;
    cVar1 = *(char *)((longlong)param_1 + 0x7c);
  }
  if (cVar1 == '\x01') {
    FUN_14001f660(param_1);
  }
  (*DAT_140039690)(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400340c0(param_1,0x98);
  }
  return param_1;
}


/* Unwind@1400205d0 */

void Unwind_1400205d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* FUN_1400205f0 */

ulonglong *
FUN_1400205f0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = param_1[2];
  uVar5 = 0x7fffffffffffffff;
  if ((uVar4 ^ 0x7fffffffffffffff) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  param_2 = param_2 + uVar4;
  uVar1 = param_1[3];
  if ((-1 < (longlong)param_2) && (uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff))) {
    uVar5 = (uVar1 >> 1) + uVar1;
    if (uVar5 < (param_2 | 0xf)) {
      uVar5 = param_2 | 0xf;
    }
    if (uVar5 == 0xffffffffffffffff) {
      uVar7 = 0;
      uVar5 = 0xffffffffffffffff;
      goto LAB_140020658;
    }
    if (uVar5 + 1 < 0x1000) {
      uVar7 = FUN_1400329d0();
      goto LAB_140020658;
    }
    if (0xffffffffffffffd8 < uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
  }
  lVar3 = FUN_1400329d0(uVar5 + 0x28);
  uVar7 = lVar3 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar7 - 8) = lVar3;
LAB_140020658:
  param_1[2] = param_2;
  param_1[3] = uVar5;
  if (uVar1 < 0x10) {
    FUN_140034080(uVar7,param_1,uVar4);
    *(undefined1 *)(uVar7 + uVar4) = param_4;
    *(undefined1 *)(uVar7 + 1 + uVar4) = 0;
  }
  else {
    uVar5 = *param_1;
    FUN_140034080(uVar7,uVar5,uVar4);
    *(undefined1 *)(uVar7 + uVar4) = param_4;
    *(undefined1 *)(uVar7 + 1 + uVar4) = 0;
    uVar4 = uVar1 + 1;
    uVar6 = uVar5;
    if (0xfff < uVar4) {
      uVar6 = *(ulonglong *)(uVar5 - 8);
      if (0x1f < (uVar5 - 8) - uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(uVar6,uVar4);
  }
  *param_1 = uVar7;
  return param_1;
}


/* FUN_140020740 */

void FUN_140020740(void)

{
  code *pcVar1;
  
  FUN_140033e10("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FUN_140020760 */

void FUN_140020760(void)

{
  undefined **local_18;
  char *local_10;
  undefined8 local_8;
  
  local_8 = 0;
  local_10 = "bad array new length";
  local_18 = std::bad_array_new_length::vftable;
                    /* WARNING: Subroutine does not return */
  FUN_140033ff0(&local_18,&DAT_14003b0a0);
}


/* FUN_140020860 */

char * FUN_140020860(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}


/* FUN_140020880 */

undefined8 * FUN_140020880(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  FUN_140034050(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400340c0(param_1,0x18);
  }
  return param_1;
}


/* FUN_1400208c0 */

void FUN_1400208c0(void)

{
  code *pcVar1;
  
  FUN_140033e20("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FUN_1400208e0 */

longlong * FUN_1400208e0(longlong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 local_4c [4];
  longlong *local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  (*DAT_140039680)(local_34,0);
  plVar3 = DAT_14003f950;
  puVar2 = DAT_140039730;
  local_48 = DAT_14003f950;
  uVar6 = *DAT_140039730;
  if (uVar6 == 0) {
    (*DAT_140039680)(local_4c,0);
    if (*puVar2 == 0) {
      iVar1 = *DAT_1400396c8;
      *DAT_1400396c8 = (int)((longlong)iVar1 + 1U);
      *puVar2 = (longlong)iVar1 + 1U;
    }
    (*DAT_140039698)(local_4c);
    uVar6 = *puVar2;
    lVar4 = *(longlong *)(param_1 + 8);
    if (uVar6 < *(ulonglong *)(lVar4 + 0x18)) goto LAB_140020967;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 8);
    if (uVar6 < *(ulonglong *)(lVar4 + 0x18)) {
LAB_140020967:
      plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + uVar6 * 8);
      if (plVar5 != (longlong *)0x0) goto LAB_1400209d2;
    }
  }
  if ((((*(char *)(lVar4 + 0x24) != '\x01') ||
       (lVar4 = FUN_140033dc0(), *(ulonglong *)(lVar4 + 0x18) <= uVar6)) ||
      (plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + uVar6 * 8), plVar5 == (longlong *)0x0))
     && (plVar5 = plVar3, plVar3 == (longlong *)0x0)) {
    lVar4 = (*DAT_1400396b8)(&local_48,param_1);
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_140020a70();
    }
    local_40 = local_48;
    FUN_140032d40();
    (**(code **)(*local_40 + 8))();
    DAT_14003f950 = local_48;
    plVar5 = local_48;
  }
LAB_1400209d2:
  (*DAT_140039698)(local_34);
  return plVar5;
}


/* Unwind@140020a00 */

void Unwind_140020a00(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x38))(*(undefined8 **)(param_2 + 0x38),1);
  }
  return;
}


/* Unwind@140020a40 */

void Unwind_140020a40(undefined8 param_1,longlong param_2)

{
  (*DAT_140039698)(param_2 + 0x44);
  return;
}


/* FUN_140020a70 */

void FUN_140020a70(void)

{
  undefined **local_18;
  char *local_10;
  undefined8 local_8;
  
  local_8 = 0;
  local_10 = "bad cast";
  local_18 = std::bad_cast::vftable;
                    /* WARNING: Subroutine does not return */
  FUN_140033ff0(&local_18,&DAT_14003b0e0);
}


/* FUN_140020b10 */

longlong FUN_140020b10(longlong param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined ***)(param_1 + -0xa8 + (longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  iVar2 = *(int *)(*(longlong *)(param_1 + -0xa8) + 4);
  *(int *)(param_1 + -0xac + (longlong)iVar2) = iVar2 + -0xa8;
  *(undefined ***)(param_1 + -0xa0) = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((*(longlong *)(param_1 + -0x20) == 0) || (**(longlong **)(param_1 + -0x88) != param_1 + -0x30)
     ) {
    cVar1 = *(char *)(param_1 + -0x24);
  }
  else {
    iVar2 = *(int *)(param_1 + -0x10);
    lVar3 = *(longlong *)(param_1 + -0x18);
    **(longlong **)(param_1 + -0x88) = lVar3;
    **(longlong **)(param_1 + -0x68) = lVar3;
    **(int **)(param_1 + -0x50) = iVar2 - (int)lVar3;
    cVar1 = *(char *)(param_1 + -0x24);
  }
  if (cVar1 == '\x01') {
    FUN_14001f660(param_1 + -0xa0);
  }
  (*DAT_140039690)(param_1 + -0xa0);
  (*DAT_1400396a0)(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400340c0(param_1 + -0xa8,0x108);
  }
  return param_1 + -0xa8;
}


/* Unwind@140020c00 */

void Unwind_140020c00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* FUN_140020c20 */

void FUN_140020c20(void)

{
  code *pcVar1;
  
  FUN_140033e10("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FUN_140020c40 */

void FUN_140020c40(ulonglong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140020c20();
    }
    lVar3 = param_2 * 0x20;
    if (param_2 < 0x80) {
      uVar2 = FUN_1400329d0(lVar3);
    }
    else {
      if (param_2 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_140020760();
      }
      lVar1 = FUN_1400329d0(lVar3 + 0x27);
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
    }
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = lVar3 + uVar2;
    uVar2 = FUN_140020d20(*param_3,*param_4,uVar2,param_1,param_1,uVar4);
    param_1[1] = uVar2;
  }
  return;
}


/* Unwind@140020cf0 */

void Unwind_140020cf0(undefined8 param_1,longlong param_2)

{
  FUN_140020e50(param_2 + 0x20);
  return;
}


/* FUN_140020d20 */

undefined8 * FUN_140020d20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  do {
    if (param_1 == param_2) {
      return param_3;
    }
    *param_3 = *param_1;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar2 = param_1[2] - param_1[1];
    if (uVar2 != 0) {
      if ((longlong)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140020c20();
      }
      if (uVar2 < 0x1000) {
        uVar3 = FUN_1400329d0(uVar2);
      }
      else {
        lVar1 = FUN_1400329d0(uVar2 + 0x27);
        uVar3 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar3 - 8) = lVar1;
      }
      param_3[1] = uVar3;
      param_3[2] = uVar3;
      param_3[3] = uVar2 + uVar3;
      lVar1 = param_1[2] - param_1[1];
      FUN_140034080(uVar3,param_1[1],lVar1);
      param_3[2] = lVar1 + uVar3;
    }
    param_3 = param_3 + 4;
    param_1 = param_1 + 4;
  } while( true );
}


/* Unwind@140020e10 */

void Unwind_140020e10(undefined8 param_1,longlong param_2)

{
  FUN_140020f40(param_2 + 0x20);
  return;
}


/* FUN_140020e50 */

void FUN_140020e50(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_1;
  if ((plVar1 != (longlong *)0x0) && (lVar6 = *plVar1, lVar6 != 0)) {
    lVar7 = plVar1[1];
    if (lVar6 != lVar7) {
      do {
        lVar2 = *(longlong *)(lVar6 + 8);
        if (lVar2 != 0) {
          uVar5 = *(longlong *)(lVar6 + 0x18) - lVar2;
          lVar4 = lVar2;
          if (0xfff < uVar5) {
            lVar4 = *(longlong *)(lVar2 + -8);
            if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_140020f31;
            uVar5 = uVar5 + 0x27;
          }
          thunk_FUN_1400340c0(lVar4,uVar5);
          *(undefined8 *)(lVar6 + 8) = 0;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
        }
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != lVar7);
      lVar6 = *plVar1;
    }
    uVar5 = plVar1[2] - lVar6;
    lVar7 = lVar6;
    if (0xfff < uVar5) {
      lVar7 = *(longlong *)(lVar6 + -8);
      if (0x1f < (ulonglong)((lVar6 + -8) - lVar7)) {
LAB_140020f31:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1400340c0(lVar7,uVar5);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}


/* FUN_140020f40 */

void FUN_140020f40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = *param_1;
  lVar1 = param_1[1];
  do {
    if (lVar6 == lVar1) {
      return;
    }
    lVar2 = *(longlong *)(lVar6 + 8);
    if (lVar2 != 0) {
      uVar5 = *(longlong *)(lVar6 + 0x18) - lVar2;
      lVar4 = lVar2;
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = uVar5 + 0x27;
      }
      thunk_FUN_1400340c0(lVar4,uVar5);
      *(undefined8 *)(lVar6 + 8) = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
    }
    lVar6 = lVar6 + 0x20;
  } while( true );
}


/* FUN_140020fc0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140020fc0(undefined8 *param_1)

{
  ulonglong uVar1;
  uint *******pppppppuVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint *******pppppppuVar15;
  int iVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint ******ppppppuVar21;
  undefined8 *puVar22;
  uint *******pppppppuVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint ******ppppppuVar26;
  undefined8 *******pppppppuVar27;
  undefined8 *******pppppppuVar28;
  undefined8 ******ppppppuVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 *puVar34;
  uint *******pppppppuVar35;
  char *pcVar36;
  longlong *plVar37;
  longlong *plVar38;
  char cVar39;
  undefined8 *******pppppppuVar40;
  char cVar41;
  longlong *plVar42;
  char cVar43;
  uint uVar44;
  byte bVar45;
  byte bVar46;
  int iVar47;
  uint *******unaff_R12;
  ulonglong uVar48;
  byte bVar49;
  uint *******unaff_R13;
  uint *******pppppppuVar50;
  undefined8 *******pppppppuVar51;
  uint *******pppppppuVar52;
  bool bVar53;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined1 local_588;
  undefined1 uStack_587;
  undefined1 uStack_586;
  undefined1 uStack_585;
  undefined2 uStack_584;
  undefined2 uStack_582;
  undefined1 uStack_580;
  undefined1 uStack_57f;
  undefined1 uStack_57e;
  undefined1 uStack_57d;
  undefined2 uStack_57c;
  undefined1 uStack_57a;
  undefined1 uStack_579;
  undefined1 uStack_578;
  undefined1 uStack_577;
  undefined1 uStack_576;
  undefined1 uStack_575;
  undefined2 uStack_574;
  undefined1 uStack_572;
  undefined1 uStack_571;
  undefined1 uStack_570;
  undefined1 uStack_56f;
  undefined4 uStack_56e;
  undefined1 uStack_56a;
  undefined1 uStack_569;
  undefined1 local_568;
  undefined5 uStack_567;
  undefined1 uStack_562;
  undefined1 uStack_561;
  undefined7 uStack_560;
  undefined8 *local_190;
  undefined8 *******local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  ulonglong local_170;
  undefined4 local_160;
  uint local_15c;
  undefined8 *******local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined8 *******local_138;
  longlong lStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  undefined8 *******local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  undefined8 local_f0;
  uint *******local_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 ******local_d8;
  undefined8 ******ppppppuStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  uint *******local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *******local_78;
  undefined8 *******pppppppuStack_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_118 = (undefined8 *******)0x0;
  local_190 = param_1;
  iVar16 = FUN_140033fc0(&local_118,L"Microsoft Platform Crypto Provider",0);
  if (iVar16 == 0) {
    local_158 = (undefined8 *******)((ulonglong)local_158 & 0xffffffff00000000);
    local_598 = (uint *******)CONCAT44(_UNK_1400356b4,_DAT_1400356b0);
    uStack_590 = (uint *******)CONCAT44(_UNK_1400356bc,_UNK_1400356b8);
    local_588 = 0x54;
    uStack_587 = 0x11;
    uStack_586 = 0x10;
    uStack_585 = 0x13;
    uStack_584 = 0;
    uStack_582 = 0;
    uStack_580 = 0;
    uStack_57f = 0;
    uStack_57e = 0;
    uStack_57d = 0;
    uStack_57c = 0;
    uStack_57a = 0;
    uStack_579 = 0;
    puVar22 = &local_598;
    do {
      puVar17 = (ulonglong *)FUN_140031690();
      uVar32 = *puVar17;
      puVar17 = (ulonglong *)FUN_1400316a0();
      uVar25 = *puVar17;
      uVar18 = 0;
      while( true ) {
        if (uVar18 < uVar32) {
          puVar22 = (undefined8 *)&stack0x00957977;
          goto LAB_1400213ba;
        }
        bVar46 = *(byte *)((longlong)&local_598 + uVar18);
        uVar33 = (ulonglong)bVar46;
        uVar48 = uVar25 + 1;
        cVar39 = (char)uVar18;
        if (uVar32 < uVar48) break;
        if (uVar32 != uVar48) {
          if (uVar32 != uVar25 + 2) {
            if (uVar32 != uVar25 + 4) {
              uVar3 = uVar25;
              if ((uVar32 != uVar25 + 6) && (uVar3 = uVar48, uVar32 != uVar25 + 3)) break;
              goto LAB_140021145;
            }
            bVar49 = (cVar39 + bVar46 + (bVar46 & cVar39 + 0x83U) * -2) - 0x12;
LAB_1400212ed:
            uVar18 = uVar18 + ~(ulonglong)bVar49;
            goto LAB_1400210d7;
          }
          bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 - 7U) * -2 + 0x2a;
          *(byte *)((longlong)&local_598 + uVar18) = bVar49;
          uVar18 = (uVar18 + ~uVar25) - (ulonglong)bVar49;
LAB_14002109a:
          *(byte *)((longlong)&local_598 + uVar18) =
               (char)uVar18 + bVar46 + (bVar46 & (char)uVar18 + 0x24U) * -2 + '(';
          lVar24 = uVar18 - uVar32;
          uVar32 = uVar32 + 1;
          uVar33 = (ulonglong)*(byte *)((longlong)&local_5a0 + lVar24 + 6);
          uVar18 = lVar24 - 2;
          uVar25 = uVar48;
        }
LAB_1400210cd:
        uVar18 = uVar18 + uVar25 + uVar33;
LAB_1400210d7:
        uVar18 = uVar18 + 1;
        if (0x1f < uVar18) {
LAB_1400213ba:
          iVar16 = FUN_140033fa0(local_118,puVar22,0,0);
          uVar31 = (uint)local_158;
          if (((uint)local_158 == 0 || iVar16 != 0) || (0x1000 < (uint)local_158)) {
            FUN_140033f90(local_118);
            goto LAB_14002140f;
          }
          uVar32 = (ulonglong)local_158 & 0xffffffff;
          if ((uint)local_158 == 0x1000) {
            ppppppuVar21 = (uint ******)FUN_1400329d0(0x1027);
            pppppppuVar35 = (uint *******)((longlong)ppppppuVar21 + 0x27U & 0xffffffffffffffe0);
            pppppppuVar35[-1] = ppppppuVar21;
          }
          else {
            pppppppuVar35 = (uint *******)FUN_1400329d0(uVar32);
          }
          local_a8 = pppppppuVar35;
          local_98 = (undefined1 *)((longlong)pppppppuVar35 + uVar32);
          FUN_1400340a0(pppppppuVar35,0,uVar32);
          pppppppuVar51 = local_158;
          local_598 = _DAT_1400356c0;
          uStack_590 = _UNK_1400356c8;
          local_588 = 0x7a;
          uStack_587 = 0x3d;
          uStack_586 = 0x32;
          uStack_585 = 0x33;
          uStack_584 = 0;
          uStack_582 = 0;
          uStack_580 = 0;
          uStack_57f = 0;
          uStack_57e = 0;
          uStack_57d = 0;
          uStack_57c = 0;
          uStack_57a = 0;
          uStack_579 = 0;
          uStack_578 = 0;
          uStack_577 = 0;
          uStack_576 = 0;
          uStack_575 = 0;
          uStack_574 = 0;
          uStack_572 = 0;
          uStack_571 = 0;
          uStack_570 = 0;
          uStack_56f = 0;
          unaff_R12 = (uint *******)&local_598;
          puStack_a0 = (undefined1 *)((longlong)pppppppuVar35 + uVar32);
          goto LAB_140021645;
        }
      }
      if (uVar18 < uVar25) {
        puVar22 = (undefined8 *)&stack0x01584f4c;
        goto LAB_1400213ba;
      }
      if (uVar32 == uVar48 && uVar25 + 8 <= uVar32) {
LAB_140021124:
        *(byte *)((longlong)&local_598 + uVar18) =
             bVar46 + cVar39 + (cVar39 + 0x4dU & bVar46) * -2 + '2';
        uVar3 = uVar48;
LAB_140021145:
        uVar25 = uVar3;
        uVar18 = uVar18 - 1;
        goto LAB_1400210d7;
      }
      uVar4 = uVar32 + uVar25;
      if (uVar4 <= uVar18) {
        uVar1 = uVar25 + 3;
        if (uVar1 < uVar32) {
          cVar41 = cVar39 + bVar46 + (bVar46 & cVar39 + 0x3fU) * -2 + -0x7a;
        }
        else {
          if (uVar32 == uVar48) goto LAB_140021124;
          uVar3 = uVar48;
          if ((uVar32 == uVar25 + 2) || (uVar3 = uVar25, uVar32 == uVar1)) goto LAB_140021145;
          cVar41 = cVar39 + bVar46 + (bVar46 & cVar39 + 0x2bU) * -2 + -2;
        }
        if (9 < uVar32) {
          bVar49 = cVar39 + bVar46 * '\x02' + (bVar46 & cVar39 + 0x78U) * -2 + 0x30;
LAB_1400212c7:
          *(byte *)((longlong)&local_598 + uVar18) =
               cVar39 + bVar46 + (bVar46 & cVar39 + 0xa3U) * -2 + bVar49 + '.';
          uVar32 = uVar4;
          goto LAB_1400212ed;
        }
        if (uVar48 < uVar32) {
          cVar41 = cVar39 + bVar46 + (bVar46 & cVar39 - 0x3aU) * -2 + '\\';
        }
        else {
          if (uVar32 == uVar48) goto LAB_1400210cd;
          if (uVar32 == uVar1) {
            bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 + 0x74U) * -2 + 0x48;
            uVar32 = uVar4;
            goto LAB_1400212ed;
          }
          if (uVar32 == uVar25 + 6) {
            bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 - 0x36U) * -2 + 0x44;
            goto LAB_1400212c7;
          }
          uVar3 = uVar25;
          if ((uVar32 == uVar25 + 4) || (uVar3 = uVar48, uVar32 == uVar25 + 2)) goto LAB_140021145;
          if (uVar32 == uVar25 + 9) goto LAB_140021124;
        }
        *(char *)((longlong)&local_598 + uVar18) = cVar41;
        goto LAB_1400210d7;
      }
      uVar3 = uVar48;
      if (uVar32 == uVar25 + 2) goto LAB_140021145;
      if (uVar32 == uVar25 + 4) {
        bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 - 0x2eU) * -2 + 0x14;
        uVar32 = uVar4;
        goto LAB_1400212ed;
      }
      uVar48 = uVar25;
      if (uVar32 == uVar25 + 6) goto LAB_14002109a;
    } while( true );
  }
LAB_14002140f:
  local_188 = (undefined8 *******)0x0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xf;
LAB_14002142f:
  uStack_578 = 0;
  uStack_577 = 0;
  uStack_576 = 0;
  uStack_575 = 0;
  uStack_574 = 0;
  uStack_572 = 0;
  uStack_571 = 0;
  uStack_570 = 0;
  uStack_56f = 0;
  uStack_56e = 0;
  uStack_56a = 0;
  uStack_569 = 0;
  local_588 = 0;
  uStack_587 = 0;
  uStack_586 = 0;
  uStack_585 = 0;
  uStack_584 = 0;
  uStack_582 = 0;
  uStack_580 = 0;
  uStack_57f = 0;
  uStack_57e = 0;
  uStack_57d = 0;
  uStack_57c = 0;
  uStack_57a = 0;
  uStack_579 = 0;
  local_598 = (uint *******)0x0;
  uStack_590 = (uint *******)0x0;
  local_e8 = (uint *******)0x0;
  puVar22 = &local_598;
  iVar16 = FUN_140033d60(0,puVar22,1,&local_e8);
  if (iVar16 == 0 && local_e8 != (uint *******)0x0) {
    local_138 = (undefined8 *******)0x0;
    iVar16 = FUN_140033d70(local_e8,5,&local_138);
    if (iVar16 == 0 && local_138 != (undefined8 *******)0x0) {
      local_c8 = (longlong *)0x0;
      local_158 = (undefined8 *******)0x0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0xf;
      if ((local_138[2] != (undefined8 ******)0x0) &&
         (iVar16 = FUN_140033d80(local_138[2],&local_c8), plVar38 = local_c8,
         local_c8 != (longlong *)0x0 && iVar16 != 0)) {
        local_98 = (undefined1 *)0x0;
        puStack_90 = (undefined1 *)0x0;
        local_a8 = (uint *******)0x0;
        puStack_a0 = (undefined1 *)0x0;
        puVar19 = (undefined1 *)FUN_140034260(local_c8);
        if ((longlong)puVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140020740();
        }
        puVar34 = (undefined1 *)0xf;
        unaff_R12 = (uint *******)&local_a8;
        if ((undefined1 *)0xf < puVar19) {
          puVar20 = (undefined1 *)((ulonglong)puVar19 | 0xf);
          puVar34 = (undefined1 *)0x16;
          if ((undefined1 *)0x16 < puVar20) {
            puVar34 = puVar20;
          }
          if (puVar20 < (undefined1 *)0xfff) {
            unaff_R12 = (uint *******)FUN_1400329d0(puVar34 + 1);
            local_a8 = unaff_R12;
          }
          else {
            ppppppuVar21 = (uint ******)FUN_1400329d0(puVar34 + 0x28);
            unaff_R12 = (uint *******)((longlong)ppppppuVar21 + 0x27U & 0xffffffffffffffe0);
            unaff_R12[-1] = ppppppuVar21;
            local_a8 = unaff_R12;
          }
        }
        local_98 = puVar19;
        puStack_90 = puVar34;
        FUN_140034080(unaff_R12,plVar38,puVar19);
        *(undefined1 *)((longlong)unaff_R12 + (longlong)puVar19) = 0;
        (*DAT_140039570)(local_c8);
        pppppppuVar35 = (uint *******)&local_a8;
        if ((undefined1 *)0xf < puStack_90) {
          pppppppuVar35 = local_a8;
        }
        FUN_1400256c0(&local_88,pppppppuVar35,local_98);
        FUN_1400278b0(&local_118,local_88,(longlong)uStack_80 - (longlong)local_88);
        local_148 = local_108;
        uStack_140 = uStack_100;
        local_158 = local_118;
        uStack_150 = uStack_110;
        local_108 = 0;
        uStack_100 = 0xf;
        local_118 = (undefined8 *******)((ulonglong)local_118 & 0xffffffffffffff00);
        if (local_88 != (uint *******)0x0) {
          uVar32 = (longlong)local_78 - (longlong)local_88;
          pppppppuVar35 = local_88;
          if (0xfff < uVar32) {
            pppppppuVar35 = (uint *******)local_88[-1];
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar35)))
            goto LAB_140024c66;
            uVar32 = uVar32 + 0x27;
          }
          thunk_FUN_1400340c0(pppppppuVar35,uVar32);
        }
        if ((undefined1 *)0xf < puStack_90) {
          puVar19 = puStack_90 + 1;
          pppppppuVar35 = local_a8;
          if ((undefined1 *)0xfff < puVar19) {
            pppppppuVar35 = (uint *******)local_a8[-1];
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)local_a8 + (-8 - (longlong)pppppppuVar35)))
            goto LAB_140024c66;
            puVar19 = puStack_90 + 0x28;
          }
          thunk_FUN_1400340c0(pppppppuVar35,puVar19);
        }
      }
      FUN_140033da0(local_138);
      FUN_140033d90(local_e8);
      goto LAB_140021ac7;
    }
    FUN_140033d90(local_e8);
  }
  uStack_150 = 0;
  local_158 = (undefined8 *******)0x0;
  local_148 = 0;
  uStack_140 = 0xf;
LAB_140021ac7:
  local_598 = _DAT_1400356d0;
  uStack_590 = _UNK_1400356d8;
  local_588 = (undefined1)_DAT_1400356e0;
  uStack_587 = (undefined1)((ulonglong)_DAT_1400356e0 >> 8);
  uStack_586 = (undefined1)((ulonglong)_DAT_1400356e0 >> 0x10);
  uStack_585 = (undefined1)((ulonglong)_DAT_1400356e0 >> 0x18);
  uStack_584 = (undefined2)((ulonglong)_DAT_1400356e0 >> 0x20);
  uStack_582 = (undefined2)((ulonglong)_DAT_1400356e0 >> 0x30);
  uStack_580 = (undefined1)_UNK_1400356e8;
  uStack_57f = (undefined1)((ulonglong)_UNK_1400356e8 >> 8);
  uStack_57e = (undefined1)((ulonglong)_UNK_1400356e8 >> 0x10);
  uStack_57d = (undefined1)((ulonglong)_UNK_1400356e8 >> 0x18);
  uStack_57c = (undefined2)((ulonglong)_UNK_1400356e8 >> 0x20);
  uStack_57a = (undefined1)((ulonglong)_UNK_1400356e8 >> 0x30);
  uStack_579 = (undefined1)((ulonglong)_UNK_1400356e8 >> 0x38);
  uStack_578 = 0x21;
  uStack_577 = 0xcd;
  uStack_576 = 0x1a;
  uStack_575 = 0xcb;
  uStack_574 = 0xc9c8;
  uStack_572 = 0;
  uStack_571 = 0;
  uStack_570 = 0;
  uStack_56f = 0;
  uStack_56e = 0;
  uStack_56a = 0;
  uStack_569 = 0;
  local_568 = 0;
  uStack_567 = 0;
  uStack_562 = 0;
  uStack_561 = 0;
  uStack_560 = 0;
  pppppppuVar35 = (uint *******)0x1b56c36133f652cc;
  do {
    puVar17 = (ulonglong *)FUN_140031690();
    uVar32 = *puVar17;
    puVar17 = (ulonglong *)FUN_1400316a0();
    uVar25 = *puVar17;
    uVar18 = 0;
    while( true ) {
      if (uVar18 < uVar32) {
        puVar22 = (undefined8 *)&stack0x017d25da;
        goto LAB_140021ec4;
      }
      bVar46 = *(byte *)((longlong)&local_598 + uVar18);
      uVar31 = (uint)bVar46;
      uVar48 = uVar25 + 1;
      cVar39 = (char)uVar18;
      iVar16 = (int)uVar18;
      uVar33 = uVar25;
      if (uVar32 < uVar48) break;
      if (uVar32 != uVar48) {
        if (uVar32 != uVar25 + 2) {
          if (uVar32 == uVar25 + 4) {
            bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 + 0x3eU) * -2 + 0x8c;
            uVar32 = uVar32 + uVar25;
          }
          else {
            if (uVar32 != uVar25 + 5) {
              if (uVar32 != uVar25 + 6) break;
              goto LAB_140021c0e;
            }
            cVar41 = -0x5e;
            iVar47 = -0x4d3d40ce;
LAB_140021d29:
            uVar31 = (iVar47 + iVar16 & uVar31) * 2;
            unaff_R12 = (uint *******)(ulonglong)uVar31;
            bVar49 = (((char)(iVar47 + iVar16) + bVar46) - (char)uVar31) + cVar41;
            *(byte *)((longlong)&local_598 + uVar18) =
                 bVar46 + cVar39 + (cVar39 + 10U & bVar46) * -2 + bVar49 + -0x3c;
            uVar32 = uVar32 + uVar25;
          }
          goto LAB_140021d66;
        }
LAB_140021b2c:
        bVar49 = bVar46 + cVar39 + (cVar39 - 2U & bVar46) * -2 + 0xc;
        *(byte *)((longlong)&local_598 + uVar18) = bVar49;
        uVar18 = (~uVar25 + uVar18) - (ulonglong)bVar49;
LAB_140021b63:
        *(byte *)((longlong)&local_598 + uVar18) =
             (char)uVar18 + bVar46 + (bVar46 & (char)uVar18 + 0x78U) * -2 + '0';
        lVar24 = uVar18 - uVar32;
        uVar32 = uVar32 + 1;
        bVar46 = *(byte *)((longlong)&local_5a0 + lVar24 + 6);
        uVar18 = lVar24 - 2;
        uVar25 = uVar48;
      }
LAB_140021b96:
      uVar48 = (ulonglong)bVar46;
      uVar18 = uVar18 + uVar25;
LAB_140021b9d:
      uVar18 = uVar18 + uVar48;
LAB_140021ba0:
      uVar18 = uVar18 + 1;
      if (0x3e < uVar18) {
LAB_140021ec4:
        lVar24 = (*DAT_1400394e0)(puVar22,0,3,0);
        if (lVar24 != -1) {
          ppppppuStack_e0 = (undefined8 ******)((ulonglong)ppppppuStack_e0 & 0xffffffff00000000);
          local_e8 = (uint *******)0x0;
          FUN_1400340a0(&local_598,0,0x400);
          local_138 = (undefined8 *******)((ulonglong)local_138 & 0xffffffff00000000);
          local_5a0 = 0;
          iVar16 = (*DAT_1400394f0)(lVar24,0x2d1400,&local_e8,0xc);
          (*DAT_1400394d8)(lVar24);
          pcVar7 = DAT_140039ac8;
          if (((iVar16 != 0) && (0x27 < (uint)local_138)) &&
             (uVar31 = CONCAT13(uStack_57d,CONCAT12(uStack_57e,CONCAT11(uStack_57f,uStack_580))),
             0xfffffc00 < uVar31 - 0x400)) {
            pcVar36 = (char *)((longlong)&local_598 + (ulonglong)uVar31);
            local_a8 = (uint *******)0x0;
            puStack_a0 = (undefined1 *)0x0;
            local_98 = (undefined1 *)0x0;
            puStack_90 = (undefined1 *)0xf;
            lVar24 = 0;
            cVar39 = *pcVar36;
            goto joined_r0x000140022919;
          }
        }
        local_118 = (undefined8 *******)0x0;
        uStack_110 = 0;
        local_108 = 0;
        uStack_100 = 0xf;
        goto LAB_140021fbb;
      }
    }
    if (uVar18 < uVar25) {
      puVar22 = (undefined8 *)&stack0x0146c860;
      goto LAB_140021ec4;
    }
    uVar3 = uVar25 + 5;
    unaff_R12 = (uint *******)(ulonglong)(uVar32 != uVar48 || uVar32 < uVar3);
    if (uVar32 == uVar48 && uVar32 >= uVar3) {
LAB_140021bed:
      *(byte *)((longlong)&local_598 + uVar18) =
           bVar46 + cVar39 + (cVar39 + 0x16U & bVar46) * -2 + '|';
      uVar33 = uVar48;
LAB_140021c0e:
      uVar25 = uVar33;
      uVar18 = uVar18 - 1;
      goto LAB_140021ba0;
    }
    if (uVar32 + uVar25 <= uVar18) {
      if (uVar25 + 6 < uVar32) {
        if (uVar25 + 0x20 < uVar32) {
          cVar43 = cVar39 + bVar46 + (bVar46 & cVar39 + 0x14U) * -2 + -0x78;
        }
        else {
          if (uVar32 == uVar48) goto LAB_140021b96;
          if (uVar32 == uVar25 + 2) goto LAB_140021b2c;
          uVar44 = (uVar31 & iVar16 + 0xbcf44612U) * 2;
          cVar43 = ((cVar39 + bVar46) - (char)uVar44) + -0x6c;
          if (uVar32 == uVar3) goto LAB_140021dc8;
LAB_140021e82:
          cVar41 = 'l';
          iVar47 = 0x33f652cc;
          if (uVar32 == uVar25 + 3) goto LAB_140021d29;
          unaff_R12 = pppppppuVar35;
          if ((uVar32 == uVar25 + 4) || (uVar33 = uVar48, uVar32 == uVar25 + 7)) goto LAB_140021c0e;
        }
        *(char *)((longlong)&local_598 + uVar18) = cVar43;
        goto LAB_140021ba0;
      }
      if (uVar32 != uVar48) {
        cVar41 = -0x2e;
        unaff_R12 = (uint *******)0x115832d23ea731e2;
        iVar47 = 0x3ea731e2;
        if (uVar32 == uVar25 + 2) goto LAB_140021d29;
        if (uVar32 == uVar3) {
          bVar49 = (cVar39 + bVar46 + (bVar46 & cVar39 - 0x2aU) * -2) - 4;
          uVar32 = uVar32 + uVar25;
        }
        else if (uVar32 == uVar25 + 3) {
          bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 - 0x36U) * -2 + 0x44;
        }
        else {
          uVar44 = (uVar31 & iVar16 + 0x70365d7aU) * 2;
          cVar43 = ((cVar39 + bVar46) - (char)uVar44) + '$';
          if (uVar32 != uVar3) goto LAB_140021e82;
LAB_140021dc8:
          unaff_R12 = (uint *******)(ulonglong)uVar44;
          bVar49 = (cVar39 + bVar46 + (bVar46 & cVar39 - 0x28U) * -2) - 0x10;
          uVar32 = uVar32 + uVar25;
        }
        goto LAB_140021d66;
      }
      goto LAB_140021bed;
    }
    uVar33 = uVar32;
    if ((uVar32 == uVar48) || (uVar33 = uVar25, uVar32 == uVar25 + 0x10)) goto LAB_140021c0e;
    if (uVar32 == uVar25 + 3) {
      bVar49 = (cVar39 + bVar46 + (bVar46 & cVar39 + 0x30U) * -2) - 0x20;
LAB_140021d66:
      uVar48 = ~(ulonglong)bVar49;
      goto LAB_140021b9d;
    }
    uVar48 = uVar25;
    if (uVar32 == uVar25 + 0x28) goto LAB_140021b63;
  } while( true );
LAB_140021645:
  puVar22 = (undefined8 *)FUN_140031690();
  unaff_R13 = (uint *******)*puVar22;
  puVar22 = (undefined8 *)FUN_1400316a0();
  pppppppuVar52 = (uint *******)*puVar22;
  pppppppuVar23 = (uint *******)0x0;
  while( true ) {
    if (pppppppuVar23 < unaff_R13) {
      unaff_R12 = (uint *******)&stack0x00824396;
      goto LAB_14002186f;
    }
    bVar46 = *(byte *)((longlong)&local_598 + (longlong)pppppppuVar23);
    pppppppuVar2 = (uint *******)((longlong)pppppppuVar52 + 1);
    cVar39 = (char)pppppppuVar23;
    if (unaff_R13 < pppppppuVar2) break;
    pppppppuVar50 = unaff_R13;
    if (unaff_R13 != pppppppuVar2) {
      if (unaff_R13 != (uint *******)((longlong)pppppppuVar52 + 2)) {
        if (unaff_R13 != (uint *******)((longlong)pppppppuVar52 + 3)) {
          pppppppuVar15 = pppppppuVar52;
          if (unaff_R13 != (uint *******)((longlong)pppppppuVar52 + 5)) break;
          goto LAB_14002173f;
        }
        bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 + 0x62U) * -2 + 0xb4;
        *(byte *)((longlong)&local_598 + (longlong)pppppppuVar23) = bVar49;
        pppppppuVar23 =
             (uint *******)
             ((longlong)pppppppuVar23 + (~(ulonglong)pppppppuVar52 - (ulonglong)bVar49));
        pppppppuVar52 = pppppppuVar2;
      }
      *(byte *)((longlong)&local_598 + (longlong)pppppppuVar23) =
           (char)pppppppuVar23 + bVar46 + (bVar46 & (char)pppppppuVar23 + 8U) * -2 + -0x30;
      pppppppuVar50 = (uint *******)((longlong)unaff_R13 + 1);
      bVar46 = *(byte *)((longlong)pppppppuVar23 + (longlong)&local_5a0 + (6 - (longlong)unaff_R13))
      ;
      pppppppuVar23 = (uint *******)((longlong)pppppppuVar23 + (-2 - (longlong)unaff_R13));
    }
    pppppppuVar23 =
         (uint *******)((undefined1 *)((longlong)pppppppuVar23 + (longlong)pppppppuVar52) + bVar46);
LAB_1400216d5:
    pppppppuVar23 = (uint *******)((longlong)pppppppuVar23 + 1);
    unaff_R13 = pppppppuVar50;
    if ((uint *******)0x29 < pppppppuVar23) {
LAB_14002186f:
      iVar16 = FUN_140033fa0(local_118,unaff_R12,pppppppuVar35,(ulonglong)pppppppuVar51 & 0xffffffff
                            );
      FUN_140033f90(local_118);
      if (iVar16 == 0) {
        FUN_1400256c0(&local_598,pppppppuVar35,(ulonglong)local_158 & 0xffffffff);
        FUN_1400278b0(&local_188,local_598,(longlong)uStack_590 - (longlong)local_598);
        if (local_598 != (uint *******)0x0) {
          uVar25 = CONCAT26(uStack_582,
                            CONCAT24(uStack_584,
                                     CONCAT13(uStack_585,
                                              CONCAT12(uStack_586,CONCAT11(uStack_587,local_588)))))
                   - (longlong)local_598;
          pppppppuVar52 = local_598;
          if (0xfff < uVar25) {
            pppppppuVar52 = (uint *******)local_598[-1];
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)local_598 + (-8 - (longlong)pppppppuVar52)))
            goto LAB_140024c66;
            uVar25 = uVar25 + 0x27;
          }
          thunk_FUN_1400340c0(pppppppuVar52,uVar25);
        }
      }
      else {
        local_188 = (undefined8 *******)0x0;
        uStack_180 = 0;
        local_178 = 0;
        local_170 = 0xf;
      }
      if (pppppppuVar35 == (uint *******)0x0) goto LAB_14002142f;
      pppppppuVar52 = pppppppuVar35;
      if (uVar31 == 0x1000) {
        pppppppuVar52 = (uint *******)pppppppuVar35[-1];
        if ((undefined1 *)0x1f <
            (undefined1 *)((longlong)pppppppuVar35 + (-8 - (longlong)pppppppuVar52)))
        goto LAB_140024c66;
        uVar32 = 0x1027;
      }
      thunk_FUN_1400340c0(pppppppuVar52,uVar32);
      goto LAB_14002142f;
    }
  }
  if (pppppppuVar23 < pppppppuVar52) {
    unaff_R12 = (uint *******)&stack0x0152e5f0;
    goto LAB_14002186f;
  }
  pppppppuVar15 = pppppppuVar2;
  if (pppppppuVar52 + 4 <= unaff_R13 && unaff_R13 == pppppppuVar2) {
LAB_14002171e:
    *(byte *)((longlong)&local_598 + (longlong)pppppppuVar23) =
         cVar39 + bVar46 + (bVar46 & cVar39 - 0x36U) * -2 + 'D';
    goto LAB_14002173f;
  }
  pppppppuVar50 = (uint *******)((longlong)pppppppuVar52 + (longlong)unaff_R13);
  if (pppppppuVar50 <= pppppppuVar23) {
    if ((uint *******)((longlong)pppppppuVar52 + 6) < unaff_R13) {
LAB_1400217b5:
      cVar41 = cVar39 + bVar46 + (bVar46 & cVar39 + 0x2cU) * -2 + -8;
    }
    else {
      if (unaff_R13 == pppppppuVar2) goto LAB_14002171e;
      if ((unaff_R13 == (uint *******)((longlong)pppppppuVar52 + 2)) ||
         (pppppppuVar15 = pppppppuVar52, unaff_R13 == (uint *******)((longlong)pppppppuVar52 + 3)))
      goto LAB_14002173f;
      cVar41 = cVar39 + bVar46 + (bVar46 & cVar39 + 0xa6U) * -2 + '\x1c';
      if (unaff_R13 == (uint *******)((longlong)pppppppuVar52 + 5)) {
        pppppppuVar23 =
             (uint *******)
             ((longlong)pppppppuVar23 +
             ((ulonglong)
              ((((int)pppppppuVar23 + 10U & (uint)bVar46) * 2 - ((uint)bVar46 + (int)pppppppuVar23))
              + 0x3b) | 0xffffffffffffff00));
        goto LAB_1400216d5;
      }
      if ((uint *******)((longlong)pppppppuVar52 + 5) < unaff_R13) goto LAB_1400217b5;
    }
    *(char *)((longlong)&local_598 + (longlong)pppppppuVar23) = cVar41;
    pppppppuVar50 = unaff_R13;
    goto LAB_1400216d5;
  }
  if (unaff_R13 == (uint *******)((longlong)pppppppuVar52 + 10)) goto LAB_14002171e;
  if ((unaff_R13 == (uint *******)((longlong)pppppppuVar52 + 3)) ||
     (pppppppuVar15 = pppppppuVar52, unaff_R13 == (uint *******)((longlong)pppppppuVar52 + 6))) {
LAB_14002173f:
    pppppppuVar52 = pppppppuVar15;
    pppppppuVar23 = (uint *******)((longlong)pppppppuVar23 + -1);
    pppppppuVar50 = unaff_R13;
    goto LAB_1400216d5;
  }
  goto LAB_140021645;
joined_r0x000140022919:
  if ((cVar39 == '\0') ||
     (0x3ff < (ulonglong)CONCAT13(uStack_57d,CONCAT12(uStack_57e,CONCAT11(uStack_57f,uStack_580))) +
              lVar24)) goto LAB_140022993;
  iVar16 = (*pcVar7)(cVar39);
  puVar19 = local_98;
  if (iVar16 == 0) {
    if (puStack_90 <= local_98) {
      FUN_1400205f0(&local_a8,1);
      goto LAB_14002292e;
    }
    local_98 = local_98 + 1;
    pppppppuVar35 = (uint *******)&local_a8;
    if ((undefined1 *)0xf < puStack_90) {
      pppppppuVar35 = local_a8;
    }
    *(char *)((longlong)pppppppuVar35 + (longlong)puVar19) = cVar39;
    ((undefined1 *)((longlong)pppppppuVar35 + 1))[(longlong)puVar19] = 0;
    cVar39 = pcVar36[lVar24 + 1];
  }
  else {
LAB_14002292e:
    cVar39 = pcVar36[lVar24 + 1];
  }
  lVar24 = lVar24 + 1;
  goto joined_r0x000140022919;
LAB_140022993:
  if (local_98 == (undefined1 *)0x0) {
    local_118 = (undefined8 *******)0x0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0xf;
  }
  else {
    pppppppuVar35 = local_a8;
    if (puStack_90 < (undefined1 *)0x10) {
      pppppppuVar35 = (uint *******)&local_a8;
    }
    FUN_1400256c0(&local_88,pppppppuVar35);
    FUN_1400278b0(&local_118,local_88,(longlong)uStack_80 - (longlong)local_88);
    if (local_88 != (uint *******)0x0) {
      uVar32 = (longlong)local_78 - (longlong)local_88;
      pppppppuVar35 = local_88;
      if (0xfff < uVar32) {
        pppppppuVar35 = (uint *******)local_88[-1];
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar35))
           ) goto LAB_140024c66;
        uVar32 = uVar32 + 0x27;
      }
      thunk_FUN_1400340c0(pppppppuVar35,uVar32);
    }
  }
  if ((undefined1 *)0xf < puStack_90) {
    puVar19 = puStack_90 + 1;
    pppppppuVar35 = local_a8;
    if ((undefined1 *)0xfff < puVar19) {
      pppppppuVar35 = (uint *******)local_a8[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_a8 + (-8 - (longlong)pppppppuVar35)))
      goto LAB_140024c66;
      puVar19 = puStack_90 + 0x28;
    }
    thunk_FUN_1400340c0(pppppppuVar35,puVar19);
  }
LAB_140021fbb:
  local_e8 = (uint *******)0x0;
  iVar16 = (*DAT_140039908)(1,&local_e8);
  if (iVar16 == 0 && local_e8 != (uint *******)0x0) {
    local_598 = (uint *******)0x0;
    uStack_590 = (uint *******)0x0;
    local_588 = 0;
    uStack_587 = 0;
    uStack_586 = 0;
    uStack_585 = 0;
    uStack_584 = 0;
    uStack_582 = 0;
    unaff_R12 = (uint *******)0x0;
    pppppppuVar23 = (uint *******)0x0;
    pppppppuVar35 = (uint *******)0x0;
    pppppppuVar52 = local_e8;
    for (uVar31 = 0; pppppppuVar2 = local_598, uVar31 < *(uint *)pppppppuVar52; uVar31 = uVar31 + 1)
    {
      uVar32 = (ulonglong)uVar31;
      lVar24 = uVar32 * 0x548;
      if ((5 < *(uint *)(pppppppuVar52 + uVar32 * 0xa9 + 0x85)) &&
         (((((char)*(uint *)((longlong)pppppppuVar52 + (uVar32 * 0x152 + 0x113) * 4) != '\0' ||
            (*(char *)((longlong)pppppppuVar52 + lVar24 + 0x44d) != '\0')) ||
           ((*(char *)((longlong)pppppppuVar52 + lVar24 + 0x44e) != '\0' ||
            (((*(char *)((longlong)pppppppuVar52 + lVar24 + 0x44f) != '\0' ||
              (*(char *)(pppppppuVar52 + uVar32 * 0xa9 + 0x8a) != '\0')) ||
             (*(char *)((longlong)pppppppuVar52 + lVar24 + 0x451) != '\0')))))) &&
          ((uVar44 = *(uint *)((longlong)pppppppuVar52 + (uVar32 * 0x152 + 0x11f) * 4),
           uVar44 == 0xe || (uVar44 == 9)))))) {
        ppppppuVar21 = pppppppuVar52[uVar32 * 0xa9 + 1];
        uVar6 = *(undefined2 *)(pppppppuVar52 + uVar32 * 0xa9 + 0x8a);
        uVar44 = *(uint *)((longlong)pppppppuVar52 + (uVar32 * 0x152 + 0x113) * 4);
        local_88 = (uint *******)CONCAT44(CONCAT22(local_88._6_2_,uVar6),uVar44);
        if (pppppppuVar23 == unaff_R12) {
          uVar48 = (longlong)unaff_R12 - (longlong)local_598;
          uVar18 = (longlong)uVar48 >> 4;
          uVar32 = uVar18 + 1;
          uVar25 = (uVar18 >> 1) + uVar18;
          if (uVar25 <= uVar32) {
            uVar25 = uVar32;
          }
          if (0xfffffffffffffff - (uVar18 >> 1) < uVar18) {
            uVar25 = 0xfffffffffffffff;
          }
          if (uVar25 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140020760();
          }
          if (uVar25 == 0) {
            pppppppuVar35 = (uint *******)0x0;
          }
          else if (uVar25 < 0x100) {
            pppppppuVar35 = (uint *******)FUN_1400329d0(uVar25 * 0x10);
          }
          else {
            if (0xffffffffffffffd < uVar25) {
                    /* WARNING: Subroutine does not return */
              FUN_140020760();
            }
            ppppppuVar26 = (uint ******)FUN_1400329d0(uVar25 * 0x10 + 0x27);
            pppppppuVar35 = (uint *******)((longlong)ppppppuVar26 + 0x27U & 0xffffffffffffffe0);
            pppppppuVar35[-1] = ppppppuVar26;
          }
          *(uint *******)((longlong)pppppppuVar35 + uVar48) = ppppppuVar21;
          *(undefined4 *)((longlong)pppppppuVar35 + uVar48 + 8) = (undefined4)local_88;
          *(undefined2 *)((longlong)pppppppuVar35 + uVar48 + 0xc) = local_88._4_2_;
          FUN_140034080(pppppppuVar35,pppppppuVar2,uVar48);
          unaff_R13 = pppppppuVar2;
          if (pppppppuVar2 != (uint *******)0x0) {
            if (0xfff < uVar48) {
              unaff_R13 = (uint *******)pppppppuVar2[-1];
              if ((undefined1 *)0x1f <
                  (undefined1 *)((longlong)pppppppuVar2 + (-8 - (longlong)unaff_R13)))
              goto LAB_140024c66;
              uVar48 = uVar48 + 0x27;
            }
            thunk_FUN_1400340c0(unaff_R13,uVar48);
          }
          pppppppuVar23 = pppppppuVar35 + uVar32 * 2;
          unaff_R12 = pppppppuVar35 + uVar25 * 2;
          local_588 = SUB81(unaff_R12,0);
          uStack_587 = (undefined1)((ulonglong)unaff_R12 >> 8);
          uStack_586 = (undefined1)((ulonglong)unaff_R12 >> 0x10);
          uStack_585 = (undefined1)((ulonglong)unaff_R12 >> 0x18);
          uStack_584 = (undefined2)((ulonglong)unaff_R12 >> 0x20);
          uStack_582 = (undefined2)((ulonglong)unaff_R12 >> 0x30);
          pppppppuVar52 = local_e8;
          local_598 = pppppppuVar35;
          uStack_590 = pppppppuVar23;
        }
        else {
          *pppppppuVar23 = ppppppuVar21;
          *(uint *)(pppppppuVar23 + 1) = uVar44;
          *(undefined2 *)((longlong)pppppppuVar23 + 0xc) = uVar6;
          pppppppuVar23 = pppppppuVar23 + 2;
          pppppppuVar52 = local_e8;
          uStack_590 = pppppppuVar23;
        }
      }
    }
    (*DAT_140039900)();
    if (pppppppuVar35 == pppppppuVar23) {
      local_a8 = (uint *******)0x0;
      puStack_a0 = (undefined1 *)0x0;
      local_98 = (undefined1 *)0x0;
      puStack_90 = (undefined1 *)0xf;
    }
    else {
      FUN_140025930(pppppppuVar35,pppppppuVar23,
                    (longlong)pppppppuVar23 - (longlong)pppppppuVar35 >> 4);
      FUN_1400256c0(&local_88,pppppppuVar35 + 1,6);
      FUN_1400278b0(&local_a8,local_88,(longlong)uStack_80 - (longlong)local_88);
      pppppppuVar35 = local_598;
      if (local_88 != (uint *******)0x0) {
        uVar32 = (longlong)local_78 - (longlong)local_88;
        pppppppuVar35 = local_88;
        if (0xfff < uVar32) {
          pppppppuVar35 = (uint *******)local_88[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar35)))
          goto LAB_140024c66;
          uVar32 = uVar32 + 0x27;
        }
        thunk_FUN_1400340c0(pppppppuVar35,uVar32);
        pppppppuVar35 = local_598;
      }
    }
    if (pppppppuVar35 != (uint *******)0x0) {
      uVar32 = CONCAT26(uStack_582,
                        CONCAT24(uStack_584,
                                 CONCAT13(uStack_585,
                                          CONCAT12(uStack_586,CONCAT11(uStack_587,local_588))))) -
               (longlong)pppppppuVar35;
      pppppppuVar52 = pppppppuVar35;
      if (0xfff < uVar32) {
        pppppppuVar52 = (uint *******)pppppppuVar35[-1];
        if ((undefined1 *)0x1f <
            (undefined1 *)((longlong)pppppppuVar35 + (-8 - (longlong)pppppppuVar52)))
        goto LAB_140024c66;
        uVar32 = uVar32 + 0x27;
      }
      thunk_FUN_1400340c0(pppppppuVar52,uVar32);
    }
    bVar53 = local_98 == (undefined1 *)0x0;
  }
  else {
    local_a8 = (uint *******)0x0;
    puStack_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    puStack_90 = (undefined1 *)0xf;
    bVar53 = true;
  }
  uVar31 = (local_178 != 0) + 2;
  if (local_148 == 0) {
    uVar31 = (uint)(local_178 != 0);
  }
  uVar44 = uVar31 + 4;
  if (local_108 == 0) {
    uVar44 = uVar31;
  }
  if (bVar53) {
    if (uVar44 != 0) goto LAB_140022361;
    uVar44 = 0;
  }
  else {
    uVar44 = uVar44 | 8;
LAB_140022361:
    iVar16 = 1;
    uVar31 = uVar44;
    do {
      iVar16 = iVar16 + -1;
      uVar31 = uVar31 - 1 & uVar31;
    } while (uVar31 != 0);
    if (iVar16 != 0) {
      local_c8 = (longlong *)0x0;
      plStack_c0 = (longlong *)0x0;
      local_b8 = (longlong *)0x0;
      local_15c = uVar44;
      if (local_178 != 0) {
        local_598 = (uint *******)CONCAT44(_UNK_1400356f4,_DAT_1400356f0);
        uStack_590 = (uint *******)CONCAT44(_UNK_1400356fc,_UNK_1400356f8);
        local_588 = 6;
        uStack_587 = 0x18;
        uStack_586 = 0xda;
        uStack_585 = 0;
        uStack_584 = 0;
        uStack_582 = 0;
        uStack_580 = 0;
        uStack_57f = 0;
        uStack_57e = 0;
        uStack_57d = 0;
        uStack_57c = 0;
        uStack_57a = 0;
        uStack_579 = 0;
        uStack_578 = 0;
        uStack_577 = 0;
        pppppppuVar51 = (undefined8 *******)&local_598;
LAB_1400223e8:
        puVar17 = (ulonglong *)FUN_140031690();
        uVar32 = *puVar17;
        puVar17 = (ulonglong *)FUN_1400316a0();
        uVar25 = *puVar17;
        uVar18 = 0;
        do {
          if (uVar18 < uVar32) {
            pppppppuVar51 = (undefined8 *******)&stack0x010cdfda;
            break;
          }
          bVar46 = *(byte *)((longlong)&local_598 + uVar18);
          uVar33 = (ulonglong)bVar46;
          uVar48 = uVar25 + 1;
          cVar39 = (char)uVar18;
          if (uVar32 < uVar48) {
            unaff_R12 = (uint *******)
                        (ulonglong)(byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0x7aU) * -2 + 0x24);
LAB_140022475:
            if (uVar18 < uVar25) {
              pppppppuVar51 = (undefined8 *******)&stack0x0162a060;
              break;
            }
            uVar3 = uVar25 + 2;
            if (uVar3 <= uVar32) {
              cVar43 = 'F';
              cVar41 = -10;
              if (uVar32 != uVar48) {
                if (uVar32 != uVar3) {
                  if (uVar32 == uVar25 + 3) {
                    unaff_R12 = (uint *******)
                                (ulonglong)
                                (byte)(cVar39 + bVar46 + (bVar46 & cVar39 - 0x2eU) * -2 + 0x14);
                    goto LAB_140022820;
                  }
                  goto LAB_1400224ad;
                }
                unaff_R12 = (uint *******)
                            (ulonglong)
                            (byte)((cVar39 + bVar46 + (bVar46 & cVar39 - 0x22U) * -2) - 0x34);
                uVar18 = uVar18 - 1;
                goto LAB_140022428;
              }
LAB_14002259f:
              unaff_R12 = (uint *******)
                          (ulonglong)
                          (byte)(cVar41 + cVar39 + bVar46 + (cVar41 + cVar39 & bVar46) * -2 + cVar43
                                );
              *(byte *)((longlong)&local_598 + uVar18) =
                   cVar39 + bVar46 + (cVar39 + 0x16U & bVar46) * -2 + '|';
              uVar18 = uVar18 - 1;
              uVar25 = uVar48;
              goto LAB_140022428;
            }
            unaff_R12 = (uint *******)
                        (ulonglong)(byte)((cVar39 + bVar46 + (bVar46 & cVar39 + 2U) * -2) - 0xc);
LAB_1400224ad:
            if (uVar18 < uVar25 + uVar32) {
              if (uVar32 != uVar48) goto LAB_140022892;
              unaff_R12 = (uint *******)
                          (ulonglong)(byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0x48U) * -2 + 0x50)
              ;
            }
            else {
              uVar4 = uVar25 + 3;
              if (uVar32 < uVar4) {
                unaff_R12 = (uint *******)
                            (ulonglong)
                            (byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0x7aU) * -2 + 0x24);
              }
              else {
                if (uVar32 == uVar48) {
                  unaff_R12 = (uint *******)
                              (ulonglong)
                              (byte)((cVar39 + bVar46 + (cVar39 + 4U & bVar46) * -2) - 0x18);
                  goto LAB_140022422;
                }
                if (uVar32 == uVar4) {
                  unaff_R12 = (uint *******)
                              (ulonglong)
                              (byte)(cVar39 + bVar46 + (cVar39 - 0x2cU & bVar46) * -2 + 8);
                  goto LAB_140022846;
                }
                if (uVar32 == uVar25 + 5) {
                  unaff_R12 = (uint *******)
                              (ulonglong)
                              (byte)(cVar39 + bVar46 + (cVar39 - 0x38U & bVar46) * -2 + 0x50);
                  goto LAB_140022820;
                }
              }
              if (uVar32 <= uVar25 + 4) {
                cVar43 = -0x2a;
                cVar41 = '\x06';
                if (uVar32 == uVar48) goto LAB_14002259f;
                if (uVar32 == uVar4) {
                  unaff_R12 = (uint *******)
                              (ulonglong)
                              (byte)(cVar39 + bVar46 + (cVar39 - 0x12U & bVar46) * -2 + 0x6c);
                  uVar18 = uVar18 - 1;
                }
                else {
                  if (uVar32 == uVar3) {
                    unaff_R12 = (uint *******)
                                (ulonglong)
                                (byte)(cVar39 + bVar46 + (cVar39 - 0x1eU & bVar46) * -2 + 0xb4);
                    goto LAB_140022820;
                  }
                  if (uVar32 == uVar25 + 4) {
                    bVar45 = (cVar39 + bVar46 + (cVar39 + 0xb2U & bVar46) * -2) - 0x2c;
                    uVar48 = uVar25;
                    goto LAB_140022559;
                  }
                  if (4 < uVar32) goto LAB_140022615;
                  *(char *)((longlong)&local_598 + uVar18) = (char)unaff_R12;
                }
                goto LAB_140022428;
              }
LAB_140022615:
              unaff_R12 = (uint *******)
                          (ulonglong)
                          (byte)(cVar39 + bVar46 * '\x02' + (cVar39 + 0x90U & bVar46) * -2 + 0xa0);
            }
LAB_140022820:
            *(byte *)((longlong)&local_598 + uVar18) =
                 cVar39 + bVar46 + (bVar46 & cVar39 + 10U) * -2 + (char)unaff_R12 + -0x3c;
LAB_140022846:
            uVar32 = uVar32 + uVar25;
            uVar33 = ~(ulonglong)unaff_R12;
            goto LAB_140022425;
          }
          if (uVar32 == uVar48) {
            unaff_R12 = (uint *******)
                        (ulonglong)(byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0x6eU) * -2 + 0x6c);
          }
          else {
            if (uVar32 != uVar25 + 2) {
              if (uVar32 != uVar25 + 3) {
                if (uVar32 != uVar25 + 6) {
                  if (uVar32 != uVar25 + 7) goto LAB_140022475;
                  unaff_R12 = (uint *******)
                              (ulonglong)
                              (byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0x26U) * -2 + 0x1c);
                  uVar18 = uVar18 - 1;
                  goto LAB_140022428;
                }
                unaff_R12 = (uint *******)
                            (ulonglong)
                            (byte)((cVar39 + bVar46 + (bVar46 & cVar39 + 0x32U) * -2) - 0x2c);
                goto LAB_140022820;
              }
              unaff_R12 = (uint *******)
                          (ulonglong)(byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0x3eU) * -2 + 0x8c)
              ;
              goto LAB_140022846;
            }
            bVar45 = (cVar39 + bVar46 + (cVar39 + 0x56U & bVar46) * -2) - 4;
            bVar49 = cVar39 + bVar46 + (cVar39 - 2U & bVar46) * -2 + 0xc;
            *(byte *)((longlong)&local_598 + uVar18) = bVar49;
            uVar18 = (~uVar25 + uVar18) - (ulonglong)bVar49;
LAB_140022559:
            unaff_R12 = (uint *******)(ulonglong)bVar45;
            *(byte *)((longlong)&local_598 + uVar18) =
                 (char)uVar18 + bVar46 + (bVar46 & (char)uVar18 + 0x78U) * -2 + '0';
            lVar24 = uVar18 - uVar32;
            uVar32 = uVar32 + 1;
            uVar33 = (ulonglong)*(byte *)((longlong)&local_5a0 + lVar24 + 6);
            uVar18 = lVar24 - 2;
            uVar25 = uVar48;
          }
LAB_140022422:
          uVar18 = uVar18 + uVar25;
LAB_140022425:
          uVar18 = uVar18 + uVar33;
LAB_140022428:
          uVar18 = uVar18 + 1;
        } while (uVar18 < 0x22);
        local_f0 = pppppppuVar51;
        uVar18 = FUN_140034260();
        uVar25 = local_170;
        uVar32 = local_178;
        pppppppuVar51 = local_188;
        pppppppuVar40 = (undefined8 *******)0x7fffffffffffffff;
        if ((local_178 ^ 0x7fffffffffffffff) < uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_140020740();
        }
        local_88 = (uint *******)0x0;
        uStack_80 = (uint ******)0x0;
        pppppppuVar28 = (undefined8 *******)(local_178 + uVar18);
        if (pppppppuVar28 < (undefined8 *******)0x10) {
          unaff_R13 = (uint *******)&local_88;
          pppppppuVar40 = (undefined8 *******)0xf;
        }
        else {
          if (-1 < (longlong)pppppppuVar28) {
            pppppppuVar27 = (undefined8 *******)((ulonglong)pppppppuVar28 | 0xf);
            pppppppuVar40 = (undefined8 *******)0x16;
            if ((undefined8 *******)0x16 < pppppppuVar27) {
              pppppppuVar40 = pppppppuVar27;
            }
            if (pppppppuVar27 < (undefined8 *******)0xfff) {
              unaff_R13 = (uint *******)FUN_1400329d0((undefined1 *)((longlong)pppppppuVar40 + 1));
              local_88 = unaff_R13;
              goto LAB_140022aa6;
            }
          }
          ppppppuVar21 = (uint ******)FUN_1400329d0(pppppppuVar40 + 5);
          unaff_R13 = (uint *******)((longlong)ppppppuVar21 + 0x27U & 0xffffffffffffffe0);
          unaff_R13[-1] = ppppppuVar21;
          local_88 = unaff_R13;
        }
LAB_140022aa6:
        pppppppuVar27 = &local_188;
        if (0xf < uVar25) {
          pppppppuVar27 = pppppppuVar51;
        }
        local_78 = pppppppuVar28;
        pppppppuStack_70 = pppppppuVar40;
        FUN_140034080(unaff_R13,local_f0,uVar18);
        unaff_R12 = (uint *******)(uVar18 + (longlong)unaff_R13);
        FUN_140034080(unaff_R12,pppppppuVar27,uVar32);
        *(undefined1 *)((longlong)unaff_R13 + (longlong)pppppppuVar28) = 0;
        if (plStack_c0 != local_b8) {
          plStack_c0[2] = 0;
          plStack_c0[3] = 0;
          *plStack_c0 = 0;
          plStack_c0[1] = 0;
          *(undefined4 *)plStack_c0 = (undefined4)local_88;
          *(undefined4 *)((longlong)plStack_c0 + 4) = local_88._4_4_;
          *(undefined4 *)(plStack_c0 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)plStack_c0 + 0xc) = uStack_80._4_4_;
          plStack_c0[2] = (longlong)local_78;
          plStack_c0[3] = (longlong)pppppppuStack_70;
          plStack_c0 = plStack_c0 + 4;
          goto LAB_140022b88;
        }
        FUN_1400260a0(&local_c8,plStack_c0,&local_88);
        if (pppppppuStack_70 < (undefined8 *******)0x10) goto LAB_140022b88;
        pppppppuVar51 = (undefined8 *******)((longlong)pppppppuStack_70 + 1);
        pppppppuVar35 = local_88;
        if ((undefined8 *******)0xfff < pppppppuVar51) {
          pppppppuVar35 = (uint *******)local_88[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar35)))
          goto LAB_140024c66;
          pppppppuVar51 = pppppppuStack_70 + 5;
        }
        thunk_FUN_1400340c0(pppppppuVar35,pppppppuVar51);
      }
LAB_140022b88:
      if (local_148 != 0) {
        pppppppuVar51 = (undefined8 *******)0x7fffffffffffffff;
        local_598 = _DAT_140035700;
        uStack_590 = _UNK_140035708;
        local_588 = 0xe9;
        uStack_587 = 0xf7;
        uStack_586 = 0xff;
        uStack_585 = 0xb3;
        uStack_584 = 0;
        uStack_582 = 0;
        uStack_580 = 0;
        uStack_57f = 0;
        uStack_57e = 0;
        uStack_57d = 0;
        uStack_57c = 0;
        uStack_57a = 0;
        uStack_579 = 0;
        uStack_578 = 0;
        uStack_577 = 0;
        uStack_576 = 0;
        uStack_575 = 0;
        uStack_574 = 0;
        uStack_572 = 0;
        puVar22 = &local_598;
LAB_140022bbf:
        puVar17 = (ulonglong *)FUN_140031690();
        uVar32 = *puVar17;
        puVar17 = (ulonglong *)FUN_1400316a0();
        uVar25 = *puVar17;
        uVar18 = 0;
        do {
          if (uVar18 < uVar32) {
            puVar22 = (undefined8 *)&stack0x014cfe46;
            break;
          }
          bVar46 = *(byte *)((longlong)&local_598 + uVar18);
          uVar33 = (ulonglong)bVar46;
          uVar48 = uVar25 + 1;
          cVar39 = (char)uVar18;
          if (uVar32 < uVar48) {
LAB_140022c76:
            if (uVar18 < uVar25) {
              puVar22 = (undefined8 *)&stack0x016e9530;
              break;
            }
            if (uVar32 < uVar25 + 8 || uVar32 != uVar48) {
              if (uVar25 + uVar32 <= uVar18) {
                if (uVar25 + uVar32 == 5) {
LAB_140022bd8:
                  bVar49 = (cVar39 + bVar46 + (bVar46 & cVar39 + 0x32U) * -2) - 0x2c;
                  *(byte *)((longlong)&local_598 + uVar18) = bVar49;
                  uVar18 = (~uVar25 + uVar18) - (ulonglong)bVar49;
                  uVar25 = uVar48;
                  goto LAB_140022c0f;
                }
                if (uVar32 == uVar48) goto LAB_140022c96;
                if (uVar32 == uVar25 + 3) goto LAB_140022e0d;
                if (uVar32 == uVar25 + 5) {
                  bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 + 0x46U) * -2 + 0x5c;
                  goto LAB_140022df5;
                }
                if (uVar32 == uVar25 + 6) goto LAB_140022bd8;
                if (uVar32 == uVar25 + 2) goto LAB_140022c0f;
                if (uVar32 == uVar25 + 4) goto LAB_140022e0d;
                if (3 < uVar25 || uVar32 == uVar25 + 9) goto LAB_140022c96;
                *(byte *)((longlong)&local_598 + uVar18) =
                     cVar39 + bVar46 + (bVar46 & cVar39 + 0x16U) * -2 + '|';
                goto LAB_140022c4d;
              }
              if (uVar32 != uVar25 + 3) {
                if (uVar32 == uVar25 + 0x20) {
                  bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 + 0x24U) * -2 + 0x28;
                  goto LAB_140022df2;
                }
                if (uVar32 == uVar25 + 6) {
LAB_140022c0f:
                  *(byte *)((longlong)&local_598 + uVar18) =
                       (char)uVar18 + bVar46 + (bVar46 & (char)uVar18 + 0x48U) * -2 + 'P';
                  lVar24 = uVar18 - uVar32;
                  uVar32 = uVar32 + 1;
                  uVar33 = (ulonglong)*(byte *)((longlong)&local_5a0 + lVar24 + 6);
                  uVar18 = lVar24 - 2;
                  goto LAB_140022c43;
                }
                if (uVar32 == uVar25 + 2) goto LAB_140022c43;
                goto LAB_140022bbf;
              }
            }
            else {
LAB_140022c96:
              *(byte *)((longlong)&local_598 + uVar18) =
                   cVar39 + bVar46 + (bVar46 & cVar39 - 0x26U) * -2 + -0x1c;
              uVar25 = uVar48;
            }
LAB_140022e0d:
            uVar18 = uVar18 - 1;
            goto LAB_140022c4d;
          }
          if (uVar32 == uVar48) {
LAB_140022c43:
            uVar18 = uVar18 + uVar25;
          }
          else {
            if (uVar32 == uVar25 + 2) goto LAB_140022bd8;
            if (uVar32 == uVar25 + 5) {
              bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 - 0xeU) * -2 + 0x54;
            }
            else {
              if (uVar32 != uVar25 + 3) {
                if (uVar32 == uVar25 + 4) goto LAB_140022e0d;
                if (uVar32 != uVar25 + 6) goto LAB_140022c76;
                goto LAB_140022c96;
              }
              bVar49 = cVar39 + bVar46 + (cVar39 + 0x1eU & bVar46) * -2 + 0x4c;
              *(byte *)((longlong)&local_598 + uVar18) =
                   cVar39 + bVar46 + (cVar39 + 6U & bVar46) * -2 + bVar49 + -0x24;
            }
LAB_140022df2:
            uVar32 = uVar32 + uVar25;
LAB_140022df5:
            uVar33 = ~(ulonglong)bVar49;
          }
          uVar18 = uVar18 + uVar33;
LAB_140022c4d:
          uVar18 = uVar18 + 1;
        } while (uVar18 < 0x27);
        uVar18 = FUN_140034260();
        uVar25 = uStack_140;
        uVar32 = local_148;
        pppppppuVar40 = local_158;
        if ((local_148 ^ 0x7fffffffffffffff) < uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_140020740();
        }
        local_88 = (uint *******)0x0;
        uStack_80 = (uint ******)0x0;
        pppppppuVar28 = (undefined8 *******)(local_148 + uVar18);
        if (pppppppuVar28 < (undefined8 *******)0x10) {
          unaff_R13 = (uint *******)&local_88;
          pppppppuStack_70 = (undefined8 *******)0xf;
        }
        else {
          if (-1 < (longlong)pppppppuVar28) {
            pppppppuVar27 = (undefined8 *******)((ulonglong)pppppppuVar28 | 0xf);
            pppppppuVar51 = (undefined8 *******)0x16;
            if ((undefined8 *******)0x16 < pppppppuVar27) {
              pppppppuVar51 = pppppppuVar27;
            }
            if (pppppppuVar27 < (undefined8 *******)0xfff) {
              local_f0 = pppppppuVar51;
              unaff_R13 = (uint *******)FUN_1400329d0((undefined1 *)((longlong)pppppppuVar51 + 1));
              pppppppuStack_70 = local_f0;
              local_88 = unaff_R13;
              goto LAB_140022f80;
            }
          }
          local_f0 = pppppppuVar51;
          ppppppuVar21 = (uint ******)FUN_1400329d0(pppppppuVar51 + 5);
          unaff_R13 = (uint *******)((longlong)ppppppuVar21 + 0x27U & 0xffffffffffffffe0);
          unaff_R13[-1] = ppppppuVar21;
          pppppppuStack_70 = local_f0;
          local_88 = unaff_R13;
        }
LAB_140022f80:
        pppppppuVar51 = &local_158;
        if (0xf < uVar25) {
          pppppppuVar51 = pppppppuVar40;
        }
        local_78 = pppppppuVar28;
        FUN_140034080(unaff_R13,puVar22,uVar18);
        unaff_R12 = (uint *******)(uVar18 + (longlong)unaff_R13);
        FUN_140034080(unaff_R12,pppppppuVar51,uVar32);
        *(undefined1 *)((longlong)unaff_R13 + (longlong)pppppppuVar28) = 0;
        if (plStack_c0 != local_b8) {
          plStack_c0[2] = 0;
          plStack_c0[3] = 0;
          *plStack_c0 = 0;
          plStack_c0[1] = 0;
          *(undefined4 *)plStack_c0 = (undefined4)local_88;
          *(undefined4 *)((longlong)plStack_c0 + 4) = local_88._4_4_;
          *(undefined4 *)(plStack_c0 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)plStack_c0 + 0xc) = uStack_80._4_4_;
          plStack_c0[2] = (longlong)local_78;
          plStack_c0[3] = (longlong)pppppppuStack_70;
          plStack_c0 = plStack_c0 + 4;
          goto LAB_140023057;
        }
        FUN_1400260a0(&local_c8,plStack_c0,&local_88);
        if (pppppppuStack_70 < (undefined8 *******)0x10) goto LAB_140023057;
        pppppppuVar51 = (undefined8 *******)((longlong)pppppppuStack_70 + 1);
        pppppppuVar35 = local_88;
        if ((undefined8 *******)0xfff < pppppppuVar51) {
          pppppppuVar35 = (uint *******)local_88[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar35)))
          goto LAB_140024c66;
          pppppppuVar51 = pppppppuStack_70 + 5;
        }
        thunk_FUN_1400340c0(pppppppuVar35,pppppppuVar51);
      }
LAB_140023057:
      if (local_108 != 0) {
        local_598 = _DAT_140035710;
        uStack_590 = _UNK_140035718;
        local_588 = 0xb5;
        uStack_587 = 99;
        uStack_586 = 0x5f;
        uStack_585 = 0x5d;
        uStack_584 = 0x6d55;
        uStack_582 = 0;
        uStack_580 = 0;
        uStack_57f = 0;
        uStack_57e = 0;
        uStack_57d = 0;
        uStack_57c = 0;
        uStack_57a = 0;
        uStack_579 = 0;
        uStack_578 = 0;
        uStack_577 = 0;
        uStack_576 = 0;
        uStack_575 = 0;
        uStack_574 = 0;
        uStack_572 = 0;
        uStack_571 = 0;
        uStack_570 = 0;
        uStack_56f = 0;
        uStack_56e = 0;
        uStack_56a = 0;
        puVar22 = &local_598;
        do {
          puVar17 = (ulonglong *)FUN_140031690();
          uVar32 = *puVar17;
          puVar17 = (ulonglong *)FUN_1400316a0();
          uVar18 = 0;
          uVar25 = *puVar17;
LAB_1400230c0:
          if (uVar18 < uVar32) {
            puVar22 = (undefined8 *)&stack0x00eba677;
            goto LAB_140023613;
          }
          bVar46 = *(byte *)((longlong)&local_598 + uVar18);
          uVar48 = uVar25 + 1;
          cVar39 = (char)uVar18;
          if (uVar48 <= uVar32) goto LAB_140023140;
          unaff_R13 = (uint *******)
                      (ulonglong)(byte)((cVar39 + bVar46 + (bVar46 & cVar39 + 0x2bU) * -2) - 2);
LAB_1400230fc:
          if (uVar18 < uVar25) {
            puVar22 = (undefined8 *)&stack0x0152fb4c;
            goto LAB_140023613;
          }
          if (uVar25 + 10 <= uVar32) {
            cVar43 = -0xb;
            cVar41 = -0x23;
            if (uVar32 != uVar48) goto LAB_1400231f0;
LAB_1400231bb:
            bVar49 = cVar41 + cVar39 + bVar46 + (cVar41 + cVar39 & bVar46) * -2 + cVar43;
            *(byte *)((longlong)&local_598 + uVar18) =
                 cVar39 + bVar46 + (cVar39 + 0x4dU & bVar46) * -2 + '2';
LAB_14002321e:
            unaff_R13 = (uint *******)(ulonglong)bVar49;
            uVar18 = uVar18 - 1;
            goto LAB_140023464;
          }
          unaff_R13 = (uint *******)
                      (ulonglong)(byte)((cVar39 + bVar46 + (bVar46 & cVar39 + 0x87U) * -2) - 0x2a);
LAB_1400231f0:
          uVar33 = uVar25 + uVar32;
          if (uVar33 <= uVar18) {
            if (uVar25 < uVar32) {
              if (uVar32 == uVar48) {
                unaff_R13 = (uint *******)
                            (ulonglong)
                            (byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0xeU) * -2 + 0xac);
                uVar48 = uVar25;
                goto LAB_14002345b;
              }
              if (uVar32 == uVar25 + 2) {
                unaff_R13 = (uint *******)
                            (ulonglong)
                            (byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0xbaU) * -2 + 0xa4);
                goto LAB_1400233f7;
              }
              if (uVar32 == uVar25 + 4) {
                unaff_R13 = (uint *******)
                            (ulonglong)
                            (byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0xbcU) * -2 + 0x98);
                goto LAB_140023294;
              }
              if (uVar32 == uVar25 + 6) {
                unaff_R13 = (uint *******)
                            (ulonglong)
                            (byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0x12U) * -2 + 0x94);
                uVar18 = uVar18 - 1;
                uVar48 = uVar25;
                goto LAB_140023464;
              }
            }
            else {
              unaff_R13 = (uint *******)
                          (ulonglong)(byte)((cVar39 + bVar46 + (bVar46 & cVar39 + 0x2bU) * -2) - 2);
            }
            if (uVar33 == 9) {
              unaff_R13 = (uint *******)
                          (ulonglong)(byte)(cVar39 + (cVar39 - 0x32U & bVar46) * -2 + 0x2c);
              goto LAB_1400233f7;
            }
            cVar43 = -0x13;
            cVar41 = -0x6b;
            if (uVar32 == uVar48) goto LAB_1400231bb;
            if (uVar32 == uVar25 + 3) {
              unaff_R13 = (uint *******)
                          (ulonglong)(byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0x97U) * -2 + 0x76)
              ;
LAB_140023294:
              *(byte *)((longlong)&local_598 + uVar18) =
                   cVar39 + bVar46 + (bVar46 & cVar39 + 0xa3U) * -2 + (char)unaff_R13 + '.';
              uVar32 = uVar25 + uVar32;
            }
            else if (uVar32 == uVar25 + 2) {
              unaff_R13 = (uint *******)
                          (ulonglong)(byte)(cVar39 + bVar46 + (cVar39 - 0x13U & bVar46) * -2 + 0x72)
              ;
              uVar32 = uVar33;
            }
            else {
              if (uVar32 != uVar25 + 5) {
                if (uVar32 == uVar25 + 7) {
                  unaff_R13 = (uint *******)
                              (ulonglong)
                              (byte)(cVar39 + bVar46 + (cVar39 + 0x45U & bVar46) * -2 + 0x62);
                  uVar48 = uVar25;
                  goto LAB_14002345b;
                }
                if (uVar32 < 0x10) {
                  if (uVar25 + 4 < uVar32) {
                    unaff_R13 = (uint *******)
                                (ulonglong)
                                (byte)(cVar39 + bVar46 + (cVar39 - 0x3aU & bVar46) * -2 + 0x5c);
                  }
                  *(char *)((longlong)&local_598 + uVar18) = (char)unaff_R13;
                  uVar48 = uVar25;
                  goto LAB_140023464;
                }
                unaff_R13 = (uint *******)
                            (ulonglong)
                            (byte)(cVar39 + bVar46 * '\x02' + (cVar39 + 0x78U & bVar46) * -2 + 0x30)
                ;
                goto LAB_140023294;
              }
              unaff_R13 = (uint *******)
                          (ulonglong)(byte)(cVar39 + bVar46 + (cVar39 + 0x43U & bVar46) * -2 + 0x6e)
              ;
            }
            uVar18 = uVar18 + ~(ulonglong)unaff_R13;
            uVar48 = uVar25;
            goto LAB_140023464;
          }
          if (uVar32 == uVar25 + 10) {
            bVar49 = cVar39 + bVar46 + (cVar39 - 0x30U & bVar46) * -2 + 0x20;
            goto LAB_14002321e;
          }
          if (uVar32 == uVar25 + 5) {
            unaff_R13 = (uint *******)
                        (ulonglong)(byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0x2aU) * -2 + 4);
            uVar48 = uVar25;
            goto LAB_14002345b;
          }
          unaff_R13 = (uint *******)
                      (ulonglong)(byte)((cVar39 + bVar46 + (bVar46 & cVar39 + 1U) * -2) - 6);
        } while( true );
      }
LAB_1400237a3:
      if (local_98 == (undefined1 *)0x0) {
LAB_140023cb0:
        FUN_1400263a0(local_c8,plStack_c0,(longlong)plStack_c0 - (longlong)local_c8 >> 5);
        local_160 = 0;
        FUN_140025570(&local_160,&DAT_140038946,local_15c);
        local_128 = 0;
        uStack_120 = 0;
        local_138 = (undefined8 *******)0x0;
        lStack_130 = 0;
        uVar32 = FUN_140034260(&local_160);
        if ((longlong)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140020740();
        }
        if (uVar32 < 0x10) {
          pppppppuVar51 = &local_138;
          uVar25 = 0xf;
        }
        else {
          uVar18 = uVar32 | 0xf;
          uVar25 = 0x16;
          if (0x16 < uVar18) {
            uVar25 = uVar18;
          }
          if (uVar18 < 0xfff) {
            pppppppuVar51 = (undefined8 *******)FUN_1400329d0(uVar25 + 1);
            local_138 = pppppppuVar51;
          }
          else {
            ppppppuVar29 = (undefined8 ******)FUN_1400329d0(uVar25 + 0x28);
            pppppppuVar51 =
                 (undefined8 *******)((longlong)ppppppuVar29 + 0x27U & 0xffffffffffffffe0);
            pppppppuVar51[-1] = ppppppuVar29;
            local_138 = pppppppuVar51;
          }
        }
        local_128 = uVar32;
        uStack_120 = uVar25;
        FUN_140034080(pppppppuVar51,&local_160,uVar32);
        *(undefined1 *)((longlong)pppppppuVar51 + uVar32) = 0;
        local_598 = _DAT_140035730;
        uStack_590 = _UNK_140035738;
        local_588 = (undefined1)_DAT_140035740;
        uStack_587 = (undefined1)((ulonglong)_DAT_140035740 >> 8);
        uStack_586 = (undefined1)((ulonglong)_DAT_140035740 >> 0x10);
        uStack_585 = (undefined1)((ulonglong)_DAT_140035740 >> 0x18);
        uStack_584 = (undefined2)((ulonglong)_DAT_140035740 >> 0x20);
        uStack_582 = (undefined2)((ulonglong)_DAT_140035740 >> 0x30);
        uStack_580 = (undefined1)_UNK_140035748;
        uStack_57f = (undefined1)((ulonglong)_UNK_140035748 >> 8);
        uStack_57e = (undefined1)((ulonglong)_UNK_140035748 >> 0x10);
        uStack_57d = (undefined1)((ulonglong)_UNK_140035748 >> 0x18);
        uStack_57c = (undefined2)((ulonglong)_UNK_140035748 >> 0x20);
        uStack_57a = (undefined1)((ulonglong)_UNK_140035748 >> 0x30);
        uStack_579 = (undefined1)((ulonglong)_UNK_140035748 >> 0x38);
        uStack_578 = 0x66;
        uStack_577 = 0;
        uStack_576 = 0;
        uStack_575 = 0;
        uStack_574 = 0;
        uStack_572 = 0;
        uStack_571 = 0;
        uStack_570 = 0;
        uStack_56f = 0;
        uStack_56e = 0;
        uStack_56a = 0;
        uStack_569 = 0;
        local_568 = 0;
        uStack_567 = 0;
        uStack_562 = 0;
        uStack_561 = 0;
        pppppppuVar51 = (undefined8 *******)&local_598;
LAB_140023dcb:
        puVar17 = (ulonglong *)FUN_140031690();
        uVar32 = *puVar17;
        puVar17 = (ulonglong *)FUN_1400316a0();
        uVar25 = *puVar17;
        uVar18 = 0;
        do {
          lVar24 = uVar18 - uVar32;
          if (uVar18 < uVar32) {
            pppppppuVar51 = (undefined8 *******)&stack0x00da0ef7;
            goto LAB_140024038;
          }
          bVar46 = *(byte *)((longlong)&local_598 + uVar18);
          uVar48 = uVar25 + 1;
          cVar39 = (char)uVar18;
          if (uVar32 < uVar48) {
LAB_140023e4a:
            if (uVar18 < uVar25) {
              pppppppuVar51 = (undefined8 *******)&stack0x0162c94c;
              goto LAB_140024038;
            }
            uVar33 = uVar48;
            if (uVar18 < uVar25 + uVar32) {
              if (uVar32 == uVar25 + 0x2a) {
LAB_140023f66:
                *(byte *)((longlong)&local_598 + uVar18) =
                     cVar39 + bVar46 + (bVar46 & cVar39 - 0x33U) * -2 + '2';
                uVar33 = uVar48;
              }
              else if (uVar32 != uVar25 + 0x20) {
                if (uVar32 == uVar25 + 3) {
                  bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 - 0x2eU) * -2 + 0x14;
                  uVar32 = uVar25 + uVar32;
                  goto LAB_140023f55;
                }
                goto LAB_140023dcb;
              }
LAB_140023f87:
              uVar25 = uVar33;
              uVar18 = uVar18 - 1;
              goto LAB_140023e1e;
            }
            if (uVar25 + 9 < uVar32) {
LAB_140023f09:
              bVar49 = cVar39 + bVar46 * '\x02' + (bVar46 & cVar39 + 0x78U) * -2 + 0x30;
              goto LAB_140023f2f;
            }
            if (uVar32 == uVar48) goto LAB_140023f66;
            if ((uVar32 == uVar25 + 2) || (uVar33 = uVar25, uVar32 == uVar25 + 3))
            goto LAB_140023f87;
            if (uVar32 == uVar25 + 4) {
              bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 - 0x3dU) * -2 + 0x6e;
              goto LAB_140023f55;
            }
            if (uVar32 == uVar25 + 6) goto LAB_140023de1;
            if (1 < uVar32) goto LAB_140023f09;
            if (5 < uVar25) goto LAB_140023f66;
            *(byte *)((longlong)&local_598 + uVar18) =
                 cVar39 + bVar46 + (bVar46 & cVar39 + 0xabU) * -2 + -2;
          }
          else {
            if (uVar32 == uVar48) {
LAB_140023e14:
              uVar48 = (ulonglong)bVar46;
              uVar18 = uVar18 + uVar25;
            }
            else {
              if (uVar32 == uVar25 + 2) {
LAB_140023de1:
                *(byte *)((longlong)&local_598 + uVar18) =
                     cVar39 + bVar46 + (bVar46 & cVar39 + 0x24U) * -2 + '(';
                uVar32 = uVar32 + 1;
                bVar46 = *(byte *)((longlong)&local_5a0 + lVar24 + 6);
                uVar18 = lVar24 - 2;
                goto LAB_140023e14;
              }
              if (uVar32 != uVar25 + 3) {
                uVar33 = uVar25;
                if (uVar32 != uVar25 + 4) goto LAB_140023e4a;
                goto LAB_140023f87;
              }
              bVar49 = (cVar39 + bVar46 + (bVar46 & cVar39 + 0xafU) * -2) - 0x1a;
LAB_140023f2f:
              uVar32 = uVar25 + uVar32;
              *(byte *)((longlong)&local_598 + uVar18) =
                   cVar39 + bVar46 + (bVar46 & cVar39 + 0x23U) * -2 + bVar49 + '.';
LAB_140023f55:
              uVar48 = ~(ulonglong)bVar49;
            }
            uVar18 = uVar18 + uVar48;
          }
LAB_140023e1e:
          uVar18 = uVar18 + 1;
          if (0x37 < uVar18) {
LAB_140024038:
            uVar32 = FUN_140034260(pppppppuVar51);
            if (uStack_120 - local_128 < uVar32) {
              pppppppuVar40 = (undefined8 *******)FUN_140027590(&local_138,uVar32,local_128,0);
            }
            else {
              pppppppuVar40 = &local_138;
              pppppppuVar28 = local_138;
              if (uStack_120 < 0x10) {
                pppppppuVar28 = pppppppuVar40;
              }
              uVar25 = uVar32;
              if ((pppppppuVar51 <= (undefined8 *******)((longlong)pppppppuVar28 + local_128) &&
                   pppppppuVar28 < (undefined8 *******)((longlong)pppppppuVar51 + uVar32)) &&
                 (uVar25 = (longlong)pppppppuVar28 - (longlong)pppppppuVar51,
                 pppppppuVar28 < pppppppuVar51 || uVar25 == 0)) {
                uVar25 = 0;
              }
              lVar24 = local_128 + 1;
              local_128 = local_128 + uVar32;
              FUN_140034090((undefined1 *)((longlong)pppppppuVar28 + uVar32),pppppppuVar28,lVar24);
              FUN_140034080(pppppppuVar28,pppppppuVar51,uVar25);
              unaff_R12 = (uint *******)((longlong)pppppppuVar28 + uVar25);
              FUN_140034080(unaff_R12,
                            (undefined1 *)((longlong)((longlong)pppppppuVar51 + uVar32) + uVar25),
                            uVar32 - uVar25);
            }
            local_d8 = pppppppuVar40[2];
            ppppppuStack_d0 = pppppppuVar40[3];
            local_e8 = (uint *******)*pppppppuVar40;
            ppppppuStack_e0 = pppppppuVar40[1];
            pppppppuVar40[2] = (undefined8 ******)0x0;
            pppppppuVar40[3] = (undefined8 ******)0xf;
            *(undefined1 *)pppppppuVar40 = 0;
            ppppppuVar29 = local_d8;
            if (ppppppuStack_d0 == local_d8) {
              pppppppuVar35 = (uint *******)FUN_140027740(&local_e8,1);
            }
            else {
              local_d8 = (undefined8 ******)((longlong)local_d8 + 1);
              pppppppuVar35 = (uint *******)&local_e8;
              if ((undefined8 ******)0xf < ppppppuStack_d0) {
                pppppppuVar35 = local_e8;
              }
              *(undefined2 *)((longlong)pppppppuVar35 + (longlong)ppppppuVar29) = 0x3b;
              pppppppuVar35 = (uint *******)&local_e8;
            }
            local_88 = (uint *******)*pppppppuVar35;
            uStack_80 = pppppppuVar35[1];
            local_78 = (undefined8 *******)pppppppuVar35[2];
            pppppppuStack_70 = (undefined8 *******)pppppppuVar35[3];
            pppppppuVar35[2] = (uint ******)0x0;
            pppppppuVar35[3] = (uint ******)0xf;
            *(undefined1 *)pppppppuVar35 = 0;
            if ((undefined8 ******)0xf < ppppppuStack_d0) {
              ppppppuVar29 = (undefined8 ******)((longlong)ppppppuStack_d0 + 1);
              pppppppuVar35 = local_e8;
              if ((undefined8 ******)0xfff < ppppppuVar29) {
                pppppppuVar35 = (uint *******)local_e8[-1];
                if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppppuVar35)))
                goto LAB_140024c66;
                ppppppuVar29 = ppppppuStack_d0 + 5;
              }
              thunk_FUN_1400340c0(pppppppuVar35,ppppppuVar29);
            }
            local_d8 = (undefined8 ******)0x0;
            ppppppuStack_d0 = (undefined8 ******)0xf;
            local_e8 = (uint *******)((ulonglong)local_e8 & 0xffffffffffffff00);
            if (0xf < uStack_120) {
              uVar32 = uStack_120 + 1;
              pppppppuVar51 = local_138;
              if (0xfff < uVar32) {
                pppppppuVar51 = (undefined8 *******)local_138[-1];
                if ((undefined1 *)0x1f <
                    (undefined1 *)((longlong)local_138 + (-8 - (longlong)pppppppuVar51)))
                goto LAB_140024c66;
                uVar32 = uStack_120 + 0x28;
              }
              thunk_FUN_1400340c0(pppppppuVar51,uVar32);
            }
            plVar37 = plStack_c0;
            plVar38 = local_c8;
            goto joined_r0x00014002426d;
          }
        } while( true );
      }
      local_598 = _DAT_140035720;
      uStack_590 = _UNK_140035728;
      local_588 = 0x56;
      uStack_587 = 0;
      uStack_586 = 0;
      uStack_585 = 0;
      uStack_584 = 0;
      uStack_582 = 0;
      uStack_580 = 0;
      uStack_57f = 0;
      uStack_57e = 0;
      uStack_57d = 0;
      uStack_57c = 0;
      uStack_57a = 0;
      uStack_579 = 0;
      uStack_578 = 0;
      uStack_577 = 0;
      uStack_576 = 0;
      uStack_575 = 0;
      uStack_574 = 0;
      uStack_572 = 0;
      uStack_571 = 0;
      uStack_570 = 0;
      uStack_56f = 0;
      uStack_56e = 0;
      pppppppuVar51 = (undefined8 *******)&local_598;
LAB_1400237cf:
      puVar17 = (ulonglong *)FUN_140031690();
      uVar32 = *puVar17;
      puVar17 = (ulonglong *)FUN_1400316a0();
      uVar25 = *puVar17;
      uVar18 = 0;
LAB_14002386c:
      if (uVar18 < uVar32) {
        pppppppuVar51 = (undefined8 *******)&stack0x00cf5425;
        goto LAB_140023b24;
      }
      bVar46 = *(byte *)((longlong)&local_598 + uVar18);
      uVar48 = uVar25 + 1;
      cVar39 = (char)uVar18;
      if (uVar32 < uVar48) {
LAB_140023888:
        if (uVar18 < uVar25) {
          pppppppuVar51 = (undefined8 *******)&stack0x015644d4;
          goto LAB_140023b24;
        }
        uVar33 = uVar48;
        if (uVar32 < uVar25 + 0x28 || uVar32 != uVar48) {
          uVar3 = uVar25 + uVar32;
          if (uVar18 < uVar3) {
            if (uVar32 == uVar25 + 6) goto LAB_1400238ac;
            if ((uVar32 == uVar25 + 0x10) || (uVar33 = uVar25, uVar32 == uVar25 + 5))
            goto LAB_1400238cd;
            if (uVar32 == uVar25 + 10) {
              bVar49 = (cVar39 + bVar46 + (bVar46 & cVar39 + 0xb4U) * -2) - 0x38;
              goto LAB_1400239bd;
            }
            if (uVar32 != uVar25 + 4) {
              if (uVar32 == uVar25 + 9) {
                bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 - 8U) * -2 + 0x30;
                goto LAB_1400239e3;
              }
              if (uVar32 == uVar25 + 3) goto LAB_1400237e8;
              if (uVar32 == uVar25 + 2) goto LAB_140023855;
              goto LAB_1400237cf;
            }
            bVar49 = (cVar39 + bVar46 + (bVar46 & cVar39 + 0x56U) * -2) - 4;
            uVar32 = uVar3;
          }
          else {
            if (uVar32 <= uVar25 + 10) {
              if (uVar32 == uVar48) goto LAB_1400238ac;
              if (uVar32 == uVar25 + 2) goto LAB_1400238cd;
              if (uVar32 == uVar25 + 3) {
                bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 + 0x77U) * -2 + 0x36;
                uVar32 = uVar3;
                goto LAB_1400239e3;
              }
              if (uVar32 == uVar25 + 6) goto LAB_140023822;
              if (uVar32 == uVar25 + 7) goto LAB_140023855;
              if (uVar32 < 4) {
                *(byte *)((longlong)&local_598 + uVar18) =
                     cVar39 + bVar46 + (bVar46 & cVar39 + 0x51U) * -2 + '\x1a';
                goto LAB_14002385f;
              }
            }
            bVar49 = cVar39 + bVar46 * '\x02' + (bVar46 & cVar39 - 0x18U) * -2 + 0x90;
LAB_1400239bd:
            *(byte *)((longlong)&local_598 + uVar18) =
                 cVar39 + bVar46 + (bVar46 & cVar39 + 0x39U) * -2 + bVar49 + -0x56;
            uVar32 = uVar3;
          }
LAB_1400239e3:
          uVar18 = uVar18 + ~(ulonglong)bVar49;
          goto LAB_14002385f;
        }
LAB_1400238ac:
        *(byte *)((longlong)&local_598 + uVar18) =
             cVar39 + bVar46 + (bVar46 & cVar39 + 0x97U) * -2 + 'v';
LAB_1400238cd:
        uVar25 = uVar33;
        uVar18 = uVar18 - 1;
        goto LAB_14002385f;
      }
      if (uVar32 != uVar48) {
        if (uVar32 != uVar25 + 2) {
          if (uVar32 == uVar25 + 5) {
            bVar49 = cVar39 + bVar46 + (bVar46 & cVar39 + 0x7bU) * -2 + 0x1e;
            uVar32 = uVar32 + uVar25;
            goto LAB_1400239e3;
          }
          uVar33 = uVar25;
          if (uVar32 != uVar25 + 7) goto LAB_140023888;
          goto LAB_1400238cd;
        }
LAB_1400237e8:
        bVar49 = (cVar39 + bVar46 + (bVar46 & cVar39 - 0x25U) * -2) - 0x22;
        *(byte *)((longlong)&local_598 + uVar18) = bVar49;
        uVar18 = (~uVar25 + uVar18) - (ulonglong)bVar49;
        uVar25 = uVar48;
LAB_140023822:
        *(byte *)((longlong)&local_598 + uVar18) =
             (char)uVar18 + bVar46 + (bVar46 & (char)uVar18 + 0x2cU) * -2 + -8;
        lVar24 = uVar18 - uVar32;
        uVar32 = uVar32 + 1;
        bVar46 = *(byte *)((longlong)&local_5a0 + lVar24 + 6);
        uVar18 = lVar24 - 2;
      }
LAB_140023855:
      uVar18 = uVar18 + uVar25 + (ulonglong)bVar46;
LAB_14002385f:
      uVar18 = uVar18 + 1;
      if (uVar18 < 0x2e) goto LAB_14002386c;
LAB_140023b24:
      local_f0 = pppppppuVar51;
      uVar32 = FUN_140034260();
      puVar34 = puStack_90;
      puVar19 = local_98;
      pppppppuVar35 = local_a8;
      pppppppuVar51 = (undefined8 *******)0x7fffffffffffffff;
      if (((ulonglong)local_98 ^ 0x7fffffffffffffff) < uVar32) {
                    /* WARNING: Subroutine does not return */
        FUN_140020740();
      }
      local_88 = (uint *******)0x0;
      uStack_80 = (uint ******)0x0;
      pppppppuVar40 = (undefined8 *******)(local_98 + uVar32);
      if (pppppppuVar40 < (undefined8 *******)0x10) {
        pppppppuVar52 = (uint *******)&local_88;
        pppppppuVar51 = (undefined8 *******)0xf;
      }
      else {
        if (-1 < (longlong)pppppppuVar40) {
          pppppppuVar28 = (undefined8 *******)((ulonglong)pppppppuVar40 | 0xf);
          pppppppuVar51 = (undefined8 *******)0x16;
          if ((undefined8 *******)0x16 < pppppppuVar28) {
            pppppppuVar51 = pppppppuVar28;
          }
          if (pppppppuVar28 < (undefined8 *******)0xfff) {
            pppppppuVar52 = (uint *******)FUN_1400329d0((undefined1 *)((longlong)pppppppuVar51 + 1))
            ;
            local_88 = pppppppuVar52;
            goto LAB_140023bd5;
          }
        }
        ppppppuVar21 = (uint ******)FUN_1400329d0(pppppppuVar51 + 5);
        pppppppuVar52 = (uint *******)((longlong)ppppppuVar21 + 0x27U & 0xffffffffffffffe0);
        pppppppuVar52[-1] = ppppppuVar21;
        local_88 = pppppppuVar52;
      }
LAB_140023bd5:
      pppppppuVar23 = (uint *******)&local_a8;
      if ((undefined1 *)0xf < puVar34) {
        pppppppuVar23 = pppppppuVar35;
      }
      local_78 = pppppppuVar40;
      pppppppuStack_70 = pppppppuVar51;
      FUN_140034080(pppppppuVar52,local_f0,uVar32);
      unaff_R12 = (uint *******)(uVar32 + (longlong)pppppppuVar52);
      FUN_140034080(unaff_R12,pppppppuVar23,puVar19);
      *(undefined1 *)((longlong)pppppppuVar52 + (longlong)pppppppuVar40) = 0;
      if (plStack_c0 != local_b8) {
        plStack_c0[2] = 0;
        plStack_c0[3] = 0;
        *plStack_c0 = 0;
        plStack_c0[1] = 0;
        *(undefined4 *)plStack_c0 = (undefined4)local_88;
        *(undefined4 *)((longlong)plStack_c0 + 4) = local_88._4_4_;
        *(undefined4 *)(plStack_c0 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)plStack_c0 + 0xc) = uStack_80._4_4_;
        plStack_c0[2] = (longlong)local_78;
        plStack_c0[3] = (longlong)pppppppuStack_70;
        plStack_c0 = plStack_c0 + 4;
        goto LAB_140023cb0;
      }
      FUN_1400260a0(&local_c8,plStack_c0,&local_88);
      if (pppppppuStack_70 < (undefined8 *******)0x10) goto LAB_140023cb0;
      pppppppuVar51 = (undefined8 *******)((longlong)pppppppuStack_70 + 1);
      pppppppuVar35 = local_88;
      if ((undefined8 *******)0xfff < pppppppuVar51) {
        pppppppuVar35 = (uint *******)local_88[-1];
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar35))
           ) goto LAB_140024c66;
        pppppppuVar51 = pppppppuStack_70 + 5;
      }
      thunk_FUN_1400340c0(pppppppuVar35,pppppppuVar51);
      goto LAB_140023cb0;
    }
  }
  *local_190 = 0;
  local_190[1] = 0;
  local_190[2] = 0;
  local_190[3] = 0xf;
  *(uint *)(local_190 + 4) = uVar44;
  goto LAB_140024ca2;
LAB_140022892:
  unaff_R12 = (uint *******)
              (ulonglong)(byte)(cVar39 + bVar46 + (bVar46 & cVar39 + 0x6eU) * -2 + 0x6c);
  goto LAB_1400223e8;
LAB_140023140:
  if (uVar32 == uVar48) {
    unaff_R13 = (uint *******)
                (ulonglong)(byte)((cVar39 + bVar46 + (bVar46 & cVar39 + 0x81U) * -2) - 6);
    uVar48 = uVar25;
    goto LAB_14002345b;
  }
  if (uVar32 == uVar25 + 2) {
    unaff_R13 = (uint *******)
                (ulonglong)(byte)((cVar39 + bVar46 + (bVar46 & cVar39 + 0x2dU) * -2) - 0xe);
LAB_1400233f7:
    bVar49 = cVar39 + bVar46 + (cVar39 - 7U & bVar46) * -2 + 0x2a;
    *(byte *)((longlong)&local_598 + uVar18) = bVar49;
    lVar24 = (~uVar25 + uVar18) - (ulonglong)bVar49;
    *(byte *)((longlong)&local_598 + lVar24) =
         (char)lVar24 + bVar46 + ((char)lVar24 + 0x24U & bVar46) * -2 + '(';
    lVar24 = lVar24 - uVar32;
    uVar32 = uVar32 + 1;
    bVar46 = *(byte *)((longlong)&local_5a0 + lVar24 + 6);
    uVar18 = lVar24 - 2;
LAB_14002345b:
    uVar18 = uVar18 + uVar48 + (ulonglong)bVar46;
  }
  else {
    if (uVar32 == uVar25 + 5) {
      unaff_R13 = (uint *******)
                  (ulonglong)(byte)((cVar39 + bVar46 + (bVar46 & cVar39 + 0x2fU) * -2) - 0x1a);
      goto LAB_140023294;
    }
    if (uVar32 != uVar25 + 4) {
      cVar43 = -0x57;
      cVar41 = '1';
      if (uVar32 != uVar25 + 6) goto LAB_1400230fc;
      goto LAB_1400231bb;
    }
    unaff_R13 = (uint *******)
                (ulonglong)(byte)((cVar39 + bVar46 + (bVar46 & cVar39 + 0x85U) * -2) - 0x1e);
    uVar18 = uVar18 - 1;
    uVar48 = uVar25;
  }
LAB_140023464:
  uVar18 = uVar18 + 1;
  uVar25 = uVar48;
  if (uVar18 < 0x2f) goto LAB_1400230c0;
LAB_140023613:
  uVar18 = FUN_140034260(puVar22);
  uVar25 = uStack_100;
  uVar32 = local_108;
  pppppppuVar51 = (undefined8 *******)0x7fffffffffffffff;
  if ((local_108 ^ 0x7fffffffffffffff) < uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  local_88 = (uint *******)0x0;
  uStack_80 = (uint ******)0x0;
  pppppppuVar40 = (undefined8 *******)(local_108 + uVar18);
  if (pppppppuVar40 < (undefined8 *******)0x10) {
    pppppppuVar35 = (uint *******)&local_88;
    pppppppuVar51 = (undefined8 *******)0xf;
    pppppppuVar28 = local_118;
  }
  else {
    local_f0 = local_118;
    if (-1 < (longlong)pppppppuVar40) {
      pppppppuVar28 = (undefined8 *******)((ulonglong)pppppppuVar40 | 0xf);
      pppppppuVar51 = (undefined8 *******)0x16;
      if ((undefined8 *******)0x16 < pppppppuVar28) {
        pppppppuVar51 = pppppppuVar28;
      }
      if (pppppppuVar28 < (undefined8 *******)0xfff) {
        pppppppuVar35 = (uint *******)FUN_1400329d0((undefined1 *)((longlong)pppppppuVar51 + 1));
        pppppppuVar28 = local_f0;
        local_88 = pppppppuVar35;
        goto LAB_1400236cc;
      }
    }
    ppppppuVar21 = (uint ******)FUN_1400329d0(pppppppuVar51 + 5);
    pppppppuVar35 = (uint *******)((longlong)ppppppuVar21 + 0x27U & 0xffffffffffffffe0);
    pppppppuVar35[-1] = ppppppuVar21;
    pppppppuVar28 = local_f0;
    local_88 = pppppppuVar35;
  }
LAB_1400236cc:
  pppppppuVar27 = &local_118;
  if (0xf < uVar25) {
    pppppppuVar27 = pppppppuVar28;
  }
  local_78 = pppppppuVar40;
  pppppppuStack_70 = pppppppuVar51;
  FUN_140034080(pppppppuVar35,puVar22,uVar18);
  unaff_R12 = (uint *******)(uVar18 + (longlong)pppppppuVar35);
  FUN_140034080(unaff_R12,pppppppuVar27,uVar32);
  *(undefined1 *)((longlong)pppppppuVar35 + (longlong)pppppppuVar40) = 0;
  if (plStack_c0 != local_b8) {
    plStack_c0[2] = 0;
    plStack_c0[3] = 0;
    *plStack_c0 = 0;
    plStack_c0[1] = 0;
    *(undefined4 *)plStack_c0 = (undefined4)local_88;
    *(undefined4 *)((longlong)plStack_c0 + 4) = local_88._4_4_;
    *(undefined4 *)(plStack_c0 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)plStack_c0 + 0xc) = uStack_80._4_4_;
    plStack_c0[2] = (longlong)local_78;
    plStack_c0[3] = (longlong)pppppppuStack_70;
    plStack_c0 = plStack_c0 + 4;
    goto LAB_1400237a3;
  }
  FUN_1400260a0(&local_c8,plStack_c0,&local_88);
  if (pppppppuStack_70 < (undefined8 *******)0x10) goto LAB_1400237a3;
  pppppppuVar51 = (undefined8 *******)((longlong)pppppppuStack_70 + 1);
  pppppppuVar35 = local_88;
  if ((undefined8 *******)0xfff < pppppppuVar51) {
    pppppppuVar35 = (uint *******)local_88[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar35)))
    goto LAB_140024c66;
    pppppppuVar51 = pppppppuStack_70 + 5;
  }
  thunk_FUN_1400340c0(pppppppuVar35,pppppppuVar51);
  goto LAB_1400237a3;
joined_r0x00014002426d:
  if (plVar38 == plVar37) {
    pppppppuVar35 = local_88;
    if (pppppppuStack_70 < (undefined8 *******)0x10) {
      pppppppuVar35 = (uint *******)&local_88;
    }
    FUN_1400256c0(&local_138,pppppppuVar35,local_78);
    pppppppuVar35 = (uint *******)&local_598;
    FUN_1400278b0(pppppppuVar35,local_138,lStack_130 - (longlong)local_138);
    local_e8 = (uint *******)0xaf517a384f435c4e;
    ppppppuStack_e0 = (undefined8 ******)0x0;
    local_d8 = (undefined8 ******)0x0;
    ppppppuStack_d0 = (undefined8 ******)((ulonglong)ppppppuStack_d0 & 0xffffffffffff0000);
    pppppppuVar52 = (uint *******)&local_e8;
    do {
      puVar17 = (ulonglong *)FUN_140031690();
      uVar32 = *puVar17;
      puVar17 = (ulonglong *)FUN_1400316a0();
      uVar25 = *puVar17;
      uVar18 = 0;
      while( true ) {
        if (uVar18 < uVar32) {
          pppppppuVar52 = (uint *******)&stack0x0101288d;
          goto LAB_140024a26;
        }
        bVar46 = *(byte *)((longlong)&local_e8 + uVar18);
        uVar33 = (ulonglong)bVar46;
        uVar48 = uVar25 + 1;
        bVar49 = (byte)uVar18;
        if (uVar32 < uVar48) break;
        if (uVar32 == uVar48) {
          unaff_R12 = (uint *******)
                      (ulonglong)(byte)(bVar49 + bVar46 + (bVar46 & bVar49 + 0xbb) * -2 + 0x9e);
LAB_140024422:
          uVar18 = uVar18 + uVar25;
          goto LAB_140024425;
        }
        if (uVar32 == uVar25 + 3) {
          bVar45 = bVar49 + bVar46 + (bVar46 & bVar49 - 0x2b) * -2 + 2;
LAB_140024538:
          uVar32 = uVar25 + uVar32;
          unaff_R12 = (uint *******)(ulonglong)bVar45;
          *(byte *)((longlong)&local_e8 + uVar18) =
               bVar49 + bVar46 + (bVar46 & bVar49 + 0x91) * -2 + bVar45 + -0x66;
          goto LAB_140024561;
        }
        if (uVar32 == uVar25 + 7) {
          unaff_R12 = (uint *******)
                      (ulonglong)(byte)(bVar49 + bVar46 + (bVar46 & bVar49 + 0xa7) * -2 + 0x16);
LAB_14002464f:
          uVar18 = uVar18 - 1;
          goto LAB_140024428;
        }
        if (uVar32 != uVar25 + 4) goto LAB_140024475;
        bVar45 = bVar49 + bVar46 + (bVar46 & bVar49 + 0x79) * -2 + 0x2a;
LAB_1400245b2:
        unaff_R12 = (uint *******)(ulonglong)bVar45;
        uVar18 = uVar18 - 1;
        uVar25 = uVar48;
LAB_140024428:
        uVar18 = uVar18 + 1;
        if (0x19 < uVar18) {
LAB_140024a26:
          uVar25 = FUN_140034260(pppppppuVar52);
          lVar24 = CONCAT26(uStack_582,
                            CONCAT24(uStack_584,
                                     CONCAT13(uStack_585,
                                              CONCAT12(uStack_586,CONCAT11(uStack_587,local_588)))))
          ;
          uVar32 = CONCAT17(uStack_579,
                            CONCAT16(uStack_57a,
                                     CONCAT24(uStack_57c,
                                              CONCAT13(uStack_57d,
                                                       CONCAT12(uStack_57e,
                                                                CONCAT11(uStack_57f,uStack_580))))))
          ;
          if (uVar32 - lVar24 < uVar25) {
            pppppppuVar35 = (uint *******)FUN_140027590(&local_598,uVar25,lVar24,0);
          }
          else {
            lVar30 = lVar24 + uVar25;
            local_588 = (undefined1)lVar30;
            uStack_587 = (undefined1)((ulonglong)lVar30 >> 8);
            uStack_586 = (undefined1)((ulonglong)lVar30 >> 0x10);
            uStack_585 = (undefined1)((ulonglong)lVar30 >> 0x18);
            uStack_584 = (undefined2)((ulonglong)lVar30 >> 0x20);
            uStack_582 = (undefined2)((ulonglong)lVar30 >> 0x30);
            pppppppuVar23 = local_598;
            if (uVar32 < 0x10) {
              pppppppuVar23 = pppppppuVar35;
            }
            uVar32 = uVar25;
            if ((pppppppuVar52 <= (uint *******)((longlong)pppppppuVar23 + lVar24) &&
                 pppppppuVar23 < (uint *******)((longlong)pppppppuVar52 + uVar25)) &&
               (uVar32 = (longlong)pppppppuVar23 - (longlong)pppppppuVar52,
               pppppppuVar23 < pppppppuVar52 || uVar32 == 0)) {
              uVar32 = 0;
            }
            FUN_140034090((undefined1 *)((longlong)pppppppuVar23 + uVar25),pppppppuVar23,lVar24 + 1)
            ;
            FUN_140034080(pppppppuVar23,pppppppuVar52,uVar32);
            FUN_140034080((undefined1 *)((longlong)pppppppuVar23 + uVar32),
                          (undefined1 *)((longlong)((longlong)pppppppuVar52 + uVar25) + uVar32),
                          uVar25 - uVar32);
          }
          puVar22 = local_190;
          uVar8 = *(undefined4 *)pppppppuVar35;
          uVar9 = *(undefined4 *)((longlong)pppppppuVar35 + 4);
          uVar10 = *(undefined4 *)(pppppppuVar35 + 1);
          uVar11 = *(undefined4 *)((longlong)pppppppuVar35 + 0xc);
          uVar12 = *(undefined4 *)((longlong)pppppppuVar35 + 0x14);
          uVar13 = *(undefined4 *)(pppppppuVar35 + 3);
          uVar14 = *(undefined4 *)((longlong)pppppppuVar35 + 0x1c);
          *(undefined4 *)(local_190 + 2) = *(undefined4 *)(pppppppuVar35 + 2);
          *(undefined4 *)((longlong)local_190 + 0x14) = uVar12;
          *(undefined4 *)(local_190 + 3) = uVar13;
          *(undefined4 *)((longlong)local_190 + 0x1c) = uVar14;
          *(undefined4 *)local_190 = uVar8;
          *(undefined4 *)((longlong)local_190 + 4) = uVar9;
          *(undefined4 *)(local_190 + 1) = uVar10;
          *(undefined4 *)((longlong)local_190 + 0xc) = uVar11;
          pppppppuVar35[2] = (uint ******)0x0;
          pppppppuVar35[3] = (uint ******)0xf;
          *(undefined1 *)pppppppuVar35 = 0;
          *(uint *)(puVar22 + 4) = local_15c;
          uVar32 = CONCAT17(uStack_579,
                            CONCAT16(uStack_57a,
                                     CONCAT24(uStack_57c,
                                              CONCAT13(uStack_57d,
                                                       CONCAT12(uStack_57e,
                                                                CONCAT11(uStack_57f,uStack_580))))))
          ;
          if (0xf < uVar32) {
            uVar25 = uVar32 + 1;
            pppppppuVar35 = local_598;
            if (0xfff < uVar25) {
              pppppppuVar35 = (uint *******)local_598[-1];
              if ((undefined1 *)0x1f <
                  (undefined1 *)((longlong)local_598 + (-8 - (longlong)pppppppuVar35)))
              goto LAB_140024c66;
              uVar25 = uVar32 + 0x28;
            }
            thunk_FUN_1400340c0(pppppppuVar35,uVar25);
          }
          local_588 = 0;
          uStack_587 = 0;
          uStack_586 = 0;
          uStack_585 = 0;
          uStack_584 = 0;
          uStack_582 = 0;
          uStack_580 = 0xf;
          uStack_57f = 0;
          uStack_57e = 0;
          uStack_57d = 0;
          uStack_57c = 0;
          uStack_57a = 0;
          uStack_579 = 0;
          local_598 = (uint *******)((ulonglong)local_598 & 0xffffffffffffff00);
          if (local_138 != (undefined8 *******)0x0) {
            uVar32 = local_128 - (longlong)local_138;
            pppppppuVar51 = local_138;
            if (0xfff < uVar32) {
              pppppppuVar51 = (undefined8 *******)local_138[-1];
              if ((undefined1 *)0x1f <
                  (undefined1 *)((longlong)local_138 + (-8 - (longlong)pppppppuVar51)))
              goto LAB_140024c66;
              uVar32 = uVar32 + 0x27;
            }
            thunk_FUN_1400340c0(pppppppuVar51,uVar32);
          }
          if ((undefined8 *******)0xf < pppppppuStack_70) {
            pppppppuVar51 = (undefined8 *******)((longlong)pppppppuStack_70 + 1);
            pppppppuVar35 = local_88;
            if ((undefined8 *******)0xfff < pppppppuVar51) {
              pppppppuVar35 = (uint *******)local_88[-1];
              if ((undefined1 *)0x1f <
                  (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar35)))
              goto LAB_140024c66;
              pppppppuVar51 = pppppppuStack_70 + 5;
            }
            thunk_FUN_1400340c0(pppppppuVar35,pppppppuVar51);
          }
          plVar38 = plStack_c0;
          if (local_c8 == (longlong *)0x0) goto LAB_140024ca2;
          plVar37 = local_c8;
          if (local_c8 != plStack_c0) goto LAB_140024c3b;
          uVar32 = (longlong)local_b8 - (longlong)local_c8;
          goto joined_r0x000140024c80;
        }
      }
      unaff_R12 = (uint *******)
                  (ulonglong)(byte)(bVar49 + bVar46 + (bVar46 & bVar49 - 0x17) * -2 + 0x8a);
LAB_140024475:
      if (uVar18 < uVar25) {
        pppppppuVar52 = (uint *******)&stack0x0148eba4;
        goto LAB_140024a26;
      }
      uVar3 = uVar25 + 4;
      if (uVar3 <= uVar32) {
        cVar39 = 'w';
        cVar41 = -0x11;
        if (uVar32 == uVar48) {
LAB_14002457b:
          bVar45 = bVar46 + cVar41 + bVar49 + (cVar41 + bVar49 & bVar46) * -2 + cVar39;
          *(byte *)((longlong)&local_e8 + uVar18) =
               bVar49 + bVar46 + (bVar49 + 0xbf & bVar46) * -2 + -0x7a;
          goto LAB_1400245b2;
        }
        if (uVar32 != uVar25 + 5) {
          if (uVar32 == uVar25 + 8) {
            unaff_R12 = (uint *******)
                        (ulonglong)(byte)(bVar49 + bVar46 + (bVar46 & bVar49 + 0x7f) * -2 + 6);
            goto LAB_140024422;
          }
          goto LAB_1400244ad;
        }
        unaff_R12 = (uint *******)
                    (ulonglong)(byte)((bVar49 + bVar46 + (bVar46 & bVar49 + 0xad) * -2) - 0xe);
LAB_14002483f:
        *(byte *)((longlong)&local_e8 + uVar18) =
             (char)uVar18 + bVar46 + (bVar46 & (char)uVar18 + 0x4cU) * -2 + '8';
        lVar24 = uVar18 - uVar32;
        uVar32 = uVar32 + 1;
        uVar33 = (ulonglong)*(byte *)((longlong)&local_f0 + lVar24 + 6);
        uVar18 = lVar24 - 2;
        goto LAB_140024422;
      }
      unaff_R12 = (uint *******)
                  (ulonglong)(byte)(bVar49 + bVar46 + (bVar46 & bVar49 + 0x1d) * -2 + 0x52);
LAB_1400244ad:
      if (uVar25 + uVar32 <= uVar18) {
        if (uVar32 < uVar25 + 8) {
          unaff_R12 = (uint *******)
                      (ulonglong)(byte)(bVar49 + bVar46 + (bVar46 & bVar49 - 0x17) * -2 + 0x8a);
        }
        else if (uVar32 == uVar48) {
          unaff_R12 = (uint *******)
                      (ulonglong)(byte)(bVar49 + bVar46 + (bVar46 & bVar49 + 0x3a) * -2 + 0xa4);
          goto LAB_140024422;
        }
        if (uVar25 + 0x10 < uVar32) {
          unaff_R12 = (uint *******)
                      (ulonglong)(byte)((bVar49 + bVar46 + (bVar46 & bVar49 + 0x85) * -2) - 0x1e);
        }
        else {
          cVar39 = -0x61;
          cVar41 = 'W';
          if (uVar32 == uVar48) goto LAB_14002457b;
          if (uVar32 == uVar25 + 2) {
            unaff_R12 = (uint *******)
                        (ulonglong)(byte)(bVar49 + bVar46 + (bVar46 & bVar49 - 5) * -2 + 0x1e);
            goto LAB_14002464f;
          }
          if (uVar32 == uVar3) {
            bVar45 = bVar49 + bVar46 + (bVar49 - 0x33 & bVar46) * -2 + 0x32;
            goto LAB_140024538;
          }
          if (uVar32 == uVar25 + 5) {
            unaff_R12 = (uint *******)
                        (ulonglong)(byte)(bVar49 + bVar46 + (bVar49 + 0x71 & bVar46) * -2 + 0x5a);
            goto LAB_140024561;
          }
          if (uVar32 == uVar25 + 3) {
            unaff_R12 = (uint *******)
                        (ulonglong)(byte)(bVar49 + bVar46 + (bVar49 + 0x43 & bVar46) * -2 + 0x6e);
            bVar49 = bVar49 + bVar46 + (bVar49 + 99 & bVar46) * -2 + 0xae;
            *(byte *)((longlong)&local_e8 + uVar18) = bVar49;
            uVar18 = (uVar18 + ~uVar25) - (ulonglong)bVar49;
            uVar25 = uVar48;
            goto LAB_14002483f;
          }
        }
        if (uVar25 + 8 < uVar32) {
          bVar46 = bVar49 + bVar46 + (bVar49 + 0xa2 & bVar46) * -2 + 0x34;
          unaff_R12 = (uint *******)(ulonglong)bVar46;
          *(byte *)((longlong)&local_e8 + uVar18) = bVar46;
          goto LAB_140024428;
        }
        if (uVar32 == uVar48) {
          unaff_R12 = (uint *******)
                      (ulonglong)(byte)(bVar49 + bVar46 + (bVar49 + 0x74 & bVar46) * -2 + 0x48);
          goto LAB_140024422;
        }
        if (uVar32 == uVar25 + 2) {
          unaff_R12 = (uint *******)
                      (ulonglong)(byte)(bVar49 + bVar46 + (bVar49 + 0x46 & bVar46) * -2 + 0x5c);
          goto LAB_14002483f;
        }
        if (uVar32 == uVar25 + 3) {
          unaff_R12 = (uint *******)
                      (ulonglong)(byte)(bVar49 + bVar46 + (bVar49 - 0x16 & bVar46) * -2 + 0x84);
        }
        else {
          if (uVar32 != uVar25 + 5) {
            if (uVar32 == uVar25 + 6) {
              unaff_R12 = (uint *******)
                          (ulonglong)
                          (byte)((bVar49 + bVar46 + ((bVar49 | 0x60) & bVar46) * -2) - 0x40);
              goto LAB_14002464f;
            }
            cVar39 = -0x1c;
            cVar41 = '\x04';
            if (uVar32 == uVar25 + 7) goto LAB_14002457b;
            *(char *)((longlong)&local_e8 + uVar18) = (char)unaff_R12;
            goto LAB_140024428;
          }
          unaff_R12 = (uint *******)
                      (ulonglong)(byte)(bVar49 + bVar46 + (bVar49 + 0xbc & bVar46) * -2 + 0x98);
          uVar32 = uVar25 + uVar32;
        }
LAB_140024561:
        uVar33 = ~(ulonglong)unaff_R12;
LAB_140024425:
        uVar18 = uVar18 + uVar33;
        goto LAB_140024428;
      }
      cVar39 = '.';
      cVar41 = '\x1e';
      if (uVar32 == uVar25 + 3) goto LAB_14002457b;
      if (uVar32 == uVar3) {
        unaff_R12 = (uint *******)
                    (ulonglong)(byte)(bVar49 + bVar46 + (bVar46 & bVar49 - 0x3e) * -2 + 0x74);
        goto LAB_14002464f;
      }
      if (uVar32 == uVar25 + 10) {
        unaff_R12 = (uint *******)
                    (ulonglong)(byte)(bVar49 + bVar46 + (bVar46 & bVar49 + 0x38) * -2 + 0xb0);
        goto LAB_140024561;
      }
      if (uVar32 == uVar25 + 0x10) {
        unaff_R12 = (uint *******)
                    (ulonglong)(byte)((bVar49 + bVar46 + (bVar46 & bVar49 - 0x24) * -2) - 0x28);
        goto LAB_14002483f;
      }
      unaff_R12 = (uint *******)
                  (ulonglong)(byte)(bVar49 + bVar46 + (bVar46 & bVar49 + 0x3b) * -2 + 0x9e);
    } while( true );
  }
  plVar42 = plVar38;
  if (0xf < (ulonglong)plVar38[3]) {
    plVar42 = (longlong *)*plVar38;
  }
  uVar32 = plVar38[2];
  if ((ulonglong)((longlong)pppppppuStack_70 - (longlong)local_78) < uVar32) {
    FUN_140027740(&local_88,uVar32);
    if (local_78 < pppppppuStack_70) goto LAB_1400242e1;
LAB_14002433e:
    FUN_1400205f0(&local_88,1);
  }
  else {
    pppppppuVar51 = (undefined8 *******)((longlong)local_78 + uVar32);
    pppppppuVar35 = (uint *******)&local_88;
    if ((undefined8 *******)0xf < pppppppuStack_70) {
      pppppppuVar35 = local_88;
    }
    puVar19 = (undefined1 *)((longlong)local_78 + (longlong)pppppppuVar35);
    local_78 = pppppppuVar51;
    FUN_140034090(puVar19,plVar42);
    *(undefined1 *)((longlong)pppppppuVar35 + (longlong)pppppppuVar51) = 0;
    if (pppppppuStack_70 <= local_78) goto LAB_14002433e;
LAB_1400242e1:
    pppppppuVar35 = (uint *******)&local_88;
    if ((undefined8 *******)0xf < pppppppuStack_70) {
      pppppppuVar35 = local_88;
    }
    puVar5 = (undefined2 *)((longlong)pppppppuVar35 + (longlong)local_78);
    local_78 = (undefined8 *******)((longlong)local_78 + 1);
    *puVar5 = 0x3b;
  }
  plVar38 = plVar38 + 4;
  goto joined_r0x00014002426d;
LAB_140024c3b:
  do {
    uVar32 = plVar37[3];
    if (0xf < uVar32) {
      lVar24 = *plVar37;
      uVar25 = uVar32 + 1;
      lVar30 = lVar24;
      if (0xfff < uVar25) {
        lVar30 = *(longlong *)(lVar24 + -8);
        if (0x1f < (ulonglong)((lVar24 + -8) - lVar30)) goto LAB_140024c66;
        uVar25 = uVar32 + 0x28;
      }
      thunk_FUN_1400340c0(lVar30,uVar25);
    }
    plVar37[2] = 0;
    plVar37[3] = 0xf;
    *(undefined1 *)plVar37 = 0;
    plVar37 = plVar37 + 4;
  } while (plVar37 != plVar38);
  uVar32 = (longlong)local_b8 - (longlong)local_c8;
joined_r0x000140024c80:
  plVar38 = local_c8;
  if (0xfff < uVar32) {
    if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - local_c8[-1]))) goto LAB_140024c66;
    uVar32 = uVar32 + 0x27;
    plVar38 = (longlong *)local_c8[-1];
  }
  thunk_FUN_1400340c0(plVar38,uVar32);
LAB_140024ca2:
  if ((undefined1 *)0xf < puStack_90) {
    puVar19 = puStack_90 + 1;
    pppppppuVar35 = local_a8;
    if ((undefined1 *)0xfff < puVar19) {
      pppppppuVar35 = (uint *******)local_a8[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_a8 + (-8 - (longlong)pppppppuVar35)))
      goto LAB_140024c66;
      puVar19 = puStack_90 + 0x28;
    }
    thunk_FUN_1400340c0(pppppppuVar35,puVar19);
  }
  if (0xf < uStack_100) {
    uVar32 = uStack_100 + 1;
    pppppppuVar51 = local_118;
    if (0xfff < uVar32) {
      pppppppuVar51 = (undefined8 *******)local_118[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_118 + (-8 - (longlong)pppppppuVar51)))
      goto LAB_140024c66;
      uVar32 = uStack_100 + 0x28;
    }
    thunk_FUN_1400340c0(pppppppuVar51,uVar32);
  }
  if (0xf < uStack_140) {
    uVar32 = uStack_140 + 1;
    pppppppuVar51 = local_158;
    if (0xfff < uVar32) {
      pppppppuVar51 = (undefined8 *******)local_158[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_158 + (-8 - (longlong)pppppppuVar51)))
      goto LAB_140024c66;
      uVar32 = uStack_140 + 0x28;
    }
    thunk_FUN_1400340c0(pppppppuVar51,uVar32);
  }
  if (0xf < local_170) {
    uVar32 = local_170 + 1;
    pppppppuVar51 = local_188;
    if (0xfff < uVar32) {
      pppppppuVar51 = (undefined8 *******)local_188[-1];
      if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)pppppppuVar51))) {
LAB_140024c66:
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar32 = local_170 + 0x28;
    }
    thunk_FUN_1400340c0(pppppppuVar51,uVar32);
  }
  return;
}


/* Unwind@140024ec0 */

void Unwind_140024ec0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x40);
  return;
}


/* Unwind@140024f00 */

void Unwind_140024f00(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x550);
  return;
}


/* Unwind@140024f50 */

void Unwind_140024f50(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x550);
  return;
}


/* Unwind@140024fa0 */

void Unwind_140024fa0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x550);
  return;
}


/* Unwind@140024ff0 */

void Unwind_140024ff0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x550);
  return;
}


/* Unwind@140025040 */

void Unwind_140025040(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x550);
  return;
}


/* Unwind@140025090 */

void Unwind_140025090(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x550);
  return;
}


/* Unwind@1400250e0 */

void Unwind_1400250e0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x530);
  return;
}


/* Unwind@140025130 */

void Unwind_140025130(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x4f0);
  return;
}


/* Unwind@140025180 */

void Unwind_140025180(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x530);
  return;
}


/* Unwind@1400251d0 */

void Unwind_1400251d0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x480);
  return;
}


/* Unwind@140025220 */

void Unwind_140025220(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x550);
  return;
}


/* Unwind@140025270 */

void Unwind_140025270(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x530);
  return;
}


/* Unwind@1400252c0 */

void Unwind_1400252c0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x40);
  return;
}


/* Unwind@140025300 */

void Unwind_140025300(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x4a0);
  return;
}


/* Unwind@140025350 */

void Unwind_140025350(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x4a0);
  return;
}


/* Unwind@1400253a0 */

void Unwind_1400253a0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x40);
  return;
}


/* Unwind@1400253e0 */

void Unwind_1400253e0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x550);
  return;
}


/* Unwind@140025430 */

void Unwind_140025430(undefined8 param_1,longlong param_2)

{
  FUN_1400255d0(param_2 + 0x510);
  FUN_14000fb30(param_2 + 0x530);
  return;
}


/* Unwind@140025480 */

void Unwind_140025480(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x4c0);
  return;
}


/* Unwind@1400254d0 */

void Unwind_1400254d0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x480);
  return;
}


/* Unwind@140025520 */

void Unwind_140025520(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x450);
  return;
}


/* FUN_140025570 */

int FUN_140025570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_140027580();
  iVar1 = (*DAT_140039990)(*puVar2,param_1,4,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


/* FUN_1400255d0 */

void FUN_1400255d0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  if (plVar7 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    if (plVar7 == plVar1) {
      uVar6 = param_1[2] - (longlong)plVar7;
    }
    else {
      do {
        uVar6 = plVar7[3];
        if (0xf < uVar6) {
          lVar2 = *plVar7;
          uVar4 = uVar6 + 1;
          lVar5 = lVar2;
          if (0xfff < uVar4) {
            lVar5 = *(longlong *)(lVar2 + -8);
            if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) goto LAB_1400256b1;
            uVar4 = uVar6 + 0x28;
          }
          thunk_FUN_1400340c0(lVar5,uVar4);
        }
        plVar7[2] = 0;
        plVar7[3] = 0xf;
        *(undefined1 *)plVar7 = 0;
        plVar7 = plVar7 + 4;
      } while (plVar7 != plVar1);
      plVar7 = (longlong *)*param_1;
      uVar6 = param_1[2] - (longlong)plVar7;
    }
    if (0xfff < uVar6) {
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)plVar7 + (-8 - plVar7[-1]))) {
LAB_1400256b1:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar6 = uVar6 + 0x27;
      plVar7 = (longlong *)plVar7[-1];
    }
    thunk_FUN_1400340c0(plVar7,uVar6);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* FUN_1400256c0 */

undefined8 * FUN_1400256c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong local_88;
  longlong local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  uint local_54;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_60 = 0;
  local_68 = 0;
  uVar7 = 0;
  iVar2 = FUN_140033f50(&local_60,L"SHA256",0,0);
  if (iVar2 < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    local_54 = 0;
    local_6c = 0;
    FUN_140033f30(local_60,L"ObjectLength",&local_54,4,&local_6c,0);
    uVar5 = (ulonglong)local_54;
    local_88 = 0;
    local_78 = 0;
    if (uVar5 != 0) {
      if (local_54 < 0x1000) {
        local_88 = FUN_1400329d0(uVar5);
      }
      else {
        lVar3 = FUN_1400329d0(uVar5 + 0x27);
        local_88 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(local_88 - 8) = lVar3;
      }
      local_78 = local_88 + uVar5;
      FUN_1400340a0(local_88,0,uVar5);
      uVar7 = local_54;
    }
    iVar2 = FUN_140033ef0(local_60,&local_68,local_88,uVar7,0,0,0);
    if (iVar2 < 0) {
      FUN_140033ee0(local_60,0);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      FUN_140033f40(local_68,param_2,param_3,0);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar4 = (undefined8 *)FUN_1400329d0(0x20);
      *param_1 = puVar4;
      param_1[2] = puVar4 + 4;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      param_1[1] = puVar4 + 4;
      FUN_140033f10(local_68,puVar4,0x20,0);
      FUN_140033f00(local_68);
      FUN_140033ee0(local_60,0);
    }
    if (local_88 != 0) {
      uVar6 = local_78 - local_88;
      uVar5 = local_88;
      if (0xfff < uVar6) {
        uVar5 = *(ulonglong *)(local_88 - 8);
        if (0x1f < (local_88 - 8) - uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar6 = uVar6 + 0x27;
      }
      thunk_FUN_1400340c0(uVar5,uVar6);
    }
  }
  return param_1;
}


/* Unwind@1400258f0 */

void Unwind_1400258f0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x40);
  return;
}


/* FUN_140025930 */

void FUN_140025930(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar7 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)uVar7 < 0x201) {
      if (param_1 == param_2) {
        return;
      }
      puVar8 = param_1 + 2;
      puVar5 = param_1;
      do {
        if (puVar8 == param_2) {
          return;
        }
        while( true ) {
          puVar10 = puVar8;
          uVar7 = puVar5[2];
          uVar4 = puVar5[3];
          puVar5 = puVar10;
          if (uVar7 < *param_1) break;
          uVar15 = puVar10[-2];
          puVar8 = puVar10;
          while (uVar7 < uVar15) {
            *(int *)puVar8 = (int)puVar8[-2];
            *(undefined4 *)((longlong)puVar8 + 4) = *(undefined4 *)((longlong)puVar8 + -0xc);
            *(int *)(puVar8 + 1) = (int)puVar8[-1];
            *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)puVar8 + -4);
            puVar18 = puVar8 + -4;
            puVar8 = puVar8 + -2;
            uVar15 = *puVar18;
          }
          *puVar8 = uVar7;
          puVar8[1] = uVar4;
          puVar8 = puVar10 + 2;
          if (puVar10 + 2 == param_2) {
            return;
          }
        }
        FUN_140034090(param_1 + 2,param_1,(longlong)puVar10 - (longlong)param_1);
        *param_1 = uVar7;
        param_1[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while( true );
    }
    uVar4 = uVar7 >> 5;
    if ((longlong)param_3 < 1) {
      uVar15 = (uVar7 >> 4) - 1;
      uVar11 = uVar15 >> 1;
      do {
        uVar6 = uVar4 - 1;
        uVar9 = param_1[uVar6 * 2];
        uVar16 = (param_1 + uVar6 * 2)[1];
        uVar13 = param_1[uVar6 * 2];
        uVar12 = uVar6;
        uVar19 = uVar6;
        if ((longlong)uVar4 <= (longlong)uVar11) {
          do {
            uVar12 = uVar19 * 2 + 2;
            if (param_1[uVar12 * 2] < param_1[uVar19 * 4 + 2]) {
              uVar12 = uVar19 * 2 + 1;
            }
            uVar2 = (param_1 + uVar12 * 2)[1];
            param_1[uVar19 * 2] = param_1[uVar12 * 2];
            (param_1 + uVar19 * 2)[1] = uVar2;
            uVar19 = uVar12;
          } while (uVar12 < uVar11);
        }
        if (((uVar7 & 0x10) == 0) && (uVar12 == uVar11)) {
          uVar12 = (param_1 + uVar15 * 2)[1];
          param_1[uVar11 * 2] = param_1[uVar15 * 2];
          (param_1 + uVar11 * 2)[1] = uVar12;
          uVar12 = uVar15;
        }
        if ((longlong)uVar4 <= (longlong)uVar12) {
          do {
            uVar19 = uVar12 - 1 >> 1;
            if (uVar13 <= param_1[uVar19 * 2]) break;
            uVar2 = (param_1 + uVar19 * 2)[1];
            param_1[uVar12 * 2] = param_1[uVar19 * 2];
            (param_1 + uVar12 * 2)[1] = uVar2;
            uVar12 = uVar19;
          } while (uVar6 < uVar19);
        }
        param_1[uVar12 * 2] = uVar9;
        (param_1 + uVar12 * 2)[1] = uVar16;
        bVar1 = 1 < uVar4;
        uVar4 = uVar6;
      } while (bVar1);
      do {
        uVar4 = param_2[-2];
        uVar15 = param_2[-1];
        uVar7 = param_2[-2];
        uVar11 = param_1[1];
        param_2[-2] = *param_1;
        param_2[-1] = uVar11;
        param_2 = param_2 + -2;
        uVar11 = (longlong)param_2 - (longlong)param_1;
        uVar12 = ((longlong)uVar11 >> 4) - 1;
        uVar13 = (longlong)uVar12 >> 1;
        if ((longlong)uVar13 < 1) {
          uVar9 = 0;
        }
        else {
          uVar16 = 0;
          do {
            uVar9 = uVar16 * 2 + 2;
            if (param_1[uVar9 * 2] < param_1[uVar16 * 4 + 2]) {
              uVar9 = uVar16 * 2 + 1;
            }
            uVar19 = (param_1 + uVar9 * 2)[1];
            param_1[uVar16 * 2] = param_1[uVar9 * 2];
            (param_1 + uVar16 * 2)[1] = uVar19;
            uVar16 = uVar9;
          } while ((longlong)uVar9 < (longlong)uVar13);
        }
        if (((uVar11 & 0x10) == 0) && (uVar9 == uVar13)) {
          uVar9 = (param_1 + uVar12 * 2)[1];
          param_1[uVar13 * 2] = param_1[uVar12 * 2];
          (param_1 + uVar13 * 2)[1] = uVar9;
          uVar9 = uVar12;
        }
        if (0 < (longlong)uVar9) {
          do {
            uVar12 = uVar9 - 1 >> 1;
            if (uVar7 <= param_1[uVar12 * 2]) goto LAB_140025f92;
            uVar13 = (param_1 + uVar12 * 2)[1];
            param_1[uVar9 * 2] = param_1[uVar12 * 2];
            (param_1 + uVar9 * 2)[1] = uVar13;
            uVar9 = uVar12;
          } while (uVar12 != 0);
          uVar9 = 0;
        }
LAB_140025f92:
        param_1[uVar9 * 2] = uVar4;
        (param_1 + uVar9 * 2)[1] = uVar15;
        if ((longlong)uVar11 < 0x11) {
          return;
        }
      } while( true );
    }
    puVar5 = param_1 + uVar4 * 2;
    puVar8 = param_2 + -2;
    lVar14 = (longlong)puVar8 - (longlong)param_1 >> 4;
    if (lVar14 < 0x29) {
      uVar7 = *puVar5;
      if (uVar7 < *param_1) {
        uVar7 = *puVar5;
        uVar15 = puVar5[1];
        uVar11 = param_1[1];
        *puVar5 = *param_1;
        puVar5[1] = uVar11;
        local_48 = (undefined4)uVar7;
        uStack_44 = (undefined4)(uVar7 >> 0x20);
        uStack_40 = (undefined4)uVar15;
        uStack_3c = (undefined4)(uVar15 >> 0x20);
        *(undefined4 *)param_1 = local_48;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_44;
        *(undefined4 *)(param_1 + 1) = uStack_40;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
        uVar7 = *puVar5;
      }
      if (*puVar8 < uVar7) {
        uVar7 = *puVar8;
        uVar15 = param_2[-1];
        uVar11 = puVar5[1];
        *puVar8 = *puVar5;
        param_2[-1] = uVar11;
        local_48 = (undefined4)uVar7;
        uStack_44 = (undefined4)(uVar7 >> 0x20);
        uStack_40 = (undefined4)uVar15;
        uStack_3c = (undefined4)(uVar15 >> 0x20);
        *(undefined4 *)puVar5 = local_48;
        *(undefined4 *)((longlong)puVar5 + 4) = uStack_44;
        *(undefined4 *)(puVar5 + 1) = uStack_40;
        *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_3c;
        if (*puVar5 < *param_1) {
          uVar7 = *puVar5;
          uVar15 = puVar5[1];
          uVar11 = param_1[1];
          *puVar5 = *param_1;
          puVar5[1] = uVar11;
          local_48 = (undefined4)uVar7;
          uStack_44 = (undefined4)(uVar7 >> 0x20);
          uStack_40 = (undefined4)uVar15;
          uStack_3c = (undefined4)(uVar15 >> 0x20);
          *(undefined4 *)param_1 = local_48;
          *(undefined4 *)((longlong)param_1 + 4) = uStack_44;
          *(undefined4 *)(param_1 + 1) = uStack_40;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
        }
      }
    }
    else {
      uVar15 = lVar14 + 1U >> 3;
      puVar10 = param_1 + uVar15 * 2;
      uVar7 = param_1[uVar15 * 2];
      if (uVar7 < *param_1) {
        uVar7 = *puVar10;
        uVar11 = puVar10[1];
        uVar12 = param_1[1];
        *puVar10 = *param_1;
        puVar10[1] = uVar12;
        local_48 = (undefined4)uVar7;
        uStack_44 = (undefined4)(uVar7 >> 0x20);
        uStack_40 = (undefined4)uVar11;
        uStack_3c = (undefined4)(uVar11 >> 0x20);
        *(undefined4 *)param_1 = local_48;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_44;
        *(undefined4 *)(param_1 + 1) = uStack_40;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
        uVar7 = *puVar10;
      }
      puVar18 = param_1 + uVar15 * 4;
      if (*puVar18 < uVar7) {
        uVar7 = *puVar18;
        uVar11 = puVar18[1];
        uVar12 = puVar10[1];
        *puVar18 = *puVar10;
        puVar18[1] = uVar12;
        local_48 = (undefined4)uVar7;
        uStack_44 = (undefined4)(uVar7 >> 0x20);
        uStack_40 = (undefined4)uVar11;
        uStack_3c = (undefined4)(uVar11 >> 0x20);
        *(undefined4 *)puVar10 = local_48;
        *(undefined4 *)((longlong)puVar10 + 4) = uStack_44;
        *(undefined4 *)(puVar10 + 1) = uStack_40;
        *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_3c;
        if (*puVar10 < *param_1) {
          uVar7 = *puVar10;
          uVar11 = puVar10[1];
          uVar12 = param_1[1];
          *puVar10 = *param_1;
          puVar10[1] = uVar12;
          local_48 = (undefined4)uVar7;
          uStack_44 = (undefined4)(uVar7 >> 0x20);
          uStack_40 = (undefined4)uVar11;
          uStack_3c = (undefined4)(uVar11 >> 0x20);
          *(undefined4 *)param_1 = local_48;
          *(undefined4 *)((longlong)param_1 + 4) = uStack_44;
          *(undefined4 *)(param_1 + 1) = uStack_40;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
        }
      }
      puVar18 = puVar5 + uVar15 * -2;
      uVar7 = *puVar5;
      if (uVar7 < *puVar18) {
        uVar7 = *puVar5;
        uVar11 = puVar5[1];
        uVar12 = puVar18[1];
        *puVar5 = *puVar18;
        puVar5[1] = uVar12;
        local_48 = (undefined4)uVar7;
        uStack_44 = (undefined4)(uVar7 >> 0x20);
        uStack_40 = (undefined4)uVar11;
        uStack_3c = (undefined4)(uVar11 >> 0x20);
        *(undefined4 *)puVar18 = local_48;
        *(undefined4 *)((longlong)puVar18 + 4) = uStack_44;
        *(undefined4 *)(puVar18 + 1) = uStack_40;
        *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_3c;
        uVar7 = *puVar5;
      }
      puVar17 = puVar5 + uVar15 * 2;
      if (*puVar17 < uVar7) {
        uVar7 = *puVar17;
        uVar11 = puVar17[1];
        uVar12 = puVar5[1];
        *puVar17 = *puVar5;
        puVar17[1] = uVar12;
        local_48 = (undefined4)uVar7;
        uStack_44 = (undefined4)(uVar7 >> 0x20);
        uStack_40 = (undefined4)uVar11;
        uStack_3c = (undefined4)(uVar11 >> 0x20);
        *(undefined4 *)puVar5 = local_48;
        *(undefined4 *)((longlong)puVar5 + 4) = uStack_44;
        *(undefined4 *)(puVar5 + 1) = uStack_40;
        *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_3c;
        if (*puVar5 < *puVar18) {
          uVar7 = *puVar5;
          uVar11 = puVar5[1];
          uVar12 = puVar18[1];
          *puVar5 = *puVar18;
          puVar5[1] = uVar12;
          local_48 = (undefined4)uVar7;
          uStack_44 = (undefined4)(uVar7 >> 0x20);
          uStack_40 = (undefined4)uVar11;
          uStack_3c = (undefined4)(uVar11 >> 0x20);
          *(undefined4 *)puVar18 = local_48;
          *(undefined4 *)((longlong)puVar18 + 4) = uStack_44;
          *(undefined4 *)(puVar18 + 1) = uStack_40;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_3c;
        }
      }
      puVar18 = puVar8 + uVar15 * -2;
      puVar17 = puVar8 + uVar15 * -4;
      uVar7 = puVar8[uVar15 * -2];
      if (uVar7 < puVar8[uVar15 * -4]) {
        uVar7 = *puVar18;
        uVar15 = puVar18[1];
        uVar11 = puVar17[1];
        *puVar18 = *puVar17;
        puVar18[1] = uVar11;
        local_48 = (undefined4)uVar7;
        uStack_44 = (undefined4)(uVar7 >> 0x20);
        uStack_40 = (undefined4)uVar15;
        uStack_3c = (undefined4)(uVar15 >> 0x20);
        *(undefined4 *)puVar17 = local_48;
        *(undefined4 *)((longlong)puVar17 + 4) = uStack_44;
        *(undefined4 *)(puVar17 + 1) = uStack_40;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_3c;
        uVar7 = *puVar18;
      }
      if (*puVar8 < uVar7) {
        uVar7 = *puVar8;
        uVar15 = param_2[-1];
        uVar11 = puVar18[1];
        *puVar8 = *puVar18;
        param_2[-1] = uVar11;
        local_48 = (undefined4)uVar7;
        uStack_44 = (undefined4)(uVar7 >> 0x20);
        uStack_40 = (undefined4)uVar15;
        uStack_3c = (undefined4)(uVar15 >> 0x20);
        *(undefined4 *)puVar18 = local_48;
        *(undefined4 *)((longlong)puVar18 + 4) = uStack_44;
        *(undefined4 *)(puVar18 + 1) = uStack_40;
        *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_3c;
        if (*puVar18 < *puVar17) {
          uVar7 = *puVar18;
          uVar15 = puVar18[1];
          uVar11 = puVar17[1];
          *puVar18 = *puVar17;
          puVar18[1] = uVar11;
          local_48 = (undefined4)uVar7;
          uStack_44 = (undefined4)(uVar7 >> 0x20);
          uStack_40 = (undefined4)uVar15;
          uStack_3c = (undefined4)(uVar15 >> 0x20);
          *(undefined4 *)puVar17 = local_48;
          *(undefined4 *)((longlong)puVar17 + 4) = uStack_44;
          *(undefined4 *)(puVar17 + 1) = uStack_40;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_3c;
        }
      }
      uVar7 = *puVar5;
      if (uVar7 < *puVar10) {
        uVar7 = *puVar5;
        uVar15 = puVar5[1];
        uVar11 = puVar10[1];
        *puVar5 = *puVar10;
        puVar5[1] = uVar11;
        local_48 = (undefined4)uVar7;
        uStack_44 = (undefined4)(uVar7 >> 0x20);
        uStack_40 = (undefined4)uVar15;
        uStack_3c = (undefined4)(uVar15 >> 0x20);
        *(undefined4 *)puVar10 = local_48;
        *(undefined4 *)((longlong)puVar10 + 4) = uStack_44;
        *(undefined4 *)(puVar10 + 1) = uStack_40;
        *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_3c;
        uVar7 = *puVar5;
      }
      if (*puVar18 < uVar7) {
        uVar7 = *puVar18;
        uVar15 = puVar18[1];
        uVar11 = puVar5[1];
        *puVar18 = *puVar5;
        puVar18[1] = uVar11;
        local_48 = (undefined4)uVar7;
        uStack_44 = (undefined4)(uVar7 >> 0x20);
        uStack_40 = (undefined4)uVar15;
        uStack_3c = (undefined4)(uVar15 >> 0x20);
        *(undefined4 *)puVar5 = local_48;
        *(undefined4 *)((longlong)puVar5 + 4) = uStack_44;
        *(undefined4 *)(puVar5 + 1) = uStack_40;
        *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_3c;
        if (*puVar5 < *puVar10) {
          uVar7 = *puVar5;
          uVar15 = puVar5[1];
          uVar11 = puVar10[1];
          *puVar5 = *puVar10;
          puVar5[1] = uVar11;
          local_48 = (undefined4)uVar7;
          uStack_44 = (undefined4)(uVar7 >> 0x20);
          uStack_40 = (undefined4)uVar15;
          uStack_3c = (undefined4)(uVar15 >> 0x20);
          *(undefined4 *)puVar10 = local_48;
          *(undefined4 *)((longlong)puVar10 + 4) = uStack_44;
          *(undefined4 *)(puVar10 + 1) = uStack_40;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_3c;
        }
      }
    }
    do {
      puVar8 = puVar5;
      if (puVar8 <= param_1) break;
      puVar5 = puVar8 + -2;
    } while (*puVar8 == puVar8[-2]);
    puVar5 = param_1 + uVar4 * 2;
    do {
      puVar5 = puVar5 + 2;
      puVar10 = puVar8;
      puVar18 = puVar5;
      if (param_2 <= puVar5) break;
    } while (*puVar8 == *puVar5);
LAB_140025cc8:
    if (puVar5 < param_2) {
      if (*puVar5 <= *puVar10) {
        if (*puVar10 != *puVar5) goto joined_r0x000140025cfc;
        if (puVar5 != puVar18) {
          uVar7 = *puVar18;
          uVar4 = puVar18[1];
          uVar15 = puVar5[1];
          *puVar18 = *puVar5;
          puVar18[1] = uVar15;
          local_48 = (undefined4)uVar7;
          uStack_44 = (undefined4)(uVar7 >> 0x20);
          uStack_40 = (undefined4)uVar4;
          uStack_3c = (undefined4)(uVar4 >> 0x20);
          *(undefined4 *)puVar5 = local_48;
          *(undefined4 *)((longlong)puVar5 + 4) = uStack_44;
          *(undefined4 *)(puVar5 + 1) = uStack_40;
          *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_3c;
        }
        puVar18 = puVar18 + 2;
      }
      puVar5 = puVar5 + 2;
      goto LAB_140025cc8;
    }
joined_r0x000140025cfc:
    while (puVar3 = puVar10, puVar17 = puVar8, puVar10 = puVar3, param_1 < puVar17) {
      puVar8 = puVar17 + -2;
      if (*puVar3 <= puVar17[-2]) {
        if (puVar17[-2] != *puVar3) break;
        puVar10 = puVar3 + -2;
        if (puVar17 != puVar3) {
          uVar7 = *puVar10;
          uVar4 = puVar3[-1];
          uVar15 = puVar17[-1];
          *puVar10 = *puVar8;
          puVar3[-1] = uVar15;
          local_48 = (undefined4)uVar7;
          uStack_44 = (undefined4)(uVar7 >> 0x20);
          uStack_40 = (undefined4)uVar4;
          uStack_3c = (undefined4)(uVar4 >> 0x20);
          *(undefined4 *)puVar8 = local_48;
          *(undefined4 *)((longlong)puVar17 + -0xc) = uStack_44;
          *(undefined4 *)(puVar17 + -1) = uStack_40;
          *(undefined4 *)((longlong)puVar17 + -4) = uStack_3c;
        }
      }
    }
    if ((puVar5 != param_2) || (puVar17 != param_1)) {
      if (puVar17 == param_1) {
        if (puVar18 != puVar5) {
          uVar7 = *puVar3;
          uVar4 = puVar3[1];
          uVar15 = puVar18[1];
          *puVar3 = *puVar18;
          puVar3[1] = uVar15;
          *puVar18 = uVar7;
          puVar18[1] = uVar4;
        }
        uVar7 = *puVar3;
        uVar4 = puVar3[1];
        uVar15 = puVar5[1];
        *puVar3 = *puVar5;
        puVar3[1] = uVar15;
        local_48 = (undefined4)uVar7;
        uStack_44 = (undefined4)(uVar7 >> 0x20);
        uStack_40 = (undefined4)uVar4;
        uStack_3c = (undefined4)(uVar4 >> 0x20);
        *(undefined4 *)puVar5 = local_48;
        *(undefined4 *)((longlong)puVar5 + 4) = uStack_44;
        *(undefined4 *)(puVar5 + 1) = uStack_40;
        *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_3c;
        puVar5 = puVar5 + 2;
        puVar8 = param_1;
        puVar10 = puVar3 + 2;
        puVar18 = puVar18 + 2;
      }
      else {
        puVar8 = puVar17 + -2;
        if (puVar5 == param_2) {
          puVar10 = puVar3 + -2;
          if (puVar17 != puVar3) {
            uVar7 = *puVar8;
            uVar4 = puVar17[-1];
            uVar15 = puVar3[-1];
            *puVar8 = *puVar10;
            puVar17[-1] = uVar15;
            *puVar10 = uVar7;
            puVar3[-1] = uVar4;
          }
          uVar7 = *puVar10;
          uVar4 = puVar3[-1];
          uVar15 = puVar18[-1];
          *puVar10 = puVar18[-2];
          puVar3[-1] = uVar15;
          local_48 = (undefined4)uVar7;
          uStack_44 = (undefined4)(uVar7 >> 0x20);
          uStack_40 = (undefined4)uVar4;
          uStack_3c = (undefined4)(uVar4 >> 0x20);
          *(undefined4 *)(puVar18 + -2) = local_48;
          *(undefined4 *)((longlong)puVar18 + -0xc) = uStack_44;
          *(undefined4 *)(puVar18 + -1) = uStack_40;
          *(undefined4 *)((longlong)puVar18 + -4) = uStack_3c;
          puVar18 = puVar18 + -2;
        }
        else {
          uVar7 = *puVar5;
          uVar4 = puVar5[1];
          uVar15 = puVar17[-1];
          *puVar5 = *puVar8;
          puVar5[1] = uVar15;
          local_48 = (undefined4)uVar7;
          uStack_44 = (undefined4)(uVar7 >> 0x20);
          uStack_40 = (undefined4)uVar4;
          uStack_3c = (undefined4)(uVar4 >> 0x20);
          *(undefined4 *)puVar8 = local_48;
          *(undefined4 *)((longlong)puVar17 + -0xc) = uStack_44;
          *(undefined4 *)(puVar17 + -1) = uStack_40;
          *(undefined4 *)((longlong)puVar17 + -4) = uStack_3c;
          puVar5 = puVar5 + 2;
        }
      }
      goto LAB_140025cc8;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)puVar3 - (longlong)param_1 < (longlong)param_2 - (longlong)puVar18) {
      FUN_140025930(param_1,puVar3,param_3);
      uVar7 = (longlong)param_2 - (longlong)puVar18;
      param_1 = puVar18;
    }
    else {
      FUN_140025930(puVar18,param_2,param_3);
      uVar7 = (longlong)puVar3 - (longlong)param_1;
      param_2 = puVar3;
    }
  } while( true );
}


/* FUN_1400260a0 */

undefined1 * FUN_1400260a0(ulonglong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  
  uVar4 = *param_1;
  uVar21 = ((longlong)(param_1[1] - uVar4) >> 5) + 1;
  uVar20 = (longlong)(param_1[2] - uVar4) >> 5;
  uVar14 = (uVar20 >> 1) + uVar20;
  if (uVar14 <= uVar21) {
    uVar14 = uVar21;
  }
  if (0x7ffffffffffffff - (uVar20 >> 1) < uVar20) {
    uVar14 = 0x7ffffffffffffff;
  }
  if (uVar14 >> 0x3b != 0) {
LAB_14002639a:
                    /* WARNING: Subroutine does not return */
    FUN_140020760();
  }
  lVar19 = uVar14 * 0x20;
  if (uVar14 == 0) {
    uVar14 = 0;
  }
  else if (uVar14 < 0x80) {
    uVar14 = FUN_1400329d0(lVar19);
  }
  else {
    if (uVar14 == 0x7ffffffffffffff) goto LAB_14002639a;
    lVar15 = FUN_1400329d0(lVar19 + 0x27);
    uVar14 = lVar15 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar14 - 8) = lVar15;
  }
  puVar2 = (undefined8 *)((longlong)param_2 + ((uVar14 + 0x10) - uVar4));
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)((longlong)param_2 + (uVar14 - uVar4));
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  uVar10 = *(undefined8 *)(param_3 + 6);
  puVar2 = (undefined8 *)((longlong)param_2 + ((uVar14 + 0x10) - uVar4));
  *puVar2 = *(undefined8 *)(param_3 + 4);
  puVar2[1] = uVar10;
  puVar1 = (undefined4 *)((longlong)param_2 + (uVar14 - uVar4));
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  plVar22 = (longlong *)*param_1;
  plVar16 = (longlong *)param_1[1];
  if (param_2 == plVar16) {
    if (plVar22 == param_2) goto LAB_1400262b8;
    lVar15 = 0;
    do {
      puVar2 = (undefined8 *)(uVar14 + 0x10 + lVar15);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(uVar14 + lVar15) = 0;
      ((undefined8 *)(uVar14 + lVar15))[1] = 0;
      uVar10 = *(undefined8 *)((longlong)plVar22 + lVar15);
      uVar11 = ((undefined8 *)((longlong)plVar22 + lVar15))[1];
      puVar2 = (undefined8 *)((longlong)plVar22 + lVar15 + 0x10);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(uVar14 + 0x10 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      *(undefined8 *)(uVar14 + lVar15) = uVar10;
      ((undefined8 *)(uVar14 + lVar15))[1] = uVar11;
      *(undefined8 *)((longlong)plVar22 + lVar15 + 0x10) = 0;
      *(undefined8 *)((longlong)plVar22 + lVar15 + 0x18) = 0xf;
      *(undefined1 *)((longlong)plVar22 + lVar15) = 0;
      lVar18 = lVar15 + 0x20;
      lVar15 = lVar15 + 0x20;
    } while ((longlong *)((longlong)plVar22 + lVar18) != param_2);
  }
  else {
    if (plVar22 != param_2) {
      lVar15 = 0;
      do {
        puVar2 = (undefined8 *)(uVar14 + 0x10 + lVar15);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(uVar14 + lVar15) = 0;
        ((undefined8 *)(uVar14 + lVar15))[1] = 0;
        uVar10 = *(undefined8 *)((longlong)plVar22 + lVar15);
        uVar11 = ((undefined8 *)((longlong)plVar22 + lVar15))[1];
        puVar2 = (undefined8 *)((longlong)plVar22 + lVar15 + 0x10);
        uVar12 = puVar2[1];
        puVar3 = (undefined8 *)(uVar14 + 0x10 + lVar15);
        *puVar3 = *puVar2;
        puVar3[1] = uVar12;
        *(undefined8 *)(uVar14 + lVar15) = uVar10;
        ((undefined8 *)(uVar14 + lVar15))[1] = uVar11;
        *(undefined8 *)((longlong)plVar22 + lVar15 + 0x10) = 0;
        *(undefined8 *)((longlong)plVar22 + lVar15 + 0x18) = 0xf;
        *(undefined1 *)((longlong)plVar22 + lVar15) = 0;
        lVar18 = lVar15 + 0x20;
        lVar15 = lVar15 + 0x20;
      } while ((longlong *)((longlong)plVar22 + lVar18) != param_2);
      plVar16 = (longlong *)param_1[1];
    }
    if (param_2 != plVar16) {
      lVar15 = uVar14 - uVar4;
      lVar18 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)param_2 + lVar18 + lVar15 + 0x30);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)((longlong)param_2 + lVar18 + lVar15 + 0x20);
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar10 = *(undefined8 *)((longlong)param_2 + lVar18);
        uVar11 = ((undefined8 *)((longlong)param_2 + lVar18))[1];
        puVar2 = (undefined8 *)((longlong)param_2 + lVar18 + 0x10);
        uVar12 = puVar2[1];
        puVar3 = (undefined8 *)((longlong)param_2 + lVar18 + lVar15 + 0x30);
        *puVar3 = *puVar2;
        puVar3[1] = uVar12;
        puVar2 = (undefined8 *)((longlong)param_2 + lVar18 + lVar15 + 0x20);
        *puVar2 = uVar10;
        puVar2[1] = uVar11;
        *(undefined8 *)((longlong)param_2 + lVar18 + 0x10) = 0;
        *(undefined8 *)((longlong)param_2 + lVar18 + 0x18) = 0xf;
        *(undefined1 *)((longlong)param_2 + lVar18) = 0;
        lVar13 = lVar18 + 0x20;
        lVar18 = lVar18 + 0x20;
      } while ((longlong *)((longlong)param_2 + lVar13) != plVar16);
    }
  }
  plVar22 = (longlong *)*param_1;
LAB_1400262b8:
  if (plVar22 != (longlong *)0x0) {
    plVar16 = (longlong *)param_1[1];
    if (plVar22 == plVar16) {
      uVar20 = param_1[2] - (longlong)plVar22;
    }
    else {
      do {
        uVar20 = plVar22[3];
        if (0xf < uVar20) {
          lVar15 = *plVar22;
          uVar17 = uVar20 + 1;
          lVar18 = lVar15;
          if (0xfff < uVar17) {
            lVar18 = *(longlong *)(lVar15 + -8);
            if (0x1f < (ulonglong)((lVar15 + -8) - lVar18)) goto LAB_140026398;
            uVar17 = uVar20 + 0x28;
          }
          thunk_FUN_1400340c0(lVar18,uVar17);
        }
        plVar22[2] = 0;
        plVar22[3] = 0xf;
        *(undefined1 *)plVar22 = 0;
        plVar22 = plVar22 + 4;
      } while (plVar22 != plVar16);
      plVar22 = (longlong *)*param_1;
      uVar20 = param_1[2] - (longlong)plVar22;
    }
    if (0xfff < uVar20) {
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)plVar22 + (-8 - plVar22[-1]))) {
LAB_140026398:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar20 = uVar20 + 0x27;
      plVar22 = (longlong *)plVar22[-1];
    }
    thunk_FUN_1400340c0(plVar22,uVar20);
  }
  *param_1 = uVar14;
  param_1[1] = uVar21 * 0x20 + uVar14;
  param_1[2] = lVar19 + uVar14;
  return (undefined1 *)((longlong)param_2 + (uVar14 - uVar4));
}


/* FUN_1400263a0 */

void FUN_1400263a0(longlong param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar4 = param_2 - param_1;
  if (0x400 < (longlong)uVar4) {
    do {
      while( true ) {
        uVar5 = uVar4 >> 6;
        if ((longlong)param_3 < 1) {
          uVar9 = uVar5 + 1;
          puVar8 = (undefined4 *)(uVar5 * 0x20 + param_1);
          do {
            puVar7 = puVar8 + -8;
            local_68 = *puVar7;
            uStack_64 = puVar8[-7];
            uStack_60 = puVar8[-6];
            uStack_5c = puVar8[-5];
            local_58 = puVar8[-4];
            uStack_54 = puVar8[-3];
            uStack_50 = puVar8[-2];
            uStack_4c = puVar8[-1];
            *(undefined8 *)(puVar8 + -4) = 0;
            *(undefined8 *)(puVar8 + -2) = 0xf;
            *(undefined1 *)puVar7 = 0;
            FUN_1400268e0(param_1,uVar9 - 2,uVar4 >> 5,&local_68);
            uVar5 = CONCAT44(uStack_4c,uStack_50);
            if (0xf < uVar5) {
              lVar2 = CONCAT44(uStack_64,local_68);
              uVar3 = uVar5 + 1;
              lVar6 = lVar2;
              if (0xfff < uVar3) {
                lVar6 = *(longlong *)(lVar2 + -8);
                if (0x1f < (ulonglong)((lVar2 + -8) - lVar6)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                uVar3 = uVar5 + 0x28;
              }
              thunk_FUN_1400340c0(lVar6,uVar3);
            }
            uVar9 = uVar9 - 1;
            puVar8 = puVar7;
          } while (1 < uVar9);
          lVar6 = param_2 - param_1;
          do {
            FUN_140026ce0(param_1,param_2);
            param_2 = param_2 + -0x20;
            lVar6 = lVar6 + -0x20;
          } while (0x20 < lVar6);
          return;
        }
        lVar6 = uVar5 * 0x20 + param_1;
        FUN_140026de0(param_1,lVar6,param_2 + -0x20);
        FUN_140026e70(&local_68,param_1,lVar6,param_2);
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if (param_2 - CONCAT44(uStack_5c,uStack_60) <= CONCAT44(uStack_64,local_68) - param_1)
        break;
        FUN_1400263a0(param_1,CONCAT44(uStack_64,local_68),param_3);
        param_1 = CONCAT44(uStack_5c,uStack_60);
        uVar4 = param_2 - param_1;
        if ((longlong)uVar4 < 0x401) goto LAB_1400263d0;
      }
      FUN_1400263a0(CONCAT44(uStack_5c,uStack_60),param_2,param_3);
      param_2 = CONCAT44(uStack_64,local_68);
      uVar4 = param_2 - param_1;
    } while (0x400 < (longlong)uVar4);
  }
LAB_1400263d0:
  FUN_1400265a0(param_1,param_2);
  return;
}


/* Unwind@140026570 */

void Unwind_140026570(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x30);
  return;
}


/* FUN_1400265a0 */

longlong * FUN_1400265a0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if ((param_1 != param_2) && (param_1 + 4 != param_2)) {
    lVar22 = 0x20;
    plVar18 = param_1 + 4;
    plVar21 = param_1;
    do {
      plVar13 = plVar18;
      local_68 = (undefined4)*plVar13;
      uStack_64 = *(undefined4 *)((longlong)plVar13 + 4);
      puVar11 = (undefined4 *)*plVar13;
      uStack_60 = (undefined4)plVar13[1];
      uStack_5c = *(undefined4 *)((longlong)plVar13 + 0xc);
      local_58 = (undefined4)plVar13[2];
      uStack_54 = *(undefined4 *)((longlong)plVar13 + 0x14);
      uVar1 = plVar13[2];
      uStack_50 = (undefined4)plVar13[3];
      uStack_4c = *(undefined4 *)((longlong)plVar13 + 0x1c);
      uVar14 = plVar13[3];
      plVar21[6] = 0;
      plVar21[7] = 0xf;
      *(undefined1 *)(plVar21 + 4) = 0;
      plVar18 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar18 = (longlong *)*param_1;
      }
      uVar15 = param_1[2];
      puVar19 = &local_68;
      if (0xf < uVar14) {
        puVar19 = puVar11;
      }
      uVar14 = uVar1;
      if (uVar15 < uVar1) {
        uVar14 = uVar15;
      }
      iVar12 = FUN_140034070(puVar19,plVar18,uVar14);
      bVar10 = uVar1 < uVar15;
      if (iVar12 != 0) {
        bVar10 = iVar12 < 0;
      }
      lVar20 = lVar22;
      if (bVar10) {
        do {
          plVar18 = (longlong *)((longlong)param_1 + lVar20);
          uVar1 = *(ulonglong *)((longlong)param_1 + lVar20 + 0x18);
          if (0xf < uVar1) {
            lVar17 = *plVar18;
            uVar14 = uVar1 + 1;
            lVar16 = lVar17;
            if (0xfff < uVar14) {
              lVar16 = *(longlong *)(lVar17 + -8);
              if (0x1f < (ulonglong)((lVar17 + -8) - lVar16)) goto LAB_1400268d7;
              uVar14 = uVar1 + 0x28;
            }
            thunk_FUN_1400340c0(lVar16,uVar14);
          }
          *(undefined8 *)((longlong)param_1 + lVar20 + 0x10) = 0;
          *(undefined8 *)((longlong)param_1 + lVar20 + 0x18) = 0xf;
          *(undefined1 *)((longlong)param_1 + lVar20) = 0;
          uVar3 = *(undefined4 *)((longlong)param_1 + lVar20 + -0x20);
          uVar4 = *(undefined4 *)((longlong)param_1 + lVar20 + -0x1c);
          uVar5 = *(undefined4 *)((longlong)param_1 + lVar20 + -0x18);
          uVar6 = *(undefined4 *)((longlong)param_1 + lVar20 + -0x14);
          uVar7 = *(undefined4 *)((longlong)param_1 + lVar20 + -0xc);
          uVar8 = *(undefined4 *)((longlong)param_1 + lVar20 + -8);
          uVar9 = *(undefined4 *)((longlong)param_1 + lVar20 + -4);
          *(undefined4 *)(plVar18 + 2) = *(undefined4 *)((longlong)param_1 + lVar20 + -0x10);
          *(undefined4 *)((longlong)plVar18 + 0x14) = uVar7;
          *(undefined4 *)(plVar18 + 3) = uVar8;
          *(undefined4 *)((longlong)plVar18 + 0x1c) = uVar9;
          *(undefined4 *)plVar18 = uVar3;
          *(undefined4 *)((longlong)plVar18 + 4) = uVar4;
          *(undefined4 *)(plVar18 + 1) = uVar5;
          *(undefined4 *)((longlong)plVar18 + 0xc) = uVar6;
          *(undefined8 *)((longlong)param_1 + lVar20 + -0x10) = 0;
          *(undefined8 *)((longlong)param_1 + lVar20 + -8) = 0xf;
          *(undefined1 *)((longlong)param_1 + lVar20 + -0x20) = 0;
          lVar20 = lVar20 + -0x20;
        } while (lVar20 != 0);
        uVar1 = param_1[3];
        plVar18 = param_1;
        if (0xf < uVar1) {
          lVar20 = *param_1;
          uVar14 = uVar1 + 1;
          lVar17 = lVar20;
          if (0xfff < uVar14) {
            lVar17 = *(longlong *)(lVar20 + -8);
            if (0x1f < (ulonglong)((lVar20 + -8) - lVar17)) {
LAB_1400268d7:
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar14 = uVar1 + 0x28;
          }
          thunk_FUN_1400340c0(lVar17,uVar14);
        }
      }
      else {
        if ((ulonglong)plVar13[-1] < 0x10) {
          plVar18 = plVar13 + -4;
        }
        else {
          plVar18 = (longlong *)plVar13[-4];
        }
        uVar14 = plVar13[-2];
        uVar15 = uVar1;
        if (uVar14 < uVar1) {
          uVar15 = uVar14;
        }
        iVar12 = FUN_140034070(puVar19,plVar18,uVar15);
        bVar10 = uVar1 < uVar14;
        if (iVar12 != 0) {
          bVar10 = iVar12 < 0;
        }
        plVar21 = plVar13;
        plVar18 = plVar13;
        if (bVar10) {
          do {
            uVar14 = plVar21[3];
            if (0xf < uVar14) {
              lVar20 = *plVar21;
              uVar15 = uVar14 + 1;
              lVar17 = lVar20;
              if (0xfff < uVar15) {
                lVar17 = *(longlong *)(lVar20 + -8);
                if (0x1f < (ulonglong)((lVar20 + -8) - lVar17)) goto LAB_1400268d7;
                uVar15 = uVar14 + 0x28;
              }
              thunk_FUN_1400340c0(lVar17,uVar15);
            }
            plVar18 = plVar21 + -4;
            *(int *)(plVar21 + 2) = (int)plVar21[-2];
            *(undefined4 *)((longlong)plVar21 + 0x14) = *(undefined4 *)((longlong)plVar21 + -0xc);
            *(int *)(plVar21 + 3) = (int)plVar21[-1];
            *(undefined4 *)((longlong)plVar21 + 0x1c) = *(undefined4 *)((longlong)plVar21 + -4);
            *(int *)plVar21 = (int)*plVar18;
            *(undefined4 *)((longlong)plVar21 + 4) = *(undefined4 *)((longlong)plVar21 + -0x1c);
            *(int *)(plVar21 + 1) = (int)plVar21[-3];
            *(undefined4 *)((longlong)plVar21 + 0xc) = *(undefined4 *)((longlong)plVar21 + -0x14);
            plVar21[-2] = 0;
            plVar21[-1] = 0xf;
            *(undefined1 *)(plVar21 + -4) = 0;
            uVar14 = plVar21[-6];
            if ((ulonglong)plVar21[-5] < 0x10) {
              plVar21 = plVar21 + -8;
            }
            else {
              plVar21 = (longlong *)plVar21[-8];
            }
            uVar15 = uVar1;
            if (uVar14 < uVar1) {
              uVar15 = uVar14;
            }
            iVar12 = FUN_140034070(puVar19,plVar21,uVar15);
            bVar10 = uVar1 < uVar14;
            if (iVar12 != 0) {
              bVar10 = iVar12 < 0;
            }
            plVar21 = plVar18;
          } while (bVar10);
        }
        uVar1 = plVar18[3];
        if (0xf < uVar1) {
          lVar20 = *plVar18;
          uVar14 = uVar1 + 1;
          lVar17 = lVar20;
          if (0xfff < uVar14) {
            lVar17 = *(longlong *)(lVar20 + -8);
            if (0x1f < (ulonglong)((lVar20 + -8) - lVar17)) goto LAB_1400268d7;
            uVar14 = uVar1 + 0x28;
          }
          thunk_FUN_1400340c0(lVar17,uVar14);
        }
      }
      plVar18[2] = CONCAT44(uStack_54,local_58);
      plVar18[3] = CONCAT44(uStack_4c,uStack_50);
      *plVar18 = CONCAT44(uStack_64,local_68);
      plVar18[1] = CONCAT44(uStack_5c,uStack_60);
      lVar22 = lVar22 + 0x20;
      plVar18 = plVar13 + 4;
      plVar21 = plVar13;
    } while (plVar13 + 4 != param_2);
  }
  return param_2;
}


/* FUN_1400268e0 */

void FUN_1400268e0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  
  lVar1 = param_3 - 1;
  lVar18 = lVar1 >> 1;
  lVar19 = param_2;
  while (lVar20 = lVar19, lVar20 < lVar18) {
    lVar11 = lVar20 * 0x40;
    if (*(ulonglong *)(param_1 + 0x38 + lVar11) < 0x10) {
      lVar14 = param_1 + lVar11 + 0x20;
    }
    else {
      lVar14 = *(longlong *)(param_1 + 0x20 + lVar11);
    }
    lVar19 = lVar20 * 2 + 2;
    lVar16 = lVar19 * 0x20;
    if (*(ulonglong *)(param_1 + 0x18 + lVar16) < 0x10) {
      lVar13 = param_1 + lVar16;
    }
    else {
      lVar13 = *(longlong *)(param_1 + lVar16);
    }
    uVar2 = *(ulonglong *)(param_1 + 0x30 + lVar11);
    uVar12 = *(ulonglong *)(param_1 + 0x10 + lVar16);
    uVar17 = uVar12;
    if (uVar2 < uVar12) {
      uVar17 = uVar2;
    }
    iVar9 = FUN_140034070(lVar13,lVar14,uVar17);
    bVar8 = uVar12 < uVar2;
    if (iVar9 != 0) {
      bVar8 = iVar9 < 0;
    }
    if (bVar8) {
      lVar19 = lVar20 * 2 + 1;
    }
    if (lVar20 != lVar19) {
      plVar15 = (longlong *)(lVar20 * 0x20 + param_1);
      uVar2 = plVar15[3];
      if (0xf < uVar2) {
        lVar20 = *plVar15;
        uVar12 = uVar2 + 1;
        lVar11 = lVar20;
        if (0xfff < uVar12) {
          lVar11 = *(longlong *)(lVar20 + -8);
          if (0x1f < (ulonglong)((lVar20 + -8) - lVar11)) goto LAB_140026b1d;
          uVar12 = uVar2 + 0x28;
        }
        thunk_FUN_1400340c0(lVar11,uVar12);
      }
      puVar10 = (undefined4 *)(lVar19 * 0x20 + param_1);
      plVar15[2] = 0;
      plVar15[3] = 0xf;
      *(undefined1 *)plVar15 = 0;
      uVar4 = *puVar10;
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      lVar20 = *(longlong *)(puVar10 + 6);
      plVar15[2] = *(longlong *)(puVar10 + 4);
      plVar15[3] = lVar20;
      *(undefined4 *)plVar15 = uVar4;
      *(undefined4 *)((longlong)plVar15 + 4) = uVar5;
      *(undefined4 *)(plVar15 + 1) = uVar6;
      *(undefined4 *)((longlong)plVar15 + 0xc) = uVar7;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
    }
  }
  if ((((param_3 & 1) == 0) && (lVar20 == lVar18)) && (lVar20 = lVar1, lVar18 != lVar1)) {
    plVar15 = (longlong *)(lVar18 * 0x20 + param_1);
    uVar2 = plVar15[3];
    if (0xf < uVar2) {
      lVar19 = *plVar15;
      uVar12 = uVar2 + 1;
      lVar18 = lVar19;
      if (0xfff < uVar12) {
        lVar18 = *(longlong *)(lVar19 + -8);
        if (0x1f < (ulonglong)((lVar19 + -8) - lVar18)) {
LAB_140026b1d:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar12 = uVar2 + 0x28;
      }
      thunk_FUN_1400340c0(lVar18,uVar12);
    }
    puVar10 = (undefined4 *)(lVar1 * 0x20 + param_1);
    plVar15[2] = 0;
    plVar15[3] = 0xf;
    *(undefined1 *)plVar15 = 0;
    uVar4 = *puVar10;
    uVar5 = puVar10[1];
    uVar6 = puVar10[2];
    uVar7 = puVar10[3];
    lVar1 = *(longlong *)(puVar10 + 6);
    plVar15[2] = *(longlong *)(puVar10 + 4);
    plVar15[3] = lVar1;
    *(undefined4 *)plVar15 = uVar4;
    *(undefined4 *)((longlong)plVar15 + 4) = uVar5;
    *(undefined4 *)(plVar15 + 1) = uVar6;
    *(undefined4 *)((longlong)plVar15 + 0xc) = uVar7;
    *(undefined8 *)(puVar10 + 4) = 0;
    *(undefined8 *)(puVar10 + 6) = 0xf;
    *(undefined1 *)puVar10 = 0;
  }
  FUN_140026b20(param_1,lVar20,param_2,param_4);
  return;
}


/* FUN_140026b20 */

void FUN_140026b20(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  
  while (lVar3 = param_2, param_3 < lVar3) {
    plVar16 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      plVar16 = (longlong *)*param_4;
    }
    param_2 = lVar3 + -1 >> 1;
    lVar12 = param_2 * 0x20;
    puVar1 = (undefined4 *)(param_1 + lVar12);
    puVar14 = puVar1;
    if (0xf < *(ulonglong *)(param_1 + 0x18 + lVar12)) {
      puVar14 = *(undefined4 **)(param_1 + lVar12);
    }
    uVar2 = param_4[2];
    uVar13 = *(ulonglong *)(param_1 + 0x10 + lVar12);
    uVar15 = uVar13;
    if (uVar2 < uVar13) {
      uVar15 = uVar2;
    }
    iVar11 = FUN_140034070(puVar14,plVar16,uVar15);
    bVar10 = uVar13 < uVar2;
    if (iVar11 != 0) {
      bVar10 = iVar11 < 0;
    }
    if (!bVar10) break;
    if (lVar3 != param_2) {
      plVar16 = (longlong *)(lVar3 * 0x20 + param_1);
      uVar2 = plVar16[3];
      if (0xf < uVar2) {
        lVar3 = *plVar16;
        uVar13 = uVar2 + 1;
        lVar12 = lVar3;
        if (0xfff < uVar13) {
          lVar12 = *(longlong *)(lVar3 + -8);
          if (0x1f < (ulonglong)((lVar3 + -8) - lVar12)) goto LAB_140026cdc;
          uVar13 = uVar2 + 0x28;
        }
        thunk_FUN_1400340c0(lVar12,uVar13);
      }
      plVar16[2] = 0;
      plVar16[3] = 0xf;
      *(undefined1 *)plVar16 = 0;
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      lVar3 = *(longlong *)(puVar1 + 6);
      plVar16[2] = *(longlong *)(puVar1 + 4);
      plVar16[3] = lVar3;
      *(undefined4 *)plVar16 = uVar5;
      *(undefined4 *)((longlong)plVar16 + 4) = uVar6;
      *(undefined4 *)(plVar16 + 1) = uVar7;
      *(undefined4 *)((longlong)plVar16 + 0xc) = uVar8;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0xf;
      *(undefined1 *)puVar1 = 0;
    }
  }
  plVar16 = (longlong *)(param_1 + lVar3 * 0x20);
  if (plVar16 != param_4) {
    uVar2 = plVar16[3];
    if (0xf < uVar2) {
      lVar3 = *plVar16;
      uVar13 = uVar2 + 1;
      lVar12 = lVar3;
      if (0xfff < uVar13) {
        lVar12 = *(longlong *)(lVar3 + -8);
        if (0x1f < (ulonglong)((lVar3 + -8) - lVar12)) {
LAB_140026cdc:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar13 = uVar2 + 0x28;
      }
      thunk_FUN_1400340c0(lVar12,uVar13);
    }
    plVar16[2] = 0;
    plVar16[3] = 0xf;
    *(undefined1 *)plVar16 = 0;
    lVar3 = *param_4;
    lVar12 = param_4[1];
    lVar9 = param_4[3];
    plVar16[2] = param_4[2];
    plVar16[3] = lVar9;
    *plVar16 = lVar3;
    plVar16[1] = lVar12;
    param_4[2] = 0;
    param_4[3] = 0xf;
    *(undefined1 *)param_4 = 0;
  }
  return;
}


/* FUN_140026ce0 */

void FUN_140026ce0(undefined4 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (0x20 < param_2 - (longlong)param_1) {
    local_38 = *(undefined4 *)(param_2 + -0x20);
    uStack_34 = *(undefined4 *)(param_2 + -0x1c);
    uStack_30 = *(undefined4 *)(param_2 + -0x18);
    uStack_2c = *(undefined4 *)(param_2 + -0x14);
    local_28 = *(undefined4 *)(param_2 + -0x10);
    uStack_24 = *(undefined4 *)(param_2 + -0xc);
    uStack_20 = *(undefined4 *)(param_2 + -8);
    uStack_1c = *(undefined4 *)(param_2 + -4);
    *(undefined8 *)(param_2 + -0x10) = 0;
    *(undefined8 *)(param_2 + -8) = 0xf;
    *(undefined1 *)(param_2 + -0x20) = 0;
    lVar11 = (param_2 + -0x20) - (longlong)param_1;
    uVar12 = local_38;
    if (lVar11 != 0) {
      *(undefined8 *)(param_2 + -0x10) = 0;
      *(undefined8 *)(param_2 + -8) = 0xf;
      *(undefined1 *)(param_2 + -0x20) = 0;
      uVar12 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar5 = param_1[5];
      uVar6 = param_1[6];
      uVar7 = param_1[7];
      *(undefined4 *)(param_2 + -0x10) = param_1[4];
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar12;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0xf;
      *(undefined1 *)param_1 = 0;
    }
    FUN_1400268e0(uVar12,0,lVar11 >> 5,&local_38);
    uVar9 = CONCAT44(uStack_1c,uStack_20);
    if (0xf < uVar9) {
      lVar8 = CONCAT44(uStack_34,local_38);
      uVar10 = uVar9 + 1;
      lVar11 = lVar8;
      if (0xfff < uVar10) {
        lVar11 = *(longlong *)(lVar8 + -8);
        if (0x1f < (ulonglong)((lVar8 + -8) - lVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar10 = uVar9 + 0x28;
      }
      thunk_FUN_1400340c0(lVar11,uVar10);
    }
  }
  return;
}


/* Unwind@140026dc0 */

void Unwind_140026dc0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x30);
  return;
}


/* FUN_140026de0 */

void FUN_140026de0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = param_3 - param_1 >> 5;
  lVar1 = param_1;
  lVar2 = param_3;
  if (0x28 < lVar3) {
    uVar4 = lVar3 + 1U >> 3;
    lVar1 = param_1 + uVar4 * 0x20;
    FUN_1400273d0(param_1,lVar1,param_1 + uVar4 * 0x40);
    FUN_1400273d0(param_2 + uVar4 * -0x20,param_2,param_2 + uVar4 * 0x20);
    lVar2 = param_3 + uVar4 * -0x20;
    FUN_1400273d0(param_3 + uVar4 * -0x40,lVar2,param_3);
  }
  FUN_1400273d0(lVar1,param_2,lVar2);
  return;
}


/* FUN_140026e70 */

void FUN_140026e70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_60;
  
  puVar17 = param_3;
  do {
    local_60 = puVar17;
    if (local_60 <= param_2) break;
    puVar17 = local_60;
    if (0xf < (ulonglong)local_60[3]) {
      puVar17 = (undefined8 *)*local_60;
    }
    puVar15 = local_60 + -4;
    if (0xf < (ulonglong)local_60[-1]) {
      puVar15 = (undefined8 *)local_60[-4];
    }
    uVar1 = local_60[2];
    uVar2 = local_60[-2];
    uVar16 = uVar2;
    if (uVar1 < uVar2) {
      uVar16 = uVar1;
    }
    iVar11 = FUN_140034070(puVar15,puVar17,uVar16);
    bVar10 = uVar2 < uVar1;
    if (iVar11 != 0) {
      bVar10 = iVar11 < 0;
    }
    if (bVar10) break;
    iVar11 = FUN_140034070(puVar17,puVar15,uVar16);
    bVar10 = uVar1 < uVar2;
    if (iVar11 != 0) {
      bVar10 = iVar11 < 0;
    }
    puVar17 = local_60 + -4;
  } while (!bVar10);
  do {
    puVar13 = param_3 + 4;
    puVar15 = puVar13;
    puVar17 = local_60;
    if (param_4 <= puVar13) break;
    puVar14 = local_60;
    if (0xf < (ulonglong)local_60[3]) {
      puVar14 = (undefined8 *)*local_60;
    }
    puVar12 = puVar13;
    if (0xf < (ulonglong)param_3[7]) {
      puVar12 = (undefined8 *)*puVar13;
    }
    uVar1 = local_60[2];
    uVar2 = param_3[6];
    uVar16 = uVar2;
    if (uVar1 < uVar2) {
      uVar16 = uVar1;
    }
    iVar11 = FUN_140034070(puVar12,puVar14,uVar16);
    bVar10 = uVar2 < uVar1;
    if (iVar11 != 0) {
      bVar10 = iVar11 < 0;
    }
    if (bVar10) break;
    iVar11 = FUN_140034070(puVar14,puVar12,uVar16);
    bVar10 = uVar1 < uVar2;
    if (iVar11 != 0) {
      bVar10 = iVar11 < 0;
    }
    param_3 = puVar13;
  } while (!bVar10);
joined_r0x000140026fdf:
  do {
    puVar14 = puVar15;
    if (param_4 <= puVar13) {
LAB_1400270c3:
      puVar12 = puVar17;
      if (param_2 < local_60) {
        puVar17 = local_60 + -4;
        do {
          while( true ) {
            puVar15 = puVar17;
            puVar17 = puVar12;
            if (0xf < (ulonglong)puVar12[3]) {
              puVar17 = (undefined8 *)*puVar12;
            }
            puVar18 = puVar15;
            if (0xf < (ulonglong)puVar15[3]) {
              puVar18 = (undefined8 *)*puVar15;
            }
            uVar1 = puVar12[2];
            uVar2 = puVar15[2];
            uVar16 = uVar2;
            if (uVar1 < uVar2) {
              uVar16 = uVar1;
            }
            iVar11 = FUN_140034070(puVar18,puVar17,uVar16);
            bVar10 = uVar2 < uVar1;
            if (iVar11 != 0) {
              bVar10 = iVar11 < 0;
            }
            if (bVar10) break;
            iVar11 = FUN_140034070(puVar17,puVar18,uVar16);
            bVar10 = uVar1 < uVar2;
            if (iVar11 != 0) {
              bVar10 = iVar11 < 0;
            }
            local_60 = puVar15 + 4;
            if (bVar10) goto LAB_140027210;
            puVar18 = puVar12 + -4;
            if (puVar15 + 4 != puVar12) {
              uVar3 = *puVar18;
              uVar4 = puVar12[-3];
              uVar5 = puVar12[-2];
              uVar6 = puVar12[-1];
              uVar7 = *puVar15;
              uVar8 = puVar15[1];
              uVar9 = puVar15[3];
              puVar12[-2] = puVar15[2];
              puVar12[-1] = uVar9;
              *puVar18 = uVar7;
              puVar12[-3] = uVar8;
              local_98 = (undefined4)uVar3;
              uStack_94 = (undefined4)((ulonglong)uVar3 >> 0x20);
              uStack_90 = (undefined4)uVar4;
              uStack_8c = (undefined4)((ulonglong)uVar4 >> 0x20);
              puVar15[2] = uVar5;
              puVar15[3] = uVar6;
              *(undefined4 *)puVar15 = local_98;
              *(undefined4 *)((longlong)puVar15 + 4) = uStack_94;
              *(undefined4 *)(puVar15 + 1) = uStack_90;
              *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_8c;
            }
            puVar17 = puVar15 + -4;
            puVar12 = puVar18;
            local_60 = puVar15;
            if (puVar15 <= param_2) goto LAB_140027210;
          }
          puVar17 = puVar15 + -4;
          local_60 = puVar15;
        } while (param_2 < puVar15);
      }
LAB_140027210:
      if (puVar13 == param_4 && local_60 == param_2) {
        *param_1 = puVar12;
        param_1[1] = puVar14;
        return;
      }
      if (local_60 == param_2) {
        if ((puVar14 != puVar13) && (puVar12 != puVar14)) {
          uVar3 = *puVar12;
          uVar4 = puVar12[1];
          uVar5 = puVar12[2];
          uVar6 = puVar12[3];
          uVar7 = *puVar14;
          uVar8 = puVar14[1];
          uVar9 = puVar14[3];
          puVar12[2] = puVar14[2];
          puVar12[3] = uVar9;
          *puVar12 = uVar7;
          puVar12[1] = uVar8;
          local_98 = (undefined4)uVar3;
          uStack_94 = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_90 = (undefined4)uVar4;
          uStack_8c = (undefined4)((ulonglong)uVar4 >> 0x20);
          puVar14[2] = uVar5;
          puVar14[3] = uVar6;
          *(undefined4 *)puVar14 = local_98;
          *(undefined4 *)((longlong)puVar14 + 4) = uStack_94;
          *(undefined4 *)(puVar14 + 1) = uStack_90;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_8c;
        }
        if (puVar12 != puVar13) {
          uVar3 = *puVar12;
          uVar4 = puVar12[1];
          uVar5 = puVar12[2];
          uVar6 = puVar12[3];
          uVar7 = *puVar13;
          uVar8 = puVar13[1];
          uVar9 = puVar13[3];
          puVar12[2] = puVar13[2];
          puVar12[3] = uVar9;
          *puVar12 = uVar7;
          puVar12[1] = uVar8;
          local_98 = (undefined4)uVar3;
          uStack_94 = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_90 = (undefined4)uVar4;
          uStack_8c = (undefined4)((ulonglong)uVar4 >> 0x20);
          puVar13[2] = uVar5;
          puVar13[3] = uVar6;
          *(undefined4 *)puVar13 = local_98;
          *(undefined4 *)((longlong)puVar13 + 4) = uStack_94;
          *(undefined4 *)(puVar13 + 1) = uStack_90;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_8c;
        }
        puVar13 = puVar13 + 4;
        puVar15 = puVar14 + 4;
        puVar17 = puVar12 + 4;
      }
      else {
        puVar18 = local_60 + -4;
        if (puVar13 == param_4) {
          puVar17 = puVar12 + -4;
          if (local_60 != puVar12) {
            uVar3 = *puVar18;
            uVar4 = local_60[-3];
            uVar5 = local_60[-2];
            uVar6 = local_60[-1];
            uVar7 = *puVar17;
            uVar8 = puVar12[-3];
            uVar9 = puVar12[-1];
            local_60[-2] = puVar12[-2];
            local_60[-1] = uVar9;
            *puVar18 = uVar7;
            local_60[-3] = uVar8;
            local_98 = (undefined4)uVar3;
            uStack_94 = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_90 = (undefined4)uVar4;
            uStack_8c = (undefined4)((ulonglong)uVar4 >> 0x20);
            puVar12[-2] = uVar5;
            puVar12[-1] = uVar6;
            *(undefined4 *)puVar17 = local_98;
            *(undefined4 *)((longlong)puVar12 + -0x1c) = uStack_94;
            *(undefined4 *)(puVar12 + -3) = uStack_90;
            *(undefined4 *)((longlong)puVar12 + -0x14) = uStack_8c;
          }
          puVar15 = puVar14 + -4;
          local_60 = puVar18;
          if (puVar12 != puVar14) {
            uVar3 = *puVar17;
            uVar4 = puVar12[-3];
            uVar5 = puVar12[-2];
            uVar6 = puVar12[-1];
            uVar7 = *puVar15;
            uVar8 = puVar14[-3];
            uVar9 = puVar14[-1];
            puVar12[-2] = puVar14[-2];
            puVar12[-1] = uVar9;
            *puVar17 = uVar7;
            puVar12[-3] = uVar8;
            local_98 = (undefined4)uVar3;
            uStack_94 = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_90 = (undefined4)uVar4;
            uStack_8c = (undefined4)((ulonglong)uVar4 >> 0x20);
            puVar14[-2] = uVar5;
            puVar14[-1] = uVar6;
            *(undefined4 *)puVar15 = local_98;
            *(undefined4 *)((longlong)puVar14 + -0x1c) = uStack_94;
            *(undefined4 *)(puVar14 + -3) = uStack_90;
            *(undefined4 *)((longlong)puVar14 + -0x14) = uStack_8c;
          }
        }
        else {
          if (puVar13 != puVar18) {
            uVar3 = *puVar13;
            uVar4 = puVar13[1];
            uVar5 = puVar13[2];
            uVar6 = puVar13[3];
            uVar7 = *puVar18;
            uVar8 = local_60[-3];
            uVar9 = local_60[-1];
            puVar13[2] = local_60[-2];
            puVar13[3] = uVar9;
            *puVar13 = uVar7;
            puVar13[1] = uVar8;
            local_98 = (undefined4)uVar3;
            uStack_94 = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_90 = (undefined4)uVar4;
            uStack_8c = (undefined4)((ulonglong)uVar4 >> 0x20);
            local_60[-2] = uVar5;
            local_60[-1] = uVar6;
            *(undefined4 *)puVar18 = local_98;
            *(undefined4 *)((longlong)local_60 + -0x1c) = uStack_94;
            *(undefined4 *)(local_60 + -3) = uStack_90;
            *(undefined4 *)((longlong)local_60 + -0x14) = uStack_8c;
          }
          puVar13 = puVar13 + 4;
          puVar15 = puVar14;
          local_60 = puVar18;
          puVar17 = puVar12;
        }
      }
      goto joined_r0x000140026fdf;
    }
    puVar15 = puVar13;
    if (0xf < (ulonglong)puVar13[3]) {
      puVar15 = (undefined8 *)*puVar13;
    }
    puVar12 = puVar17;
    if (0xf < (ulonglong)puVar17[3]) {
      puVar12 = (undefined8 *)*puVar17;
    }
    uVar1 = puVar13[2];
    uVar2 = puVar17[2];
    uVar16 = uVar2;
    if (uVar1 < uVar2) {
      uVar16 = uVar1;
    }
    iVar11 = FUN_140034070(puVar12,puVar15,uVar16);
    bVar10 = uVar2 < uVar1;
    if (iVar11 != 0) {
      bVar10 = iVar11 < 0;
    }
    if (!bVar10) {
      iVar11 = FUN_140034070(puVar15,puVar12,uVar16);
      bVar10 = uVar1 < uVar2;
      if (iVar11 != 0) {
        bVar10 = iVar11 < 0;
      }
      if (bVar10) goto LAB_1400270c3;
      if (puVar13 != puVar14) {
        uVar3 = *puVar14;
        uVar4 = puVar14[1];
        uVar5 = puVar14[2];
        uVar6 = puVar14[3];
        uVar7 = *puVar13;
        uVar8 = puVar13[1];
        uVar9 = puVar13[3];
        puVar14[2] = puVar13[2];
        puVar14[3] = uVar9;
        *puVar14 = uVar7;
        puVar14[1] = uVar8;
        local_98 = (undefined4)uVar3;
        uStack_94 = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_90 = (undefined4)uVar4;
        uStack_8c = (undefined4)((ulonglong)uVar4 >> 0x20);
        puVar13[2] = uVar5;
        puVar13[3] = uVar6;
        *(undefined4 *)puVar13 = local_98;
        *(undefined4 *)((longlong)puVar13 + 4) = uStack_94;
        *(undefined4 *)(puVar13 + 1) = uStack_90;
        *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_8c;
      }
      puVar14 = puVar14 + 4;
    }
    puVar13 = puVar13 + 4;
    puVar15 = puVar14;
  } while( true );
}


/* FUN_1400273d0 */

void FUN_1400273d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar1 = param_1[2];
  puVar12 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar12 = (undefined8 *)*param_1;
  }
  puVar15 = (undefined8 *)*param_2;
  uVar16 = param_2[2];
  uVar14 = param_2[3];
  puVar11 = param_2;
  if (0xf < uVar14) {
    puVar11 = puVar15;
  }
  uVar13 = uVar16;
  if (uVar1 < uVar16) {
    uVar13 = uVar1;
  }
  iVar10 = FUN_140034070(puVar11,puVar12,uVar13);
  bVar9 = uVar1 <= uVar16;
  if (iVar10 != 0) {
    bVar9 = -1 < iVar10;
  }
  if ((param_2 != param_1) && (!bVar9)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = *param_1;
    uVar7 = param_1[1];
    uVar8 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar8;
    *param_2 = uVar6;
    param_2[1] = uVar7;
    local_58 = (undefined4)uVar2;
    uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_50 = (undefined4)uVar3;
    uStack_4c = (undefined4)((ulonglong)uVar3 >> 0x20);
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    *(undefined4 *)param_1 = local_58;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_54;
    *(undefined4 *)(param_1 + 1) = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_4c;
    puVar15 = (undefined8 *)*param_2;
    uVar16 = param_2[2];
    uVar14 = param_2[3];
  }
  puVar12 = param_2;
  if (0xf < uVar14) {
    puVar12 = puVar15;
  }
  uVar1 = param_3[2];
  puVar11 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar11 = (undefined8 *)*param_3;
  }
  uVar13 = uVar1;
  if (uVar16 < uVar1) {
    uVar13 = uVar16;
  }
  iVar10 = FUN_140034070(puVar11,puVar12,uVar13);
  bVar9 = uVar1 < uVar16;
  if (iVar10 != 0) {
    bVar9 = iVar10 < 0;
  }
  if (bVar9) {
    if (param_3 != param_2) {
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar8 = param_2[3];
      param_3[2] = param_2[2];
      param_3[3] = uVar8;
      *param_3 = uVar6;
      param_3[1] = uVar7;
      local_58 = (undefined4)uVar2;
      uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50 = (undefined4)uVar3;
      uStack_4c = (undefined4)((ulonglong)uVar3 >> 0x20);
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      *(undefined4 *)param_2 = local_58;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_54;
      *(undefined4 *)(param_2 + 1) = uStack_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_4c;
      puVar15 = (undefined8 *)*param_2;
      uVar16 = param_2[2];
      uVar14 = param_2[3];
    }
    uVar1 = param_1[2];
    puVar12 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar12 = (undefined8 *)*param_1;
    }
    if (uVar14 < 0x10) {
      puVar15 = param_2;
    }
    uVar14 = uVar16;
    if (uVar1 < uVar16) {
      uVar14 = uVar1;
    }
    iVar10 = FUN_140034070(puVar15,puVar12,uVar14);
    bVar9 = uVar1 <= uVar16;
    if (iVar10 != 0) {
      bVar9 = -1 < iVar10;
    }
    if ((param_2 != param_1) && (!bVar9)) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = *param_1;
      uVar7 = param_1[1];
      uVar8 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar8;
      *param_2 = uVar6;
      param_2[1] = uVar7;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      *param_1 = uVar2;
      param_1[1] = uVar3;
    }
  }
  return;
}


/* FUN_140027580 */

undefined * FUN_140027580(void)

{
  return &DAT_14003f958;
}


/* FUN_140027590 */

ulonglong *
FUN_140027590(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = param_1[2];
  uVar4 = 0x7fffffffffffffff;
  if ((uVar5 ^ 0x7fffffffffffffff) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  param_2 = param_2 + uVar5;
  uVar1 = param_1[3];
  if ((-1 < (longlong)param_2) && (uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff))) {
    uVar4 = (uVar1 >> 1) + uVar1;
    if (uVar4 < (param_2 | 0xf)) {
      uVar4 = param_2 | 0xf;
    }
    if (uVar4 == 0xffffffffffffffff) {
      uVar6 = 0;
      uVar4 = 0xffffffffffffffff;
      goto LAB_1400275f9;
    }
    if (uVar4 + 1 < 0x1000) {
      uVar6 = FUN_1400329d0();
      goto LAB_1400275f9;
    }
    if (0xffffffffffffffd8 < uVar4 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
  }
  lVar3 = FUN_1400329d0(uVar4 + 0x28);
  uVar6 = lVar3 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar3;
LAB_1400275f9:
  param_1[2] = param_2;
  param_1[3] = uVar4;
  if (uVar1 < 0x10) {
    FUN_140034080(uVar6,param_1,param_4);
    FUN_140034080(uVar6 + param_4,param_5,param_6);
    FUN_140034080(uVar6 + param_4 + param_6,param_4 + (longlong)param_1,(uVar5 - param_4) + 1);
  }
  else {
    uVar4 = *param_1;
    FUN_140034080(uVar6,uVar4,param_4);
    FUN_140034080(uVar6 + param_4,param_5,param_6);
    FUN_140034080(uVar6 + param_4 + param_6,param_4 + uVar4,(uVar5 - param_4) + 1);
    uVar5 = uVar1 + 1;
    uVar7 = uVar4;
    if (0xfff < uVar5) {
      uVar7 = *(ulonglong *)(uVar4 - 8);
      if (0x1f < (uVar4 - 8) - uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(uVar7,uVar5);
  }
  *param_1 = uVar6;
  return param_1;
}


/* FUN_140027740 */

ulonglong *
FUN_140027740(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = param_1[2];
  uVar4 = 0x7fffffffffffffff;
  if ((uVar5 ^ 0x7fffffffffffffff) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  param_2 = param_2 + uVar5;
  uVar1 = param_1[3];
  if ((-1 < (longlong)param_2) && (uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff))) {
    uVar4 = (uVar1 >> 1) + uVar1;
    if (uVar4 < (param_2 | 0xf)) {
      uVar4 = param_2 | 0xf;
    }
    if (uVar4 == 0xffffffffffffffff) {
      uVar6 = 0;
      uVar4 = 0xffffffffffffffff;
      goto LAB_1400277a9;
    }
    if (uVar4 + 1 < 0x1000) {
      uVar6 = FUN_1400329d0();
      goto LAB_1400277a9;
    }
    if (0xffffffffffffffd8 < uVar4 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
  }
  lVar3 = FUN_1400329d0(uVar4 + 0x28);
  uVar6 = lVar3 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar3;
LAB_1400277a9:
  param_1[2] = param_2;
  param_1[3] = uVar4;
  if (uVar1 < 0x10) {
    FUN_140034080(uVar6,param_1,uVar5);
    FUN_140034080(uVar5 + uVar6,param_4,param_5);
    *(undefined1 *)(param_5 + uVar5 + uVar6) = 0;
  }
  else {
    uVar4 = *param_1;
    FUN_140034080(uVar6,uVar4,uVar5);
    FUN_140034080(uVar5 + uVar6,param_4,param_5);
    *(undefined1 *)(param_5 + uVar5 + uVar6) = 0;
    uVar5 = uVar1 + 1;
    uVar7 = uVar4;
    if (0xfff < uVar5) {
      uVar7 = *(ulonglong *)(uVar4 - 8);
      if (0x1f < (uVar4 - 8) - uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(uVar7,uVar5);
  }
  *param_1 = uVar6;
  return param_1;
}


/* FUN_1400278b0 */

undefined8 * FUN_1400278b0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  if (0xf < param_3 * 2) {
    FUN_140027a10();
    param_1[2] = 0;
  }
  for (uVar4 = 0; uVar4 < param_3; uVar4 = uVar4 + 1) {
    uVar1 = PTR_s_0123456789abcdef_14003f568[*(byte *)(param_2 + uVar4) >> 4];
    uVar2 = param_1[2];
    if (uVar2 < (ulonglong)param_1[3]) {
      param_1[2] = uVar2 + 1;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      *(undefined1 *)((longlong)puVar3 + uVar2) = uVar1;
      *(undefined1 *)((longlong)puVar3 + uVar2 + 1) = 0;
    }
    else {
      FUN_1400205f0(param_1,1);
    }
    uVar1 = PTR_s_0123456789abcdef_14003f568[*(byte *)(param_2 + uVar4) & 0xf];
    uVar2 = param_1[2];
    if (uVar2 < (ulonglong)param_1[3]) {
      param_1[2] = uVar2 + 1;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      *(undefined1 *)((longlong)puVar3 + uVar2) = uVar1;
      *(undefined1 *)((longlong)puVar3 + uVar2 + 1) = 0;
    }
    else {
      FUN_1400205f0(param_1,1);
    }
  }
  return param_1;
}


/* Unwind@1400279e0 */

void Unwind_1400279e0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(*(undefined8 *)(param_2 + 0x28));
  return;
}


/* FUN_140027a10 */

ulonglong * FUN_140027a10(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = param_1[2];
  uVar5 = 0x7fffffffffffffff;
  if ((uVar7 ^ 0x7fffffffffffffff) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  param_2 = param_2 + uVar7;
  uVar1 = param_1[3];
  if ((-1 < (longlong)param_2) && (uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff))) {
    uVar5 = (uVar1 >> 1) + uVar1;
    if (uVar5 < (param_2 | 0xf)) {
      uVar5 = param_2 | 0xf;
    }
    if (uVar5 == 0xffffffffffffffff) {
      uVar6 = 0;
      uVar5 = 0xffffffffffffffff;
      goto LAB_140027a74;
    }
    if (uVar5 + 1 < 0x1000) {
      uVar6 = FUN_1400329d0();
      goto LAB_140027a74;
    }
    if (0xffffffffffffffd8 < uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
  }
  lVar3 = FUN_1400329d0(uVar5 + 0x28);
  uVar6 = lVar3 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar3;
LAB_140027a74:
  param_1[2] = param_2;
  param_1[3] = uVar5;
  if (uVar1 < 0x10) {
    FUN_140034080(uVar6,param_1,uVar7 + 1);
  }
  else {
    uVar5 = *param_1;
    FUN_140034080(uVar6,uVar5,uVar7 + 1);
    uVar7 = uVar1 + 1;
    uVar4 = uVar5;
    if (0xfff < uVar7) {
      uVar4 = *(ulonglong *)(uVar5 - 8);
      if (0x1f < (uVar5 - 8) - uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar7 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(uVar4,uVar7);
  }
  *param_1 = uVar6;
  return param_1;
}


/* FUN_140027b50 */

ulonglong *
FUN_140027b50(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((longlong)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  uVar1 = param_1[3];
  uVar6 = 0x7fffffffffffffff;
  if (uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff)) {
    uVar6 = (uVar1 >> 1) + uVar1;
    if (uVar6 < (param_2 | 0xf)) {
      uVar6 = param_2 | 0xf;
    }
    if (uVar6 < 0xfff) {
      uVar7 = FUN_1400329d0(uVar6 + 1);
      goto LAB_140027bda;
    }
    if (0xffffffffffffffd7 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
  }
  lVar4 = FUN_1400329d0(uVar6 + 0x28);
  uVar7 = lVar4 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar7 - 8) = lVar4;
LAB_140027bda:
  param_1[2] = param_2;
  param_1[3] = uVar6;
  FUN_140034080(uVar7,param_4,param_2);
  *(undefined1 *)(uVar7 + param_2) = 0;
  if (0xf < uVar1) {
    uVar2 = *param_1;
    uVar6 = uVar1 + 1;
    uVar5 = uVar2;
    if (0xfff < uVar6) {
      uVar5 = *(ulonglong *)(uVar2 - 8);
      if (0x1f < (uVar2 - 8) - uVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar6 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(uVar5,uVar6);
  }
  *param_1 = uVar7;
  return param_1;
}


/* FUN_140027c50 */

void FUN_140027c50(undefined8 param_1,undefined8 param_2)

{
  FUN_140033fc0(param_1,param_2,0);
  return;
}


/* FUN_140027c80 */

undefined8 FUN_140027c80(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_f8 [64];
  undefined1 local_b8 [64];
  undefined4 local_78 [16];
  
  FUN_140027e60(local_b8,L"RealInjectorAuthKey_v2");
  uVar3 = FUN_1400280d0(local_b8);
  iVar2 = FUN_140033fb0(param_1,param_2,uVar3,0,0x40);
  uVar3 = 0;
  if (iVar2 != 0) {
    FUN_1400283a0(local_f8,L"RealInjectorAuthKey_v2");
    uVar3 = FUN_140028600(local_f8);
    iVar2 = FUN_140033f60(param_1,param_2,L"ECDSA_P256",uVar3,0,0x40);
    pcVar1 = DAT_1400395d8;
    if (iVar2 == 0) {
      uVar3 = *param_2;
      local_78[0] = 2;
      FUN_140033fd0(uVar3,L"Export Policy",local_78,4,0x80000040);
      uVar3 = FUN_140033f80(uVar3,0x40);
    }
    else {
      iVar2 = 0x14;
      do {
        (*pcVar1)(10);
        FUN_140027e60(local_78,L"RealInjectorAuthKey_v2");
        uVar3 = FUN_1400280d0(local_78);
        uVar3 = FUN_140033fb0(param_1,param_2,uVar3,0,0x40);
        if ((int)uVar3 == 0) {
          return 0;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return uVar3;
}


/* FUN_140027df0 */

void FUN_140027df0(void)

{
  FUN_140033f90();
  return;
}


/* FUN_140027e10 */

void FUN_140027e10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_140033f70(param_1,0,L"ECCPUBLICBLOB",0,param_2,param_3,param_4,0x40);
  return;
}


/* FUN_140027e60 */

void FUN_140027e60(byte *param_1,char *param_2)

{
  *param_1 = *param_2 - 0x40U ^ 0x40;
  param_1[1] = param_2[1] - 0x40U ^ 0x41;
  param_1[2] = param_2[2] - 0x40U ^ 0x42;
  param_1[3] = param_2[3] - 0x40U ^ 0x43;
  param_1[4] = param_2[4] - 0x40U ^ 0x44;
  param_1[5] = param_2[5] - 0x40U ^ 0x45;
  param_1[6] = param_2[6] - 0x40U ^ 0x46;
  param_1[7] = param_2[7] - 0x40U ^ 0x47;
  param_1[8] = param_2[8] - 0x40U ^ 0x48;
  param_1[9] = param_2[9] - 0x40U ^ 0x49;
  param_1[10] = param_2[10] - 0x40U ^ 0x4a;
  param_1[0xb] = param_2[0xb] - 0x40U ^ 0x4b;
  param_1[0xc] = param_2[0xc] - 0x40U ^ 0x4c;
  param_1[0xd] = param_2[0xd] - 0x40U ^ 0x4d;
  param_1[0xe] = param_2[0xe] - 0x40U ^ 0x4e;
  param_1[0xf] = param_2[0xf] - 0x40U ^ 0x4f;
  param_1[0x10] = param_2[0x10] - 0x40U ^ 0x50;
  param_1[0x11] = param_2[0x11] - 0x40U ^ 0x51;
  param_1[0x12] = param_2[0x12] - 0x40U ^ 0x52;
  param_1[0x13] = param_2[0x13] - 0x40U ^ 0x53;
  param_1[0x14] = param_2[0x14] - 0x40U ^ 0x54;
  param_1[0x15] = param_2[0x15] - 0x40U ^ 0x55;
  param_1[0x16] = param_2[0x16] - 0x40U ^ 0x56;
  param_1[0x17] = param_2[0x17] - 0x40U ^ 0x57;
  param_1[0x18] = param_2[0x18] - 0x40U ^ 0x58;
  param_1[0x19] = param_2[0x19] - 0x40U ^ 0x59;
  param_1[0x1a] = param_2[0x1a] - 0x40U ^ 0x5a;
  param_1[0x1b] = param_2[0x1b] - 0x40U ^ 0x5b;
  param_1[0x1c] = param_2[0x1c] - 0x40U ^ 0x5c;
  param_1[0x1d] = param_2[0x1d] - 0x40U ^ 0x5d;
  param_1[0x1e] = param_2[0x1e] - 0x40U ^ 0x5e;
  param_1[0x1f] = param_2[0x1f] - 0x40U ^ 0x5f;
  param_1[0x20] = param_2[0x20] - 0x40U ^ 0x60;
  param_1[0x21] = param_2[0x21] - 0x40U ^ 0x61;
  param_1[0x22] = param_2[0x22] - 0x40U ^ 0x62;
  param_1[0x23] = param_2[0x23] - 0x40U ^ 99;
  param_1[0x24] = param_2[0x24] - 0x40U ^ 100;
  param_1[0x25] = param_2[0x25] - 0x40U ^ 0x65;
  param_1[0x26] = param_2[0x26] - 0x40U ^ 0x66;
  param_1[0x27] = param_2[0x27] - 0x40U ^ 0x67;
  param_1[0x28] = param_2[0x28] - 0x40U ^ 0x68;
  param_1[0x29] = param_2[0x29] - 0x40U ^ 0x69;
  param_1[0x2a] = param_2[0x2a] - 0x40U ^ 0x6a;
  param_1[0x2b] = param_2[0x2b] - 0x40U ^ 0x6b;
  param_1[0x2c] = param_2[0x2c] - 0x40U ^ 0x6c;
  param_1[0x2d] = param_2[0x2d] - 0x40U ^ 0x6d;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  return;
}


/* FUN_1400280d0 */

longlong FUN_1400280d0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  
LAB_1400280d9:
  puVar3 = (ulonglong *)FUN_140031690();
  uVar9 = *puVar3;
  puVar3 = (ulonglong *)FUN_1400316a0();
  uVar6 = *puVar3;
  uVar5 = 0;
  do {
    if (uVar5 < uVar9) {
      return param_1 + 0xa3ae40;
    }
    bVar12 = *(byte *)(param_1 + uVar5);
    uVar7 = (uint)bVar12;
    uVar8 = uVar6 + 1;
    uVar11 = (uint)uVar5;
    bVar14 = (byte)uVar5;
    uVar2 = uVar6;
    if (uVar9 < uVar8) {
LAB_14002813d:
      if (uVar5 < uVar6) {
        return param_1 + 0x158bf00;
      }
      uVar1 = uVar6 + uVar9;
      if (uVar5 < uVar1) {
        if (uVar9 == uVar8) goto LAB_1400280ed;
        uVar2 = uVar8;
        if (uVar9 == uVar6 + 3) goto LAB_14002810f;
        if (uVar9 == uVar6 + 0x2a) {
          uVar11 = uVar7 + uVar11 + (uVar7 & uVar11) * -2;
          uVar9 = uVar1;
        }
        else {
          if (uVar9 != uVar6 + 2) goto LAB_1400280d9;
          uVar11 = uVar11 + uVar7 + (uVar7 & uVar11) * -2;
        }
LAB_1400282e7:
        uVar8 = ~(ulonglong)(uVar11 & 0xff);
        goto LAB_140028278;
      }
      if (uVar1 == 5) {
LAB_140028216:
        bVar14 = bVar14 + bVar12 + (bVar12 & (bVar14 | 0xc0)) * -2 + 0x80;
        *(byte *)(param_1 + uVar5) = bVar14;
        uVar5 = (~uVar6 + uVar5) - (ulonglong)bVar14;
        uVar6 = uVar8;
LAB_140028252:
        *(byte *)(param_1 + uVar5) = (byte)uVar5 + bVar12 + (bVar12 & (byte)uVar5) * -2;
        lVar4 = uVar5 - uVar9;
        uVar9 = uVar9 + 1;
        bVar12 = *(byte *)(param_1 + -2 + lVar4);
        uVar5 = lVar4 - 2;
        goto LAB_140028271;
      }
      if (uVar9 == uVar8) {
LAB_1400280ed:
        *(byte *)(param_1 + uVar5) = bVar14 + bVar12 + (bVar12 & (bVar14 | 0xc0)) * -2 + -0x80;
        uVar2 = uVar8;
      }
      else if (uVar9 != uVar6 + 2) {
        if (uVar9 == uVar6 + 3) {
          uVar11 = (uint)(byte)(bVar14 + bVar12 + (bVar12 & (bVar14 | 0x40)) * -2 + 0x80);
          goto LAB_1400282e7;
        }
        if (uVar9 == uVar6 + 4) goto LAB_140028271;
        if (uVar6 + 0x2a < uVar9) {
          cVar13 = bVar12 + bVar14 + (bVar14 & bVar12) * -2;
        }
        else {
          if (uVar9 == uVar6 + 6) goto LAB_14002810f;
          if (uVar9 == uVar6 + 7) goto LAB_1400280ed;
          cVar13 = bVar14 + bVar12 + (bVar12 & (bVar14 | 0x40)) * -2 + -0x80;
        }
        if (uVar6 < 2) {
          *(char *)(param_1 + uVar5) = cVar13;
          goto LAB_140028115;
        }
        goto LAB_1400280ed;
      }
LAB_14002810f:
      uVar6 = uVar2;
      uVar5 = uVar5 - 1;
    }
    else {
      if (uVar9 != uVar8) {
        if (uVar9 == uVar6 + 2) goto LAB_140028252;
        if (uVar9 == uVar6 + 3) goto LAB_140028216;
        if (uVar9 == uVar6 + 5) {
          bVar10 = bVar14 + bVar12 + ((bVar14 | 0x40) & bVar12) * -2 + 0x80;
          uVar11 = (uint)bVar10;
          *(byte *)(param_1 + uVar5) =
               bVar14 + bVar12 + ((bVar14 | 0x40) & bVar12) * -2 + bVar10 + -0x80;
          uVar9 = uVar9 + uVar6;
          goto LAB_1400282e7;
        }
        if (uVar9 == uVar6 + 4) goto LAB_14002810f;
        if (uVar9 != uVar6 + 9) goto LAB_14002813d;
        goto LAB_1400280ed;
      }
LAB_140028271:
      uVar8 = (ulonglong)bVar12;
      uVar5 = uVar5 + uVar6;
LAB_140028278:
      uVar5 = uVar5 + uVar8;
    }
LAB_140028115:
    uVar5 = uVar5 + 1;
    if (0x33 < uVar5) {
      return param_1;
    }
  } while( true );
}


/* FUN_1400283a0 */

void FUN_1400283a0(byte *param_1,char *param_2)

{
  *param_1 = *param_2 + 0x66U ^ 0xea;
  param_1[1] = param_2[1] + 0x66U ^ 0xeb;
  param_1[2] = param_2[2] + 0x66U ^ 0xec;
  param_1[3] = param_2[3] + 0x66U ^ 0xed;
  param_1[4] = param_2[4] + 0x66U ^ 0xee;
  param_1[5] = param_2[5] + 0x66U ^ 0xef;
  param_1[6] = param_2[6] + 0x66U ^ 0xf0;
  param_1[7] = param_2[7] + 0x66U ^ 0xf1;
  param_1[8] = param_2[8] + 0x66U ^ 0xf2;
  param_1[9] = param_2[9] + 0x66U ^ 0xf3;
  param_1[10] = param_2[10] + 0x66U ^ 0xf4;
  param_1[0xb] = param_2[0xb] + 0x66U ^ 0xf5;
  param_1[0xc] = param_2[0xc] + 0x66U ^ 0xf6;
  param_1[0xd] = param_2[0xd] + 0x66U ^ 0xf7;
  param_1[0xe] = param_2[0xe] + 0x66U ^ 0xf8;
  param_1[0xf] = param_2[0xf] + 0x66U ^ 0xf9;
  param_1[0x10] = param_2[0x10] + 0x66U ^ 0xfa;
  param_1[0x11] = param_2[0x11] + 0x66U ^ 0xfb;
  param_1[0x12] = param_2[0x12] + 0x66U ^ 0xfc;
  param_1[0x13] = param_2[0x13] + 0x66U ^ 0xfd;
  param_1[0x14] = param_2[0x14] + 0x66U ^ 0xfe;
  param_1[0x15] = 0x99 - param_2[0x15];
  param_1[0x16] = param_2[0x16] + 0x66;
  param_1[0x17] = (param_2[0x17] ^ 1U) + 0x66;
  param_1[0x18] = param_2[0x18] + 0x66U ^ 2;
  param_1[0x19] = param_2[0x19] + 0x66U ^ 3;
  param_1[0x1a] = param_2[0x1a] + 0x66U ^ 4;
  param_1[0x1b] = param_2[0x1b] + 0x66U ^ 5;
  param_1[0x1c] = param_2[0x1c] + 0x66U ^ 6;
  param_1[0x1d] = param_2[0x1d] + 0x66U ^ 7;
  param_1[0x1e] = param_2[0x1e] + 0x66U ^ 8;
  param_1[0x1f] = param_2[0x1f] + 0x66U ^ 9;
  param_1[0x20] = param_2[0x20] + 0x66U ^ 10;
  param_1[0x21] = param_2[0x21] + 0x66U ^ 0xb;
  param_1[0x22] = param_2[0x22] + 0x66U ^ 0xc;
  param_1[0x23] = param_2[0x23] + 0x66U ^ 0xd;
  param_1[0x24] = param_2[0x24] + 0x66U ^ 0xe;
  param_1[0x25] = param_2[0x25] + 0x66U ^ 0xf;
  param_1[0x26] = param_2[0x26] + 0x66U ^ 0x10;
  param_1[0x27] = param_2[0x27] + 0x66U ^ 0x11;
  param_1[0x28] = param_2[0x28] + 0x66U ^ 0x12;
  param_1[0x29] = param_2[0x29] + 0x66U ^ 0x13;
  param_1[0x2a] = param_2[0x2a] + 0x66U ^ 0x14;
  param_1[0x2b] = param_2[0x2b] + 0x66U ^ 0x15;
  param_1[0x2c] = param_2[0x2c] + 0x66U ^ 0x16;
  param_1[0x2d] = param_2[0x2d] + 0x66U ^ 0x17;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return;
}


/* FUN_140028600 */

longlong FUN_140028600(longlong param_1)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong uVar11;
  char cVar12;
  
LAB_14002860d:
  puVar4 = (ulonglong *)FUN_140031690();
  uVar8 = *puVar4;
  puVar4 = (ulonglong *)FUN_1400316a0();
  uVar6 = *puVar4;
  uVar5 = 0;
  do {
    if (uVar5 < uVar8) {
      return param_1 + 0xe49122;
    }
    bVar2 = *(byte *)(param_1 + uVar5);
    uVar11 = (ulonglong)bVar2;
    uVar1 = uVar6 + 1;
    cVar3 = (char)uVar5;
    if (uVar8 < uVar1) {
LAB_14002863f:
      if (uVar5 < uVar6) {
        return param_1 + 0x1797138;
      }
      uVar9 = uVar6 + uVar8;
      if (uVar5 < uVar9) {
        if (uVar8 == uVar6 + 8) goto LAB_140028860;
        if (uVar8 != uVar6 + 0x28) {
          if (uVar8 == uVar6 + 0x10) {
            bVar10 = (cVar3 + bVar2 + (cVar3 + 8U & bVar2) * -2) - 0x30;
            *(byte *)(param_1 + uVar5) = cVar3 + bVar2 + (cVar3 - 6U & bVar2) * -2 + bVar10 + '$';
            goto LAB_140028827;
          }
          if (uVar8 == uVar6 + 2) goto LAB_140028750;
          goto LAB_14002860d;
        }
      }
      else {
        if (uVar8 < uVar6 + 9) {
          cVar12 = cVar3 + bVar2 + (bVar2 & cVar3 - 0x16U) * -2 + -0x7c;
        }
        else {
          if (uVar8 == uVar1) goto LAB_140028750;
          cVar12 = cVar3 + bVar2 + (bVar2 & cVar3 + 0x32U) * -2 + -0x2c;
        }
        if (uVar8 != uVar1) {
          if (uVar8 == uVar6 + 3) goto LAB_140028880;
          if (uVar8 == uVar6 + 4) {
            bVar10 = cVar3 + bVar2 + (bVar2 & cVar3 - 0x1aU) * -2 + 0x9c;
            goto LAB_140028827;
          }
          if (uVar8 == uVar6 + 6) {
LAB_1400286ed:
            bVar10 = cVar3 + bVar2 + (cVar3 - 0x32U & bVar2) * -2 + 0x2c;
            *(byte *)(param_1 + uVar5) = bVar10;
            lVar7 = (~uVar6 + uVar5) - (ulonglong)bVar10;
            *(byte *)(param_1 + lVar7) =
                 (char)lVar7 + bVar2 + ((char)lVar7 + 0xb8U & bVar2) * -2 + -0x50;
            lVar7 = lVar7 - uVar8;
            uVar8 = uVar8 + 1;
            uVar11 = (ulonglong)*(byte *)(param_1 + -2 + lVar7);
            uVar5 = lVar7 - 2;
            uVar6 = uVar1;
            goto LAB_140028750;
          }
          if (uVar8 == uVar6 + 9) goto LAB_140028750;
          if (uVar6 + 6 < uVar8) {
            cVar12 = cVar3 + bVar2 + (bVar2 & cVar3 - 0xcU) * -2 + 'H';
          }
          else if (uVar8 == uVar6 + 2) goto LAB_1400286ed;
          *(char *)(param_1 + uVar5) = cVar12;
          goto joined_r0x00014002888d;
        }
LAB_140028860:
        *(byte *)(param_1 + uVar5) = cVar3 + bVar2 + (bVar2 & cVar3 + 0x26U) * -2 + '\x1c';
        uVar6 = uVar1;
      }
LAB_140028880:
      uVar5 = uVar5 - 1;
    }
    else if (uVar8 == uVar1) {
LAB_140028750:
      uVar5 = uVar5 + uVar6 + uVar11;
    }
    else {
      if (uVar8 == uVar6 + 2) goto LAB_1400286ed;
      if (uVar8 != uVar6 + 3) {
        if (uVar8 == uVar6 + 6) goto LAB_140028880;
        if (uVar8 != uVar6 + 8) goto LAB_14002863f;
        goto LAB_140028860;
      }
      bVar10 = cVar3 + bVar2 + (bVar2 & cVar3 + 0x3aU) * -2 + 0xa4;
      uVar9 = uVar8;
LAB_140028827:
      uVar5 = uVar5 + ~(ulonglong)bVar10;
      uVar8 = uVar9;
    }
joined_r0x00014002888d:
    uVar5 = uVar5 + 1;
    if (0x32 < uVar5) {
      return param_1;
    }
  } while( true );
}


/* FUN_140028930 */

void FUN_140028930(ulonglong *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_4 != 0) {
    uVar2 = param_1[1];
    if (param_4 <= param_1[2] - uVar2) {
      uVar7 = uVar2 - param_2;
      if (param_4 < uVar7) {
        FUN_140034080(uVar2,uVar2 - param_4,param_4);
        param_1[1] = uVar2 + param_4;
        lVar5 = (uVar2 - param_4) - param_2;
        FUN_140034090(uVar2 - lVar5,param_2,lVar5);
      }
      else {
        FUN_140034080(param_2 + param_4,param_2,uVar7);
        param_1[1] = param_2 + param_4 + uVar7;
      }
      FUN_140034080(param_2,param_3,param_4);
      return;
    }
    uVar7 = *param_1;
    uVar8 = uVar2 - uVar7;
    if ((uVar8 ^ 0x7fffffffffffffff) < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_140020c20();
    }
    uVar1 = uVar8 + param_4;
    uVar4 = param_1[2] - uVar7;
    uVar9 = (uVar4 >> 1) + uVar4;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if ((uVar4 >> 1 ^ 0x7fffffffffffffff) < uVar4) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 == 0) {
      uVar4 = 0;
    }
    else if (uVar9 < 0x1000) {
      uVar4 = FUN_1400329d0(uVar9);
    }
    else {
      if (0xffffffffffffffd8 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_140020760();
      }
      lVar5 = FUN_1400329d0(uVar9 + 0x27);
      uVar4 = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar4 - 8) = lVar5;
    }
    lVar5 = (param_2 - uVar7) + uVar4;
    FUN_140034080(lVar5,param_3,param_4);
    uVar6 = uVar4;
    if (uVar2 != param_2 || param_4 != 1) {
      FUN_140034080(uVar4,uVar7,param_2 - uVar7);
      uVar8 = uVar2 - param_2;
      uVar6 = lVar5 + param_4;
      uVar7 = param_2;
    }
    FUN_140034080(uVar6,uVar7,uVar8);
    uVar2 = *param_1;
    if (uVar2 != 0) {
      uVar8 = param_1[2] - uVar2;
      uVar7 = uVar2;
      if (0xfff < uVar8) {
        uVar7 = *(ulonglong *)(uVar2 - 8);
        if (0x1f < (uVar2 - 8) - uVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar8 = uVar8 + 0x27;
      }
      thunk_FUN_1400340c0(uVar7,uVar8);
    }
    *param_1 = uVar4;
    param_1[1] = uVar1 + uVar4;
    param_1[2] = uVar9 + uVar4;
  }
  return;
}


/* FUN_140028b50 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_140028b50(undefined1 (*param_1) [16],undefined8 param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  unkuint10 Var9;
  undefined1 auVar10 [16];
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  undefined4 uVar27;
  undefined1 uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  uint uVar34;
  undefined1 (*pauVar35) [16];
  ulonglong uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  char cVar48;
  char cVar49;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  byte local_a8;
  byte local_98;
  ulonglong local_88;
  longlong local_78;
  uint local_64 [9];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  local_64[1] = 0xfffffffe;
  local_64[2] = 0xffffffff;
  if (param_3 == 0) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    return param_1;
  }
  local_64[0] = 0;
  (*DAT_140039890)(param_2,param_3,0x40000001,0,local_64);
  uVar30 = (ulonglong)local_64[0];
  local_88 = 0;
  local_78 = 0;
  if (uVar30 != 0) {
    if (local_64[0] < 0x1000) {
      local_88 = FUN_1400329d0(uVar30);
    }
    else {
      lVar29 = FUN_1400329d0(uVar30 + 0x27);
      local_88 = lVar29 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(local_88 - 8) = lVar29;
    }
    local_78 = local_88 + uVar30;
    FUN_1400340a0(local_88,0,uVar30);
  }
  (*DAT_140039890)(param_2,param_3,0x40000001,local_88,local_64);
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  uVar30 = FUN_140034260(local_88);
  if ((longlong)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  uVar36 = 0xf;
  pauVar35 = param_1;
  if (0xf < uVar30) {
    uVar31 = uVar30 | 0xf;
    uVar36 = 0x16;
    if (0x16 < uVar31) {
      uVar36 = uVar31;
    }
    if (uVar31 < 0xfff) {
      pauVar35 = (undefined1 (*) [16])FUN_1400329d0(uVar36 + 1);
    }
    else {
      lVar29 = FUN_1400329d0(uVar36 + 0x28);
      pauVar35 = (undefined1 (*) [16])(lVar29 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(pauVar35[-1] + 8) = lVar29;
    }
    *(undefined1 (**) [16])*param_1 = pauVar35;
  }
  *(ulonglong *)param_1[1] = uVar30;
  *(ulonglong *)(param_1[1] + 8) = uVar36;
  FUN_140034080(pauVar35,local_88,uVar30);
  (*pauVar35)[uVar30] = 0;
  uVar30 = *(ulonglong *)param_1[1];
  auVar10 = s___3______________________________14003560d._3_16_;
  auVar38 = s___3______________________________14003560d._19_16_;
  auVar40 = s___3______________________________14003560d._35_16_;
  cVar11 = s___3______________________________14003560d[0x33];
  cVar12 = s___3______________________________14003560d[0x34];
  cVar13 = s___3______________________________14003560d[0x35];
  cVar14 = s___3______________________________14003560d[0x36];
  cVar15 = s___3______________________________14003560d[0x37];
  cVar16 = s___3______________________________14003560d[0x38];
  cVar17 = s___3______________________________14003560d[0x39];
  cVar18 = s___3______________________________14003560d[0x3a];
  cVar19 = s___3______________________________14003560d[0x3b];
  cVar20 = s___3______________________________14003560d[0x3c];
  cVar21 = s___3______________________________14003560d[0x3d];
  cVar22 = s___3______________________________14003560d[0x3e];
  cVar23 = s___3______________________________14003560d[0x3f];
  cVar24 = s___3______________________________14003560d[0x40];
  cVar25 = s___3______________________________14003560d[0x41];
  cVar26 = s___3______________________________14003560d[0x42];
  while( true ) {
    s___3______________________________14003560d._3_16_ = auVar10;
    s___3______________________________14003560d._19_16_ = auVar38;
    s___3______________________________14003560d._35_16_ = auVar40;
    s___3______________________________14003560d[0x33] = cVar11;
    s___3______________________________14003560d[0x34] = cVar12;
    s___3______________________________14003560d[0x35] = cVar13;
    s___3______________________________14003560d[0x36] = cVar14;
    s___3______________________________14003560d[0x37] = cVar15;
    s___3______________________________14003560d[0x38] = cVar16;
    s___3______________________________14003560d[0x39] = cVar17;
    s___3______________________________14003560d[0x3a] = cVar18;
    s___3______________________________14003560d[0x3b] = cVar19;
    s___3______________________________14003560d[0x3c] = cVar20;
    s___3______________________________14003560d[0x3d] = cVar21;
    s___3______________________________14003560d[0x3e] = cVar22;
    s___3______________________________14003560d[0x3f] = cVar23;
    s___3______________________________14003560d[0x40] = cVar24;
    s___3______________________________14003560d[0x41] = cVar25;
    s___3______________________________14003560d[0x42] = cVar26;
    if (uVar30 == 0) goto LAB_140028d1a;
    pauVar35 = param_1;
    if (0xf < *(ulonglong *)(param_1[1] + 8)) {
      pauVar35 = *(undefined1 (**) [16])*param_1;
    }
    if (pauVar35[-1][uVar30 + 0xf] != '=') break;
    *(ulonglong *)param_1[1] = uVar30 - 1;
    pauVar35[-1][uVar30 + 0xf] = 0;
    uVar30 = *(ulonglong *)param_1[1];
    auVar10 = s___3______________________________14003560d._3_16_;
    auVar38 = s___3______________________________14003560d._19_16_;
    auVar40 = s___3______________________________14003560d._35_16_;
    cVar11 = s___3______________________________14003560d[0x33];
    cVar12 = s___3______________________________14003560d[0x34];
    cVar13 = s___3______________________________14003560d[0x35];
    cVar14 = s___3______________________________14003560d[0x36];
    cVar15 = s___3______________________________14003560d[0x37];
    cVar16 = s___3______________________________14003560d[0x38];
    cVar17 = s___3______________________________14003560d[0x39];
    cVar18 = s___3______________________________14003560d[0x3a];
    cVar19 = s___3______________________________14003560d[0x3b];
    cVar20 = s___3______________________________14003560d[0x3c];
    cVar21 = s___3______________________________14003560d[0x3d];
    cVar22 = s___3______________________________14003560d[0x3e];
    cVar23 = s___3______________________________14003560d[0x3f];
    cVar24 = s___3______________________________14003560d[0x40];
    cVar25 = s___3______________________________14003560d[0x41];
    cVar26 = s___3______________________________14003560d[0x42];
  }
  pauVar35 = param_1;
  if (0xf < *(ulonglong *)(param_1[1] + 8)) {
    pauVar35 = *(undefined1 (**) [16])*param_1;
  }
  pauVar33 = pauVar35;
  if (uVar30 < 4) goto LAB_14002919e;
  if (uVar30 < 0x10) {
    uVar36 = 0;
    goto LAB_140029095;
  }
  uVar36 = uVar30 & 0xfffffffffffffff0;
  uVar31 = 0;
  do {
    pcVar1 = *pauVar35 + uVar31;
    auVar39[0] = -(*pcVar1 == auVar40[0]);
    auVar39[1] = -(pcVar1[1] == auVar40[1]);
    auVar39[2] = -(pcVar1[2] == auVar40[2]);
    auVar39[3] = -(pcVar1[3] == auVar40[3]);
    auVar39[4] = -(pcVar1[4] == auVar40[4]);
    auVar39[5] = -(pcVar1[5] == auVar40[5]);
    auVar39[6] = -(pcVar1[6] == auVar40[6]);
    auVar39[7] = -(pcVar1[7] == auVar40[7]);
    auVar39[8] = -(pcVar1[8] == auVar40[8]);
    auVar39[9] = -(pcVar1[9] == auVar40[9]);
    auVar39[10] = -(pcVar1[10] == auVar40[10]);
    auVar39[0xb] = -(pcVar1[0xb] == auVar40[0xb]);
    auVar39[0xc] = -(pcVar1[0xc] == auVar40[0xc]);
    auVar39[0xd] = -(pcVar1[0xd] == auVar40[0xd]);
    auVar39[0xe] = -(pcVar1[0xe] == auVar40[0xe]);
    auVar39[0xf] = -(pcVar1[0xf] == auVar40[0xf]);
    auVar37[0] = -(*pcVar1 == cVar11);
    auVar37[1] = -(pcVar1[1] == cVar12);
    auVar37[2] = -(pcVar1[2] == cVar13);
    auVar37[3] = -(pcVar1[3] == cVar14);
    auVar37[4] = -(pcVar1[4] == cVar15);
    auVar37[5] = -(pcVar1[5] == cVar16);
    auVar37[6] = -(pcVar1[6] == cVar17);
    auVar37[7] = -(pcVar1[7] == cVar18);
    auVar37[8] = -(pcVar1[8] == cVar19);
    auVar37[9] = -(pcVar1[9] == cVar20);
    auVar37[10] = -(pcVar1[10] == cVar21);
    auVar37[0xb] = -(pcVar1[0xb] == cVar22);
    auVar37[0xc] = -(pcVar1[0xc] == cVar23);
    auVar37[0xd] = -(pcVar1[0xd] == cVar24);
    auVar37[0xe] = -(pcVar1[0xe] == cVar25);
    auVar37[0xf] = -(pcVar1[0xf] == cVar26);
    auVar39 = auVar39 | auVar37;
    auVar37 = auVar37 & auVar38 | ~auVar37 & auVar10;
    local_a8 = auVar39[0];
    if ((local_a8 & 1) != 0) {
      (*pauVar35)[uVar31] = auVar37[0];
    }
    uVar32 = auVar39._0_4_;
    if ((uVar32 >> 8 & 1) != 0) {
      (*pauVar35)[uVar31 + 1] = auVar37[1];
    }
    if ((uVar32 >> 0x10 & 1) != 0) {
      (*pauVar35)[uVar31 + 2] = auVar37[2];
    }
    if ((uVar32 >> 0x18 & 1) != 0) {
      (*pauVar35)[uVar31 + 3] = auVar37[3];
    }
    if ((auVar39._4_2_ & 1) != 0) {
      (*pauVar35)[uVar31 + 4] = auVar37[4];
    }
    if ((auVar39._4_2_ >> 8 & 1) != 0) {
      (*pauVar35)[uVar31 + 5] = auVar37[5];
    }
    if ((auVar39._6_2_ & 1) != 0) {
      (*pauVar35)[uVar31 + 6] = auVar37[6];
    }
    if ((auVar39._6_2_ >> 8 & 1) != 0) {
      (*pauVar35)[uVar31 + 7] = auVar37[7];
    }
    if ((auVar39._8_2_ & 1) != 0) {
      (*pauVar35)[uVar31 + 8] = auVar37[8];
    }
    if ((auVar39._8_2_ >> 8 & 1) != 0) {
      (*pauVar35)[uVar31 + 9] = auVar37[9];
    }
    if ((auVar39._10_2_ & 1) != 0) {
      (*pauVar35)[uVar31 + 10] = auVar37[10];
    }
    if ((auVar39._10_2_ >> 8 & 1) != 0) {
      (*pauVar35)[uVar31 + 0xb] = auVar37[0xb];
    }
    if ((auVar39._12_2_ & 1) != 0) {
      (*pauVar35)[uVar31 + 0xc] = auVar37[0xc];
    }
    if ((auVar39._12_2_ >> 8 & 1) != 0) {
      (*pauVar35)[uVar31 + 0xd] = auVar37[0xd];
    }
    if ((auVar39._14_2_ & 1) != 0) {
      (*pauVar35)[uVar31 + 0xe] = auVar37[0xe];
    }
    if ((auVar39._14_2_ >> 8 & 1) != 0) {
      (*pauVar35)[uVar31 + 0xf] = auVar37[0xf];
    }
    uVar31 = uVar31 + 0x10;
  } while (uVar36 != uVar31);
  if (uVar30 == uVar36) goto LAB_140028d1a;
  if ((uVar30 & 0xc) == 0) {
    pauVar33 = (undefined1 (*) [16])(*pauVar35 + uVar36);
  }
  else {
LAB_140029095:
    cVar26 = UNK_14003568f;
    cVar25 = UNK_14003568e;
    cVar24 = UNK_14003568d;
    cVar23 = UNK_14003568c;
    cVar22 = UNK_14003568b;
    cVar21 = UNK_14003568a;
    cVar20 = UNK_140035689;
    cVar19 = UNK_140035688;
    cVar18 = UNK_140035687;
    cVar17 = UNK_140035686;
    cVar16 = UNK_140035685;
    cVar15 = UNK_140035684;
    cVar14 = UNK_140035683;
    cVar13 = UNK_140035682;
    cVar12 = UNK_140035681;
    cVar11 = DAT_140035680;
    auVar10 = _DAT_140035670;
    uVar32 = _DAT_140035660;
    uVar27 = s___3______________________________14003560d._67_4_;
    uVar31 = uVar30 & 0xfffffffffffffffc;
    pauVar33 = (undefined1 (*) [16])(*pauVar35 + uVar31);
    do {
      uVar2 = *(undefined4 *)(*pauVar35 + uVar36);
      auVar40[0] = -((char)uVar2 == auVar10[0]);
      cVar48 = (char)((uint)uVar2 >> 8);
      auVar40[1] = -(cVar48 == auVar10[1]);
      cVar49 = (char)((uint)uVar2 >> 0x10);
      cVar4 = (char)((uint)uVar2 >> 0x18);
      auVar40[2] = -(cVar49 == auVar10[2]);
      auVar40[3] = -(cVar4 == auVar10[3]);
      auVar40[4] = -(auVar10[4] == '\0');
      auVar40[5] = -(auVar10[5] == '\0');
      auVar40[6] = -(auVar10[6] == '\0');
      auVar40[7] = -(auVar10[7] == '\0');
      auVar40[8] = -(auVar10[8] == '\0');
      auVar40[9] = -(auVar10[9] == '\0');
      auVar40[10] = -(auVar10[10] == '\0');
      auVar40[0xb] = -(auVar10[0xb] == '\0');
      auVar40[0xc] = -(auVar10[0xc] == '\0');
      auVar40[0xd] = -(auVar10[0xd] == '\0');
      auVar40[0xe] = -(auVar10[0xe] == '\0');
      auVar40[0xf] = -(auVar10[0xf] == '\0');
      auVar38._0_4_ =
           CONCAT13(-(cVar4 == cVar14),
                    CONCAT12(-(cVar49 == cVar13),
                             CONCAT11(-(cVar48 == cVar12),-((char)uVar2 == cVar11))));
      auVar38[4] = -(cVar15 == '\0');
      auVar38[5] = -(cVar16 == '\0');
      auVar38[6] = -(cVar17 == '\0');
      auVar38[7] = -(cVar18 == '\0');
      auVar38[8] = -(cVar19 == '\0');
      auVar38[9] = -(cVar20 == '\0');
      auVar38[10] = -(cVar21 == '\0');
      auVar38[0xb] = -(cVar22 == '\0');
      auVar38[0xc] = -(cVar23 == '\0');
      auVar38[0xd] = -(cVar24 == '\0');
      auVar38[0xe] = -(cVar25 == '\0');
      auVar38[0xf] = -(cVar26 == '\0');
      auVar40 = auVar40 | auVar38;
      uVar34 = auVar38._0_4_ & uVar32 | ~auVar38._0_4_ & uVar27;
      local_98 = auVar40[0];
      if ((local_98 & 1) != 0) {
        (*pauVar35)[uVar36] = (char)uVar34;
      }
      auVar47._0_14_ = auVar40._0_14_;
      auVar47[0xe] = auVar40[7];
      auVar47[0xf] = auVar40[7];
      auVar46._14_2_ = auVar47._14_2_;
      auVar46._0_13_ = auVar40._0_13_;
      auVar46[0xd] = auVar40[6];
      auVar45._13_3_ = auVar46._13_3_;
      auVar45._0_12_ = auVar40._0_12_;
      auVar45[0xc] = auVar40[6];
      auVar44._12_4_ = auVar45._12_4_;
      auVar44._0_11_ = auVar40._0_11_;
      auVar44[0xb] = auVar40[5];
      auVar43._11_5_ = auVar44._11_5_;
      auVar43._0_10_ = auVar40._0_10_;
      auVar43[10] = auVar40[5];
      auVar42._10_6_ = auVar43._10_6_;
      auVar42._0_9_ = auVar40._0_9_;
      auVar42[9] = auVar40[4];
      auVar41._9_7_ = auVar42._9_7_;
      auVar41._0_8_ = auVar40._0_8_;
      auVar41[8] = auVar40[4];
      Var9 = CONCAT91(CONCAT81(auVar41._8_8_,auVar40[3]),auVar40[3]);
      auVar8._10_6_ = 0;
      auVar8._0_10_ = Var9;
      auVar7._1_11_ = SUB1611(auVar8 << 0x30,5);
      auVar7[0] = auVar40[2];
      auVar6._12_4_ = 0;
      auVar6._0_12_ = auVar7;
      auVar5._1_13_ = SUB1613(auVar6 << 0x20,3);
      auVar5[0] = auVar40[1];
      if ((auVar5._0_2_ & 1) != 0) {
        (*pauVar35)[uVar36 + 1] = (char)(uVar34 >> 8);
      }
      if ((auVar7._0_2_ & 1) != 0) {
        (*pauVar35)[uVar36 + 2] = (char)(uVar34 >> 0x10);
      }
      if (((ushort)Var9 & 1) != 0) {
        (*pauVar35)[uVar36 + 3] = (char)(uVar34 >> 0x18);
      }
      uVar36 = uVar36 + 4;
    } while (uVar31 != uVar36);
    if (uVar30 == uVar31) goto LAB_140028d1a;
  }
LAB_14002919e:
  do {
    if ((*pauVar33)[0] == '+') {
      uVar28 = 0x2d;
LAB_1400291b2:
      (*pauVar33)[0] = uVar28;
    }
    else if ((*pauVar33)[0] == '/') {
      uVar28 = 0x5f;
      goto LAB_1400291b2;
    }
    pauVar33 = (undefined1 (*) [16])(*pauVar33 + 1);
  } while (pauVar33 != (undefined1 (*) [16])(*pauVar35 + uVar30));
LAB_140028d1a:
  if (local_88 == 0) {
    return param_1;
  }
  uVar36 = local_78 - local_88;
  uVar30 = local_88;
  if (0xfff < uVar36) {
    uVar30 = *(ulonglong *)(local_88 - 8);
    if (0x1f < (local_88 - 8) - uVar30) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar36 = uVar36 + 0x27;
  }
  thunk_FUN_1400340c0(uVar30,uVar36);
  return param_1;
}


/* Unwind@1400291f0 */

void Unwind_1400291f0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x50);
  return;
}


/* FUN_140029240 */

ulonglong *
FUN_140029240(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (0x7ffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  uVar4 = param_2 | 7;
  if (uVar4 < 0x7fffffffffffffff) {
    uVar1 = param_1[3];
    if (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1)) {
      uVar7 = (uVar1 >> 1) + uVar1;
      if (uVar7 < uVar4) {
        uVar7 = uVar4;
      }
      uVar4 = uVar7 + 1;
      if (-1 < (longlong)uVar4) {
        if (uVar4 < 0x800) {
          uVar4 = FUN_1400329d0(uVar4 * 2);
        }
        else {
          if (0x7fffffffffffffec < uVar4) goto LAB_14002935c;
          lVar5 = FUN_1400329d0(uVar4 * 2 + 0x27);
          uVar4 = lVar5 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar4 - 8) = lVar5;
        }
        param_1[2] = param_2;
        param_1[3] = uVar7;
        FUN_140034080(uVar4,param_4,param_2 * 2);
        *(undefined2 *)(uVar4 + param_2 * 2) = 0;
        if (7 < uVar1) {
          uVar2 = *param_1;
          uVar7 = uVar1 * 2 + 2;
          uVar6 = uVar2;
          if (0xfff < uVar7) {
            uVar6 = *(ulonglong *)(uVar2 - 8);
            if (0x1f < (uVar2 - 8) - uVar6) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar7 = uVar1 * 2 + 0x29;
          }
          thunk_FUN_1400340c0(uVar6,uVar7);
        }
        *param_1 = uVar4;
        return param_1;
      }
    }
  }
LAB_14002935c:
                    /* WARNING: Subroutine does not return */
  FUN_140020760();
}


/* FUN_140029370 */

undefined8 * FUN_140029370(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_80;
  int local_78;
  longlong local_70;
  ulonglong local_68;
  longlong lStack_60;
  longlong local_58;
  uint local_44;
  undefined1 local_3d;
  uint local_3c [3];
  
  local_3c[1] = 0xfffffffe;
  local_3c[2] = 0xffffffff;
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_1400256c0(&local_80,param_3,*puVar1);
  local_3c[0] = 0;
  FUN_14002b600(*(undefined8 *)(param_2 + 0x60),local_80,local_78 - (int)local_80,0,0,local_3c);
  uVar3 = local_3c[0];
  uVar7 = (ulonglong)local_3c[0];
  if (uVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    local_68 = 0;
    lStack_60 = 0;
    local_58 = 0;
    if (local_3c[0] < 0x1000) {
      uVar8 = FUN_1400329d0(uVar7);
    }
    else {
      lVar5 = FUN_1400329d0(uVar7 + 0x27);
      uVar8 = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar8 - 8) = lVar5;
    }
    lVar5 = uVar8 + uVar7;
    local_68 = uVar8;
    local_58 = lVar5;
    FUN_1400340a0(uVar8,0,uVar7);
    local_44 = 0;
    lStack_60 = lVar5;
    cVar4 = FUN_14002b600(*(undefined8 *)(param_2 + 0x60),local_80,local_78 - (int)local_80,uVar8,
                          local_3c[0],&local_44);
    if (cVar4 == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      if (local_44 < uVar3) {
        lStack_60 = uVar8 + local_44;
        lVar5 = lStack_60;
      }
      else if (uVar3 < local_44) {
        FUN_14002b8d0(&local_68,(ulonglong)local_44,&local_3d);
        uVar8 = local_68;
        lVar5 = lStack_60;
      }
      FUN_14002b6d0(param_1,uVar8,lVar5 - uVar8);
      uVar8 = local_68;
      if (local_68 == 0) goto LAB_14002950f;
    }
    uVar6 = local_58 - uVar8;
    uVar7 = uVar8;
    if (0xfff < uVar6) {
      uVar7 = *(ulonglong *)(uVar8 - 8);
      if (0x1f < (uVar8 - 8) - uVar7) goto LAB_140029558;
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_1400340c0(uVar7,uVar6);
  }
LAB_14002950f:
  if (local_80 != 0) {
    uVar7 = local_70 - local_80;
    lVar5 = local_80;
    if (0xfff < uVar7) {
      lVar5 = *(longlong *)(local_80 + -8);
      if (0x1f < (ulonglong)((local_80 + -8) - lVar5)) {
LAB_140029558:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar7 = uVar7 + 0x27;
    }
    thunk_FUN_1400340c0(lVar5,uVar7);
  }
  return param_1;
}


/* Unwind@140029560 */

void Unwind_140029560(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x38);
  return;
}


/* Unwind@140029590 */

void Unwind_140029590(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x50);
  return;
}


/* FUN_1400295c0 */

undefined8 * FUN_1400295c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong local_88;
  longlong local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  uint local_54;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_60 = 0;
  local_68 = 0;
  uVar7 = 0;
  iVar2 = FUN_140033f50(&local_60,L"SHA256",0,8);
  if (iVar2 < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    local_54 = 0;
    local_6c = 0;
    FUN_140033f30(local_60,L"ObjectLength",&local_54,4,&local_6c,0);
    uVar5 = (ulonglong)local_54;
    local_88 = 0;
    local_78 = 0;
    if (uVar5 != 0) {
      if (local_54 < 0x1000) {
        local_88 = FUN_1400329d0(uVar5);
      }
      else {
        lVar3 = FUN_1400329d0(uVar5 + 0x27);
        local_88 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(local_88 - 8) = lVar3;
      }
      local_78 = local_88 + uVar5;
      FUN_1400340a0(local_88,0,uVar5);
      uVar7 = local_54;
    }
    iVar2 = FUN_140033ef0(local_60,&local_68,local_88,uVar7,*param_2,
                          *(int *)(param_2 + 1) - (int)*param_2,0);
    if (iVar2 < 0) {
      FUN_140033ee0(local_60,0);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      FUN_140033f40(local_68,*param_3,*(int *)(param_3 + 1) - (int)*param_3,0);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar4 = (undefined8 *)FUN_1400329d0(0x20);
      *param_1 = puVar4;
      param_1[2] = puVar4 + 4;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      param_1[1] = puVar4 + 4;
      FUN_140033f10(local_68,puVar4,0x20,0);
      FUN_140033f00(local_68);
      FUN_140033ee0(local_60,0);
    }
    if (local_88 != 0) {
      uVar6 = local_78 - local_88;
      uVar5 = local_88;
      if (0xfff < uVar6) {
        uVar5 = *(ulonglong *)(local_88 - 8);
        if (0x1f < (local_88 - 8) - uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar6 = uVar6 + 0x27;
      }
      thunk_FUN_1400340c0(uVar5,uVar6);
    }
  }
  return param_1;
}


/* Unwind@1400297f0 */

void Unwind_1400297f0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x40);
  return;
}


/* FUN_140029830 */

void FUN_140029830(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = param_1[3];
  if (7 < uVar1) {
    lVar2 = *param_1;
    uVar4 = uVar1 * 2 + 2;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar4 = uVar1 * 2 + 0x29;
    }
    thunk_FUN_1400340c0(lVar5,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}


/* FUN_1400298a0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1400298a0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  char cVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  byte bVar20;
  byte bVar21;
  char cVar22;
  char cVar23;
  undefined8 *local_1c0 [2];
  undefined8 *local_1b0;
  byte abStack_1aa [2];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined3 uStack_16c;
  undefined5 uStack_169;
  undefined3 uStack_164;
  undefined8 uStack_161;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined6 uStack_11c;
  undefined2 uStack_116;
  undefined6 uStack_114;
  byte abStack_10a [2];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined8 local_ee;
  undefined8 uStack_e6;
  undefined2 local_de;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined5 uStack_85;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined6 uStack_6c;
  undefined2 uStack_66;
  undefined6 uStack_64;
  int *local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_a8 = CONCAT44(_UNK_140035754,_DAT_140035750);
  uStack_a0 = CONCAT44(_UNK_14003575c,_UNK_140035758);
  local_98 = 0xe7b6e1b2e3b3fdaf;
  uStack_90 = 0xe5e4;
  uStack_8e = 0;
  uStack_88 = 0;
  uStack_86 = 0;
  puVar13 = &local_a8;
  local_c8 = param_4;
  local_c0 = param_3;
  local_b8 = param_2;
LAB_14002991f:
  puVar6 = (ulonglong *)FUN_140031690();
  uVar8 = *puVar6;
  puVar6 = (ulonglong *)FUN_1400316a0();
  uVar10 = *puVar6;
  uVar7 = 0;
  do {
    if (uVar7 < uVar8) {
      puVar13 = (undefined8 *)&stack0x007dd2de;
      goto LAB_140029c90;
    }
    bVar20 = *(byte *)((longlong)&local_a8 + uVar7);
    uVar9 = uVar10 + 1;
    cVar3 = (char)uVar7;
    if (uVar9 <= uVar8) {
      if (uVar8 != uVar9) {
        if (uVar8 != uVar10 + 2) {
          if (uVar8 == uVar10 + 4) {
            bVar21 = cVar3 + bVar20 + (bVar20 & cVar3 + 0x4eU) * -2 + 0x2c;
          }
          else {
            if (uVar8 != uVar10 + 5) {
              uVar19 = uVar10;
              if ((uVar8 != uVar10 + 7) && (uVar19 = uVar9, uVar8 != uVar10 + 6))
              goto LAB_14002995f;
              goto LAB_140029b70;
            }
            bVar21 = cVar3 + bVar20 + (bVar20 & cVar3 - 0x3aU) * -2 + 0x5c;
LAB_140029bba:
            *(byte *)((longlong)&local_a8 + uVar7) =
                 cVar3 + bVar20 + (bVar20 & cVar3 + 0x8eU) * -2 + bVar21 + -0x54;
            uVar8 = uVar10 + uVar8;
          }
LAB_140029c1c:
          uVar7 = uVar7 + ~(ulonglong)bVar21;
          goto LAB_140029b76;
        }
LAB_140029a92:
        bVar21 = cVar3 + bVar20 + (cVar3 + 0x4aU & bVar20) * -2 + 0x44;
        *(byte *)((longlong)&local_a8 + uVar7) = bVar21;
        lVar11 = (~uVar10 + uVar7) - (ulonglong)bVar21;
        *(byte *)((longlong)&local_a8 + lVar11) =
             (char)lVar11 + bVar20 + ((char)lVar11 + 0xa8U & bVar20) * -2 + '\x10';
        lVar11 = lVar11 - uVar8;
        uVar8 = uVar8 + 1;
        bVar20 = *(byte *)((longlong)&local_b0 + lVar11 + 6);
        uVar7 = lVar11 - 2;
        uVar10 = uVar9;
      }
LAB_140029b00:
      uVar7 = uVar7 + uVar10 + (ulonglong)bVar20;
      goto LAB_140029b76;
    }
LAB_14002995f:
    if (uVar7 < uVar10) {
      puVar13 = (undefined8 *)&stack0x015b6e80;
      goto LAB_140029c90;
    }
    if (uVar7 < uVar10 + uVar8) {
      uVar19 = uVar10;
      if (uVar8 != uVar10 + 5) {
        if (uVar8 == uVar10 + 8) goto LAB_140029a92;
        goto LAB_14002991f;
      }
    }
    else {
      if (uVar8 < uVar10 + 0x20) {
        cVar16 = cVar3 + bVar20 + (bVar20 & cVar3 + 0x5eU) * -2 + -0x34;
        if (uVar8 <= uVar10 + 9) goto LAB_140029b43;
LAB_140029a1b:
        cVar16 = cVar3 + bVar20 + (bVar20 & cVar3 + 0x66U) * -2 + -100;
LAB_140029a3c:
        if (uVar8 == uVar9) goto LAB_140029b00;
        if (uVar8 == uVar10 + 2) goto LAB_140029a92;
        if (uVar8 == uVar10 + 4) {
          bVar21 = (cVar3 + bVar20 + (bVar20 & cVar3 + 0x84U) * -2) - 0x18;
          goto LAB_140029bba;
        }
        if (uVar10 < 0x10) {
          *(char *)((longlong)&local_a8 + uVar7) = cVar16;
          goto LAB_140029b76;
        }
      }
      else {
        if (uVar8 == uVar9) goto LAB_140029b00;
        cVar16 = cVar3 + bVar20 + (bVar20 & cVar3 + 0xb6U) * -2 + -0x44;
        if (uVar10 + 9 < uVar8) goto LAB_140029a1b;
LAB_140029b43:
        if (uVar8 != uVar9) {
          uVar19 = uVar10;
          if (uVar8 == uVar10 + 2) goto LAB_140029b70;
          if (uVar8 == uVar10 + 5) {
            bVar21 = cVar3 + bVar20 + (bVar20 & cVar3 + 0x12U) * -2 + 0x94;
            uVar8 = uVar10 + uVar8;
            goto LAB_140029c1c;
          }
          if (uVar8 == uVar10 + 4) goto LAB_140029a92;
          if (uVar8 == uVar10 + 8) goto LAB_140029b00;
          goto LAB_140029a3c;
        }
      }
      *(byte *)((longlong)&local_a8 + uVar7) =
           cVar3 + bVar20 + (bVar20 & cVar3 - 0x2eU) * -2 + '\x14';
      uVar19 = uVar9;
    }
LAB_140029b70:
    uVar10 = uVar19;
    uVar7 = uVar7 - 1;
LAB_140029b76:
    uVar7 = uVar7 + 1;
    if (0x22 < uVar7) {
LAB_140029c90:
      uVar8 = (*DAT_1400398b8)(puVar13,4,0,0);
      pcVar2 = DAT_1400398f0;
      if (uVar8 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
LAB_14002b004:
        param_1[8] = 0xf;
        param_1[9] = 0;
        return param_1;
      }
      local_a8 = CONCAT44(local_a8._4_4_,15000);
      (*DAT_1400398f0)(uVar8,3,&local_a8,4);
      (*pcVar2)(uVar8,6,&local_a8,4);
      (*pcVar2)(uVar8,5,&local_a8,4);
      local_58 = param_1;
      local_50 = uVar8;
      FUN_14002c530(param_1,uVar8,local_b8,local_c0);
      (*DAT_1400398a8)(local_50);
      if ((0 < *param_1) && (*(longlong *)(param_1 + 6) != 0)) {
        return param_1;
      }
      uVar10 = *(ulonglong *)(param_1 + 8);
      if (0xf < uVar10) {
        lVar11 = *(longlong *)(param_1 + 2);
        uVar7 = uVar10 + 1;
        lVar12 = lVar11;
        if (0xfff < uVar7) {
          lVar12 = *(longlong *)(lVar11 + -8);
          if (0x1f < (ulonglong)((lVar11 + -8) - lVar12)) {
LAB_14002b023:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar7 = uVar10 + 0x28;
        }
        thunk_FUN_1400340c0(lVar12,uVar7);
      }
      piVar4 = local_58;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0xf;
      param_1[9] = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      local_a8 = _DAT_140035760;
      uStack_a0 = _UNK_140035768;
      local_98 = _DAT_140035770;
      uStack_90 = (undefined2)_UNK_140035778;
      uStack_8e = (undefined6)((ulonglong)_UNK_140035778 >> 0x10);
      uStack_88 = (undefined2)_DAT_140035780;
      uStack_86 = (undefined1)((ulonglong)_DAT_140035780 >> 0x10);
      uStack_85 = (undefined5)((ulonglong)_DAT_140035780 >> 0x18);
      uStack_80 = _UNK_140035788;
      local_78 = 0xdbd4d549;
      local_74 = 0;
      uStack_6c = 0;
      uStack_66 = 0;
      uStack_64 = 0;
      break;
    }
  } while( true );
LAB_140029e19:
  puVar6 = (ulonglong *)FUN_140031690();
  uVar10 = *puVar6;
  puVar6 = (ulonglong *)FUN_1400316a0();
  uVar7 = *puVar6;
  uVar9 = 0;
LAB_140029e4d:
  if (uVar9 < uVar10) {
    local_1c0[0] = (undefined8 *)&stack0x011bbdc9;
    goto LAB_14002a173;
  }
  bVar20 = *(byte *)((longlong)&local_a8 + uVar9);
  uVar19 = uVar7 + 1;
  cVar3 = (char)uVar9;
  uVar15 = uVar19;
  if (uVar10 < uVar19) {
LAB_140029e6c:
    if (uVar9 < uVar7) {
      local_1c0[0] = (undefined8 *)&stack0x01728474;
      goto LAB_14002a173;
    }
    if (uVar7 + uVar10 <= uVar9) {
      if (uVar10 < uVar7 + 4) {
        cVar16 = cVar3 + bVar20 + (bVar20 & cVar3 + 0x55U) * -2 + '\x02';
      }
      else {
        if (uVar10 == uVar19) goto LAB_140029e33;
        if (uVar10 == uVar7 + 5) goto LAB_14002a04a;
        if (uVar10 == uVar7 + 4) goto LAB_14002a026;
        cVar16 = cVar3 + bVar20 + (bVar20 & cVar3 - 7U) * -2 + '*';
      }
      if (uVar7 + 2 < uVar10) {
        cVar16 = cVar3 + bVar20 + (bVar20 & cVar3 + 0x3aU) * -2 + -0x5c;
      }
      else {
        if (uVar10 == uVar19) goto LAB_14002a026;
        if (uVar10 == uVar7 + 2) goto LAB_14002a04a;
      }
      *(char *)((longlong)&local_a8 + uVar9) = cVar16;
      goto LAB_140029e40;
    }
    if (uVar10 == uVar7 + 2) {
LAB_14002a026:
      *(byte *)((longlong)&local_a8 + uVar9) =
           cVar3 + bVar20 + (bVar20 & cVar3 + 0x33U) * -2 + -0x32;
    }
    else {
      uVar15 = uVar7;
      if (uVar10 != uVar7 + 3) {
        if (uVar10 == uVar7 + 4) {
          uVar19 = (ulonglong)(byte)((cVar3 + bVar20 + (bVar20 & cVar3 + 0x2eU) * -2) - 0x14);
          uVar10 = uVar7 + uVar10;
          goto LAB_14002a11c;
        }
        if (uVar10 != uVar19) {
          if (uVar10 == uVar7 + 0x42) goto LAB_140029ec3;
          goto LAB_140029e19;
        }
        uVar19 = (ulonglong)(byte)((cVar3 + bVar20 + (bVar20 & cVar3 - 0x28U) * -2) - 0x10);
LAB_14002a11c:
        uVar9 = uVar9 + ~uVar19;
        goto LAB_140029e40;
      }
    }
LAB_14002a04a:
    uVar7 = uVar15;
    uVar9 = uVar9 - 1;
  }
  else {
    if (uVar10 != uVar19) {
      if (uVar10 != uVar7 + 2) {
        if (uVar10 == uVar7 + 4) {
          uVar19 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 - 3U) * -2 + 0x12);
        }
        else {
          if (uVar10 != uVar7 + 5) {
            if (uVar10 != uVar7 + 3) goto LAB_140029e6c;
            goto LAB_14002a04a;
          }
          bVar21 = cVar3 + bVar20 + (cVar3 + 0x51U & bVar20) * -2 + 0x1a;
          uVar19 = (ulonglong)bVar21;
          *(byte *)((longlong)&local_a8 + uVar9) =
               cVar3 + bVar20 + (cVar3 - 0x23U & bVar20) * -2 + bVar21 + -0x2e;
          uVar10 = uVar10 + uVar7;
        }
        goto LAB_14002a11c;
      }
LAB_140029ec3:
      bVar21 = (cVar3 + bVar20 + (cVar3 + 0x87U & bVar20) * -2) - 0x2a;
      *(byte *)((longlong)&local_a8 + uVar9) = bVar21;
      lVar11 = (~uVar7 + uVar9) - (ulonglong)bVar21;
      *(byte *)((longlong)&local_a8 + lVar11) =
           (char)lVar11 + bVar20 + ((char)lVar11 - 0x24U & bVar20) * -2 + -0x28;
      lVar11 = lVar11 - uVar10;
      uVar10 = uVar10 + 1;
      bVar20 = *(byte *)((longlong)&local_b0 + lVar11 + 6);
      uVar9 = lVar11 - 2;
      uVar7 = uVar19;
    }
LAB_140029e33:
    uVar9 = uVar9 + uVar7 + (ulonglong)bVar20;
  }
LAB_140029e40:
  uVar9 = uVar9 + 1;
  if (0x49 < uVar9) {
    local_1c0[0] = &local_a8;
LAB_14002a173:
    local_1a8 = _DAT_140035790;
    uStack_1a0 = _UNK_140035798;
    local_198 = _DAT_1400357a0;
    uStack_190 = _UNK_1400357a8;
    local_188 = _DAT_1400357b0;
    uStack_180 = _UNK_1400357b8;
    local_178 = 0xa3a0a13d;
    local_174 = 0;
    uStack_16c = 0;
    uStack_169 = 0;
    uStack_164 = 0;
    uStack_161 = 0;
    puVar13 = &local_1a8;
    goto LAB_14002a1ae;
  }
  goto LAB_140029e4d;
LAB_14002a1ae:
  puVar6 = (ulonglong *)FUN_140031690();
  uVar10 = *puVar6;
  puVar6 = (ulonglong *)FUN_1400316a0();
  uVar7 = *puVar6;
  uVar9 = 0;
LAB_14002a202:
  if (uVar9 < uVar10) {
    puVar13 = (undefined8 *)&stack0x014f10ff;
    goto LAB_14002a776;
  }
  bVar20 = *(byte *)((longlong)&local_1a8 + uVar9);
  uVar15 = (ulonglong)bVar20;
  uVar19 = uVar7 + 1;
  cVar3 = (char)uVar9;
  if (uVar19 <= uVar10) {
    if (uVar10 == uVar19) {
      uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 + 0x69U) * -2 + 0x8a);
LAB_14002a1ef:
      uVar9 = uVar9 + uVar7;
    }
    else {
      if (uVar10 == uVar7 + 3) {
        uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 - 0xbU) * -2 + 0x42);
        goto LAB_14002a367;
      }
      if (uVar10 == uVar7 + 2) {
        uVar8 = (ulonglong)(byte)((cVar3 + bVar20 + (bVar20 & cVar3 + 0x81U) * -2) - 6);
        goto LAB_14002a5b7;
      }
      if (uVar10 != uVar7 + 6) goto LAB_14002a23b;
      uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 - 0x39U) * -2 + 0x56);
LAB_14002a518:
      *(byte *)((longlong)&local_1a8 + uVar9) =
           cVar3 + bVar20 + (bVar20 & cVar3 + 0x5bU) * -2 + (char)uVar8 + -0x22;
LAB_14002a5b7:
      uVar10 = uVar10 + uVar7;
LAB_14002a5ba:
      uVar15 = ~uVar8;
    }
    uVar9 = uVar9 + uVar15;
    goto LAB_14002a1f5;
  }
  uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 + 0x23U) * -2 + 0x2e);
LAB_14002a23b:
  if (uVar9 < uVar7) {
    puVar13 = (undefined8 *)&stack0x0153c9dc;
    goto LAB_14002a776;
  }
  if (uVar7 + 0x10 <= uVar10) {
    if (uVar10 != uVar19) goto LAB_14002a2e0;
    uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 + 0x25U) * -2 + 0x22);
LAB_14002a4c0:
    *(byte *)((longlong)&local_1a8 + uVar9) = cVar3 + bVar20 + (bVar20 & cVar3 + 0x15U) * -2 + -0x7e
    ;
    uVar9 = uVar9 - 1;
    uVar7 = uVar19;
LAB_14002a1f5:
    uVar9 = uVar9 + 1;
    if (0x4e < uVar9) {
LAB_14002a776:
      local_158 = _DAT_1400357c0;
      uStack_150 = _UNK_1400357c8;
      local_148 = _DAT_1400357d0;
      uStack_140 = _UNK_1400357d8;
      local_138 = _DAT_1400357e0;
      uStack_130 = _UNK_1400357e8;
      local_128 = 0x2b2829dd;
      local_124 = 0;
      uStack_11c = 0;
      uStack_116 = 0;
      uStack_114 = 0;
      puVar17 = &local_158;
      param_1 = piVar4;
      local_1c0[1] = puVar13;
      goto LAB_14002a7c9;
    }
    goto LAB_14002a202;
  }
  uVar8 = (ulonglong)(byte)((cVar3 + bVar20 + (bVar20 & cVar3 - 0x21U) * -2) - 0x3a);
LAB_14002a2e0:
  if (uVar7 + uVar10 <= uVar9) {
    if (uVar7 + 3 <= uVar10) {
      if (uVar10 == uVar19) {
        uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 + 0xbeU) * -2 + 0x8c);
        goto LAB_14002a1ef;
      }
      if (uVar10 != uVar7 + 5) {
        if (uVar10 == uVar7 + 4) {
          uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 + 0x62U) * -2 + 0xb4);
          goto LAB_14002a5ec;
        }
        goto LAB_14002a33f;
      }
      uVar8 = (ulonglong)(byte)((cVar3 + bVar20 + (bVar20 & cVar3 - 0x2aU) * -2) - 4);
      goto LAB_14002a5b7;
    }
    uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 + 0x23U) * -2 + 0x2e);
LAB_14002a33f:
    if (uVar7 + uVar10 == 3) {
      uVar8 = (ulonglong)(byte)(cVar3 + (cVar3 + 0x7eU & bVar20) * -2 + 0xc);
LAB_14002a367:
      bVar21 = cVar3 + bVar20 + (bVar20 & cVar3 + 0xa1U) * -2 + 0x3a;
      *(byte *)((longlong)&local_1a8 + uVar9) = bVar21;
      uVar9 = (~uVar7 + uVar9) - (ulonglong)bVar21;
      uVar7 = uVar19;
    }
    else {
      if (uVar10 == uVar19) {
        uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 + 0x9dU) * -2 + 0x52);
        goto LAB_14002a4c0;
      }
      if (uVar10 == uVar7 + 2) {
        uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (cVar3 + 0x29U & bVar20) * -2 + 10);
        goto LAB_14002a5ec;
      }
      if (uVar10 == uVar7 + 5) {
        uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (cVar3 + 0x41U & bVar20) * -2 + 0x7a);
        goto LAB_14002a367;
      }
      if (uVar10 != uVar7 + 3) {
        if (uVar10 == uVar7 + 8) {
          uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (cVar3 - 0x33U & bVar20) * -2 + 0x32);
          goto LAB_14002a1ef;
        }
        if (0x41 < uVar10) {
          uVar8 = (ulonglong)(byte)(cVar3 + bVar20 * '\x02' + (cVar3 + 0x38U & bVar20) * -2 + 0xb0);
          goto LAB_14002a518;
        }
        if (uVar10 == uVar7 + 6) {
          uVar8 = (ulonglong)(byte)((cVar3 + bVar20 + (cVar3 + 0xacU & bVar20) * -2) - 8);
        }
        else {
          if (uVar7 < 10) {
            *(char *)((longlong)&local_1a8 + uVar9) = (char)uVar8;
            goto LAB_14002a1f5;
          }
          uVar8 = (ulonglong)
                  (byte)((cVar3 + bVar20 + -0xe + (cVar3 - 0xeU & bVar20) * -2) * '\x02' - 0x3c);
        }
        goto LAB_14002a4c0;
      }
      uVar8 = (ulonglong)(byte)((cVar3 + bVar20 + (cVar3 + 0x87U & bVar20) * -2) - 0x2a);
    }
    *(byte *)((longlong)&local_1a8 + uVar9) =
         (char)uVar9 + bVar20 + (bVar20 & (char)uVar9 - 0x3cU) * -2 + 'h';
    lVar11 = uVar9 - uVar10;
    uVar10 = uVar10 + 1;
    uVar15 = (ulonglong)abStack_1aa[lVar11];
    uVar9 = lVar11 - 2;
    goto LAB_14002a1ef;
  }
  if (uVar10 == uVar7 + 0x42) {
    uVar8 = (ulonglong)(byte)((cVar3 + bVar20 + (cVar3 + 10U & bVar20) * -2) - 0x3c);
    goto LAB_14002a4c0;
  }
  if (uVar10 == uVar7 + 0x40) {
    uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 + 0x96U) * -2 + 0x7c);
LAB_14002a5ec:
    uVar9 = uVar9 - 1;
    goto LAB_14002a1f5;
  }
  if (uVar10 == uVar7 + 9) {
    uVar8 = (ulonglong)(byte)((cVar3 + bVar20 + (bVar20 & cVar3 - 0x24U) * -2) - 0x28);
    goto LAB_14002a518;
  }
  if (uVar10 == uVar7 + 3) {
    uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 + 0x22U) * -2 + 0x34);
    goto LAB_14002a5b7;
  }
  if (uVar10 == uVar7 + 0x41) {
    uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 + 0x68U) * -2 + 0x90);
    goto LAB_14002a5ba;
  }
  if (uVar10 == uVar7 + 2) {
    uVar8 = (ulonglong)(byte)((cVar3 + bVar20 + (bVar20 & cVar3 + 0xaeU) * -2) - 0x14);
    goto LAB_14002a367;
  }
  uVar8 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 - 0x17U) * -2 + 0x8a);
  goto LAB_14002a1ae;
LAB_14002a7c9:
  puVar6 = (ulonglong *)FUN_140031690();
  uVar8 = *puVar6;
  puVar6 = (ulonglong *)FUN_1400316a0();
  uVar10 = *puVar6;
  uVar7 = 0;
  do {
    if (uVar7 < uVar8) {
      puVar17 = (undefined8 *)&stack0x005f65cb;
      goto LAB_14002aab1;
    }
    bVar20 = *(byte *)((longlong)&local_158 + uVar7);
    uVar9 = uVar10 + 1;
    cVar3 = (char)uVar7;
    uVar19 = uVar10;
    if (uVar8 < uVar9) {
LAB_14002a7fc:
      if (uVar7 < uVar10) {
        puVar17 = (undefined8 *)&stack0x015ff4bc;
        goto LAB_14002aab1;
      }
      uVar15 = uVar10 + uVar8;
      if (uVar7 < uVar15) {
        uVar19 = uVar9;
        if ((uVar8 == uVar10 + 3) || (uVar19 = uVar10, uVar8 == uVar10 + 0x40)) {
LAB_14002a9b4:
          uVar10 = uVar19;
          uVar7 = uVar7 - 1;
        }
        else {
          cVar23 = 'l';
          cVar22 = -0x34;
          if (uVar8 == uVar10 + 0x41) {
LAB_14002a9e2:
            bVar21 = cVar22 + cVar3 + bVar20 + (cVar22 + cVar3 & bVar20) * -2 + cVar23;
            uVar9 = (ulonglong)bVar21;
            *(byte *)((longlong)&local_158 + uVar7) =
                 cVar3 + bVar20 + (cVar3 + 0x27U & bVar20) * -2 + bVar21 + '\x16';
            uVar8 = uVar15;
          }
          else {
            if (uVar8 != uVar10 + 9) goto LAB_14002a7c9;
            uVar9 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 - 0x16U) * -2 + 0x84);
            uVar8 = uVar15;
          }
LAB_14002aa1c:
          uVar7 = uVar7 + ~uVar9;
        }
      }
      else {
        if (uVar8 < uVar10 + 9) {
          cVar16 = cVar3 + bVar20 + (bVar20 & cVar3 + 0xfU) * -2 + -0x5a;
        }
        else {
          if (uVar8 == uVar9) goto LAB_14002a948;
          cVar16 = cVar3 + bVar20 + (bVar20 & cVar3 + 0x3bU) * -2 + -0x62;
        }
        if (uVar15 == 0x20) goto LAB_14002a8d9;
        if (uVar8 == uVar9) goto LAB_14002a985;
        if (uVar8 == uVar10 + 2) goto LAB_14002a9b4;
        cVar23 = -0x4d;
        cVar22 = '\v';
        param_1 = local_58;
        if (uVar8 == uVar10 + 3) goto LAB_14002a9e2;
        if (uVar8 == uVar10 + 5) {
          uVar9 = (ulonglong)(byte)(cVar3 + bVar20 + (bVar20 & cVar3 + 0x47U) * -2 + 0x56);
          goto LAB_14002aa1c;
        }
        if (uVar8 == uVar10 + 4) goto LAB_14002a948;
        if (uVar10 + 0x28 < uVar8) {
          cVar16 = cVar3 + bVar20 + (bVar20 & cVar3 - 0x32U) * -2 + ',';
        }
        else if (0x27 < uVar10) goto LAB_14002a985;
        *(char *)((longlong)&local_158 + uVar7) = cVar16;
      }
    }
    else {
      if (uVar8 != uVar9) {
        if (uVar8 != uVar10 + 3) {
          if (uVar8 == uVar10 + 6) goto LAB_14002a9b4;
          if (uVar8 != uVar10 + 9) goto LAB_14002a7fc;
LAB_14002a985:
          *(byte *)((longlong)&local_158 + uVar7) =
               cVar3 + bVar20 + (bVar20 & cVar3 + 9U) * -2 + -0x36;
          uVar19 = uVar9;
          goto LAB_14002a9b4;
        }
LAB_14002a8d9:
        bVar21 = cVar3 + bVar20 + (cVar3 + 0x45U & bVar20) * -2 + 0x62;
        *(byte *)((longlong)&local_158 + uVar7) = bVar21;
        lVar11 = (~uVar10 + uVar7) - (ulonglong)bVar21;
        *(byte *)((longlong)&local_158 + lVar11) =
             (char)lVar11 + bVar20 + ((char)lVar11 + 0x54U & bVar20) * -2 + '\b';
        lVar11 = lVar11 - uVar8;
        uVar8 = uVar8 + 1;
        bVar20 = *(byte *)((longlong)&uStack_161 + lVar11 + 7);
        uVar7 = lVar11 - 2;
        uVar10 = uVar9;
      }
LAB_14002a948:
      uVar7 = uVar7 + uVar10 + (ulonglong)bVar20;
    }
    uVar7 = uVar7 + 1;
    if (0x49 < uVar7) {
LAB_14002aab1:
      local_1b0 = puVar17;
      local_b0 = (longlong *)(param_1 + 2);
      local_50 = 0;
LAB_14002ab1f:
      puVar13 = (undefined8 *)&stack0x017e75d8;
      uVar1 = *(undefined8 *)((longlong)local_1c0 + local_50);
      local_108 = _DAT_1400357f0;
      uStack_100 = _UNK_1400357f8;
      local_f8 = 0x2776257a2373217f;
      local_f0 = 0x5958;
      local_ee = 0;
      uStack_e6 = 0;
      local_de = 0;
LAB_14002ab67:
      puVar6 = (ulonglong *)FUN_140031690();
      uVar8 = *puVar6;
      puVar6 = (ulonglong *)FUN_1400316a0();
      uVar10 = *puVar6;
      uVar7 = 0;
      do {
        if (uVar7 < uVar8) {
          puVar13 = (undefined8 *)&stack0x005abb00;
          goto LAB_14002aec3;
        }
        bVar20 = *(byte *)((longlong)&local_108 + uVar7);
        uVar9 = uVar10 + 1;
        cVar3 = (char)uVar7;
        uVar5 = (uint)uVar7;
        if (uVar9 <= uVar8) {
          if (uVar8 == uVar9) {
LAB_14002ad1e:
            uVar7 = uVar7 + uVar10 + (ulonglong)bVar20;
          }
          else {
            if (uVar8 == uVar10 + 2) goto LAB_14002acb9;
            if (uVar8 == uVar10 + 3) {
              uVar18 = (uint)bVar20 & uVar5 + 0x68;
              iVar14 = 0x12be6e90;
              goto LAB_14002ac51;
            }
            uVar19 = uVar10;
            if ((uVar8 != uVar10 + 6) && (uVar19 = uVar9, uVar8 != uVar10 + 4)) {
              if (uVar8 != uVar10 + 8) goto LAB_14002ab9c;
              goto LAB_14002ac89;
            }
LAB_14002adca:
            uVar7 = uVar7 - 1;
            uVar10 = uVar19;
          }
          goto joined_r0x00014002ac6d;
        }
LAB_14002ab9c:
        if (uVar7 < uVar10) goto LAB_14002aec3;
        if (uVar10 + 9 <= uVar8) {
          if (uVar8 != uVar9) {
            if (uVar8 == uVar10 + 9) goto LAB_14002ad1e;
            goto LAB_14002abb2;
          }
LAB_14002ac89:
          *(byte *)((longlong)&local_108 + uVar7) =
               cVar3 + bVar20 + (bVar20 & cVar3 + 0x18U) * -2 + 'p';
          uVar19 = uVar9;
          goto LAB_14002adca;
        }
LAB_14002abb2:
        uVar15 = uVar10 + uVar8;
        if (uVar7 < uVar15) {
          uVar19 = uVar9;
          if ((uVar8 == uVar10 + 0x20) || (uVar19 = uVar10, uVar8 == uVar10 + 10))
          goto LAB_14002adca;
          if (uVar8 != uVar10 + 0x28) goto LAB_14002ab67;
          uVar18 = (uint)bVar20 & (uVar5 | 0xc0);
          iVar14 = 0x4f406b80;
LAB_14002ac51:
          iVar14 = bVar20 + uVar5 + iVar14;
          uVar15 = uVar8;
        }
        else {
          if (uVar15 == 8) {
LAB_14002acb9:
            bVar21 = cVar3 + bVar20 + (cVar3 + 0xb8U & bVar20) * -2 + 0xb0;
            *(byte *)((longlong)&local_108 + uVar7) = bVar21;
            lVar11 = (~uVar10 + uVar7) - (ulonglong)bVar21;
            *(byte *)((longlong)&local_108 + lVar11) =
                 (char)lVar11 + bVar20 + ((char)lVar11 - 0x20U & bVar20) * -2 + -0x40;
            lVar11 = lVar11 - uVar8;
            uVar8 = uVar8 + 1;
            bVar20 = abStack_10a[lVar11];
            uVar7 = lVar11 - 2;
            uVar10 = uVar9;
            goto LAB_14002ad1e;
          }
          if (uVar10 + 6 < uVar8) {
            cVar16 = cVar3 + bVar20 + (bVar20 & cVar3 + 0x88U) * -2 + -0x30;
          }
          else {
            if (uVar8 == uVar9) goto LAB_14002ac89;
            uVar19 = uVar10;
            if (uVar8 == uVar10 + 2) goto LAB_14002adca;
            if (uVar8 == uVar10 + 5) {
              uVar18 = (uint)bVar20 & uVar5 + 0x68;
              iVar14 = 0x9cfb890;
              goto LAB_14002ac51;
            }
            if (uVar8 == uVar10 + 3) goto LAB_14002acb9;
            cVar16 = cVar3 + bVar20 + (bVar20 & cVar3 + 0x28U) * -2 + '\x10';
          }
          if (uVar8 == uVar9) goto LAB_14002ad1e;
          if (uVar8 == uVar10 + 3) {
            uVar18 = (uint)bVar20 & uVar5 + 0x10;
            iVar14 = -0x448faf60;
            goto LAB_14002ac51;
          }
          if (uVar8 != uVar10 + 2) {
            if (2 < uVar10 || uVar8 == uVar10 + 6) goto LAB_14002ac89;
            *(char *)((longlong)&local_108 + uVar7) = cVar16;
            goto joined_r0x00014002ac6d;
          }
          uVar18 = (uint)bVar20 & uVar5 + 0x60;
          iVar14 = bVar20 + uVar5 + -0x5cd72540;
        }
        uVar7 = uVar7 + ((ulonglong)~(iVar14 + uVar18 * -2) | 0xffffffffffffff00);
        uVar8 = uVar15;
joined_r0x00014002ac6d:
        uVar7 = uVar7 + 1;
        if (0x2b < uVar7) {
          puVar13 = &local_108;
LAB_14002aec3:
          lVar11 = (*DAT_1400398b8)(puVar13,4,0,0);
          pcVar2 = DAT_1400398f0;
          if (lVar11 != 0) {
            local_108 = CONCAT44(local_108._4_4_,20000);
            (*DAT_1400398f0)(lVar11,3,&local_108,4);
            (*pcVar2)(lVar11,6,&local_108,4);
            (*pcVar2)(lVar11,5,&local_108,4);
            iVar14 = (*DAT_140039af8)(uVar1);
            (*pcVar2)(lVar11,0x90,uVar1,iVar14 * 2);
            local_d0 = lVar11;
            FUN_14002c530(param_1,lVar11);
            (*DAT_1400398a8)(local_d0);
            if (0 < *param_1) {
              return param_1;
            }
            uVar8 = *(ulonglong *)(param_1 + 8);
            if (0xf < uVar8) {
              lVar11 = *local_b0;
              uVar10 = uVar8 + 1;
              lVar12 = lVar11;
              if (0xfff < uVar10) {
                lVar12 = *(longlong *)(lVar11 + -8);
                if (0x1f < (ulonglong)((lVar11 + -8) - lVar12)) goto LAB_14002b023;
                uVar10 = uVar8 + 0x28;
              }
              thunk_FUN_1400340c0(lVar12,uVar10);
            }
            param_1[6] = 0;
            param_1[7] = 0;
            param_1[8] = 0xf;
            param_1[9] = 0;
            *(undefined1 *)(param_1 + 2) = 0;
            (*DAT_1400398a8)(local_d0);
            param_1 = local_58;
          }
          local_50 = local_50 + 8;
          if (local_50 != 0x18) goto LAB_14002ab1f;
          *param_1 = 0;
          *local_b0 = 0;
          local_b0[1] = 0;
          local_b0[2] = 0;
          goto LAB_14002b004;
        }
      } while( true );
    }
  } while( true );
}


/* Catch_All@14002b030 */

undefined8 Catch_All_14002b030(void)

{
  return 0x14002aaef;
}


/* Catch_All@14002b070 */

undefined8 Catch_All_14002b070(undefined8 param_1,longlong param_2)

{
  (*DAT_1400398a8)(*(undefined8 *)(param_2 + 0x1a8));
  return 0x140029dc9;
}


/* FUN_14002b0c0 */

void FUN_14002b0c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 ***pppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 ****ppppuVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined8 ****ppppuVar17;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar7 = param_3[2];
  uVar16 = 0x7fffffffffffffff;
  local_80 = param_1;
  local_50 = param_2;
  if (lVar7 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  puVar13 = (undefined8 *)*param_3;
  uVar12 = param_3[3];
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  uVar8 = lVar7 + 1;
  if (uVar8 < 0x10) {
    ppppuVar17 = &local_78;
    uVar16 = 0xf;
  }
  else {
    if (-2 < lVar7) {
      uVar5 = uVar8 | 0xf;
      uVar16 = 0x16;
      if (0x16 < uVar5) {
        uVar16 = uVar5;
      }
      if (uVar5 < 0xfff) {
        ppppuVar17 = (undefined8 ****)FUN_1400329d0(uVar16 + 1);
        local_78 = ppppuVar17;
        goto LAB_14002b175;
      }
    }
    pppuVar6 = (undefined8 ***)FUN_1400329d0(uVar16 + 0x28);
    ppppuVar17 = (undefined8 ****)((longlong)pppuVar6 + 0x27U & 0xffffffffffffffe0);
    ppppuVar17[-1] = pppuVar6;
    local_78 = ppppuVar17;
  }
LAB_14002b175:
  if (0xf < uVar12) {
    param_3 = puVar13;
  }
  local_68 = uVar8;
  uStack_60 = uVar16;
  *(undefined1 *)ppppuVar17 = 0x22;
  FUN_140034080((undefined1 *)((longlong)ppppuVar17 + 1),param_3,lVar7);
  *(undefined1 *)((longlong)ppppuVar17 + lVar7 + 1) = 0;
  puVar13 = local_50;
  uVar16 = local_68;
  if (uStack_60 - local_68 < 2) {
    ppppuVar17 = (undefined8 ****)FUN_140027740(&local_78,2);
    puVar13 = local_50;
  }
  else {
    local_68 = local_68 + 2;
    ppppuVar17 = &local_78;
    ppppuVar14 = ppppuVar17;
    if (0xf < uStack_60) {
      ppppuVar14 = (undefined8 ****)local_78;
    }
    *(undefined2 *)((longlong)ppppuVar14 + uVar16) = 0x3a22;
    *(undefined1 *)((longlong)ppppuVar14 + uVar16 + 2) = 0;
  }
  puVar4 = local_80;
  local_a8 = *(undefined4 *)ppppuVar17;
  uStack_a4 = *(undefined4 *)((longlong)ppppuVar17 + 4);
  uStack_a0 = *(undefined4 *)(ppppuVar17 + 1);
  uStack_9c = *(undefined4 *)((longlong)ppppuVar17 + 0xc);
  local_98 = *(undefined4 *)(ppppuVar17 + 2);
  uStack_94 = *(undefined4 *)((longlong)ppppuVar17 + 0x14);
  uStack_90 = *(undefined4 *)(ppppuVar17 + 3);
  uStack_8c = *(undefined4 *)((longlong)ppppuVar17 + 0x1c);
  ppppuVar17[2] = (undefined8 ***)0x0;
  ppppuVar17[3] = (undefined8 ***)0xf;
  *(undefined1 *)ppppuVar17 = 0;
  if (0xf < uStack_60) {
    uVar16 = uStack_60 + 1;
    ppppuVar17 = (undefined8 ****)local_78;
    if (0xfff < uVar16) {
      ppppuVar17 = (undefined8 ****)local_78[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_78 + (-8 - (longlong)ppppuVar17)))
      goto LAB_14002b55f;
      uVar16 = uStack_60 + 0x28;
    }
    thunk_FUN_1400340c0(ppppuVar17,uVar16);
  }
  if (CONCAT44(uStack_8c,uStack_90) < 0x10) {
    puVar15 = &local_a8;
  }
  else {
    puVar15 = (undefined4 *)CONCAT44(uStack_a4,local_a8);
  }
  uVar16 = puVar13[2];
  puVar11 = puVar13;
  if (0xf < (ulonglong)puVar13[3]) {
    puVar11 = (undefined8 *)*puVar13;
  }
  if (CONCAT44(uStack_94,local_98) <= uVar16) {
    if (CONCAT44(uStack_94,local_98) == 0) {
      uVar8 = 0;
      if (uVar16 != 0) {
LAB_14002b2df:
        puVar11 = puVar13;
        if (0xf < (ulonglong)puVar13[3]) {
          puVar11 = (undefined8 *)*puVar13;
        }
        do {
          cVar1 = *(char *)((longlong)puVar11 + uVar8);
          if ((cVar1 != ' ') && (cVar1 != '\t')) {
            if (cVar1 != '\"') {
              uVar9 = uVar16 - uVar8;
              uVar12 = uVar8;
              uVar5 = uVar8;
              if (uVar8 <= uVar16 && uVar9 != 0) goto LAB_14002b45f;
              goto LAB_14002b47d;
            }
            if (((uVar8 + 1 < uVar16) &&
                (lVar7 = thunk_FUN_140032d90((longlong)puVar11 + uVar8 + 1,
                                             uVar16 + (longlong)puVar11,0x22),
                lVar7 != uVar16 + (longlong)puVar11)) && (lVar7 - (longlong)puVar11 != -1)) {
              *puVar4 = 0;
              puVar4[1] = 0;
              if (uVar8 < (ulonglong)puVar13[2]) {
                uVar12 = (~(ulonglong)puVar11 + lVar7) - uVar8;
                uVar16 = ~uVar8 + puVar13[2];
                if (uVar12 <= uVar16) {
                  uVar16 = uVar12;
                }
                if (-1 < (longlong)uVar16) {
                  puVar11 = (undefined8 *)*puVar13;
                  uVar12 = puVar13[3];
                  uVar5 = 0xf;
                  puVar13 = puVar4;
                  if (0xf < uVar16) {
                    uVar9 = uVar16 | 0xf;
                    uVar5 = 0x16;
                    if (0x16 < uVar9) {
                      uVar5 = uVar9;
                    }
                    if (uVar9 < 0xfff) {
                      puVar13 = (undefined8 *)FUN_1400329d0(uVar5 + 1);
                    }
                    else {
                      lVar7 = FUN_1400329d0(uVar5 + 0x28);
                      puVar13 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
                      puVar13[-1] = lVar7;
                    }
                    *puVar4 = puVar13;
                  }
                  puVar10 = local_50;
                  if (0xf < uVar12) {
                    puVar10 = puVar11;
                  }
                  puVar4[2] = uVar16;
                  puVar4[3] = uVar5;
                  FUN_140034080(puVar13,(longlong)puVar10 + uVar8 + 1,uVar16);
                  *(undefined1 *)((longlong)puVar13 + uVar16) = 0;
                  goto LAB_14002b3fd;
                }
              }
              else {
                FUN_1400208c0();
              }
                    /* WARNING: Subroutine does not return */
              FUN_140020740();
            }
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar16);
      }
    }
    else {
      lVar7 = thunk_FUN_140032ea0(puVar11,uVar16 + (longlong)puVar11,puVar15);
      if ((lVar7 != uVar16 + (longlong)puVar11) && (lVar7 - (longlong)puVar11 != -1)) {
        uVar16 = puVar13[2];
        uVar8 = (lVar7 - (longlong)puVar11) + CONCAT44(uStack_94,local_98);
        if (uVar8 < uVar16) goto LAB_14002b2df;
      }
    }
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  goto LAB_14002b3fd;
  while (uVar5 = uVar5 + 1, uVar12 = uVar16, uVar5 < uVar16) {
LAB_14002b45f:
    cVar1 = *(char *)((longlong)puVar11 + uVar5);
    uVar12 = uVar5;
    if (((cVar1 == ' ') || (cVar1 == ',')) || (cVar1 == '}')) break;
  }
LAB_14002b47d:
  *puVar4 = 0;
  puVar4[1] = 0;
  uVar16 = uVar12 - uVar8;
  if (uVar9 < uVar12 - uVar8) {
    uVar16 = uVar9;
  }
  if ((longlong)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  uVar12 = 0xf;
  puVar13 = puVar4;
  if (0xf < uVar16) {
    uVar5 = uVar16 | 0xf;
    uVar12 = 0x16;
    if (0x16 < uVar5) {
      uVar12 = uVar5;
    }
    if (uVar5 < 0xfff) {
      puVar13 = (undefined8 *)FUN_1400329d0(uVar12 + 1);
    }
    else {
      lVar7 = FUN_1400329d0(uVar12 + 0x28);
      puVar13 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
      puVar13[-1] = lVar7;
    }
    *puVar4 = puVar13;
  }
  puVar4[2] = uVar16;
  puVar4[3] = uVar12;
  FUN_140034080(puVar13,(longlong)puVar11 + uVar8,uVar16);
  *(undefined1 *)((longlong)puVar13 + uVar16) = 0;
LAB_14002b3fd:
  uVar16 = CONCAT44(uStack_8c,uStack_90);
  if (0xf < uVar16) {
    lVar3 = CONCAT44(uStack_a4,local_a8);
    uVar8 = uVar16 + 1;
    lVar7 = lVar3;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar7)) {
LAB_14002b55f:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar8 = uVar16 + 0x28;
    }
    thunk_FUN_1400340c0(lVar7,uVar8);
  }
  return;
}


/* Unwind@14002b580 */

void Unwind_14002b580(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x30);
  return;
}


/* Unwind@14002b5c0 */

void Unwind_14002b5c0(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x60);
  return;
}


/* FUN_14002b600 */

bool FUN_14002b600(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_140033fe0(param_1,0,param_2,param_3,param_4,param_5,param_6,0x40);
  return iVar1 == 0;
}


/* FUN_14002b660 */

void FUN_14002b660(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_11;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_2 - (lVar2 - lVar1);
  if (param_2 < (ulonglong)(lVar2 - lVar1)) {
    param_1[1] = lVar1 + param_2;
  }
  else if (lVar3 != 0) {
    if ((ulonglong)(param_1[2] - lVar1) < param_2) {
      FUN_14002b8d0(param_1,param_2,&local_11);
      return;
    }
    FUN_1400340a0(lVar2,0);
    param_1[1] = lVar2 + lVar3;
    return;
  }
  return;
}


/* FUN_14002b6d0 */

longlong * FUN_14002b6d0(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  ushort *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_3 == 0x40) {
    FUN_14002b9f0(&local_39,&local_78,param_2);
    FUN_14002b9f0(&local_39,&local_60,param_2 + 0x20);
    lVar4 = local_58;
    lVar3 = local_60;
    lVar2 = local_70;
    lVar7 = local_78;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar5 = (ushort *)FUN_1400329d0(2);
    *param_1 = (longlong)puVar5;
    puVar6 = puVar5 + 1;
    param_1[2] = (longlong)puVar6;
    *puVar5 = (((short)lVar2 + (short)lVar4) - ((short)lVar7 + (short)lVar3)) * 0x100 | 0x30;
    param_1[1] = (longlong)puVar6;
    local_48 = param_1;
    FUN_140028930(param_1,puVar6,local_78,local_70 - local_78);
    FUN_140028930(local_48,local_48[1],local_60,local_58 - local_60);
    param_1 = local_48;
    if (local_60 != 0) {
      uVar8 = local_50 - local_60;
      lVar7 = local_60;
      if (0xfff < uVar8) {
        lVar7 = *(longlong *)(local_60 + -8);
        if (0x1f < (ulonglong)((local_60 + -8) - lVar7)) goto LAB_14002b834;
        uVar8 = uVar8 + 0x27;
      }
      thunk_FUN_1400340c0(lVar7,uVar8);
    }
    if (local_78 != 0) {
      uVar8 = local_68 - local_78;
      lVar7 = local_78;
      if (0xfff < uVar8) {
        lVar7 = *(longlong *)(local_78 + -8);
        if (0x1f < (ulonglong)((local_78 + -8) - lVar7)) {
LAB_14002b834:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar8 = uVar8 + 0x27;
      }
      thunk_FUN_1400340c0(lVar7,uVar8);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}


/* Unwind@14002b840 */

void Unwind_14002b840(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(*(undefined8 *)(param_2 + 0x50));
  return;
}


/* Unwind@14002b870 */

void Unwind_14002b870(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x38);
  return;
}


/* Unwind@14002b8a0 */

void Unwind_14002b8a0(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(param_2 + 0x20);
  return;
}


/* FUN_14002b8d0 */

void FUN_14002b8d0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((longlong)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140020c20();
  }
  uVar1 = *param_1;
  uVar5 = param_1[1];
  uVar3 = param_1[2] - uVar1;
  uVar7 = (uVar3 >> 1) + uVar3;
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  if ((uVar3 >> 1 ^ 0x7fffffffffffffff) < uVar3) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 == 0) {
    uVar3 = 0;
  }
  else if (uVar7 < 0x1000) {
    uVar3 = FUN_1400329d0(uVar7);
  }
  else {
    if (0xffffffffffffffd8 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
    lVar4 = FUN_1400329d0(uVar7 + 0x27);
    uVar3 = lVar4 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar3 - 8) = lVar4;
  }
  lVar4 = uVar5 - uVar1;
  FUN_1400340a0(uVar3 + lVar4,0,param_2 - lVar4);
  FUN_140034080(uVar3,*param_1,param_1[1] - *param_1);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar6 = param_1[2] - uVar1;
    uVar5 = uVar1;
    if (0xfff < uVar6) {
      uVar5 = *(ulonglong *)(uVar1 - 8);
      if (0x1f < (uVar1 - 8) - uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_1400340c0(uVar5,uVar6);
  }
  *param_1 = uVar3;
  param_1[1] = param_2 + uVar3;
  param_1[2] = uVar7 + uVar3;
  return;
}


/* FUN_14002b9f0 */

longlong * FUN_14002b9f0(undefined8 param_1,longlong *param_2,char *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  char cVar3;
  longlong lVar4;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  cVar3 = *param_3;
  if (cVar3 == '\0') {
    cVar3 = param_3[1];
    lVar4 = 1;
    if (cVar3 == '\0') {
      cVar3 = param_3[2];
      lVar4 = 2;
      if (cVar3 == '\0') {
        cVar3 = param_3[3];
        lVar4 = 3;
        if (cVar3 == '\0') {
          cVar3 = param_3[4];
          lVar4 = 4;
          if (cVar3 == '\0') {
            cVar3 = param_3[5];
            lVar4 = 5;
            if (cVar3 == '\0') {
              cVar3 = param_3[6];
              lVar4 = 6;
              if (cVar3 == '\0') {
                cVar3 = param_3[7];
                lVar4 = 7;
                if (cVar3 == '\0') {
                  cVar3 = param_3[8];
                  lVar4 = 8;
                  if (cVar3 == '\0') {
                    cVar3 = param_3[9];
                    lVar4 = 9;
                    if (cVar3 == '\0') {
                      cVar3 = param_3[10];
                      lVar4 = 10;
                      if (cVar3 == '\0') {
                        cVar3 = param_3[0xb];
                        lVar4 = 0xb;
                        if (cVar3 == '\0') {
                          cVar3 = param_3[0xc];
                          lVar4 = 0xc;
                          if (cVar3 == '\0') {
                            cVar3 = param_3[0xd];
                            lVar4 = 0xd;
                            if (cVar3 == '\0') {
                              cVar3 = param_3[0xe];
                              lVar4 = 0xe;
                              if (cVar3 == '\0') {
                                cVar3 = param_3[0xf];
                                lVar4 = 0xf;
                                if (cVar3 == '\0') {
                                  cVar3 = param_3[0x10];
                                  lVar4 = 0x10;
                                  if (cVar3 == '\0') {
                                    cVar3 = param_3[0x11];
                                    lVar4 = 0x11;
                                    if (cVar3 == '\0') {
                                      cVar3 = param_3[0x12];
                                      lVar4 = 0x12;
                                      if (cVar3 == '\0') {
                                        cVar3 = param_3[0x13];
                                        lVar4 = 0x13;
                                        if (cVar3 == '\0') {
                                          cVar3 = param_3[0x14];
                                          lVar4 = 0x14;
                                          if (cVar3 == '\0') {
                                            cVar3 = param_3[0x15];
                                            lVar4 = 0x15;
                                            if (cVar3 == '\0') {
                                              cVar3 = param_3[0x16];
                                              lVar4 = 0x16;
                                              if (cVar3 == '\0') {
                                                cVar3 = param_3[0x17];
                                                lVar4 = 0x17;
                                                if (cVar3 == '\0') {
                                                  cVar3 = param_3[0x18];
                                                  lVar4 = 0x18;
                                                  if (cVar3 == '\0') {
                                                    cVar3 = param_3[0x19];
                                                    lVar4 = 0x19;
                                                    if (cVar3 == '\0') {
                                                      cVar3 = param_3[0x1a];
                                                      lVar4 = 0x1a;
                                                      if (cVar3 == '\0') {
                                                        cVar3 = param_3[0x1b];
                                                        lVar4 = 0x1b;
                                                        if (cVar3 == '\0') {
                                                          cVar3 = param_3[0x1c];
                                                          lVar4 = 0x1c;
                                                          if (cVar3 == '\0') {
                                                            cVar3 = param_3[0x1d];
                                                            lVar4 = 0x1d;
                                                            if (cVar3 == '\0') {
                                                              cVar3 = param_3[0x1e];
                                                              lVar4 = 0x1e;
                                                              if (cVar3 == '\0') {
                                                                cVar3 = param_3[0x1f];
                                                                lVar4 = 0x1f;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar4 = 0;
  }
  puVar1 = (ushort *)FUN_1400329d0(2);
  puVar2 = puVar1 + 1;
  *param_2 = (longlong)puVar1;
  param_2[2] = (longlong)puVar2;
  *puVar1 = (ushort)(byte)((-(char)lVar4 - (cVar3 >> 7)) + 0x20) << 8 | 2;
  param_2[1] = (longlong)puVar2;
  if (cVar3 < '\0') {
    local_39 = 0;
    FUN_14002bcb0(param_2,puVar2,&local_39);
    puVar2 = (ushort *)param_2[1];
  }
  FUN_140028930(param_2,puVar2,param_3 + lVar4,0x20 - lVar4);
  return param_2;
}


/* Unwind@14002bc80 */

void Unwind_14002bc80(undefined8 param_1,longlong param_2)

{
  FUN_14001f1e0(*(undefined8 *)(param_2 + 0x20));
  return;
}


/* FUN_14002bcb0 */

longlong FUN_14002bcb0(ulonglong *param_1,ulonglong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar1 = *param_1;
  if (param_1[1] - uVar1 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140020c20();
  }
  uVar8 = (param_1[1] - uVar1) + 1;
  uVar4 = param_1[2] - uVar1;
  uVar7 = (uVar4 >> 1) + uVar4;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if ((uVar4 >> 1 ^ 0x7fffffffffffffff) < uVar4) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 == 0) {
    uVar4 = 0;
  }
  else if (uVar7 < 0x1000) {
    uVar4 = FUN_1400329d0(uVar7);
  }
  else {
    if (0xffffffffffffffd8 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
    lVar3 = FUN_1400329d0(uVar7 + 0x27);
    uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar4 - 8) = lVar3;
  }
  lVar3 = uVar4 + (param_2 - uVar1);
  *(undefined1 *)(uVar4 + (param_2 - uVar1)) = *param_3;
  if (param_2 == param_1[1]) {
    FUN_140034080(uVar4,*param_1,param_2 - *param_1);
    uVar1 = *param_1;
  }
  else {
    FUN_140034080(uVar4,*param_1,param_2 - *param_1);
    FUN_140034080(lVar3 + 1,param_2,param_1[1] - param_2);
    uVar1 = *param_1;
  }
  if (uVar1 != 0) {
    uVar6 = param_1[2] - uVar1;
    uVar5 = uVar1;
    if (0xfff < uVar6) {
      uVar5 = *(ulonglong *)(uVar1 - 8);
      if (0x1f < (uVar1 - 8) - uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_1400340c0(uVar5,uVar6);
  }
  *param_1 = uVar4;
  param_1[1] = uVar8 + uVar4;
  param_1[2] = uVar7 + uVar4;
  return lVar3;
}


/* FUN_14002be10 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_14002be10(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  byte abStack_4a [23];
  undefined1 local_33 [11];
  
  if ((longlong)param_2 < 0) {
    param_2 = -param_2;
    lVar2 = 0x14;
    if (param_2 < 10) {
LAB_14002beaa:
      abStack_4a[lVar2 + 2] = (byte)param_2 | 0x30;
    }
    else {
      lVar2 = 0x15;
      do {
        uVar8 = param_2;
        lVar3 = lVar2;
        param_2 = uVar8 / 100;
        *(undefined2 *)(abStack_4a + lVar3) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + (ulonglong)(uint)((int)uVar8 + (int)param_2 * -100) * 2);
        lVar2 = lVar3 + -2;
      } while (999 < uVar8);
      if (99 < uVar8) {
        lVar2 = lVar3 + -3;
        goto LAB_14002beaa;
      }
    }
    bVar4 = 0x2d;
LAB_14002bfac:
    abStack_4a[lVar2 + 1] = bVar4;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (lVar2 == 0x16) {
      param_1[3] = 0xf;
      return param_1;
    }
    pbVar6 = abStack_4a + lVar2 + 1;
    puVar5 = local_33 + -(longlong)pbVar6;
  }
  else {
    if (param_2 < 10) {
      abStack_4a[0x16] = (byte)param_2 | 0x30;
      pbVar6 = abStack_4a + 0x16;
    }
    else {
      lVar2 = 0x15;
      do {
        uVar8 = param_2;
        lVar3 = lVar2;
        param_2 = uVar8 / 100;
        *(undefined2 *)(abStack_4a + lVar3) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + (ulonglong)(uint)((int)uVar8 + (int)param_2 * -100) * 2);
        lVar2 = lVar3 + -2;
      } while (999 < uVar8);
      if (99 < uVar8) {
        bVar4 = (byte)param_2 | 0x30;
        goto LAB_14002bfac;
      }
      pbVar6 = abStack_4a + lVar3;
    }
    *param_1 = 0;
    param_1[1] = 0;
    puVar5 = local_33 + -(longlong)pbVar6;
  }
  if (-1 < (longlong)puVar5) {
    uVar8 = 0xf;
    puVar7 = param_1;
    if ((undefined1 *)0xf < puVar5) {
      uVar1 = (ulonglong)puVar5 | 0xf;
      uVar8 = 0x16;
      if (0x16 < uVar1) {
        uVar8 = uVar1;
      }
      if (uVar1 < 0xfff) {
        puVar7 = (undefined8 *)FUN_1400329d0(uVar8 + 1);
      }
      else {
        lVar2 = FUN_1400329d0(uVar8 + 0x28);
        puVar7 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
        puVar7[-1] = lVar2;
      }
      *param_1 = puVar7;
    }
    param_1[2] = puVar5;
    param_1[3] = uVar8;
    FUN_140034080(puVar7,pbVar6,puVar5);
    *(undefined1 *)((longlong)puVar7 + (longlong)puVar5) = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140020740();
}


/* FUN_14002c000 */

ulonglong *
FUN_14002c000(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = param_1[2];
  if (0x7ffffffffffffffe - uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  uVar4 = param_2 + uVar5 | 7;
  if (uVar4 < 0x7fffffffffffffff) {
    uVar1 = param_1[3];
    if (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1)) {
      uVar6 = (uVar1 >> 1) + uVar1;
      if (uVar6 < uVar4) {
        uVar6 = uVar4;
      }
      uVar4 = uVar6 + 1;
      if (-1 < (longlong)uVar4) {
        if (uVar4 == 0) {
          uVar4 = 0;
        }
        else if (uVar4 < 0x800) {
          uVar4 = FUN_1400329d0(uVar4 * 2);
        }
        else {
          if (0x7fffffffffffffec < uVar4) goto LAB_14002c17c;
          lVar3 = FUN_1400329d0(uVar4 * 2 + 0x27);
          uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar4 - 8) = lVar3;
        }
        param_1[2] = param_2 + uVar5;
        param_1[3] = uVar6;
        if (uVar1 < 8) {
          FUN_140034080(uVar4,param_1,uVar5 * 2);
          lVar3 = uVar4 + uVar5 * 2;
          FUN_140034080(lVar3,param_4,param_5 * 2);
          *(undefined2 *)(lVar3 + param_5 * 2) = 0;
        }
        else {
          uVar6 = *param_1;
          FUN_140034080(uVar4,uVar6,uVar5 * 2);
          lVar3 = uVar4 + uVar5 * 2;
          FUN_140034080(lVar3,param_4,param_5 * 2);
          *(undefined2 *)(lVar3 + param_5 * 2) = 0;
          uVar5 = uVar1 * 2 + 2;
          uVar7 = uVar6;
          if (0xfff < uVar5) {
            uVar7 = *(ulonglong *)(uVar6 - 8);
            if (0x1f < (uVar6 - 8) - uVar7) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar5 = uVar1 * 2 + 0x29;
          }
          thunk_FUN_1400340c0(uVar7,uVar5);
        }
        *param_1 = uVar4;
        return param_1;
      }
    }
  }
LAB_14002c17c:
                    /* WARNING: Subroutine does not return */
  FUN_140020760();
}


/* FUN_14002c190 */

ulonglong *
FUN_14002c190(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = param_3[2];
  uVar3 = param_4[2];
  uVar1 = uVar3 + uVar2;
  if ((ulonglong)param_3[3] < (ulonglong)param_4[3] || param_3[3] - uVar2 < uVar3) {
    if (param_4[3] - uVar3 < uVar2) {
      if (0x7ffffffffffffffe - uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_140020740();
      }
      uVar11 = uVar1 | 7;
      if (uVar11 < 0x7fffffffffffffff) {
        uVar14 = 10;
        if (10 < uVar11) {
          uVar14 = uVar11;
        }
        if (uVar11 < 0x7ff) {
          uVar11 = FUN_1400329d0(uVar14 * 2 + 2);
        }
        else {
          if (0x7fffffffffffffeb < uVar11) goto LAB_14002c372;
          lVar12 = FUN_1400329d0(uVar14 * 2 + 0x29);
          uVar11 = lVar12 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar11 - 8) = lVar12;
        }
        *param_1 = uVar11;
        param_1[2] = uVar1;
        param_1[3] = uVar14;
        if (7 < (ulonglong)param_3[3]) {
          param_3 = (undefined8 *)*param_3;
        }
        FUN_140034080(uVar11,param_3,uVar2 * 2);
        if (7 < (ulonglong)param_4[3]) {
          param_4 = (undefined8 *)*param_4;
        }
        FUN_140034080(uVar11 + uVar2 * 2,param_4,uVar3 * 2 + 2);
        return param_1;
      }
LAB_14002c372:
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
    uVar4 = *(undefined4 *)param_4;
    uVar5 = *(undefined4 *)((longlong)param_4 + 4);
    uVar6 = *(undefined4 *)(param_4 + 1);
    uVar7 = *(undefined4 *)((longlong)param_4 + 0xc);
    uVar8 = *(undefined4 *)((longlong)param_4 + 0x14);
    uVar9 = *(undefined4 *)(param_4 + 3);
    uVar10 = *(undefined4 *)((longlong)param_4 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_4 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar8;
    *(undefined4 *)(param_1 + 3) = uVar9;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar10;
    *(undefined4 *)param_1 = uVar4;
    *(undefined4 *)((longlong)param_1 + 4) = uVar5;
    *(undefined4 *)(param_1 + 1) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
    param_4[2] = 0;
    param_4[3] = 7;
    *(undefined2 *)param_4 = 0;
    uVar11 = *param_1;
    lVar12 = uVar2 * 2;
    FUN_140034090(uVar11 + uVar2 * 2,uVar11,uVar3 * 2 + 2);
    if (7 < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
  }
  else {
    uVar4 = *(undefined4 *)param_3;
    uVar5 = *(undefined4 *)((longlong)param_3 + 4);
    uVar6 = *(undefined4 *)(param_3 + 1);
    uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar11 = param_3[3];
    param_1[2] = param_3[2];
    param_1[3] = uVar11;
    *(undefined4 *)param_1 = uVar4;
    *(undefined4 *)((longlong)param_1 + 4) = uVar5;
    *(undefined4 *)(param_1 + 1) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
    param_3[2] = 0;
    param_3[3] = 7;
    *(undefined2 *)param_3 = 0;
    puVar13 = param_1;
    if (7 < param_1[3]) {
      puVar13 = (ulonglong *)*param_1;
    }
    param_3 = param_4;
    if (7 < (ulonglong)param_4[3]) {
      param_3 = (undefined8 *)*param_4;
    }
    uVar11 = (longlong)puVar13 + uVar2 * 2;
    lVar12 = uVar3 * 2 + 2;
  }
  FUN_140034080(uVar11,param_3,lVar12);
  param_1[2] = uVar1;
  return param_1;
}


/* FUN_14002c380 */

ulonglong *
FUN_14002c380(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = param_1[2];
  if (0x7ffffffffffffffe - uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  uVar4 = param_2 + uVar5 | 7;
  if (uVar4 < 0x7fffffffffffffff) {
    uVar1 = param_1[3];
    if (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1)) {
      uVar6 = (uVar1 >> 1) + uVar1;
      if (uVar6 < uVar4) {
        uVar6 = uVar4;
      }
      uVar4 = uVar6 + 1;
      if (-1 < (longlong)uVar4) {
        if (uVar4 == 0) {
          uVar4 = 0;
        }
        else if (uVar4 < 0x800) {
          uVar4 = FUN_1400329d0(uVar4 * 2);
        }
        else {
          if (0x7fffffffffffffec < uVar4) goto LAB_14002c520;
          lVar3 = FUN_1400329d0(uVar4 * 2 + 0x27);
          uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar4 - 8) = lVar3;
        }
        param_1[2] = param_2 + uVar5;
        param_1[3] = uVar6;
        if (uVar1 < 8) {
          FUN_140034080(uVar4,param_1,param_4 * 2);
          lVar3 = uVar4 + param_4 * 2;
          FUN_140034080(lVar3,param_5,param_6 * 2);
          FUN_140034080(lVar3 + param_6 * 2,(longlong)param_1 + param_4 * 2,
                        (uVar5 - param_4) * 2 + 2);
        }
        else {
          uVar6 = *param_1;
          FUN_140034080(uVar4,uVar6,param_4 * 2);
          lVar3 = uVar4 + param_4 * 2;
          FUN_140034080(lVar3,param_5,param_6 * 2);
          FUN_140034080(lVar3 + param_6 * 2,uVar6 + param_4 * 2,(uVar5 - param_4) * 2 + 2);
          uVar5 = uVar1 * 2 + 2;
          uVar7 = uVar6;
          if (0xfff < uVar5) {
            uVar7 = *(ulonglong *)(uVar6 - 8);
            if (0x1f < (uVar6 - 8) - uVar7) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar5 = uVar1 * 2 + 0x29;
          }
          thunk_FUN_1400340c0(uVar7,uVar5);
        }
        *param_1 = uVar4;
        return param_1;
      }
    }
  }
LAB_14002c520:
                    /* WARNING: Subroutine does not return */
  FUN_140020760();
}


/* FUN_14002c530 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_14002c530(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined2 param_6,undefined8 param_7)

{
  ulonglong uVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 ******ppppppuVar11;
  ulonglong uVar12;
  longlong lVar13;
  code *pcVar14;
  byte bVar15;
  byte bVar16;
  char cVar17;
  char cVar18;
  ulonglong uVar19;
  byte bVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  undefined8 *******pppppppuVar23;
  bool bVar24;
  undefined8 *******local_110 [2];
  undefined4 local_100;
  ulonglong local_f8;
  undefined4 *local_f0;
  longlong local_e8;
  undefined4 local_dc;
  undefined8 *******local_d8;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  uint6 uStack_c6;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 local_98;
  undefined8 local_96;
  undefined5 uStack_8e;
  undefined3 uStack_89;
  undefined5 uStack_86;
  undefined4 *local_78;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  lVar7 = (*DAT_1400398b0)(param_2,param_3,param_6,0);
  if (lVar7 == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
LAB_14002cc3b:
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0xf;
    return param_1;
  }
  if (7 < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  local_d8 = (undefined8 *******)0x37423547334d3140;
  uStack_d0 = 0x2928;
  uStack_ce = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c0 = 0;
  pppppppuVar23 = &local_d8;
LAB_14002c5cd:
  puVar8 = (ulonglong *)FUN_140031690();
  uVar12 = *puVar8;
  puVar8 = (ulonglong *)FUN_1400316a0();
  uVar21 = *puVar8;
  uVar9 = 0;
  do {
    if (uVar9 < uVar12) {
      pppppppuVar23 = (undefined8 *******)&stack0x004aeab0;
      goto LAB_14002c8b1;
    }
    bVar20 = *(byte *)((longlong)&local_d8 + uVar9);
    uVar1 = uVar21 + 1;
    bVar16 = (byte)uVar9;
    if (uVar1 <= uVar12) {
      if (uVar12 != uVar1) {
        if (uVar12 != uVar21 + 2) {
          if (uVar12 == uVar21 + 3) {
            bVar15 = (bVar16 + bVar20 + (bVar16 + 0x88 & bVar20) * -2) - 0x30;
            *(byte *)((longlong)&local_d8 + uVar9) =
                 bVar16 + bVar20 + (bVar16 - 0x18 & bVar20) * -2 + bVar15 + -0x70;
            uVar12 = uVar12 + uVar21;
            goto LAB_14002c796;
          }
          if (uVar12 != uVar21 + 7) goto LAB_14002c68b;
          goto LAB_14002c6f4;
        }
LAB_14002c5f0:
        bVar16 = bVar16 + bVar20 + (bVar16 + 0x38 & bVar20) * -2 + 0xb0;
        *(byte *)((longlong)&local_d8 + uVar9) = bVar16;
        lVar10 = (~uVar21 + uVar9) - (ulonglong)bVar16;
        *(byte *)((longlong)&local_d8 + lVar10) =
             (char)lVar10 + bVar20 + ((char)lVar10 - 0x20U & bVar20) * -2 + -0x40;
        lVar10 = lVar10 - uVar12;
        uVar12 = uVar12 + 1;
        bVar20 = *(byte *)((longlong)&local_dc + lVar10 + 2);
        uVar9 = lVar10 - 2;
        uVar21 = uVar1;
      }
      uVar9 = uVar9 + uVar21 + (ulonglong)bVar20;
      goto LAB_14002c662;
    }
LAB_14002c68b:
    if (uVar9 < uVar21) {
      pppppppuVar23 = (undefined8 *******)&stack0x01594808;
      goto LAB_14002c8b1;
    }
    uVar19 = uVar21 + uVar12;
    if (uVar9 < uVar19) {
      if (uVar12 != uVar21 + 2) {
        if (uVar12 == uVar21 + 0x10) {
          bVar15 = bVar16 + bVar20 + (bVar20 & (bVar16 | 0xc0)) * -2 + 0x80;
          goto LAB_14002c796;
        }
        goto LAB_14002c5cd;
      }
    }
    else {
      if (uVar19 == 0x10) goto LAB_14002c5f0;
      if (uVar12 == uVar1) {
LAB_14002c6d3:
        *(byte *)((longlong)&local_d8 + uVar9) =
             bVar16 + bVar20 + (bVar20 & bVar16 + 0x98) * -2 + 'p';
        uVar21 = uVar1;
      }
      else if (uVar12 != uVar21 + 2) {
        if (uVar12 == uVar21 + 4) {
          bVar15 = bVar16 + bVar20 + (bVar20 & bVar16 + 0x98) * -2 + 0x70;
          uVar12 = uVar19;
        }
        else {
          if (uVar12 != uVar21 + 3) {
            if (uVar12 == uVar21 + 7) goto LAB_14002c5f0;
            if (uVar21 + 5 < uVar12) {
              cVar17 = bVar16 + bVar20 + (bVar20 & bVar16 - 0x30) * -2 + ' ';
            }
            else {
              cVar17 = bVar16 + bVar20 + (bVar20 & bVar16 + 0xa8) * -2 + '\x10';
            }
            if (1 < uVar21) goto LAB_14002c6d3;
            *(char *)((longlong)&local_d8 + uVar9) = cVar17;
            goto LAB_14002c662;
          }
          bVar15 = bVar16 + bVar20 + (bVar20 & bVar16 - 0x18) * -2 + 0x90;
        }
LAB_14002c796:
        uVar9 = uVar9 + ~(ulonglong)bVar15;
        goto LAB_14002c662;
      }
    }
LAB_14002c6f4:
    uVar9 = uVar9 - 1;
LAB_14002c662:
    uVar9 = uVar9 + 1;
    if (0x18 < uVar9) {
LAB_14002c8b1:
      lVar10 = (*DAT_1400398c0)(lVar7,pppppppuVar23,param_4,0);
      if (lVar10 != 0) {
        local_d8 = _DAT_140035800;
        uStack_d0 = (undefined2)_UNK_140035808;
        uStack_ce = (undefined6)((ulonglong)_UNK_140035808 >> 0x10);
        uStack_c8 = (undefined1)_DAT_140035810;
        uStack_c7 = (undefined1)((ulonglong)_DAT_140035810 >> 8);
        uStack_c6 = (uint6)((ulonglong)_DAT_140035810 >> 0x10);
        uStack_c0 = (undefined1)_UNK_140035818;
        uStack_bf = (undefined7)((ulonglong)_UNK_140035818 >> 8);
        local_b8 = _DAT_140035820;
        uStack_b0 = _UNK_140035828;
        local_a8 = _DAT_140035830;
        uStack_a4 = _UNK_140035834;
        uStack_a0 = _UNK_140035838;
        uStack_9c = _UNK_14003583c;
        local_98 = 0x7576;
        local_96 = 0;
        uStack_8e = 0;
        uStack_89 = 0;
        uStack_86 = 0;
        pppppppuVar23 = &local_d8;
        break;
      }
      (*DAT_1400398a8)(lVar7);
      *param_1 = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      goto LAB_14002cc3b;
    }
  } while( true );
LAB_14002c921:
  puVar8 = (ulonglong *)FUN_140031690();
  uVar12 = *puVar8;
  puVar8 = (ulonglong *)FUN_1400316a0();
  uVar21 = *puVar8;
  uVar9 = 0;
  do {
    if (uVar9 < uVar12) {
      pppppppuVar23 = (undefined8 *******)&stack0x0176787d;
      goto LAB_14002cc60;
    }
    bVar20 = *(byte *)((longlong)&local_d8 + uVar9);
    uVar1 = uVar21 + 1;
    cVar17 = (char)uVar9;
    if (uVar12 < uVar1) {
LAB_14002c9d0:
      if (uVar9 < uVar21) {
        pppppppuVar23 = (undefined8 *******)&stack0x01461034;
        goto LAB_14002cc60;
      }
      uVar19 = uVar21 + uVar12;
      if (uVar9 < uVar19) {
        if (uVar12 == uVar21 + 6) {
LAB_14002cada:
          *(byte *)((longlong)&local_d8 + uVar9) =
               cVar17 + bVar20 + (bVar20 & cVar17 + 0x5fU) * -2 + -0x3a;
          uVar21 = uVar1;
        }
        else if (uVar12 != uVar21 + 8) {
          if (uVar12 == uVar21 + 4) {
            bVar16 = cVar17 + bVar20 + (bVar20 & cVar17 + 0x14U) * -2 + 0x88;
            goto LAB_14002ca77;
          }
          if (uVar12 == uVar21 + 0x42) {
            bVar16 = cVar17 + bVar20 + (bVar20 & cVar17 + 0x38U) * -2 + 0xb0;
            uVar19 = uVar12;
            goto LAB_14002ca9d;
          }
          if (uVar12 == uVar21 + 2) goto LAB_14002c935;
          if (uVar12 == uVar21 + 0x28) goto LAB_14002c99d;
          goto LAB_14002c921;
        }
LAB_14002cafb:
        uVar9 = uVar9 - 1;
        goto LAB_14002c9a7;
      }
      if (uVar19 == 0x41) {
LAB_14002c935:
        bVar16 = (cVar17 + bVar20 + (cVar17 + 0x83U & bVar20) * -2) - 0x12;
        *(byte *)((longlong)&local_d8 + uVar9) = bVar16;
        lVar13 = (~uVar21 + uVar9) - (ulonglong)bVar16;
        *(byte *)((longlong)&local_d8 + lVar13) =
             (char)lVar13 + bVar20 + ((char)lVar13 - 0x34U & bVar20) * -2 + '8';
        lVar13 = lVar13 - uVar12;
        uVar12 = uVar12 + 1;
        bVar20 = *(byte *)((longlong)&local_dc + lVar13 + 2);
        uVar9 = lVar13 - 2;
        uVar21 = uVar1;
        goto LAB_14002c99d;
      }
      if (uVar12 == uVar1) goto LAB_14002cada;
      if (uVar12 == uVar21 + 2) goto LAB_14002cafb;
      if (uVar12 == uVar21 + 3) {
        bVar16 = cVar17 + bVar20 + (bVar20 & cVar17 + 0x3fU) * -2 + 0x86;
LAB_14002ca9d:
        uVar9 = uVar9 + ~(ulonglong)bVar16;
        uVar12 = uVar19;
      }
      else {
        if (uVar21 + 0x20 < uVar12) {
          cVar18 = cVar17 + bVar20 + (bVar20 & cVar17 + 0x62U) * -2 + -0x4c;
        }
        else {
          if (uVar12 == uVar21 + 5) {
            bVar16 = cVar17 + bVar20 + (bVar20 & cVar17 + 0x3cU) * -2 + 0x98;
            goto LAB_14002ca9d;
          }
          if (uVar12 == uVar21 + 4) goto LAB_14002cada;
          cVar18 = cVar17 + bVar20 + (bVar20 & cVar17 + 0x49U) * -2 + 'J';
        }
        if (0x1f < uVar21) goto LAB_14002cada;
        *(char *)((longlong)&local_d8 + uVar9) = cVar18;
      }
    }
    else {
      if (uVar12 != uVar1) {
        if (uVar12 == uVar21 + 3) {
          bVar16 = (cVar17 + bVar20 + (bVar20 & cVar17 + 0xb5U) * -2) - 0x3e;
LAB_14002ca77:
          *(byte *)((longlong)&local_d8 + uVar9) =
               cVar17 + bVar20 + (bVar20 & cVar17 - 0xfU) * -2 + bVar16 + 'Z';
          uVar19 = uVar21 + uVar12;
          goto LAB_14002ca9d;
        }
        if (uVar12 != uVar21 + 5) goto LAB_14002c9d0;
        goto LAB_14002cada;
      }
LAB_14002c99d:
      uVar9 = uVar9 + uVar21 + (ulonglong)bVar20;
    }
LAB_14002c9a7:
    uVar9 = uVar9 + 1;
    if (0x56 < uVar9) {
LAB_14002cc60:
      FUN_14002d0f0(local_110,pppppppuVar23,param_7);
      if (0xf < (ulonglong)param_5[3]) {
        param_5 = (undefined8 *)*param_5;
      }
      pppppppuVar23 = local_110;
      if (7 < local_f8) {
        pppppppuVar23 = local_110[0];
      }
      iVar6 = (*DAT_1400398e8)(lVar10,pppppppuVar23,local_100,param_5);
      pcVar14 = DAT_1400398a8;
      if (iVar6 == 0) {
        (*DAT_1400398a8)(lVar10);
      }
      else {
        local_e8 = lVar7;
        iVar6 = (*DAT_1400398e0)(lVar10,0);
        pcVar14 = DAT_1400398a8;
        if (iVar6 != 0) {
          local_f0 = param_1 + 2;
          *(undefined8 *)(param_1 + 2) = 0;
          *(undefined8 *)(param_1 + 4) = 0;
          *(undefined8 *)(param_1 + 6) = 0;
          *(undefined8 *)(param_1 + 8) = 0xf;
          local_6c = 0;
          local_dc = 4;
          (*DAT_1400398d0)(lVar10,0x20000013,0,&local_6c);
          *param_1 = local_6c;
          pcVar14 = DAT_1400398c8;
          local_64 = 0;
          local_78 = param_1;
          break;
        }
        (*DAT_1400398a8)(lVar10);
        lVar7 = local_e8;
      }
      (*pcVar14)(lVar7);
      *param_1 = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 8) = 0xf;
      goto joined_r0x00014002cfa8;
    }
  } while( true );
  do {
    iVar6 = (*pcVar14)(lVar10,&local_64);
    uVar5 = local_64;
    if ((iVar6 == 0) || (uVar12 = (ulonglong)local_64, local_64 == 0)) break;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c6 = 0;
    uStack_c0 = 0;
    uStack_bf = 0;
    local_d8 = (undefined8 *******)0x0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uVar21 = 0xf;
    pppppppuVar23 = &local_d8;
    if (0xf < local_64) {
      uVar9 = uVar12 | 0xf;
      uVar21 = 0x16;
      if (0x16 < uVar9) {
        uVar21 = uVar9;
      }
      if (uVar9 < 0xfff) {
        pppppppuVar23 = (undefined8 *******)FUN_1400329d0(uVar21 + 1);
        local_d8 = pppppppuVar23;
      }
      else {
        ppppppuVar11 = (undefined8 ******)FUN_1400329d0(uVar21 + 0x28);
        pppppppuVar23 = (undefined8 *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
        pppppppuVar23[-1] = ppppppuVar11;
        local_d8 = pppppppuVar23;
      }
    }
    uStack_c8 = (undefined1)uVar5;
    uStack_c7 = (undefined1)(uVar5 >> 8);
    uStack_c6 = (uint6)(ushort)(uVar5 >> 0x10);
    uStack_c0 = (undefined1)uVar21;
    uStack_bf = (undefined7)(uVar21 >> 8);
    FUN_1400340a0(pppppppuVar23,0,uVar12);
    *(undefined1 *)((longlong)pppppppuVar23 + uVar12) = 0;
    local_68 = 0;
    pppppppuVar23 = &local_d8;
    if (0xf < CONCAT71(uStack_bf,uStack_c0)) {
      pppppppuVar23 = local_d8;
    }
    iVar6 = (*DAT_1400398d8)(lVar10,pppppppuVar23,local_64,&local_68);
    uVar4 = uStack_c7;
    uVar3 = uStack_c8;
    bVar24 = local_68 == 0;
    if (bVar24 || iVar6 == 0) {
LAB_14002ceaa:
      uVar12 = CONCAT71(uStack_bf,uStack_c0);
    }
    else {
      uVar9 = (ulonglong)local_68;
      uVar12 = CONCAT62(uStack_c6,CONCAT11(uStack_c7,uStack_c8));
      uVar21 = uVar9 - uVar12;
      uStack_c8 = (undefined1)local_68;
      uStack_c7 = (undefined1)(local_68 >> 8);
      uVar2 = (ushort)(local_68 >> 0x10);
      pppppppuVar23 = &local_d8;
      if (uVar9 < uVar12 || uVar21 == 0) {
        uStack_c6 = (uint6)uVar2;
        if (0xf < CONCAT71(uStack_bf,uStack_c0)) {
          pppppppuVar23 = local_d8;
        }
LAB_14002cf6d:
        *(undefined1 *)((longlong)pppppppuVar23 + uVar9) = 0;
        uVar12 = CONCAT62(uStack_c6,CONCAT11(uStack_c7,uStack_c8));
        uVar21 = CONCAT71(uStack_bf,uStack_c0);
      }
      else {
        if (uVar21 <= CONCAT71(uStack_bf,uStack_c0) - uVar12) {
          uStack_c6 = (uint6)uVar2;
          if (0xf < CONCAT71(uStack_bf,uStack_c0)) {
            pppppppuVar23 = local_d8;
          }
          FUN_1400340a0(uVar12 + (longlong)pppppppuVar23,0);
          goto LAB_14002cf6d;
        }
        uStack_c8 = uVar3;
        uStack_c7 = uVar4;
        FUN_14002d230(&local_d8,uVar21,uVar21,uVar21);
        uVar12 = CONCAT62(uStack_c6,CONCAT11(uStack_c7,uStack_c8));
        uVar21 = CONCAT71(uStack_bf,uStack_c0);
      }
      pppppppuVar23 = &local_d8;
      if (0xf < uVar21) {
        pppppppuVar23 = local_d8;
      }
      lVar7 = *(longlong *)(local_78 + 6);
      if (*(ulonglong *)(local_78 + 8) - lVar7 < uVar12) {
        FUN_140027740(local_f0,uVar12);
        goto LAB_14002ceaa;
      }
      *(ulonglong *)(local_78 + 6) = lVar7 + uVar12;
      puVar22 = local_f0;
      if (0xf < *(ulonglong *)(local_78 + 8)) {
        puVar22 = *(undefined4 **)(local_78 + 2);
      }
      FUN_140034090(lVar7 + (longlong)puVar22,pppppppuVar23);
      *(undefined1 *)((longlong)puVar22 + lVar7 + uVar12) = 0;
      uVar12 = CONCAT71(uStack_bf,uStack_c0);
    }
    if (0xf < uVar12) {
      uVar21 = uVar12 + 1;
      pppppppuVar23 = local_d8;
      if (0xfff < uVar21) {
        pppppppuVar23 = (undefined8 *******)local_d8[-1];
        if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pppppppuVar23)))
        goto LAB_14002d052;
        uVar21 = uVar12 + 0x28;
      }
      thunk_FUN_1400340c0(pppppppuVar23,uVar21);
    }
  } while (!bVar24 && iVar6 != 0);
  pcVar14 = DAT_1400398a8;
  (*DAT_1400398a8)(lVar10);
  (*pcVar14)(local_e8);
  param_1 = local_78;
joined_r0x00014002cfa8:
  if (7 < local_f8) {
    uVar12 = local_f8 * 2 + 2;
    pppppppuVar23 = local_110[0];
    if (0xfff < uVar12) {
      pppppppuVar23 = (undefined8 *******)local_110[0][-1];
      if (0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pppppppuVar23))) {
LAB_14002d052:
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      uVar12 = local_f8 * 2 + 0x29;
    }
    thunk_FUN_1400340c0(pppppppuVar23,uVar12);
  }
  return param_1;
}


/* Unwind@14002d060 */

void Unwind_14002d060(undefined8 param_1,longlong param_2)

{
  FUN_14000fb30(param_2 + 0x70);
  return;
}


/* Unwind@14002d0a0 */

void Unwind_14002d0a0(undefined8 param_1,longlong param_2)

{
  FUN_14001f550(*(undefined8 *)(param_2 + 0xd0));
  FUN_140029830(param_2 + 0x38);
  return;
}


/* FUN_14002d0f0 */

undefined8 * FUN_14002d0f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  uVar5 = (*DAT_140039af8)(param_2);
  lVar2 = param_3[2];
  if (0x7ffffffffffffffeU - lVar2 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  puVar3 = (undefined8 *)*param_3;
  uVar4 = param_3[3];
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = lVar2 + uVar5;
  uVar8 = 7;
  puVar9 = param_1;
  if (7 < uVar1) {
    uVar7 = uVar1 | 7;
    if (0x7ffffffffffffffe < uVar7) {
LAB_14002d21e:
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
    uVar8 = 10;
    if (10 < uVar7) {
      uVar8 = uVar7;
    }
    if (uVar7 < 0x7ff) {
      puVar9 = (undefined8 *)FUN_1400329d0(uVar8 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar7) goto LAB_14002d21e;
      lVar6 = FUN_1400329d0(uVar8 * 2 + 0x29);
      puVar9 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      puVar9[-1] = lVar6;
    }
    *param_1 = puVar9;
  }
  if (7 < uVar4) {
    param_3 = puVar3;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar8;
  FUN_140034080(puVar9,param_2,uVar5 * 2);
  FUN_140034080((longlong)puVar9 + uVar5 * 2,param_3,lVar2 * 2);
  *(undefined2 *)((longlong)puVar9 + uVar1 * 2) = 0;
  return param_1;
}


/* FUN_14002d230 */

ulonglong *
FUN_14002d230(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = param_1[2];
  uVar5 = 0x7fffffffffffffff;
  if ((uVar4 ^ 0x7fffffffffffffff) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  param_2 = param_2 + uVar4;
  uVar1 = param_1[3];
  if ((-1 < (longlong)param_2) && (uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff))) {
    uVar5 = (uVar1 >> 1) + uVar1;
    if (uVar5 < (param_2 | 0xf)) {
      uVar5 = param_2 | 0xf;
    }
    if (uVar5 == 0xffffffffffffffff) {
      uVar6 = 0;
      uVar5 = 0xffffffffffffffff;
      goto LAB_14002d299;
    }
    if (uVar5 + 1 < 0x1000) {
      uVar6 = FUN_1400329d0();
      goto LAB_14002d299;
    }
    if (0xffffffffffffffd8 < uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_140020760();
    }
  }
  lVar3 = FUN_1400329d0(uVar5 + 0x28);
  uVar6 = lVar3 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar3;
LAB_14002d299:
  param_1[2] = param_2;
  param_1[3] = uVar5;
  if (uVar1 < 0x10) {
    FUN_140034080(uVar6,param_1,uVar4);
    FUN_1400340a0(uVar4 + uVar6,param_5,param_4);
    *(undefined1 *)(param_4 + uVar4 + uVar6) = 0;
  }
  else {
    uVar5 = *param_1;
    FUN_140034080(uVar6,uVar5,uVar4);
    FUN_1400340a0(uVar4 + uVar6,param_5,param_4);
    *(undefined1 *)(param_4 + uVar4 + uVar6) = 0;
    uVar4 = uVar1 + 1;
    uVar7 = uVar5;
    if (0xfff < uVar4) {
      uVar7 = *(ulonglong *)(uVar5 - 8);
      if (0x1f < (uVar5 - 8) - uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400340c0(uVar7,uVar4);
  }
  *param_1 = uVar6;
  return param_1;
}


/* FUN_14002d3a0 */

void FUN_14002d3a0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong *plVar60;
  longlong lVar61;
  longlong *plVar62;
  longlong local_4f8;
  longlong local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  longlong local_498;
  longlong local_490;
  longlong local_488;
  longlong local_480;
  longlong local_478;
  longlong local_470;
  longlong local_468;
  longlong local_460;
  longlong local_458;
  longlong local_450;
  longlong local_448;
  longlong local_440;
  longlong local_438;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  longlong local_398;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  longlong *local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  lVar59 = *param_1;
  lVar61 = param_1[0x10];
  local_3f8 = lVar61 - lVar59;
  lVar57 = param_1[1];
  lVar58 = param_1[0x11];
  local_3f0 = lVar58 - lVar57;
  lVar55 = param_1[2];
  lVar56 = param_1[0x12];
  local_3e8 = lVar56 - lVar55;
  lVar53 = param_1[3];
  lVar54 = param_1[0x13];
  local_3e0 = lVar54 - lVar53;
  lVar51 = param_1[4];
  lVar52 = param_1[0x14];
  local_3d8 = lVar52 - lVar51;
  lVar49 = param_1[5];
  lVar50 = param_1[0x15];
  local_3d0 = lVar50 - lVar49;
  lVar47 = param_1[6];
  lVar48 = param_1[0x16];
  local_3c8 = lVar48 - lVar47;
  lVar45 = param_1[7];
  lVar46 = param_1[0x17];
  local_3c0 = lVar46 - lVar45;
  lVar43 = param_1[8];
  lVar44 = param_1[0x18];
  local_3b8 = lVar44 - lVar43;
  lVar41 = param_1[9];
  lVar42 = param_1[0x19];
  local_3b0 = lVar42 - lVar41;
  lVar39 = param_1[10];
  lVar40 = param_1[0x1a];
  local_3a8 = lVar40 - lVar39;
  lVar37 = param_1[0xb];
  lVar38 = param_1[0x1b];
  local_3a0 = lVar38 - lVar37;
  lVar35 = param_1[0xc];
  lVar36 = param_1[0x1c];
  local_398 = lVar36 - lVar35;
  lVar33 = param_1[0xd];
  lVar34 = param_1[0x1d];
  local_390 = lVar34 - lVar33;
  lVar31 = param_1[0xe];
  lVar32 = param_1[0x1e];
  local_388 = lVar32 - lVar31;
  lVar29 = param_1[0xf];
  lVar30 = param_1[0x1f];
  local_380 = lVar30 - lVar29;
  lVar27 = *param_2;
  lVar28 = param_2[0x10];
  local_4f8 = lVar28 - lVar27;
  lVar25 = param_2[1];
  lVar26 = param_2[0x11];
  local_4f0 = lVar26 - lVar25;
  lVar23 = param_2[2];
  lVar24 = param_2[0x12];
  local_4e8 = lVar24 - lVar23;
  lVar21 = param_2[3];
  lVar22 = param_2[0x13];
  local_4e0 = lVar22 - lVar21;
  lVar19 = param_2[4];
  lVar20 = param_2[0x14];
  local_4d8 = lVar20 - lVar19;
  lVar17 = param_2[5];
  lVar18 = param_2[0x15];
  local_4d0 = lVar18 - lVar17;
  lVar15 = param_2[6];
  lVar16 = param_2[0x16];
  local_4c8 = lVar16 - lVar15;
  lVar13 = param_2[7];
  lVar14 = param_2[0x17];
  local_4c0 = lVar14 - lVar13;
  lVar11 = param_2[8];
  lVar12 = param_2[0x18];
  local_4b8 = lVar12 - lVar11;
  lVar9 = param_2[9];
  lVar10 = param_2[0x19];
  local_4b0 = lVar10 - lVar9;
  lVar1 = param_2[10];
  lVar8 = param_2[0x1a];
  local_4a8 = lVar8 - lVar1;
  lVar2 = param_2[0xb];
  lVar7 = param_2[0x1b];
  local_4a0 = lVar7 - lVar2;
  lVar3 = param_2[0xc];
  local_358 = param_2[0x1c];
  local_498 = local_358 - lVar3;
  lVar4 = param_2[0xd];
  local_360 = param_2[0x1d];
  local_490 = local_360 - lVar4;
  lVar5 = param_2[0xe];
  local_368 = param_2[0x1e];
  local_488 = local_368 - lVar5;
  lVar6 = param_2[0xf];
  local_370 = param_2[0x1f];
  local_480 = local_370 - lVar6;
  local_350 = param_1 + 0x10;
  FUN_14002e3d0(&local_3f8,&local_3f8,&local_4f8,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,lVar24,
                lVar25,lVar26,lVar27,lVar28,lVar29,lVar30,lVar31,lVar32,lVar33,lVar34,lVar35,lVar36,
                lVar37,lVar38,lVar39,lVar40,lVar41,lVar42,lVar43,lVar44,lVar45,lVar46,lVar47,lVar48,
                lVar49,lVar50,lVar51,lVar52,lVar53,lVar54,lVar55,lVar56,lVar57,lVar58,lVar59,lVar61)
  ;
  local_478 = lVar61 + lVar59;
  local_470 = lVar57 + lVar58;
  local_468 = lVar55 + lVar56;
  local_460 = lVar53 + lVar54;
  local_458 = lVar51 + lVar52;
  local_450 = lVar49 + lVar50;
  local_448 = lVar47 + lVar48;
  local_440 = lVar45 + lVar46;
  local_438 = lVar43 + lVar44;
  local_430 = lVar41 + lVar42;
  local_428 = lVar39 + lVar40;
  local_420 = lVar37 + lVar38;
  local_418 = lVar35 + lVar36;
  local_410 = lVar33 + lVar34;
  local_408 = lVar31 + lVar32;
  local_400 = lVar29 + lVar30;
  local_4f8 = lVar27 + lVar28;
  local_4f0 = lVar25 + lVar26;
  local_4e8 = lVar23 + lVar24;
  local_4e0 = lVar21 + lVar22;
  local_4d8 = lVar19 + lVar20;
  local_4d0 = lVar17 + lVar18;
  local_4c8 = lVar15 + lVar16;
  local_4c0 = lVar13 + lVar14;
  local_4b8 = lVar11 + lVar12;
  local_4b0 = lVar9 + lVar10;
  local_4a8 = lVar1 + lVar8;
  local_4a0 = lVar2 + lVar7;
  local_498 = lVar3 + local_358;
  local_490 = lVar4 + local_360;
  local_488 = lVar5 + local_368;
  local_480 = lVar6 + local_370;
  FUN_14002e3d0(&local_478,&local_478,&local_4f8);
  plVar62 = param_1 + 0x30;
  FUN_14002e3d0(&local_c8,plVar62,param_2 + 0x30);
  FUN_14002e3d0(&local_c8,&local_c8,&DAT_1400352c0);
  plVar60 = param_1 + 0x20;
  FUN_14002e3d0(&local_148,plVar60,param_2 + 0x20);
  local_1c8 = local_478 - local_3f8;
  local_1c0 = local_470 - local_3f0;
  local_1b8 = local_468 - local_3e8;
  local_1b0 = local_460 - local_3e0;
  local_1a8 = local_458 - local_3d8;
  local_1a0 = local_450 - local_3d0;
  local_198 = local_448 - local_3c8;
  local_190 = local_440 - local_3c0;
  local_188 = local_438 - local_3b8;
  local_180 = local_430 - local_3b0;
  local_178 = local_428 - local_3a8;
  local_170 = local_420 - local_3a0;
  local_168 = local_418 - local_398;
  local_160 = local_410 - local_390;
  local_158 = local_408 - local_388;
  local_150 = local_400 - local_380;
  local_248 = local_148 * 2 - local_c8;
  local_240 = local_140 * 2 - local_c0;
  local_238 = local_138 * 2 - local_b8;
  local_230 = local_130 * 2 - local_b0;
  local_228 = local_128 * 2 - local_a8;
  local_220 = local_120 * 2 - local_a0;
  local_218 = local_118 * 2 - local_98;
  local_210 = local_110 * 2 - local_90;
  local_208 = local_108 * 2 - local_88;
  local_200 = local_100 * 2 - local_80;
  local_1f8 = local_f8 * 2 - local_78;
  local_1f0 = local_f0 * 2 - local_70;
  local_1e8 = local_e8 * 2 - local_68;
  local_1e0 = local_e0 * 2 - local_60;
  local_1d8 = local_d8 * 2 - local_58;
  local_1d0 = local_d0 * 2 - local_50;
  local_2c8 = local_148 * 2 + local_c8;
  local_2c0 = local_c0 + local_140 * 2;
  local_2b8 = local_b8 + local_138 * 2;
  local_2b0 = local_b0 + local_130 * 2;
  local_2a8 = local_a8 + local_128 * 2;
  local_2a0 = local_a0 + local_120 * 2;
  local_298 = local_98 + local_118 * 2;
  local_290 = local_90 + local_110 * 2;
  local_288 = local_88 + local_108 * 2;
  local_280 = local_80 + local_100 * 2;
  local_278 = local_78 + local_f8 * 2;
  local_270 = local_70 + local_f0 * 2;
  local_268 = local_68 + local_e8 * 2;
  local_260 = local_60 + local_e0 * 2;
  local_258 = local_58 + local_d8 * 2;
  local_250 = local_50 + local_d0 * 2;
  local_348 = local_478 + local_3f8;
  local_340 = local_3f0 + local_470;
  local_338 = local_3e8 + local_468;
  local_330 = local_3e0 + local_460;
  local_328 = local_3d8 + local_458;
  local_320 = local_3d0 + local_450;
  local_318 = local_3c8 + local_448;
  local_310 = local_3c0 + local_440;
  local_308 = local_3b8 + local_438;
  local_300 = local_3b0 + local_430;
  local_2f8 = local_3a8 + local_428;
  local_2f0 = local_3a0 + local_420;
  local_2e8 = local_398 + local_418;
  local_2e0 = local_390 + local_410;
  local_2d8 = local_388 + local_408;
  local_2d0 = local_380 + local_400;
  FUN_14002e3d0(param_1,&local_1c8,&local_248,local_d8,local_80,local_100,local_88,local_108,
                local_90,local_110,local_98,local_118,local_a0,local_120,local_a8,local_128,local_b0
                ,local_130,local_b8,local_138,local_c0,local_140,local_c8,local_148,local_380,
                local_400,local_388,local_408,local_390,local_410,local_398,local_418,local_3a0,
                local_420,local_3a8,local_428,local_3b0,local_430,local_3b8,local_438,local_3c0,
                local_440,local_3c8,local_448,local_3d0,local_450,local_3d8,local_458,local_3e0,
                local_460,local_3f0,local_3e8,local_470,local_468,local_3f8,local_478);
  FUN_14002e3d0(local_350,&local_348,&local_2c8);
  FUN_14002e3d0(plVar60,&local_2c8,&local_248);
  FUN_14002e3d0(plVar62,&local_1c8,&local_348);
  return;
}


/* FUN_14002e3d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002e3d0(ulonglong *param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar32;
  ulonglong uVar31;
  longlong local_1e8 [61];
  
  local_1e8[0x1c] = 0;
  local_1e8[0x1d] = 0;
  local_1e8[0x1a] = 0;
  local_1e8[0x1b] = 0;
  local_1e8[0x18] = 0;
  local_1e8[0x19] = 0;
  local_1e8[0x16] = 0;
  local_1e8[0x17] = 0;
  local_1e8[0x14] = 0;
  local_1e8[0x15] = 0;
  local_1e8[0x12] = 0;
  local_1e8[0x13] = 0;
  local_1e8[0x10] = 0;
  local_1e8[0x11] = 0;
  local_1e8[0xe] = 0;
  local_1e8[0xf] = 0;
  local_1e8[0xc] = 0;
  local_1e8[0xd] = 0;
  local_1e8[10] = 0;
  local_1e8[0xb] = 0;
  local_1e8[8] = 0;
  local_1e8[9] = 0;
  local_1e8[6] = 0;
  local_1e8[7] = 0;
  local_1e8[4] = 0;
  local_1e8[5] = 0;
  local_1e8[2] = 0;
  local_1e8[3] = 0;
  local_1e8[0] = 0;
  local_1e8[1] = 0;
  local_1e8[0x1e] = 0;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[10];
  uVar11 = param_3[0xb];
  uVar12 = param_3[8];
  uVar13 = param_3[9];
  uVar14 = param_3[0xe];
  uVar15 = param_3[0xf];
  uVar16 = param_3[0xc];
  uVar17 = param_3[0xd];
  lVar27 = 0;
  do {
    uVar1 = *(ulonglong *)(param_2 + lVar27 * 8);
    uVar32 = (uint)(uVar1 >> 0x20);
    auVar26._8_4_ = (int)uVar1;
    auVar26._0_8_ = uVar1;
    auVar26._12_4_ = uVar32;
    uVar31 = (ulonglong)uVar32;
    local_1e8[lVar27] =
         local_1e8[lVar27] + (uVar2 & 0xffffffff) * (uVar1 & 0xffffffff) +
         ((uVar2 & 0xffffffff) * (ulonglong)uVar32 + (uVar2 >> 0x20) * (uVar1 & 0xffffffff) << 0x20)
    ;
    local_1e8[lVar27 + 1] =
         local_1e8[lVar27 + 1] + (uVar3 & 0xffffffff) * (uVar1 & 0xffffffff) +
         ((uVar3 & 0xffffffff) * (ulonglong)uVar32 + (uVar3 >> 0x20) * (uVar1 & 0xffffffff) << 0x20)
    ;
    local_1e8[lVar27 + 2] =
         local_1e8[lVar27 + 2] + (uVar4 & 0xffffffff) * (uVar1 & 0xffffffff) +
         ((uVar4 & 0xffffffff) * (ulonglong)uVar32 + (uVar4 >> 0x20) * (uVar1 & 0xffffffff) << 0x20)
    ;
    local_1e8[lVar27 + 3] =
         local_1e8[lVar27 + 3] + (uVar5 & 0xffffffff) * (uVar1 & 0xffffffff) +
         ((uVar5 & 0xffffffff) * (ulonglong)uVar32 + (uVar5 >> 0x20) * (uVar1 & 0xffffffff) << 0x20)
    ;
    local_1e8[lVar27 + 4] =
         (uVar6 & 0xffffffff) * (uVar1 & 0xffffffff) + local_1e8[lVar27 + 4] +
         ((uVar6 & 0xffffffff) * uVar31 + (uVar6 >> 0x20) * (uVar1 & 0xffffffff) << 0x20);
    local_1e8[lVar27 + 5] =
         (uVar7 & 0xffffffff) * (uVar1 & 0xffffffff) + local_1e8[lVar27 + 5] +
         ((uVar7 & 0xffffffff) * (ulonglong)uVar32 + (uVar7 >> 0x20) * (uVar1 & 0xffffffff) << 0x20)
    ;
    local_1e8[lVar27 + 6] =
         (uVar8 & 0xffffffff) * (uVar1 & 0xffffffff) + local_1e8[lVar27 + 6] +
         ((uVar8 & 0xffffffff) * uVar31 + (uVar8 >> 0x20) * (uVar1 & 0xffffffff) << 0x20);
    local_1e8[lVar27 + 7] =
         (uVar9 & 0xffffffff) * (uVar1 & 0xffffffff) + local_1e8[lVar27 + 7] +
         ((uVar9 & 0xffffffff) * (ulonglong)uVar32 + (uVar9 >> 0x20) * (uVar1 & 0xffffffff) << 0x20)
    ;
    local_1e8[lVar27 + 8] =
         local_1e8[lVar27 + 8] + (uVar12 & 0xffffffff) * (uVar1 & 0xffffffff) +
         ((uVar12 & 0xffffffff) * uVar31 + (uVar12 >> 0x20) * (uVar1 & 0xffffffff) << 0x20);
    local_1e8[lVar27 + 9] =
         local_1e8[lVar27 + 9] + (uVar13 & 0xffffffff) * (uVar1 & 0xffffffff) +
         ((uVar13 & 0xffffffff) * (ulonglong)uVar32 + (uVar13 >> 0x20) * (uVar1 & 0xffffffff) <<
         0x20);
    local_1e8[lVar27 + 10] =
         local_1e8[lVar27 + 10] + (uVar10 & 0xffffffff) * (uVar1 & 0xffffffff) +
         ((uVar10 & 0xffffffff) * uVar31 + (uVar10 >> 0x20) * (uVar1 & 0xffffffff) << 0x20);
    local_1e8[lVar27 + 0xb] =
         local_1e8[lVar27 + 0xb] + (uVar11 & 0xffffffff) * (uVar1 & 0xffffffff) +
         ((uVar11 & 0xffffffff) * (ulonglong)uVar32 + (uVar11 >> 0x20) * (uVar1 & 0xffffffff) <<
         0x20);
    local_1e8[lVar27 + 0xc] =
         local_1e8[lVar27 + 0xc] + (uVar16 & 0xffffffff) * (uVar1 & 0xffffffff) +
         ((uVar16 & 0xffffffff) * uVar31 + (uVar16 >> 0x20) * (uVar1 & 0xffffffff) << 0x20);
    local_1e8[lVar27 + 0xd] =
         local_1e8[lVar27 + 0xd] + (uVar17 & 0xffffffff) * (uVar1 & 0xffffffff) +
         ((uVar17 & 0xffffffff) * (ulonglong)uVar32 + (uVar17 >> 0x20) * (uVar1 & 0xffffffff) <<
         0x20);
    local_1e8[lVar27 + 0xe] =
         local_1e8[lVar27 + 0xe] + (uVar1 & 0xffffffff) * (uVar14 & 0xffffffff) +
         (uVar31 * (uVar14 & 0xffffffff) + (uVar14 >> 0x20) * (uVar1 & 0xffffffff) << 0x20);
    local_1e8[lVar27 + 0xf] =
         local_1e8[lVar27 + 0xf] + (uVar1 & 0xffffffff) * (uVar15 & 0xffffffff) +
         ((auVar26._8_8_ >> 0x20) * (uVar15 & 0xffffffff) + (uVar15 >> 0x20) * (uVar1 & 0xffffffff)
         << 0x20);
    lVar27 = lVar27 + 1;
  } while (lVar27 != 0x10);
  uVar14 = (ulonglong)_UNK_140035848;
  uVar15 = (ulonglong)_UNK_140035848;
  uVar2 = (ulonglong)_DAT_140035840;
  uVar16 = (ulonglong)_UNK_140035848;
  uVar3 = (ulonglong)_DAT_140035840;
  uVar17 = (ulonglong)_UNK_140035848;
  uVar4 = (ulonglong)_DAT_140035840;
  uVar1 = (ulonglong)_UNK_140035848;
  uVar5 = (ulonglong)_DAT_140035840;
  uVar31 = (ulonglong)_UNK_140035848;
  uVar6 = (ulonglong)_DAT_140035840;
  uVar18 = (ulonglong)_UNK_140035848;
  uVar7 = (ulonglong)_DAT_140035840;
  uVar19 = (ulonglong)_UNK_140035848;
  uVar8 = (ulonglong)_DAT_140035840;
  uVar20 = (ulonglong)_UNK_140035848;
  uVar9 = (ulonglong)_DAT_140035840;
  uVar21 = (ulonglong)_UNK_140035848;
  uVar10 = (ulonglong)_DAT_140035840;
  uVar22 = (ulonglong)_UNK_140035848;
  uVar11 = (ulonglong)_DAT_140035840;
  uVar23 = (ulonglong)_UNK_140035848;
  uVar12 = (ulonglong)_DAT_140035840;
  uVar24 = (ulonglong)_UNK_140035848;
  uVar13 = (ulonglong)_DAT_140035840;
  uVar25 = (ulonglong)_UNK_140035848;
  *param_1 = (((ulonglong)local_1e8[0x10] >> 0x20) * (ulonglong)_DAT_140035840 << 0x20) +
             (local_1e8[0x10] & 0xffffffffU) * (ulonglong)_DAT_140035840 + local_1e8[0];
  param_1[1] = (((ulonglong)local_1e8[0x11] >> 0x20) * uVar15 << 0x20) +
               (local_1e8[0x11] & 0xffffffffU) * uVar14 + local_1e8[1];
  param_1[0xc] = (((ulonglong)local_1e8[0x1c] >> 0x20) * uVar13 << 0x20) +
                 (local_1e8[0x1c] & 0xffffffffU) * uVar12 + local_1e8[0xc];
  param_1[0xd] = (((ulonglong)local_1e8[0x1d] >> 0x20) * uVar25 << 0x20) +
                 (local_1e8[0x1d] & 0xffffffffU) * uVar24 + local_1e8[0xd];
  param_1[10] = (((ulonglong)local_1e8[0x1a] >> 0x20) * uVar11 << 0x20) +
                (local_1e8[0x1a] & 0xffffffffU) * uVar10 + local_1e8[10];
  param_1[0xb] = (((ulonglong)local_1e8[0x1b] >> 0x20) * uVar23 << 0x20) +
                 (local_1e8[0x1b] & 0xffffffffU) * uVar22 + local_1e8[0xb];
  param_1[8] = (((ulonglong)local_1e8[0x18] >> 0x20) * uVar9 << 0x20) +
               (local_1e8[0x18] & 0xffffffffU) * uVar8 + local_1e8[8];
  param_1[9] = (((ulonglong)local_1e8[0x19] >> 0x20) * uVar21 << 0x20) +
               (local_1e8[0x19] & 0xffffffffU) * uVar20 + local_1e8[9];
  param_1[6] = (((ulonglong)local_1e8[0x16] >> 0x20) * uVar7 << 0x20) +
               (local_1e8[0x16] & 0xffffffffU) * uVar6 + local_1e8[6];
  param_1[7] = (((ulonglong)local_1e8[0x17] >> 0x20) * uVar19 << 0x20) +
               (local_1e8[0x17] & 0xffffffffU) * uVar18 + local_1e8[7];
  param_1[0xe] = local_1e8[0xe] + local_1e8[0x1e] * 0x26;
  param_1[0xf] = local_1e8[0xf];
  param_1[4] = (((ulonglong)local_1e8[0x14] >> 0x20) * uVar5 << 0x20) +
               (local_1e8[0x14] & 0xffffffffU) * uVar4 + local_1e8[4];
  param_1[5] = (((ulonglong)local_1e8[0x15] >> 0x20) * uVar31 << 0x20) +
               (local_1e8[0x15] & 0xffffffffU) * uVar1 + local_1e8[5];
  param_1[2] = (((ulonglong)local_1e8[0x12] >> 0x20) * uVar3 << 0x20) +
               (local_1e8[0x12] & 0xffffffffU) * uVar2 + local_1e8[2];
  param_1[3] = (((ulonglong)local_1e8[0x13] >> 0x20) * uVar17 << 0x20) +
               (local_1e8[0x13] & 0xffffffffU) * uVar16 + local_1e8[3];
  lVar27 = *param_1 + 0x10000;
  *param_1 = *param_1 & 0xffff;
  lVar28 = (lVar27 >> 0x10) + param_1[1] + 0xffff;
  param_1[1] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[1]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[2] + 0xffff;
  param_1[2] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[2]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[3] + 0xffff;
  param_1[3] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[3]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[4] + 0xffff;
  param_1[4] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[4]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[5] + 0xffff;
  param_1[5] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[5]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[6] + 0xffff;
  param_1[6] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[6]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[7] + 0xffff;
  param_1[7] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[7]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[8] + 0xffff;
  param_1[8] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[8]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[9] + 0xffff;
  param_1[9] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[9]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[10] + 0xffff;
  param_1[10] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[10]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[0xb] + 0xffff;
  param_1[0xb] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[0xb]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[0xc] + 0xffff;
  param_1[0xc] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[0xc]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[0xd] + 0xffff;
  param_1[0xd] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[0xd]) - 1U & 0xffff);
  lVar29 = (lVar28 >> 0x10) + param_1[0xe] + 0xffff;
  param_1[0xe] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[0xe]) - 1U & 0xffff);
  lVar28 = (longlong)((lVar29 >> 0x10) + param_1[0xf] + 0xffff) >> 0x10;
  lVar27 = lVar28 + -1;
  lVar30 = lVar27 + *param_1;
  lVar27 = lVar28 + lVar27 * 0x24 + -1;
  param_1[0xf] = (ulonglong)(((int)((ulonglong)lVar29 >> 0x10) + (int)param_1[0xf]) - 1U & 0xffff);
  lVar28 = lVar27 + lVar30 + 0x10000;
  *param_1 = lVar30 + lVar27 & 0xffff;
  lVar27 = (lVar28 >> 0x10) + param_1[1] + 0xffff;
  param_1[1] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[1]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[2] + 0xffff;
  param_1[2] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[2]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[3] + 0xffff;
  param_1[3] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[3]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[4] + 0xffff;
  param_1[4] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[4]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[5] + 0xffff;
  param_1[5] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[5]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[6] + 0xffff;
  param_1[6] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[6]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[7] + 0xffff;
  param_1[7] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[7]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[8] + 0xffff;
  param_1[8] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[8]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[9] + 0xffff;
  param_1[9] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[9]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[10] + 0xffff;
  param_1[10] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[10]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[0xb] + 0xffff;
  param_1[0xb] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[0xb]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[0xc] + 0xffff;
  param_1[0xc] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[0xc]) - 1U & 0xffff);
  lVar27 = (lVar28 >> 0x10) + param_1[0xd] + 0xffff;
  param_1[0xd] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[0xd]) - 1U & 0xffff);
  lVar28 = (lVar27 >> 0x10) + param_1[0xe] + 0xffff;
  param_1[0xe] = (ulonglong)(((int)((ulonglong)lVar27 >> 0x10) + (int)param_1[0xe]) - 1U & 0xffff);
  *param_1 = (((longlong)((lVar28 >> 0x10) + param_1[0xf] + 0xffff) >> 0x10) * 0x26 + *param_1) -
             0x26;
  param_1[0xf] = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + (int)param_1[0xf]) - 1U & 0xffff);
  return;
}


/* FUN_14002ed80 */

bool FUN_14002ed80(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char local_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  char local_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  char cStack_34;
  char cStack_33;
  char cStack_32;
  char cStack_31;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  char local_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  char local_18;
  char cStack_17;
  char cStack_16;
  char cStack_15;
  char cStack_14;
  char cStack_13;
  char cStack_12;
  char cStack_11;
  char cStack_10;
  char cStack_f;
  char cStack_e;
  char cStack_d;
  char cStack_c;
  char cStack_b;
  char cStack_a;
  char cStack_9;
  
  FUN_14002ede0(&local_28,param_1);
  FUN_14002ede0(&local_48,param_2);
  auVar2[0] = -(local_38 == local_18);
  auVar2[1] = -(cStack_37 == cStack_17);
  auVar2[2] = -(cStack_36 == cStack_16);
  auVar2[3] = -(cStack_35 == cStack_15);
  auVar2[4] = -(cStack_34 == cStack_14);
  auVar2[5] = -(cStack_33 == cStack_13);
  auVar2[6] = -(cStack_32 == cStack_12);
  auVar2[7] = -(cStack_31 == cStack_11);
  auVar2[8] = -(cStack_30 == cStack_10);
  auVar2[9] = -(cStack_2f == cStack_f);
  auVar2[10] = -(cStack_2e == cStack_e);
  auVar2[0xb] = -(cStack_2d == cStack_d);
  auVar2[0xc] = -(cStack_2c == cStack_c);
  auVar2[0xd] = -(cStack_2b == cStack_b);
  auVar2[0xe] = -(cStack_2a == cStack_a);
  auVar2[0xf] = -(cStack_29 == cStack_9);
  auVar1[0] = -(local_48 == local_28);
  auVar1[1] = -(cStack_47 == cStack_27);
  auVar1[2] = -(cStack_46 == cStack_26);
  auVar1[3] = -(cStack_45 == cStack_25);
  auVar1[4] = -(cStack_44 == cStack_24);
  auVar1[5] = -(cStack_43 == cStack_23);
  auVar1[6] = -(cStack_42 == cStack_22);
  auVar1[7] = -(cStack_41 == cStack_21);
  auVar1[8] = -(cStack_40 == cStack_20);
  auVar1[9] = -(cStack_3f == cStack_1f);
  auVar1[10] = -(cStack_3e == cStack_1e);
  auVar1[0xb] = -(cStack_3d == cStack_1d);
  auVar1[0xc] = -(cStack_3c == cStack_1c);
  auVar1[0xd] = -(cStack_3b == cStack_1b);
  auVar1[0xe] = -(cStack_3a == cStack_1a);
  auVar1[0xf] = -(cStack_39 == cStack_19);
  auVar1 = auVar1 & auVar2;
  return (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) != 0xffff;
}


/* FUN_14002ede0 */

void FUN_14002ede0(ushort *param_1,ulonglong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  longlong lVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  int iVar56;
  longlong lVar57;
  uint uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  uint uVar65;
  longlong lVar66;
  longlong lVar67;
  longlong lVar68;
  longlong lVar69;
  ulonglong uVar70;
  ulonglong uVar71;
  ulonglong uVar72;
  longlong lVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  ulonglong uVar76;
  ulonglong uVar77;
  ulonglong uVar78;
  ulonglong uVar79;
  ulonglong uVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  
  lVar50 = *param_2 + 0x10000;
  lVar18 = param_2[1] + (lVar50 >> 0x10) + 0xffff;
  lVar19 = (lVar18 >> 0x10) + param_2[2] + 0xffff;
  lVar20 = (lVar19 >> 0x10) + param_2[3] + 0xffff;
  lVar21 = (lVar20 >> 0x10) + param_2[4] + 0xffff;
  lVar22 = (lVar21 >> 0x10) + param_2[5] + 0xffff;
  lVar23 = (lVar22 >> 0x10) + param_2[6] + 0xffff;
  lVar66 = param_2[7] + (lVar23 >> 0x10) + 0xffff;
  lVar67 = (lVar66 >> 0x10) + param_2[8] + 0xffff;
  lVar68 = (lVar67 >> 0x10) + param_2[9] + 0xffff;
  lVar69 = (lVar68 >> 0x10) + param_2[10] + 0xffff;
  lVar73 = param_2[0xb] + (lVar69 >> 0x10) + 0xffff;
  lVar24 = param_2[0xc] + (lVar73 >> 0x10) + 0xffff;
  lVar25 = (lVar24 >> 0x10) + param_2[0xd] + 0xffff;
  lVar26 = (lVar25 >> 0x10) + param_2[0xe] + 0xffff;
  lVar27 = (longlong)((lVar26 >> 0x10) + param_2[0xf] + 0xffff) >> 0x10;
  lVar57 = (*param_2 & 0xffff) + lVar27 + -1;
  lVar27 = lVar27 * 0x25 + -0x25;
  lVar28 = lVar27 + lVar57 + 0x10000;
  uVar53 = ((int)((ulonglong)lVar50 >> 0x10) + (int)param_2[1]) - 1U & 0xffff;
  lVar50 = (lVar28 >> 0x10) + (ulonglong)uVar53 + 0xffff;
  uVar54 = ((int)((ulonglong)lVar18 >> 0x10) + (int)param_2[2]) - 1U & 0xffff;
  lVar18 = (lVar50 >> 0x10) + (ulonglong)uVar54 + 0xffff;
  uVar55 = ((int)((ulonglong)lVar19 >> 0x10) + (int)param_2[3]) - 1U & 0xffff;
  uVar29 = (lVar18 >> 0x10) + (ulonglong)uVar55 + 0xffff;
  uVar40 = ((int)((ulonglong)lVar20 >> 0x10) + (int)param_2[4]) - 1U & 0xffff;
  uVar30 = (uVar29 >> 0x10) + (ulonglong)uVar40 + 0xffff;
  uVar41 = ((int)((ulonglong)lVar21 >> 0x10) + (int)param_2[5]) - 1U & 0xffff;
  uVar31 = (uVar30 >> 0x10) + (ulonglong)uVar41 + 0xffff;
  uVar42 = ((int)((ulonglong)lVar22 >> 0x10) + (int)param_2[6]) - 1U & 0xffff;
  uVar32 = (uVar31 >> 0x10) + (ulonglong)uVar42 + 0xffff;
  uVar43 = ((int)((ulonglong)lVar23 >> 0x10) + (int)param_2[7]) - 1U & 0xffff;
  uVar33 = (uVar32 >> 0x10) + (ulonglong)uVar43 + 0xffff;
  uVar44 = ((int)((ulonglong)lVar66 >> 0x10) + (int)param_2[8]) - 1U & 0xffff;
  uVar34 = (uVar33 >> 0x10) + (ulonglong)uVar44 + 0xffff;
  uVar45 = ((int)((ulonglong)lVar67 >> 0x10) + (int)param_2[9]) - 1U & 0xffff;
  uVar35 = (uVar34 >> 0x10) + (ulonglong)uVar45 + 0xffff;
  uVar46 = ((int)((ulonglong)lVar68 >> 0x10) + (int)param_2[10]) - 1U & 0xffff;
  uVar36 = (uVar35 >> 0x10) + (ulonglong)uVar46 + 0xffff;
  uVar47 = ((int)((ulonglong)lVar69 >> 0x10) + (int)param_2[0xb]) - 1U & 0xffff;
  uVar37 = (uVar36 >> 0x10) + (ulonglong)uVar47 + 0xffff;
  uVar48 = ((int)((ulonglong)lVar73 >> 0x10) + (int)param_2[0xc]) - 1U & 0xffff;
  uVar38 = (uVar37 >> 0x10) + (ulonglong)uVar48 + 0xffff;
  uVar49 = ((int)((ulonglong)lVar24 >> 0x10) + (int)param_2[0xd]) - 1U & 0xffff;
  uVar39 = (uVar38 >> 0x10) + (ulonglong)uVar49 + 0xffff;
  uVar65 = ((int)((ulonglong)lVar25 >> 0x10) + (int)param_2[0xe]) - 1U & 0xffff;
  uVar70 = (ulonglong)uVar65 + (uVar39 >> 0x10) + 0xffff;
  uVar58 = ((int)((ulonglong)lVar26 >> 0x10) + (int)param_2[0xf]) - 1U & 0xffff;
  uVar71 = (uVar70 >> 0x10) + (ulonglong)uVar58 + 0xffff >> 0x10;
  lVar19 = (lVar57 + lVar27 & 0xffffU) + uVar71 + -1;
  lVar27 = uVar71 * 0x25 + -0x25;
  uVar78 = lVar27 + lVar19 + 0x10000U >> 0x10;
  uVar71 = (ulonglong)(((int)((ulonglong)lVar28 >> 0x10) + uVar53) - 1 & 0xffff);
  uVar59 = (uVar78 + uVar71) - 1;
  uVar78 = uVar78 + uVar71 + 0xffff >> 0x10;
  uVar71 = (ulonglong)(((int)((ulonglong)lVar50 >> 0x10) + uVar54) - 1 & 0xffff);
  uVar60 = (uVar78 + uVar71) - 1;
  uVar78 = uVar78 + uVar71 + 0xffff >> 0x10;
  uVar71 = (ulonglong)(((int)((ulonglong)lVar18 >> 0x10) + uVar55) - 1 & 0xffff);
  uVar61 = (uVar78 + uVar71) - 1;
  uVar71 = uVar78 + uVar71 + 0xffff >> 0x10;
  uVar29 = (ulonglong)(((int)(uVar29 >> 0x10) + uVar40) - 1 & 0xffff);
  uVar74 = (uVar71 + uVar29) - 1;
  uVar71 = uVar71 + uVar29 + 0xffff >> 0x10;
  uVar29 = (ulonglong)(((int)(uVar30 >> 0x10) + uVar41) - 1 & 0xffff);
  uVar82 = (uVar71 + uVar29) - 1;
  uVar30 = uVar71 + uVar29 + 0xffff >> 0x10;
  uVar29 = (ulonglong)(((int)(uVar31 >> 0x10) + uVar42) - 1 & 0xffff);
  uVar75 = (uVar30 + uVar29) - 1;
  uVar30 = uVar30 + uVar29 + 0xffff >> 0x10;
  uVar29 = (ulonglong)(((int)(uVar32 >> 0x10) + uVar43) - 1 & 0xffff);
  uVar76 = (uVar30 + uVar29) - 1;
  uVar30 = uVar30 + uVar29 + 0xffff >> 0x10;
  uVar29 = (ulonglong)(((int)(uVar33 >> 0x10) + uVar44) - 1 & 0xffff);
  uVar72 = (uVar30 + uVar29) - 1;
  uVar29 = uVar29 + uVar30 + 0xffff >> 0x10;
  uVar30 = (ulonglong)(((int)(uVar34 >> 0x10) + uVar45) - 1 & 0xffff);
  uVar80 = (uVar29 + uVar30) - 1;
  uVar29 = uVar29 + uVar30 + 0xffff >> 0x10;
  uVar30 = (ulonglong)(((int)(uVar35 >> 0x10) + uVar46) - 1 & 0xffff);
  uVar77 = (uVar29 + uVar30) - 1;
  uVar30 = uVar29 + uVar30 + 0xffff >> 0x10;
  uVar29 = (ulonglong)(((int)(uVar36 >> 0x10) + uVar47) - 1 & 0xffff);
  uVar79 = (uVar30 + uVar29) - 1;
  uVar30 = uVar29 + uVar30 + 0xffff >> 0x10;
  uVar29 = (ulonglong)(((int)(uVar37 >> 0x10) + uVar48) - 1 & 0xffff);
  uVar63 = (uVar30 + uVar29) - 1;
  uVar30 = uVar29 + uVar30 + 0xffff >> 0x10;
  uVar29 = (ulonglong)(((int)(uVar38 >> 0x10) + uVar49) - 1 & 0xffff);
  uVar81 = (uVar30 + uVar29) - 1;
  uVar30 = uVar29 + uVar30 + 0xffff >> 0x10;
  uVar29 = (ulonglong)(((int)(uVar39 >> 0x10) + uVar65) - 1 & 0xffff);
  uVar62 = (uVar30 + uVar29) - 1;
  uVar30 = uVar29 + uVar30 + 0xffff;
  uVar40 = ((int)(uVar70 >> 0x10) + uVar58) - 1 & 0xffff;
  uVar29 = (ulonglong)uVar40 + (uVar30 >> 0x10) + 0xffff >> 0x10;
  lVar18 = (lVar19 + lVar27 & 0xffffU) + uVar29 + -1;
  lVar27 = uVar29 * 0x25 + -0x25;
  uVar29 = lVar18 + lVar27;
  uVar32 = (lVar18 + lVar27) - 0xffed;
  uVar40 = ((int)(uVar30 >> 0x10) + uVar40) - 1 & 0xffff;
  uVar30 = uVar59 & 0xffff;
  lVar27 = uVar30 + ((longlong)(uVar32 << 0x2f) >> 0x3f) + -0xffff;
  uVar64 = uVar60 & 0xffff;
  lVar18 = ((lVar27 << 0x2f) >> 0x3f) + uVar64 + -0xffff;
  uVar33 = uVar61 & 0xffff;
  lVar19 = ((lVar18 << 0x2f) >> 0x3f) + uVar33 + -0xffff;
  uVar34 = uVar74 & 0xffff;
  lVar20 = ((lVar19 << 0x2f) >> 0x3f) + uVar34 + -0xffff;
  uVar35 = uVar82 & 0xffff;
  lVar21 = ((lVar20 << 0x2f) >> 0x3f) + uVar35 + -0xffff;
  uVar36 = uVar75 & 0xffff;
  lVar22 = ((lVar21 << 0x2f) >> 0x3f) + uVar36 + -0xffff;
  uVar37 = uVar76 & 0xffff;
  lVar23 = ((lVar22 << 0x2f) >> 0x3f) + uVar37 + -0xffff;
  uVar38 = uVar72 & 0xffff;
  lVar24 = ((lVar23 << 0x2f) >> 0x3f) + uVar38 + -0xffff;
  uVar39 = uVar80 & 0xffff;
  lVar25 = ((lVar24 << 0x2f) >> 0x3f) + uVar39 + -0xffff;
  uVar70 = uVar77 & 0xffff;
  lVar26 = ((lVar25 << 0x2f) >> 0x3f) + uVar70 + -0xffff;
  uVar71 = uVar79 & 0xffff;
  lVar28 = ((lVar26 << 0x2f) >> 0x3f) + uVar71 + -0xffff;
  uVar78 = uVar63 & 0xffff;
  lVar50 = ((lVar28 << 0x2f) >> 0x3f) + uVar78 + -0xffff;
  uVar51 = uVar81 & 0xffff;
  lVar57 = ((lVar50 << 0x2f) >> 0x3f) + uVar51 + -0xffff;
  uVar52 = uVar62 & 0xffff;
  lVar66 = ((lVar57 << 0x2f) >> 0x3f) + uVar52 + -0xffff;
  uVar42 = (uVar40 + (int)((lVar66 << 0x2f) >> 0x3f)) - 0x7fff;
  uVar31 = ((ulonglong)(uVar42 >> 0x10) | 0xfffffffffffffffe) + 1;
  uVar29 = (uVar32 & 0xffff ^ uVar29) & uVar31 ^ uVar29;
  uVar41 = (uint)uVar31;
  uVar30 = ((uint)uVar59 ^ (uint)lVar27) & uVar41 & 0xffff ^ uVar30;
  uVar64 = ((uint)uVar60 ^ (uint)lVar18) & uVar41 & 0xffff ^ uVar64;
  uVar33 = ((uint)uVar61 ^ (uint)lVar19) & uVar41 & 0xffff ^ uVar33;
  uVar34 = ((uint)uVar74 ^ (uint)lVar20) & uVar41 & 0xffff ^ uVar34;
  uVar35 = ((uint)uVar82 ^ (uint)lVar21) & uVar41 & 0xffff ^ uVar35;
  uVar36 = ((uint)uVar75 ^ (uint)lVar22) & uVar41 & 0xffff ^ uVar36;
  uVar37 = ((uint)uVar76 ^ (uint)lVar23) & uVar41 & 0xffff ^ uVar37;
  uVar38 = ((uint)uVar72 ^ (uint)lVar24) & uVar41 & 0xffff ^ uVar38;
  uVar39 = ((uint)uVar80 ^ (uint)lVar25) & uVar41 & 0xffff ^ uVar39;
  uVar70 = ((uint)uVar77 ^ (uint)lVar26) & uVar41 & 0xffff ^ uVar70;
  uVar71 = ((uint)uVar79 ^ (uint)lVar28) & uVar41 & 0xffff ^ uVar71;
  uVar78 = ((uint)uVar63 ^ (uint)lVar50) & uVar41 & 0xffff ^ uVar78;
  uVar51 = ((uint)uVar81 ^ (uint)lVar57) & uVar41 & 0xffff ^ uVar51;
  uVar52 = ((uint)uVar62 ^ (uint)lVar66) & uVar41 & 0xffff ^ uVar52;
  uVar40 = (uVar42 ^ uVar40) & uVar41 ^ uVar40;
  lVar27 = uVar29 - 0xffed;
  lVar18 = ((lVar27 << 0x2f) >> 0x3f) + uVar30 + -0xffff;
  lVar19 = ((lVar18 << 0x2f) >> 0x3f) + uVar64 + -0xffff;
  lVar20 = ((lVar19 << 0x2f) >> 0x3f) + uVar33 + -0xffff;
  lVar67 = uVar34 + ((lVar20 << 0x2f) >> 0x3f) + -0xffff;
  lVar57 = uVar35 + ((lVar67 << 0x2f) >> 0x3f) + -0xffff;
  lVar22 = uVar36 + ((lVar57 << 0x2f) >> 0x3f) + -0xffff;
  lVar66 = uVar37 + ((lVar22 << 0x2f) >> 0x3f) + -0xffff;
  lVar21 = uVar38 + ((lVar66 << 0x2f) >> 0x3f) + -0xffff;
  lVar24 = uVar39 + ((lVar21 << 0x2f) >> 0x3f) + -0xffff;
  lVar23 = uVar70 + ((lVar24 << 0x2f) >> 0x3f) + -0xffff;
  lVar50 = uVar71 + ((lVar23 << 0x2f) >> 0x3f) + -0xffff;
  lVar28 = uVar78 + ((lVar50 << 0x2f) >> 0x3f) + -0xffff;
  lVar26 = uVar51 + ((lVar28 << 0x2f) >> 0x3f) + -0xffff;
  lVar25 = uVar52 + ((lVar26 << 0x2f) >> 0x3f) + -0xffff;
  iVar56 = uVar40 + (int)((lVar25 << 0x2f) >> 0x3f) + -0x7fff;
  uVar14 = ((ushort)((uint)iVar56 >> 0x10) | 0xfffe) + 1;
  uVar15 = (ushort)uVar29;
  uVar16 = (ushort)uVar30;
  uVar17 = (ushort)uVar64;
  uVar1 = (ushort)uVar33;
  uVar2 = (ushort)uVar34;
  uVar3 = (ushort)uVar35;
  uVar4 = (ushort)uVar36;
  uVar5 = (ushort)uVar37;
  uVar6 = (ushort)uVar38;
  uVar7 = (ushort)uVar39;
  uVar8 = (ushort)uVar70;
  uVar9 = (ushort)uVar71;
  uVar10 = (ushort)uVar78;
  uVar11 = (ushort)uVar51;
  uVar12 = (ushort)uVar52;
  uVar13 = (ushort)uVar40;
  *param_1 = ((ushort)lVar27 ^ uVar15) & uVar14 ^ uVar15;
  param_1[1] = ((ushort)lVar18 ^ uVar16) & uVar14 ^ uVar16;
  param_1[2] = ((ushort)lVar19 ^ uVar17) & uVar14 ^ uVar17;
  param_1[3] = ((ushort)lVar20 ^ uVar1) & uVar14 ^ uVar1;
  param_1[4] = ((ushort)lVar67 ^ uVar2) & uVar14 ^ uVar2;
  param_1[5] = ((ushort)lVar57 ^ uVar3) & uVar14 ^ uVar3;
  param_1[6] = ((ushort)lVar22 ^ uVar4) & uVar14 ^ uVar4;
  param_1[7] = ((ushort)lVar66 ^ uVar5) & uVar14 ^ uVar5;
  param_1[8] = ((ushort)lVar21 ^ uVar6) & uVar14 ^ uVar6;
  param_1[9] = ((ushort)lVar24 ^ uVar7) & uVar14 ^ uVar7;
  param_1[10] = ((ushort)lVar23 ^ uVar8) & uVar14 ^ uVar8;
  param_1[0xb] = ((ushort)lVar50 ^ uVar9) & uVar14 ^ uVar9;
  param_1[0xc] = ((ushort)lVar28 ^ uVar10) & uVar14 ^ uVar10;
  param_1[0xd] = ((ushort)lVar26 ^ uVar11) & uVar14 ^ uVar11;
  param_1[0xe] = ((ushort)lVar25 ^ uVar12) & uVar14 ^ uVar12;
  param_1[0xf] = ((ushort)iVar56 ^ uVar13) & uVar14 ^ uVar13;
  return;
}


/* FUN_14002f9b0 */

void FUN_14002f9b0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = -param_3;
  lVar2 = 0;
  do {
    uVar4 = (*(ulonglong *)(param_2 + lVar2) ^ *(ulonglong *)(param_1 + lVar2)) & uVar3;
    *(ulonglong *)(param_1 + lVar2) = *(ulonglong *)(param_1 + lVar2) ^ uVar4;
    *(ulonglong *)(param_2 + lVar2) = *(ulonglong *)(param_2 + lVar2) ^ uVar4;
    uVar4 = *(ulonglong *)(param_1 + 8 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 8 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 8 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 8 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x10 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x10 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x10 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x10 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x18 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x18 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x18 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x18 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x20 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x20 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x20 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x20 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x28 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x28 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x28 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x28 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x30 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x30 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x30 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x30 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x38 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x38 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x38 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x38 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x40 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x40 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x40 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x40 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x48 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x48 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x48 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x48 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x50 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x50 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x50 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x50 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x58 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x58 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x58 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x58 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x60 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x60 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x60 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x60 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x68 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x68 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x68 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x68 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x70 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x70 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x70 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x70 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    uVar4 = *(ulonglong *)(param_1 + 0x78 + lVar2);
    uVar5 = (*(ulonglong *)(param_2 + 0x78 + lVar2) ^ uVar4) & uVar3;
    *(ulonglong *)(param_1 + 0x78 + lVar2) = uVar4 ^ uVar5;
    puVar1 = (ulonglong *)(param_2 + 0x78 + lVar2);
    *puVar1 = *puVar1 ^ uVar5;
    lVar2 = lVar2 + 0x80;
  } while (lVar2 != 0x200);
  return;
}


/* FUN_14002fba0 */

void FUN_14002fba0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001f660(param_1 + 1);
  if (lVar1 != 0) {
    return;
  }
  (*DAT_140039708)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4),
                   *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10) | 2,0);
  return;
}


/* FUN_14002fbe0 */

void FUN_14002fbe0(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_140035e74;
    param_1[2] = (longlong)&DAT_140035e7c;
    (*DAT_140039688)(param_1 + 0x13);
    param_1[0x13] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  (*DAT_140039740)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,param_1 + 3,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(param_1[2] + 4) + 0x10) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(param_1[2] + 4) + 0xc) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_iostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x20;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  (*DAT_140039678)(param_1 + 3);
  param_1[3] = (longlong)
               std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return;
}


/* Unwind@14002fd50 */

void Unwind_14002fd50(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x24) != 0) {
    (*DAT_1400396a0)(*(longlong *)(param_2 + 0x28) + 0x98);
  }
  return;
}


/* FUN_14002fd90 */

longlong * FUN_14002fd90(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar6 = FUN_140034260(param_2);
  lVar8 = (longlong)*(int *)(*param_1 + 4);
  lVar7 = *(longlong *)((longlong)param_1 + lVar8 + 0x28);
  lVar11 = lVar7 - lVar6;
  lVar10 = 0;
  if (lVar11 != 0 && lVar6 <= lVar7) {
    lVar10 = lVar11;
  }
  if (lVar7 < 1) {
    lVar10 = 0;
  }
  plVar1 = *(longlong **)((longlong)param_1 + lVar8 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    lVar8 = (longlong)*(int *)(*param_1 + 4);
  }
  cVar4 = (*DAT_140039728)(lVar8 + (longlong)param_1);
  if (cVar4 == '\0') {
    uVar9 = 4;
    goto LAB_14002ff53;
  }
  plVar1 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x50);
  if ((plVar1 != (longlong *)0x0) && (plVar1 != param_1)) {
    (*DAT_140039718)();
    cVar4 = (*DAT_140039728)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1);
    uVar9 = 4;
    if (cVar4 == '\0') goto LAB_14002ff53;
  }
  pcVar3 = DAT_140039768;
  lVar7 = (longlong)*(int *)(*param_1 + 4);
  if (((*(uint *)((longlong)param_1 + lVar7 + 0x18) & 0x1c0) != 0x40) && (0 < lVar10)) {
    do {
      iVar5 = (*pcVar3)(*(undefined8 *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48)
                        ,*(undefined1 *)
                          ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58));
      if (iVar5 == -1) goto LAB_14002ff39;
      lVar7 = lVar11 + -1;
      bVar2 = 0 < lVar11;
      lVar11 = lVar7;
    } while (lVar7 != 0 && bVar2);
    lVar7 = (longlong)*(int *)(*param_1 + 4);
    lVar10 = 0;
  }
  plVar1 = *(longlong **)((longlong)param_1 + lVar7 + 0x48);
  lVar7 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2,lVar6);
  pcVar3 = DAT_140039768;
  uVar9 = (uint)(lVar7 != lVar6) << 2;
  if ((lVar7 == lVar6) && (0 < lVar10)) {
    do {
      iVar5 = (*pcVar3)(*(undefined8 *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48)
                        ,*(undefined1 *)
                          ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58));
      if (iVar5 == -1) goto LAB_14002ff39;
      lVar7 = lVar10 + -1;
      bVar2 = 0 < lVar10;
      lVar10 = lVar7;
    } while (lVar7 != 0 && bVar2);
  }
LAB_14002ff42:
  *(undefined8 *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28) = 0;
LAB_14002ff53:
  (*DAT_140039708)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4),
                   uVar9 | *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10),0)
  ;
  iVar5 = FUN_140033e80();
  if (iVar5 == 0) {
    (*DAT_1400396d8)(param_1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
LAB_14002ff39:
  uVar9 = 4;
  goto LAB_14002ff42;
}


/* Unwind@14002ffc0 */

void Unwind_14002ffc0(undefined8 param_1,longlong param_2)

{
  FUN_140030870(param_2 + 0x28);
  return;
}


/* Catch_All@14002fff0 */

undefined * Catch_All_14002fff0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  (*DAT_140039708)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4),
                   *(uint *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x10) | 4,1);
  return &DAT_14002ffb4;
}


/* Unwind@140030040 */

void Unwind_140030040(undefined8 param_1,longlong param_2)

{
  FUN_140030800(param_2 + 0x28);
  return;
}


/* Unwind@140030070 */

void Unwind_140030070(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* FUN_140030090 */

void FUN_140030090(longlong param_1)

{
  FUN_1400307c0(param_1 + -*(int *)(param_1 + -4));
  return;
}


/* FUN_1400300a0 */

undefined8 FUN_1400300a0(undefined8 param_1,ulonglong param_2)

{
  (*DAT_1400396a0)();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400340c0(param_1,0x60);
  }
  return param_1;
}


/* FUN_1400300d0 */

void FUN_1400300d0(longlong param_1)

{
  FUN_140030160(param_1 + -*(int *)(param_1 + -4));
  return;
}


/* FUN_1400300e0 */

longlong FUN_1400300e0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -*(int *)(param_1 + -4) + -0x18;
  (*DAT_1400396a0)();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400340c0(lVar1,0x78);
  }
  return lVar1;
}


/* FUN_140030120 */

longlong FUN_140030120(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -*(int *)(param_1 + -4) + -0x10;
  (*DAT_1400396a0)();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400340c0(lVar1,0x70);
  }
  return lVar1;
}


/* FUN_140030160 */

longlong FUN_140030160(longlong param_1,ulonglong param_2)

{
  (*DAT_1400396a0)();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400340c0(param_1 + -0x20,0x80);
  }
  return param_1 + -0x20;
}


/* FUN_140030190 */

int FUN_140030190(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((*(byte *)(param_1 + 0x70) & 2) != 0) {
    return -1;
  }
  if (param_2 == -1) {
    return 0;
  }
  lVar8 = **(longlong **)(param_1 + 0x40);
  iVar6 = **(int **)(param_1 + 0x58);
  if (lVar8 != 0 && 0 < (longlong)iVar6) {
    **(int **)(param_1 + 0x58) = iVar6 + -1;
    puVar1 = (undefined1 *)**(longlong **)(param_1 + 0x40);
    **(longlong **)(param_1 + 0x40) = (longlong)(puVar1 + 1);
    *puVar1 = (char)param_2;
    *(longlong *)(param_1 + 0x68) = lVar8 + 1;
    return param_2;
  }
  lVar2 = **(longlong **)(param_1 + 0x18);
  uVar9 = (iVar6 + lVar8) - lVar2;
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  lVar8 = 0x20;
  if (uVar9 < 0x20) {
LAB_140030220:
    uVar4 = FUN_1400329d0(lVar8);
  }
  else {
    if (uVar9 < 0x3fffffff) {
      lVar8 = uVar9 * 2;
      if (uVar9 < 0x800) goto LAB_140030220;
    }
    else {
      lVar8 = 0x7fffffff;
      if (0x7ffffffe < uVar9) {
        return -1;
      }
    }
    lVar5 = FUN_1400329d0(lVar8 + 0x27);
    uVar4 = lVar5 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar4 - 8) = lVar5;
  }
  FUN_140034080(uVar4,lVar2,uVar9);
  *(ulonglong *)(param_1 + 0x68) = uVar4 + uVar9 + 1;
  **(ulonglong **)(param_1 + 0x20) = uVar4;
  **(longlong **)(param_1 + 0x40) = uVar4 + uVar9;
  **(int **)(param_1 + 0x58) = (int)lVar8 - (int)uVar9;
  if ((*(byte *)(param_1 + 0x70) & 4) == 0) {
    iVar6 = *(int *)(param_1 + 0x68);
    lVar8 = (**(longlong **)(param_1 + 0x38) - lVar2) + uVar4;
    **(ulonglong **)(param_1 + 0x18) = uVar4;
    **(longlong **)(param_1 + 0x38) = lVar8;
    iVar6 = iVar6 - (int)lVar8;
  }
  else {
    **(ulonglong **)(param_1 + 0x18) = uVar4;
    **(ulonglong **)(param_1 + 0x38) = uVar4;
    iVar6 = 0;
  }
  **(int **)(param_1 + 0x50) = iVar6;
  uVar7 = *(uint *)(param_1 + 0x70);
  if ((uVar7 & 1) != 0) {
    lVar8 = lVar2;
    if (0xfff < uVar9) {
      lVar8 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar9 = uVar9 + 0x27;
    }
    thunk_FUN_1400340c0(lVar8,uVar9);
    uVar7 = *(uint *)(param_1 + 0x70);
  }
  *(uint *)(param_1 + 0x70) = uVar7 | 1;
  **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
  puVar1 = (undefined1 *)**(longlong **)(param_1 + 0x40);
  **(longlong **)(param_1 + 0x40) = (longlong)(puVar1 + 1);
  *puVar1 = (char)param_2;
  return param_2;
}


/* FUN_140030350 */

int FUN_140030350(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = **(ulonglong **)(param_1 + 0x38);
  iVar2 = -1;
  if ((uVar1 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar1)) {
    if (param_2 == -1) {
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
      iVar2 = 0;
    }
    else if ((*(char *)(uVar1 - 1) == (char)param_2) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
      *(char *)**(undefined8 **)(param_1 + 0x38) = (char)param_2;
      return param_2;
    }
  }
  return iVar2;
}


/* FUN_1400303b0 */

ulonglong FUN_1400303b0(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)*(int **)(param_1 + 0x38);
  if (pbVar2 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (**(int **)(param_1 + 0x50) < 1) {
    pbVar1 = (byte *)**(undefined8 **)(param_1 + 0x40);
    if (pbVar1 == (byte *)0x0) {
      return 0xffffffff;
    }
    if ((*(byte *)(param_1 + 0x70) & 4) != 0) {
      return 0xffffffff;
    }
    pbVar3 = *(byte **)(param_1 + 0x68);
    if (*(byte **)(param_1 + 0x68) < pbVar1) {
      pbVar3 = pbVar1;
    }
    if (pbVar3 <= pbVar2) {
      return 0xffffffff;
    }
    *(byte **)(param_1 + 0x68) = pbVar3;
    **(int **)(param_1 + 0x50) = (int)pbVar3 - **(int **)(param_1 + 0x38);
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 0x38);
  }
  return (ulonglong)*pbVar2;
}


/* FUN_140030410 */

void FUN_140030410(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar8 = 0xffffffffffffffff;
  if (((param_5 & (uVar1 & 4) >> 2) != 0) ||
     ((byte)((byte)((uVar1 & 2) >> 1) & (byte)param_5 >> 1) != 0)) goto LAB_14003056d;
  uVar4 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar1 & 2) == 0) && (uVar9 = **(ulonglong **)(param_1 + 0x40), uVar9 != 0)) {
    bVar7 = 1;
    if (*(ulonglong *)(param_1 + 0x68) < uVar9) {
      *(ulonglong *)(param_1 + 0x68) = uVar9;
    }
  }
  else {
    bVar7 = 0;
    uVar9 = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x68);
  lVar6 = **(longlong **)(param_1 + 0x18);
  uVar10 = lVar5 - lVar6;
  if (param_4 == 0) {
    uVar9 = 0;
  }
  else if (param_4 == 1) {
    if ((~param_5 & 3) == 0) goto LAB_14003056d;
    if ((param_5 & 1) == 0) {
      if (((param_5 & 2) == 0) || (uVar9 == 0 && lVar6 != 0)) goto LAB_14003056d;
    }
    else {
      uVar9 = uVar4;
      if (uVar4 == 0 && lVar6 != 0) goto LAB_14003056d;
    }
    uVar9 = uVar9 - lVar6;
  }
  else {
    uVar9 = uVar10;
    if (param_4 != 2) goto LAB_14003056d;
  }
  uVar9 = uVar9 + param_3;
  if ((uVar9 <= uVar10) &&
     ((uVar9 == 0 || ((((byte)param_5 & uVar4 == 0) == 0 && ((bool)((param_5 & 2) == 0 | bVar7))))))
     ) {
    uVar10 = lVar6 + uVar9;
    if (uVar4 != 0 && (param_5 & 1) != 0) {
      **(ulonglong **)(param_1 + 0x38) = uVar10;
      **(int **)(param_1 + 0x50) = (int)lVar5 - (int)uVar10;
    }
    uVar8 = uVar9;
    if (!(bool)(bVar7 ^ 1 | (param_5 & 2) == 0)) {
      iVar2 = **(int **)(param_1 + 0x40);
      iVar3 = **(int **)(param_1 + 0x58);
      **(longlong **)(param_1 + 0x20) = lVar6;
      **(ulonglong **)(param_1 + 0x40) = uVar10;
      **(int **)(param_1 + 0x58) = (iVar2 + iVar3) - (int)uVar10;
    }
  }
LAB_14003056d:
  *param_2 = uVar8;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


/* FUN_1400305b0 */

void FUN_1400305b0(longlong param_1,ulonglong *param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar2 = *(uint *)(param_1 + 0x70);
  uVar11 = 0xffffffffffffffff;
  if (((param_4 & (uVar2 & 4) >> 2) == 0) &&
     ((byte)((byte)((uVar2 & 2) >> 1) & (byte)param_4 >> 1) == 0)) {
    uVar10 = param_3[1] + *param_3;
    lVar5 = **(longlong **)(param_1 + 0x38);
    if (((uVar2 & 2) == 0) && (uVar6 = **(ulonglong **)(param_1 + 0x40), uVar6 != 0)) {
      bVar9 = true;
      if (*(ulonglong *)(param_1 + 0x68) < uVar6) {
        *(ulonglong *)(param_1 + 0x68) = uVar6;
      }
    }
    else {
      bVar9 = false;
    }
    lVar7 = *(longlong *)(param_1 + 0x68);
    lVar8 = **(longlong **)(param_1 + 0x18);
    if ((uVar10 <= (ulonglong)(lVar7 - lVar8)) &&
       ((uVar10 == 0 || ((((byte)param_4 & lVar5 == 0) == 0 && ((param_4 & 2) == 0 || bVar9)))))) {
      lVar1 = lVar8 + uVar10;
      if (lVar5 != 0 && (param_4 & 1) != 0) {
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)lVar7 - (int)lVar1;
      }
      uVar11 = uVar10;
      if (bVar9 && (param_4 & 2) != 0) {
        iVar3 = **(int **)(param_1 + 0x40);
        iVar4 = **(int **)(param_1 + 0x58);
        **(longlong **)(param_1 + 0x20) = lVar8;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar3 + iVar4) - (int)lVar1;
      }
    }
  }
  *param_2 = uVar11;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


/* FUN_1400306d0 */

undefined8 * FUN_1400306d0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *param_1 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    lVar3 = *(longlong *)param_1[8];
    lVar4 = 0x58;
    if (lVar3 == 0) {
      lVar3 = *(longlong *)param_1[7];
      lVar4 = 0x50;
    }
    lVar1 = *(longlong *)param_1[3];
    uVar5 = (**(int **)((longlong)param_1 + lVar4) + lVar3) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar5) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1400340c0(lVar3,uVar5);
  }
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined4 *)param_1[10] = 0;
  *(undefined8 *)param_1[4] = 0;
  *(undefined8 *)param_1[8] = 0;
  *(undefined4 *)param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfe;
  (*DAT_140039690)(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400340c0(param_1,0x78);
  }
  return param_1;
}


/* FUN_1400307c0 */

longlong FUN_1400307c0(longlong param_1,ulonglong param_2)

{
  FUN_1400308d0();
  (*DAT_1400396a0)(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400340c0(param_1 + -0x98,0xf8);
  }
  return param_1 + -0x98;
}


/* FUN_140030800 */

void FUN_140030800(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = FUN_140033e80();
  if (iVar2 == 0) {
    (*DAT_1400396d8)(*param_1);
  }
  plVar1 = *(longlong **)(*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}


/* Unwind@140030850 */

void Unwind_140030850(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* FUN_140030870 */

void FUN_140030870(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}


/* Unwind@1400308b0 */

void Unwind_1400308b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* FUN_1400308d0 */

void FUN_1400308d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  *(undefined ***)(param_1 + -0x98 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x98) + 4);
  *(int *)(param_1 + -0x9c + (longlong)iVar1) = iVar1 + -0x98;
  *(undefined ***)(param_1 + -0x80) =
       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if ((*(byte *)(param_1 + -0x10) & 1) != 0) {
    lVar4 = **(longlong **)(param_1 + -0x40);
    lVar5 = 0x58;
    if (lVar4 == 0) {
      lVar4 = **(longlong **)(param_1 + -0x48);
      lVar5 = 0x50;
    }
    lVar2 = **(longlong **)(param_1 + -0x68);
    uVar6 = (**(int **)(param_1 + -0x80 + lVar5) + lVar4) - lVar2;
    lVar4 = lVar2;
    if (0xfff < uVar6) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_1400340c0(lVar4,uVar6);
  }
  **(undefined8 **)(param_1 + -0x68) = 0;
  **(undefined8 **)(param_1 + -0x48) = 0;
  **(undefined4 **)(param_1 + -0x30) = 0;
  **(undefined8 **)(param_1 + -0x60) = 0;
  **(undefined8 **)(param_1 + -0x40) = 0;
  **(undefined4 **)(param_1 + -0x28) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(byte *)(param_1 + -0x10) = *(byte *)(param_1 + -0x10) & 0xfe;
  (*DAT_140039690)(param_1 + -0x80);
  return;
}


/* FUN_1400309e0 */

ulonglong *
FUN_1400309e0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar13 = param_3[2];
  uVar2 = param_4[2];
  uVar1 = uVar2 + uVar13;
  if ((ulonglong)param_4[3] <= (ulonglong)param_3[3] && uVar2 <= param_3[3] - uVar13) {
    uVar3 = *(undefined4 *)param_3;
    uVar4 = *(undefined4 *)((longlong)param_3 + 4);
    uVar5 = *(undefined4 *)(param_3 + 1);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar14 = param_3[3];
    param_1[2] = param_3[2];
    param_1[3] = uVar14;
    *(undefined4 *)param_1 = uVar3;
    *(undefined4 *)((longlong)param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
    param_3[2] = 0;
    param_3[3] = 0xf;
    *(undefined1 *)param_3 = 0;
    puVar12 = param_1;
    if (0xf < param_1[3]) {
      puVar12 = (ulonglong *)*param_1;
    }
    param_3 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      param_3 = (undefined8 *)*param_4;
    }
    uVar14 = (longlong)puVar12 + uVar13;
    uVar13 = uVar2 + 1;
LAB_140030b22:
    FUN_140034080(uVar14,param_3,uVar13);
    param_1[2] = uVar1;
    return param_1;
  }
  if (uVar13 <= param_4[3] - uVar2) {
    uVar3 = *(undefined4 *)param_4;
    uVar4 = *(undefined4 *)((longlong)param_4 + 4);
    uVar5 = *(undefined4 *)(param_4 + 1);
    uVar6 = *(undefined4 *)((longlong)param_4 + 0xc);
    uVar7 = *(undefined4 *)((longlong)param_4 + 0x14);
    uVar8 = *(undefined4 *)(param_4 + 3);
    uVar9 = *(undefined4 *)((longlong)param_4 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_4 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
    *(undefined4 *)(param_1 + 3) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
    *(undefined4 *)param_1 = uVar3;
    *(undefined4 *)((longlong)param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
    param_4[2] = 0;
    param_4[3] = 0xf;
    *(undefined1 *)param_4 = 0;
    uVar14 = *param_1;
    FUN_140034090(uVar14 + uVar13,uVar14,uVar2 + 1);
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    goto LAB_140030b22;
  }
  uVar14 = 0x7fffffffffffffff;
  if ((uVar13 ^ 0x7fffffffffffffff) < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_140020740();
  }
  if (-1 < (longlong)uVar1) {
    uVar10 = uVar1 | 0xf;
    uVar14 = 0x16;
    if (0x16 < uVar10) {
      uVar14 = uVar10;
    }
    if (uVar10 < 0xfff) {
      uVar10 = FUN_1400329d0(uVar14 + 1);
      goto LAB_140030b40;
    }
  }
  lVar11 = FUN_1400329d0(uVar14 + 0x28);
  uVar10 = lVar11 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar10 - 8) = lVar11;
LAB_140030b40:
  *param_1 = uVar10;
  param_1[2] = uVar1;
  param_1[3] = uVar14;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_140034080(uVar10,param_3,uVar13);
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  FUN_140034080(uVar10 + uVar13,param_4,uVar2 + 1);
  return param_1;
}


/* FUN_140030ba0 */

ulonglong FUN_140030ba0(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  puVar14 = (undefined8 *)param_1[1];
  if (puVar14 != (undefined8 *)param_1[2]) {
    *puVar14 = *param_2;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
    uVar11 = param_2[2] - param_2[1];
    if (uVar11 != 0) {
      if ((longlong)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140020c20();
      }
      if (uVar11 < 0x1000) {
        uVar15 = FUN_1400329d0(uVar11);
      }
      else {
        lVar7 = FUN_1400329d0(uVar11 + 0x27);
        uVar15 = lVar7 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar15 - 8) = lVar7;
      }
      puVar14[1] = uVar15;
      puVar14[2] = uVar15;
      puVar14[3] = uVar11 + uVar15;
      lVar7 = param_2[2] - param_2[1];
      FUN_140034080(uVar15,param_2[1],lVar7);
      puVar14[2] = lVar7 + uVar15;
    }
    uVar11 = param_1[1];
    param_1[1] = uVar11 + 0x20;
    return uVar11;
  }
  uVar11 = *param_1;
  uVar12 = ((longlong)(param_1[1] - uVar11) >> 5) + 1;
  uVar10 = (longlong)(param_1[2] - uVar11) >> 5;
  uVar15 = (uVar10 >> 1) + uVar10;
  if (uVar15 <= uVar12) {
    uVar15 = uVar12;
  }
  if (0x7ffffffffffffff - (uVar10 >> 1) < uVar10) {
    uVar15 = 0x7ffffffffffffff;
  }
  if (uVar15 >> 0x3b != 0) {
LAB_140031002:
                    /* WARNING: Subroutine does not return */
    FUN_140020760();
  }
  if (uVar15 == 0) {
    uVar10 = 0;
  }
  else if (uVar15 < 0x80) {
    uVar10 = FUN_1400329d0();
  }
  else {
    if (uVar15 == 0x7ffffffffffffff) goto LAB_140031002;
    lVar7 = FUN_1400329d0(uVar15 * 0x20 + 0x27);
    uVar10 = lVar7 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar10 - 8) = lVar7;
  }
  uVar1 = (longlong)puVar14 + (uVar10 - uVar11);
  lVar7 = uVar10 - uVar11;
  *(undefined8 *)((longlong)puVar14 + (uVar10 - uVar11)) = *param_2;
  puVar9 = (undefined8 *)((longlong)puVar14 + ((uVar10 + 8) - uVar11));
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined8 *)((longlong)puVar14 + ((uVar10 + 0x18) - uVar11)) = 0;
  uVar11 = param_2[2] - param_2[1];
  if (uVar11 != 0) {
    if ((longlong)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140020c20();
    }
    if (uVar11 < 0x1000) {
      uVar16 = FUN_1400329d0(uVar11);
    }
    else {
      lVar8 = FUN_1400329d0(uVar11 + 0x27);
      uVar16 = lVar8 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar16 - 8) = lVar8;
    }
    *(ulonglong *)(uVar1 + 8) = uVar16;
    *(ulonglong *)(uVar1 + 0x10) = uVar16;
    *(ulonglong *)(uVar1 + 0x18) = uVar11 + uVar16;
    lVar8 = param_2[2] - param_2[1];
    FUN_140034080(uVar16,param_2[1],lVar8);
    *(ulonglong *)(uVar1 + 0x10) = lVar8 + uVar16;
  }
  puVar13 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  if (puVar14 == puVar9) {
    if (puVar13 == puVar14) goto LAB_140030f11;
    lVar7 = 0;
    do {
      *(undefined8 *)(uVar10 + lVar7) = *(undefined8 *)((longlong)puVar13 + lVar7);
      uVar2 = *(undefined8 *)((longlong)puVar13 + lVar7 + 0x18);
      *(undefined8 *)((longlong)puVar13 + lVar7 + 0x18) = 0;
      puVar9 = (undefined8 *)((longlong)puVar13 + lVar7 + 8);
      uVar4 = *puVar9;
      uVar5 = puVar9[1];
      puVar9 = (undefined8 *)((longlong)puVar13 + lVar7 + 8);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined8 *)(uVar10 + 8 + lVar7);
      *puVar9 = uVar4;
      puVar9[1] = uVar5;
      *(undefined8 *)(uVar10 + 0x18 + lVar7) = uVar2;
      lVar8 = lVar7 + 0x20;
      lVar7 = lVar7 + 0x20;
    } while ((undefined8 *)((longlong)puVar13 + lVar8) != puVar14);
  }
  else {
    if (puVar13 != puVar14) {
      lVar8 = 0;
      do {
        *(undefined8 *)(uVar10 + lVar8) = *(undefined8 *)((longlong)puVar13 + lVar8);
        uVar2 = *(undefined8 *)((longlong)puVar13 + lVar8 + 0x18);
        *(undefined8 *)((longlong)puVar13 + lVar8 + 0x18) = 0;
        puVar9 = (undefined8 *)((longlong)puVar13 + lVar8 + 8);
        uVar4 = *puVar9;
        uVar5 = puVar9[1];
        puVar9 = (undefined8 *)((longlong)puVar13 + lVar8 + 8);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = (undefined8 *)(uVar10 + 8 + lVar8);
        *puVar9 = uVar4;
        puVar9[1] = uVar5;
        *(undefined8 *)(uVar10 + 0x18 + lVar8) = uVar2;
        lVar6 = lVar8 + 0x20;
        lVar8 = lVar8 + 0x20;
      } while ((undefined8 *)((longlong)puVar13 + lVar6) != puVar14);
      puVar9 = (undefined8 *)param_1[1];
    }
    if (puVar14 != puVar9) {
      lVar8 = 0;
      do {
        *(undefined8 *)((longlong)puVar14 + lVar8 + lVar7 + 0x20) =
             *(undefined8 *)((longlong)puVar14 + lVar8);
        uVar2 = *(undefined8 *)((longlong)puVar14 + lVar8 + 0x18);
        *(undefined8 *)((longlong)puVar14 + lVar8 + 0x18) = 0;
        puVar13 = (undefined8 *)((longlong)puVar14 + lVar8 + 8);
        uVar4 = *puVar13;
        uVar5 = puVar13[1];
        puVar13 = (undefined8 *)((longlong)puVar14 + lVar8 + 8);
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13 = (undefined8 *)((longlong)puVar14 + lVar8 + lVar7 + 0x28);
        *puVar13 = uVar4;
        puVar13[1] = uVar5;
        *(undefined8 *)((longlong)puVar14 + lVar8 + lVar7 + 0x38) = uVar2;
        lVar6 = lVar8 + 0x20;
        lVar8 = lVar8 + 0x20;
      } while ((undefined8 *)((longlong)puVar14 + lVar6) != puVar9);
    }
  }
  puVar13 = (undefined8 *)*param_1;
LAB_140030f11:
  if (puVar13 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)param_1[1];
    if (puVar13 != puVar14) {
      do {
        lVar7 = puVar13[1];
        if (lVar7 != 0) {
          uVar11 = puVar13[3] - lVar7;
          lVar8 = lVar7;
          if (0xfff < uVar11) {
            lVar8 = *(longlong *)(lVar7 + -8);
            if (0x1f < (ulonglong)((lVar7 + -8) - lVar8)) goto LAB_140030f92;
            uVar11 = uVar11 + 0x27;
          }
          thunk_FUN_1400340c0(lVar8,uVar11);
          puVar13[1] = 0;
          puVar13[2] = 0;
          puVar13[3] = 0;
        }
        puVar13 = puVar13 + 4;
      } while (puVar13 != puVar14);
      puVar13 = (undefined8 *)*param_1;
    }
    uVar11 = param_1[2] - (longlong)puVar13;
    puVar14 = puVar13;
    if (0xfff < uVar11) {
      puVar14 = (undefined8 *)puVar13[-1];
      if (0x1f < (ulonglong)((longlong)puVar13 + (-8 - (longlong)puVar14))) {
LAB_140030f92:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar11 = uVar11 + 0x27;
    }
    thunk_FUN_1400340c0(puVar14,uVar11);
  }
  *param_1 = uVar10;
  param_1[1] = uVar12 * 0x20 + uVar10;
  param_1[2] = uVar15 * 0x20 + uVar10;
  return uVar1;
}


/* Unwind@140031010 */

void Unwind_140031010(undefined8 param_1,longlong param_2)

{
  FUN_140031050(param_2 + 0x20);
  return;
}


/* FUN_140031050 */

void FUN_140031050(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar6 != lVar1) {
    do {
      lVar4 = *(longlong *)(lVar6 + 8);
      if (lVar4 != 0) {
        uVar5 = *(longlong *)(lVar6 + 0x18) - lVar4;
        lVar3 = lVar4;
        if (0xfff < uVar5) {
          lVar3 = *(longlong *)(lVar4 + -8);
          if (0x1f < (ulonglong)((lVar4 + -8) - lVar3)) goto LAB_140031120;
          uVar5 = uVar5 + 0x27;
        }
        thunk_FUN_1400340c0(lVar3,uVar5);
        *(undefined8 *)(lVar6 + 8) = 0;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined8 *)(lVar6 + 0x18) = 0;
      }
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != lVar1);
    lVar4 = *(longlong *)(param_1 + 8);
  }
  uVar5 = *(longlong *)(param_1 + 0x10) * 0x20;
  lVar6 = lVar4;
  if (0xfff < uVar5) {
    lVar6 = *(longlong *)(lVar4 + -8);
    if (0x1f < (ulonglong)((lVar4 + -8) - lVar6)) {
LAB_140031120:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar5 = uVar5 + 0x27;
  }
  thunk_FUN_1400340c0(lVar6,uVar5);
  return;
}


/* FUN_140031130 */

longlong FUN_140031130(longlong param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  param_1 = param_1 + -*(int *)(param_1 + -4);
  *(undefined ***)(param_1 + -0xb0 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  iVar2 = *(int *)(*(longlong *)(param_1 + -0xb0) + 4);
  *(int *)(param_1 + -0xb4 + (longlong)iVar2) = iVar2 + -0xb0;
  *(undefined ***)(param_1 + -0xa0) = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((*(longlong *)(param_1 + -0x20) == 0) || (**(longlong **)(param_1 + -0x88) != param_1 + -0x30)
     ) {
    cVar1 = *(char *)(param_1 + -0x24);
  }
  else {
    iVar2 = *(int *)(param_1 + -0x10);
    lVar3 = *(longlong *)(param_1 + -0x18);
    **(longlong **)(param_1 + -0x88) = lVar3;
    **(longlong **)(param_1 + -0x68) = lVar3;
    **(int **)(param_1 + -0x50) = iVar2 - (int)lVar3;
    cVar1 = *(char *)(param_1 + -0x24);
  }
  if (cVar1 == '\x01') {
    FUN_14001f660(param_1 + -0xa0);
  }
  (*DAT_140039690)(param_1 + -0xa0);
  (*DAT_1400396a0)(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400340c0(param_1 + -0xb0,0x110);
  }
  return param_1 + -0xb0;
}


/* Unwind@140031230 */

void Unwind_140031230(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140034060();
}


/* FUN_140031250 */

longlong FUN_140031250(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (lVar3 = FUN_140033db0(param_2,param_3,param_4), lVar3 != 0)) {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    *(undefined1 *)(param_1 + 0x71) = 0;
    puVar5 = (undefined8 *)(param_1 + 8);
    *(undefined8 **)(param_1 + 0x18) = puVar5;
    *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
    puVar1 = (undefined8 *)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x38) = puVar1;
    *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
    *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
    *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    local_58 = 0;
    local_68 = 0;
    local_60 = 0;
    (*DAT_1400399a0)(lVar3,&local_58,&local_68,&local_60);
    *(undefined8 *)(param_1 + 0x18) = local_58;
    *(undefined8 *)(param_1 + 0x20) = local_58;
    *(undefined8 *)(param_1 + 0x38) = local_68;
    *(undefined8 *)(param_1 + 0x40) = local_68;
    *(undefined8 *)(param_1 + 0x50) = local_60;
    *(undefined8 *)(param_1 + 0x58) = local_60;
    *(longlong *)(param_1 + 0x80) = lVar3;
    *(undefined8 *)(param_1 + 0x74) = DAT_14003f948;
    *(undefined8 *)(param_1 + 0x68) = 0;
    (*DAT_140039720)(param_1,&local_58);
    plVar4 = (longlong *)FUN_1400208e0(&local_58);
    cVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
    if (cVar2 == '\0') {
      *(undefined8 **)(param_1 + 0x18) = puVar5;
      *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
      *(undefined8 **)(param_1 + 0x38) = puVar1;
      *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
      *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
      *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(longlong **)(param_1 + 0x68) = plVar4;
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    if ((local_50 != (longlong *)0x0) &&
       (puVar5 = (undefined8 *)(**(code **)(*local_50 + 0x10))(), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}


/* Unwind@140031400 */

void Unwind_140031400(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}


/* FUN_140031450 */

longlong *
FUN_140031450(longlong *param_1,undefined8 param_2,uint param_3,undefined4 param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_5 != 0) {
    *param_1 = (longlong)&DAT_1400361a0;
    (*DAT_140039688)(param_1 + 0x16);
    param_1[0x16] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb0;
  plVar1 = param_1 + 2;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  (*DAT_140039740)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,plVar1,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb0;
  (*DAT_140039678)(plVar1);
  param_1[2] = (longlong)std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x81) = 0;
  param_1[5] = (longlong)(param_1 + 3);
  param_1[6] = (longlong)(param_1 + 4);
  param_1[9] = (longlong)(param_1 + 7);
  param_1[10] = (longlong)(param_1 + 8);
  param_1[0xc] = (longlong)(param_1 + 0xb);
  param_1[0xd] = (longlong)param_1 + 0x5c;
  param_1[0xb] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = DAT_14003f948;
  param_1[0xf] = 0;
  lVar2 = FUN_140031250(plVar1,param_2,param_3 | 1,param_4);
  if (lVar2 == 0) {
    (*DAT_140039708)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4),
                     *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10) | 2,0);
  }
  return param_1;
}


/* Unwind@140031620 */

void Unwind_140031620(undefined8 param_1,longlong param_2)

{
  FUN_14001f5b0(*(undefined8 *)(param_2 + 0x28));
  return;
}


/* Unwind@140031650 */

void Unwind_140031650(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0xa0) != 0) {
    (*DAT_1400396a0)(*(longlong *)(param_2 + 0x30) + 0xb0);
  }
  return;
}


/* FUN_140031690 */

undefined * FUN_140031690(void)

{
  return &DAT_14003f960;
}


/* FUN_1400316a0 */

undefined * FUN_1400316a0(void)

{
  return &DAT_14003f968;
}


/* FUN_1400316b0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400316b0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  byte bVar19;
  byte bVar20;
  char cVar21;
  ulonglong uVar22;
  char cVar23;
  char cVar24;
  ulonglong uVar25;
  char cVar26;
  char acStack_1150 [40];
  undefined8 local_1128;
  char local_1120 [24];
  undefined8 local_1108;
  undefined8 uStack_1100;
  char local_10f8 [40];
  undefined8 uStack_10d0;
  char local_10c8 [4040];
  longlong local_100;
  longlong local_f8 [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c0;
  ulonglong *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined8 uStack_96;
  ulonglong uStack_8e;
  undefined1 local_86;
  int local_74;
  ulonglong *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1400316c6;
  local_60 = 0xfffffffffffffffe;
  acStack_1150[0] = -10;
  acStack_1150[1] = '\x16';
  acStack_1150[2] = '\x03';
  acStack_1150[3] = '@';
  acStack_1150[4] = '\x01';
  acStack_1150[5] = '\0';
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  uVar5 = (*DAT_140039568)("ntdll.dll");
  pcVar7 = DAT_140039538;
  builtin_strncpy(acStack_1150,"\r\x17\x03@\x01",6);
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  pcVar6 = (code *)(*DAT_140039538)(uVar5,"NtQueryInformationProcess");
  builtin_strncpy(acStack_1150,"\x1d\x17\x03@\x01",6);
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  pcVar7 = (code *)(*pcVar7)(uVar5,"NtQueryObject");
  if (param_2 == 0 || param_1 == 0) {
    uVar25 = 0;
    goto LAB_14003212f;
  }
  local_74 = 0;
  puVar10 = (ulonglong *)0x0;
  uVar25 = 0x20000;
  local_100 = param_2;
  while( true ) {
    builtin_strncpy(acStack_1150,"o\x17\x03@\x01",6);
    acStack_1150[6] = '\0';
    acStack_1150[7] = '\0';
    local_b0 = puVar10;
    puVar8 = (ulonglong *)thunk_FUN_1400329d0(uVar25);
    acStack_1150[0] = -0x80;
    acStack_1150[1] = '\x17';
    acStack_1150[2] = '\x03';
    acStack_1150[3] = '@';
    acStack_1150[4] = '\x01';
    acStack_1150[5] = '\0';
    acStack_1150[6] = '\0';
    acStack_1150[7] = '\0';
    FUN_1400340a0(puVar8,0,uVar25);
    if (puVar10 != (ulonglong *)0x0) {
      acStack_1150[0] = -0x73;
      acStack_1150[1] = '\x17';
      acStack_1150[2] = '\x03';
      acStack_1150[3] = '@';
      acStack_1150[4] = '\x01';
      acStack_1150[5] = '\0';
      acStack_1150[6] = '\0';
      acStack_1150[7] = '\0';
      thunk_FUN_1400340c0(puVar10);
    }
    acStack_1150[0] = -0x66;
    acStack_1150[1] = '\x17';
    acStack_1150[2] = '\x03';
    acStack_1150[3] = '@';
    acStack_1150[4] = '\x01';
    acStack_1150[5] = '\0';
    acStack_1150[6] = '\0';
    acStack_1150[7] = '\0';
    FUN_1400340a0(puVar8,0,uVar25);
    acStack_1150[0] = -0x4a;
    acStack_1150[1] = '\x17';
    acStack_1150[2] = '\x03';
    acStack_1150[3] = '@';
    acStack_1150[4] = '\x01';
    acStack_1150[5] = '\0';
    acStack_1150[6] = '\0';
    acStack_1150[7] = '\0';
    local_1128 = (ulonglong *)&local_74;
    local_b0 = puVar8;
    iVar4 = (*pcVar6)(param_1,0x33,puVar8,uVar25 & 0xffffffff);
    if (iVar4 != -0x3ffffffc) break;
    puVar10 = puVar8;
    uVar25 = uVar25 * 2;
    if (local_74 != 0) {
      uVar25 = (ulonglong)(local_74 + 0x1000);
    }
  }
  if ((-1 < iVar4) && (uVar25 = *puVar8, uVar25 != 0)) {
    builtin_strncpy(acStack_1150,"\x05\x18\x03@\x01",6);
    acStack_1150[6] = '\0';
    acStack_1150[7] = '\0';
    local_b0 = puVar8;
    local_68 = thunk_FUN_1400329d0(0x4000);
    builtin_strncpy(acStack_1150,"\x1d\x18\x03@\x01",6);
    acStack_1150[6] = '\0';
    acStack_1150[7] = '\0';
    FUN_1400340a0(local_68,0,0x4000);
    uVar2 = _UNK_140036228;
    uVar5 = _DAT_140036220;
    puVar10 = puVar8;
    local_70 = puVar8;
    for (uVar22 = 0; uVar22 < uVar25; uVar22 = uVar22 + 1) {
      uVar25 = puVar8[uVar22 * 5 + 2];
      local_f8[0] = 0;
      builtin_strncpy(acStack_1150,"}\x18\x03@\x01",6);
      acStack_1150[6] = '\0';
      acStack_1150[7] = '\0';
      uVar9 = (*DAT_140039500)();
      local_1120[8] = '\x02';
      local_1120[9] = '\0';
      local_1120[10] = '\0';
      local_1120[0xb] = '\0';
      local_1120[0] = '\0';
      local_1120[1] = '\0';
      local_1120[2] = '\0';
      local_1120[3] = '\0';
      local_1128 = (ulonglong *)((ulonglong)local_1128 & 0xffffffff00000000);
      acStack_1150[0] = -0x59;
      acStack_1150[1] = '\x18';
      acStack_1150[2] = '\x03';
      acStack_1150[3] = '@';
      acStack_1150[4] = '\x01';
      acStack_1150[5] = '\0';
      acStack_1150[6] = '\0';
      acStack_1150[7] = '\0';
      iVar4 = (*DAT_1400394f8)(param_1,uVar25,uVar9,local_f8);
      lVar12 = local_68;
      if (iVar4 != 0) {
        acStack_1150[0] = -0x3e;
        acStack_1150[1] = '\x18';
        acStack_1150[2] = '\x03';
        acStack_1150[3] = '@';
        acStack_1150[4] = '\x01';
        acStack_1150[5] = '\0';
        acStack_1150[6] = '\0';
        acStack_1150[7] = '\0';
        FUN_1400340a0(local_68,0,0x4000);
        local_1128 = (ulonglong *)0x0;
        acStack_1150[0] = -0x1e;
        acStack_1150[1] = '\x18';
        acStack_1150[2] = '\x03';
        acStack_1150[3] = '@';
        acStack_1150[4] = '\x01';
        acStack_1150[5] = '\0';
        acStack_1150[6] = '\0';
        acStack_1150[7] = '\0';
        iVar4 = (*pcVar7)(local_f8[0],2,lVar12,0x4000);
        if ((-1 < iVar4) && (lVar12 = *(longlong *)(local_68 + 8), lVar12 != 0)) {
          local_1108 = uVar5;
          uStack_1100 = uVar2;
          local_10f8[0] = 'P';
          local_10f8[1] = -0x23;
          local_10f8[2] = 'c';
          local_10f8[3] = -0x25;
          local_10f8[4] = 'k';
          local_10f8[5] = -0x27;
          local_10f8[6] = 'd';
          local_10f8[7] = -0x29;
          local_10f8[8] = -0x2c;
          local_10f8[9] = -0x2b;
          local_10f8[0x12] = '\0';
          local_10f8[0x13] = '\0';
          local_10f8[0x14] = '\0';
          local_10f8[0x15] = '\0';
          local_10f8[10] = '\0';
          local_10f8[0xb] = '\0';
          local_10f8[0xc] = '\0';
          local_10f8[0xd] = '\0';
          local_10f8[0xe] = '\0';
          local_10f8[0xf] = '\0';
          local_10f8[0x10] = '\0';
          local_10f8[0x11] = '\0';
          do {
            builtin_strncpy(acStack_1150,"8\x19\x03@\x01",6);
            acStack_1150[6] = '\0';
            acStack_1150[7] = '\0';
            puVar10 = (ulonglong *)FUN_140031690();
            uVar25 = *puVar10;
            builtin_strncpy(acStack_1150,"A\x19\x03@\x01",6);
            acStack_1150[6] = '\0';
            acStack_1150[7] = '\0';
            puVar10 = (ulonglong *)FUN_1400316a0();
            uVar13 = *puVar10;
            uVar11 = 0;
            while( true ) {
              if (uVar11 < uVar25) {
                puVar15 = (undefined8 *)&stack0x006e3d72;
                goto LAB_140031c70;
              }
              bVar19 = *(byte *)((longlong)&local_1108 + uVar11);
              uVar16 = uVar13 + 1;
              cVar21 = (char)uVar11;
              if (uVar25 < uVar16) break;
              if (uVar25 == uVar16) {
LAB_140031990:
                uVar16 = (ulonglong)bVar19;
                uVar11 = uVar11 + uVar13;
              }
              else {
                if (uVar25 == uVar13 + 4) {
                  bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 - 10U) * -2 + 0x3c;
                }
                else {
                  if (uVar25 != uVar13 + 5) {
                    uVar3 = uVar13;
                    if ((uVar25 != uVar13 + 3) && (uVar3 = uVar16, uVar25 != uVar13 + 2)) break;
                    goto LAB_140031b34;
                  }
                  bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 + 0x3aU) * -2 + 0xa4;
LAB_140031ac1:
                  *(byte *)((longlong)&local_1108 + uVar11) =
                       cVar21 + bVar19 + (bVar19 & cVar21 + 0x72U) * -2 + bVar20 + 'T';
                }
                uVar25 = uVar25 + uVar13;
LAB_140031aea:
                uVar16 = ~(ulonglong)bVar20;
              }
              uVar11 = uVar11 + uVar16;
LAB_14003199a:
              uVar11 = uVar11 + 1;
              if (0x25 < uVar11) {
                puVar15 = &local_1108;
LAB_140031c70:
                builtin_strncpy(acStack_1150,"y\x1c\x03@\x01",6);
                acStack_1150[6] = '\0';
                acStack_1150[7] = '\0';
                iVar4 = (*DAT_140039af0)(puVar15,lVar12);
                puVar10 = local_70;
                if (iVar4 != 0) goto LAB_14003184e;
                if (local_f8[0] == 0) goto LAB_140032119;
                local_c0 = local_f8[0];
                local_d8 = 0;
                uStack_d0 = 0;
                local_f8[2] = 0;
                local_f8[3] = 0;
                local_f8[0] = 0;
                local_f8[1] = 0;
                acStack_1150[0] = -0x31;
                acStack_1150[1] = '\x1c';
                acStack_1150[2] = '\x03';
                acStack_1150[3] = '@';
                acStack_1150[4] = '\x01';
                acStack_1150[5] = '\0';
                acStack_1150[6] = '\0';
                acStack_1150[7] = '\0';
                lVar12 = (*DAT_140039608)(param_1,0,local_f8,0x30);
                if (lVar12 != 0x30) goto LAB_14003210c;
                local_b8 = &local_a8;
                goto LAB_140031d35;
              }
            }
            if (uVar11 < uVar13) {
              puVar15 = (undefined8 *)&stack0x0149b7d0;
              goto LAB_140031c70;
            }
            if (uVar13 + uVar25 <= uVar11) {
              if (uVar25 == uVar16) {
                *(byte *)((longlong)&local_1108 + uVar11) =
                     cVar21 + bVar19 + (bVar19 & cVar21 + 0x2eU) * -2 + -0x14;
                uVar3 = uVar25;
              }
              else {
                uVar3 = uVar13;
                if (uVar25 != uVar13 + 2) {
                  if (uVar25 == uVar13 + 4) {
                    bVar20 = (cVar21 + bVar19 + (bVar19 & cVar21 + 0x32U) * -2) - 0x2c;
                    goto LAB_140031aea;
                  }
                  if (uVar25 == uVar13 + 7) {
                    bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 + 0xb6U) * -2 + 0xbc;
                    *(byte *)((longlong)&local_1108 + uVar11) = bVar20;
                    uVar11 = (uVar11 + ~uVar13) - (ulonglong)bVar20;
                    uVar13 = uVar16;
LAB_140031952:
                    *(byte *)((longlong)&local_1108 + uVar11) =
                         (char)uVar11 + bVar19 + (bVar19 & (char)uVar11 + 0x58U) * -2 + -0x10;
                    lVar14 = uVar11 - uVar25;
                    uVar25 = uVar25 + 1;
                    bVar19 = local_1120[lVar14 + 0x16];
                    uVar11 = lVar14 - 2;
                    goto LAB_140031990;
                  }
                  if (uVar25 == uVar13 + 3) goto LAB_140031952;
                  if (uVar25 == uVar13 + 6) goto LAB_140031990;
                  if (0xf < uVar25) {
                    bVar20 = cVar21 + bVar19 * '\x02' + (bVar19 & cVar21 - 0x30U) * -2 + 0x20;
                    goto LAB_140031ac1;
                  }
                  if (uVar13 + 4 < uVar25) {
                    cVar21 = cVar21 + bVar19 + (bVar19 & cVar21 - 0x1cU) * -2 + -0x58;
                  }
                  else {
                    cVar21 = cVar21 + bVar19 + (bVar19 & cVar21 + 0xa2U) * -2 + '4';
                  }
                  *(char *)((longlong)&local_1108 + uVar11) = cVar21;
                  goto LAB_14003199a;
                }
              }
LAB_140031b34:
              uVar13 = uVar3;
              uVar11 = uVar11 - 1;
              goto LAB_14003199a;
            }
            uVar3 = uVar16;
            if (uVar25 == uVar13 + 6) goto LAB_140031b34;
            if (uVar25 == uVar13 + 8) {
              bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 + 0x68U) * -2 + 0x90;
              goto LAB_140031ac1;
            }
            if (uVar25 == uVar13 + 9) {
              bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 - 0x10U) * -2 + 0x60;
              goto LAB_140031aea;
            }
            if (uVar25 == uVar13 + 10) goto LAB_140031952;
          } while( true );
        }
LAB_14003184e:
        puVar10 = local_70;
        builtin_strncpy(acStack_1150,"T\x18\x03@\x01",6);
        acStack_1150[6] = '\0';
        acStack_1150[7] = '\0';
        (*DAT_1400394d8)(local_f8[0]);
      }
      uVar25 = *puVar10;
    }
    goto LAB_140032119;
  }
  uVar25 = 0;
  goto LAB_140032127;
LAB_140031d35:
  do {
    lVar14 = local_f8[3];
    lVar12 = local_f8[0];
    if (((int)local_d8 == 0x1000) &&
       (0x47 < (ulonglong)local_f8[3] && (local_d8._4_4_ & 0x105) == 4)) {
      local_a8 = 0;
      uVar25 = 0;
      lVar17 = local_f8[0];
      do {
        uVar22 = local_f8[3] - uVar25;
        if (0xfff < uVar22) {
          uVar22 = 0x1000;
        }
        local_1128 = &local_a8;
        acStack_1150[0] = -0x23;
        acStack_1150[1] = '\x1d';
        acStack_1150[2] = '\x03';
        acStack_1150[3] = '@';
        acStack_1150[4] = '\x01';
        acStack_1150[5] = '\0';
        acStack_1150[6] = '\0';
        acStack_1150[7] = '\0';
        iVar4 = (*DAT_1400395c0)(param_1,lVar12 + uVar25,&local_1108,uVar22);
        puVar10 = local_70;
        if (iVar4 == 0) break;
        if (0x47 < local_a8) {
          uVar22 = 0x48;
          lVar18 = lVar17;
          do {
            if (((((((((acStack_1150[uVar22] == '\0') && (acStack_1150[uVar22 + 1] == '\0')) &&
                     (acStack_1150[uVar22 + 2] == '\0')) &&
                    ((acStack_1150[uVar22 + 3] == '\0' && (acStack_1150[uVar22 + 4] == '\0')))) &&
                   ((acStack_1150[uVar22 + 5] == '\0' &&
                    ((acStack_1150[uVar22 + 6] == '\0' && (acStack_1150[uVar22 + 7] == '\0')))))) &&
                  ((acStack_1150[uVar22 + 8] == '\0' &&
                   (((((acStack_1150[uVar22 + 9] == '\0' && (acStack_1150[uVar22 + 10] == '\0')) &&
                      (acStack_1150[uVar22 + 0xb] == '\0')) &&
                     (((acStack_1150[uVar22 + 0xc] == '\0' && (acStack_1150[uVar22 + 0xd] == '\0'))
                      && ((acStack_1150[uVar22 + 0xe] == '\0' &&
                          ((acStack_1150[uVar22 + 0xf] == '\0' &&
                           (acStack_1150[uVar22 + 0x10] == '\0')))))))) &&
                    (acStack_1150[uVar22 + 0x11] == '\0')))))) &&
                 ((((acStack_1150[uVar22 + 0x12] == '\0' && (acStack_1150[uVar22 + 0x13] == '\0'))
                   && (acStack_1150[uVar22 + 0x14] == '\0')) &&
                  ((((acStack_1150[uVar22 + 0x15] == '\0' && (acStack_1150[uVar22 + 0x16] == '\0'))
                    && (((acStack_1150[uVar22 + 0x17] == '\0' &&
                         ((acStack_1150[uVar22 + 0x18] == '\0' &&
                          (acStack_1150[uVar22 + 0x19] == '\0')))) &&
                        (acStack_1150[uVar22 + 0x1a] == '\0')))) &&
                   ((((((acStack_1150[uVar22 + 0x1b] == '\0' &&
                        (acStack_1150[uVar22 + 0x1c] == '\0')) &&
                       (acStack_1150[uVar22 + 0x1d] == '\0')) &&
                      ((acStack_1150[uVar22 + 0x1e] == '\0' && (acStack_1150[uVar22 + 0x1f] == '\0')
                       ))) && (acStack_1150[uVar22 + 0x20] == '\0')) &&
                    (((acStack_1150[uVar22 + 0x21] == '\0' && (acStack_1150[uVar22 + 0x22] == '\0'))
                     && ((acStack_1150[uVar22 + 0x23] == '\0' &&
                         (((acStack_1150[uVar22 + 0x24] == '\0' &&
                           (acStack_1150[uVar22 + 0x25] == '\0')) &&
                          (acStack_1150[uVar22 + 0x26] == '\0')))))))))))))) &&
                ((((acStack_1150[uVar22 + 0x27] == '\0' &&
                   (*(char *)((longlong)&local_1128 + uVar22) == '\0')) &&
                  ((*(char *)((longlong)&local_1128 + uVar22 + 1) == '\0' &&
                   (((((*(char *)((longlong)&local_1128 + uVar22 + 2) == '\0' &&
                       (*(char *)((longlong)&local_1128 + uVar22 + 3) == '\0')) &&
                      ((*(char *)((longlong)&local_1128 + uVar22 + 4) == '\0' &&
                       (((*(char *)((longlong)&local_1128 + uVar22 + 5) == '\0' &&
                         (*(char *)((longlong)&local_1128 + uVar22 + 6) == '\0')) &&
                        (*(char *)((longlong)&local_1128 + uVar22 + 7) == '\0')))))) &&
                     ((local_1120[uVar22] == '\0' && (local_1120[uVar22 + 1] == '\0')))) &&
                    (local_1120[uVar22 + 2] == '\0')))))) &&
                 ((((((local_1120[uVar22 + 3] == '\0' && (local_1120[uVar22 + 4] == '\0')) &&
                     ((local_1120[uVar22 + 5] == '\0' &&
                      ((((local_1120[uVar22 + 6] == '\0' && (local_1120[uVar22 + 7] == '\0')) &&
                        (local_1120[uVar22 + 8] == '\0')) &&
                       ((local_1120[uVar22 + 9] == '\0' && (local_1120[uVar22 + 10] == '\0'))))))))
                    && ((local_1120[uVar22 + 0xb] == '\0' &&
                        ((local_1120[uVar22 + 0xc] == '\0' && (local_1120[uVar22 + 0xd] == '\0')))))
                    ) && ((local_1120[uVar22 + 0xe] == '\0' &&
                          (((local_1120[uVar22 + 0xf] == '\0' && (local_1120[uVar22 + 0x10] == '\0')
                            ) && (local_1120[uVar22 + 0x11] == '\0')))))) &&
                  (((local_1120[uVar22 + 0x12] == '\0' && (local_1120[uVar22 + 0x13] == '\0')) &&
                   (local_1120[uVar22 + 0x14] == '\0')))))))) &&
               (((local_1120[uVar22 + 0x15] == '\0' && (local_1120[uVar22 + 0x16] == '\0')) &&
                (local_1120[uVar22 + 0x17] == '\0')))) {
              if (lVar12 != 0) {
                local_10f8[0x20] = '\0';
                local_10f8[0x21] = '\0';
                local_10f8[0x22] = '\0';
                local_10f8[0x23] = '\0';
                local_10f8[0x24] = '\0';
                local_10f8[0x25] = '\0';
                local_10f8[0x26] = '\0';
                local_10f8[0x27] = '\0';
                local_10f8[0x10] = '\0';
                local_10f8[0x11] = '\0';
                local_10f8[0x12] = '\0';
                local_10f8[0x13] = '\0';
                local_10f8[0x14] = '\0';
                local_10f8[0x15] = '\0';
                local_10f8[0x16] = '\0';
                local_10f8[0x17] = '\0';
                local_10f8[0x18] = '\0';
                local_10f8[0x19] = '\0';
                local_10f8[0x1a] = '\0';
                local_10f8[0x1b] = '\0';
                local_10f8[0x1c] = '\0';
                local_10f8[0x1d] = '\0';
                local_10f8[0x1e] = '\0';
                local_10f8[0x1f] = '\0';
                local_10f8[0] = '\0';
                local_10f8[1] = '\0';
                local_10f8[2] = '\0';
                local_10f8[3] = '\0';
                local_10f8[4] = '\0';
                local_10f8[5] = '\0';
                local_10f8[6] = '\0';
                local_10f8[7] = '\0';
                local_10f8[8] = '\0';
                local_10f8[9] = '\0';
                local_10f8[10] = '\0';
                local_10f8[0xb] = '\0';
                local_10f8[0xc] = '\0';
                local_10f8[0xd] = '\0';
                local_10f8[0xe] = '\0';
                local_10f8[0xf] = '\0';
                local_1108 = 0;
                uStack_1100 = 0;
                local_10c8[0] = '\0';
                local_10c8[1] = '\0';
                local_10c8[2] = '\0';
                local_10c8[3] = '\0';
                local_10c8[4] = '\0';
                local_10c8[5] = '\0';
                local_10c8[6] = '\0';
                local_10c8[7] = '\0';
                uStack_10d0 = local_100;
                local_1128 = (ulonglong *)0x0;
                acStack_1150[0] = -0x6f;
                acStack_1150[1] = '!';
                acStack_1150[2] = '\x03';
                acStack_1150[3] = '@';
                acStack_1150[4] = '\x01';
                acStack_1150[5] = '\0';
                acStack_1150[6] = '\0';
                acStack_1150[7] = '\0';
                iVar4 = (*DAT_140039610)(param_1,lVar18,&local_1108,0x48);
                if (iVar4 == 0) goto LAB_1400328e9;
                local_a8 = 0xf3fa3bfcfff6e1fe;
                uStack_a0 = 0x65f0;
                uStack_9e = 0;
                uStack_98 = 0;
                uStack_96 = 0;
                uStack_8e = uStack_8e & 0xffffffffffffff00;
                goto LAB_1400321df;
              }
              break;
            }
            lVar18 = lVar18 + 1;
            uVar22 = uVar22 + 1;
          } while (uVar22 <= local_a8);
        }
        uVar25 = uVar25 + 0x1000;
        lVar17 = lVar17 + 0x1000;
      } while (uVar25 < (ulonglong)local_f8[3]);
    }
    builtin_strncpy(acStack_1150,"+\x1d\x03@\x01",6);
    acStack_1150[6] = '\0';
    acStack_1150[7] = '\0';
    lVar12 = (*DAT_140039608)(param_1,lVar12 + lVar14,local_f8,0x30);
  } while (lVar12 == 0x30);
LAB_14003210c:
  builtin_strncpy(acStack_1150,"\x19!\x03@\x01",6);
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  (*DAT_1400394d8)(local_c0);
LAB_140032119:
  uVar25 = 0;
  puVar8 = puVar10;
  goto LAB_14003211b;
LAB_1400321df:
  acStack_1150[0] = -0x1c;
  acStack_1150[1] = '!';
  acStack_1150[2] = '\x03';
  acStack_1150[3] = '@';
  acStack_1150[4] = '\x01';
  acStack_1150[5] = '\0';
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  puVar10 = (ulonglong *)FUN_140031690();
  uVar25 = *puVar10;
  acStack_1150[0] = -0x13;
  acStack_1150[1] = '!';
  acStack_1150[2] = '\x03';
  acStack_1150[3] = '@';
  acStack_1150[4] = '\x01';
  acStack_1150[5] = '\0';
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  puVar10 = (ulonglong *)FUN_1400316a0();
  uVar22 = *puVar10;
  uVar13 = 0;
  do {
    if (uVar13 < uVar25) {
      puVar1 = &stack0x005368ea;
LAB_1400324d2:
      local_b8 = (ulonglong *)(puVar1 + -0x1108);
      goto LAB_1400324d9;
    }
    bVar19 = *(byte *)((longlong)&local_a8 + uVar13);
    uVar16 = (ulonglong)bVar19;
    uVar11 = uVar22 + 1;
    cVar21 = (char)uVar13;
    if (uVar25 < uVar11) {
LAB_1400322a1:
      if (uVar13 < uVar22) {
        puVar1 = &stack0x01603ef8;
        goto LAB_1400324d2;
      }
      if (uVar22 + uVar25 <= uVar13) {
        if (uVar25 < uVar22 + 9) {
          cVar23 = cVar21 + bVar19 + (bVar19 & cVar21 - 0xeU) * -2 + 'T';
        }
        else {
          if (uVar25 == uVar11) goto LAB_14003226b;
          cVar23 = cVar21 + bVar19 + (bVar19 & cVar21 - 0x26U) * -2 + -0x1c;
        }
        if (uVar22 + 8 < uVar25) {
          cVar23 = cVar21 + bVar19 + (bVar19 & cVar21 + 0xaaU) * -2 + '\x04';
        }
        else {
          if (uVar25 == uVar11) goto LAB_140032481;
          cVar24 = 'j';
          cVar26 = ':';
          if (uVar25 == uVar22 + 3) goto LAB_1400323ff;
          if (uVar25 == uVar22 + 2) goto LAB_14003226b;
        }
        if (uVar25 == uVar11) goto LAB_14003226b;
        cVar24 = -4;
        cVar26 = -0x24;
        if (uVar25 == uVar22 + 3) goto LAB_1400323ff;
        if (uVar25 == uVar22 + 7) goto LAB_1400324a5;
        *(char *)((longlong)&local_a8 + uVar13) = cVar23;
        goto LAB_140032275;
      }
      if (uVar25 == uVar22 + 3) {
LAB_140032481:
        *(byte *)((longlong)&local_a8 + uVar13) =
             cVar21 + bVar19 + (bVar19 & cVar21 + 0x5eU) * -2 + -0x34;
        uVar22 = uVar11;
      }
      else if (uVar25 != uVar22 + 6) {
        if (uVar25 == uVar22 + 8) {
          bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 + 0x70U) * -2 + 0x60;
          goto LAB_14003243f;
        }
        uVar11 = uVar22;
        if (uVar25 == uVar22 + 0x10) goto LAB_140032232;
        goto LAB_1400321df;
      }
LAB_1400324a5:
      uVar13 = uVar13 - 1;
    }
    else {
      if (uVar25 == uVar11) {
LAB_14003226b:
        uVar13 = uVar13 + uVar22;
      }
      else {
        if (uVar25 == uVar22 + 2) {
          bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 + 0x26U) * -2 + 0x1c;
          *(byte *)((longlong)&local_a8 + uVar13) = bVar20;
          uVar13 = (uVar13 + ~uVar22) - (ulonglong)bVar20;
LAB_140032232:
          *(byte *)((longlong)&local_a8 + uVar13) =
               (char)uVar13 + bVar19 + (bVar19 & (char)uVar13 + 0x18U) * -2 + 'p';
          lVar12 = uVar13 - uVar25;
          uVar25 = uVar25 + 1;
          uVar16 = (ulonglong)*(byte *)((longlong)&local_b0 + lVar12 + 6);
          uVar13 = lVar12 - 2;
          uVar22 = uVar11;
          goto LAB_14003226b;
        }
        if (uVar25 == uVar22 + 3) {
          bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 + 0x66U) * -2 + 0x9c;
        }
        else {
          if (uVar25 != uVar22 + 5) {
            if (uVar25 != uVar22 + 6) goto LAB_1400322a1;
            goto LAB_140032481;
          }
          cVar24 = -6;
          cVar26 = 'J';
LAB_1400323ff:
          bVar20 = cVar26 + cVar21 + bVar19 + (cVar26 + cVar21 & bVar19) * -2 + cVar24;
          *(byte *)((longlong)&local_a8 + uVar13) =
               cVar21 + bVar19 + (cVar21 + 0x42U & bVar19) * -2 + bVar20 + 't';
        }
        uVar25 = uVar25 + uVar22;
LAB_14003243f:
        uVar16 = ~(ulonglong)bVar20;
      }
      uVar13 = uVar13 + uVar16;
    }
LAB_140032275:
    uVar13 = uVar13 + 1;
    if (0x1a < uVar13) {
LAB_1400324d9:
      acStack_1150[0] = -0x1a;
      acStack_1150[1] = '$';
      acStack_1150[2] = '\x03';
      acStack_1150[3] = '@';
      acStack_1150[4] = '\x01';
      acStack_1150[5] = '\0';
      acStack_1150[6] = '\0';
      acStack_1150[7] = '\0';
      lVar12 = (*DAT_140039528)(local_b8);
      if (lVar12 == 0) goto LAB_1400328e9;
      local_a8 = _DAT_140036230;
      uStack_a0 = (undefined2)_UNK_140036238;
      uStack_9e = (undefined6)((ulonglong)_UNK_140036238 >> 0x10);
      uStack_98 = 0xe968;
      uStack_96 = 0;
      uStack_8e = 0;
      local_86 = 0;
      puVar10 = &local_a8;
      break;
    }
  } while( true );
LAB_140032521:
  builtin_strncpy(acStack_1150,"&%\x03@\x01",6);
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  puVar8 = (ulonglong *)FUN_140031690();
  uVar25 = *puVar8;
  builtin_strncpy(acStack_1150,"/%\x03@\x01",6);
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  puVar8 = (ulonglong *)FUN_1400316a0();
  uVar22 = *puVar8;
  uVar13 = 0;
  do {
    if (uVar13 < uVar25) {
      puVar10 = (ulonglong *)&stack0x01246b0b;
      break;
    }
    bVar19 = *(byte *)((longlong)&local_a8 + uVar13);
    uVar16 = (ulonglong)bVar19;
    uVar11 = uVar22 + 1;
    cVar21 = (char)uVar13;
    if (uVar11 <= uVar25) {
      if (uVar25 == uVar11) {
LAB_1400326b9:
        uVar13 = uVar13 + uVar22;
      }
      else {
        if (uVar25 == uVar22 + 2) goto LAB_14003263c;
        if (uVar25 == uVar22 + 3) {
          bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 + 0x95U) * -2 + 0x82;
        }
        else {
          if (uVar25 != uVar22 + 5) {
            if (uVar25 != uVar22 + 6) goto LAB_14003256c;
            goto LAB_1400327dc;
          }
          bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 + 0x53U) * -2 + 0xe;
LAB_1400326f1:
          *(byte *)((longlong)&local_a8 + uVar13) =
               cVar21 + bVar19 + (bVar19 & cVar21 + 0x77U) * -2 + bVar20 + '6';
        }
LAB_14003271a:
        uVar25 = uVar25 + uVar22;
LAB_14003271d:
        uVar16 = ~(ulonglong)bVar20;
      }
      uVar13 = uVar13 + uVar16;
      goto LAB_140032540;
    }
LAB_14003256c:
    if (uVar13 < uVar22) {
      puVar10 = (ulonglong *)&stack0x0157a12c;
      break;
    }
    uVar3 = uVar22;
    if (uVar13 < uVar22 + uVar25) {
      uVar3 = uVar11;
      if ((uVar25 == uVar22 + 0x20) || (uVar3 = uVar22, uVar25 == uVar22 + 9)) goto LAB_14003253a;
      if (uVar25 == uVar22 + 10) {
        bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 - 0x36U) * -2 + 0x44;
        goto LAB_14003271a;
      }
      if (uVar25 == uVar22 + 6) {
        bVar20 = (cVar21 + bVar19 + (bVar19 & cVar21 + 0x88U) * -2) - 0x30;
        goto LAB_14003271d;
      }
      uVar11 = uVar22;
      if (uVar25 == uVar22 + 8) {
LAB_140032679:
        *(byte *)((longlong)&local_a8 + uVar13) =
             (char)uVar13 + bVar19 + (bVar19 & (char)uVar13 + 0x14U) * -2 + -0x78;
        lVar14 = uVar13 - uVar25;
        uVar25 = uVar25 + 1;
        uVar16 = (ulonglong)*(byte *)((longlong)&local_b0 + lVar14 + 6);
        uVar13 = lVar14 - 2;
        uVar22 = uVar11;
        goto LAB_1400326b9;
      }
      goto LAB_140032521;
    }
    if (uVar25 < uVar22 + 6) {
      cVar24 = cVar21 + bVar19 + (bVar19 & cVar21 - 0x21U) * -2 + -0x3a;
    }
    else {
      if (uVar25 == uVar11) goto LAB_1400326b9;
      if (uVar25 == uVar22 + 7) goto LAB_14003253a;
      if (uVar25 == uVar22 + 6) goto LAB_1400327dc;
      cVar24 = cVar21 + bVar19 + (bVar19 & cVar21 + 0x4bU) * -2 + '>';
    }
    if (uVar22 + uVar25 == 0x10) {
LAB_14003263c:
      bVar20 = (cVar21 + bVar19 + (bVar19 & cVar21 + 0x35U) * -2) - 0x3e;
      *(byte *)((longlong)&local_a8 + uVar13) = bVar20;
      uVar13 = (~uVar22 + uVar13) - (ulonglong)bVar20;
      goto LAB_140032679;
    }
    if (uVar25 == uVar11) {
LAB_1400327dc:
      *(byte *)((longlong)&local_a8 + uVar13) =
           cVar21 + bVar19 + (bVar19 & cVar21 + 0xb9U) * -2 + -0x56;
      uVar3 = uVar11;
LAB_14003253a:
      uVar22 = uVar3;
      uVar13 = uVar13 - 1;
    }
    else {
      if (uVar25 == uVar22 + 3) goto LAB_14003253a;
      if (uVar25 == uVar22 + 2) goto LAB_14003263c;
      if (0x1f < uVar25) {
        bVar20 = cVar21 + bVar19 * '\x02' + (bVar19 & cVar21 + 0x98U) * -2 + 0x70;
        goto LAB_1400326f1;
      }
      if (uVar22 + 5 < uVar25) {
        cVar24 = cVar21 + bVar19 + (bVar19 & cVar21 + 0x6eU) * -2 + 'l';
      }
      else {
        if (uVar25 == uVar22 + 5) {
          bVar20 = cVar21 + bVar19 + (bVar19 & cVar21 + 0x24U) * -2 + 0x28;
          goto LAB_14003271a;
        }
        if (uVar25 == uVar22 + 4) goto LAB_14003253a;
      }
      *(char *)((longlong)&local_a8 + uVar13) = cVar24;
    }
LAB_140032540:
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x23);
  acStack_1150[0] = -0x40;
  acStack_1150[1] = '(';
  acStack_1150[2] = '\x03';
  acStack_1150[3] = '@';
  acStack_1150[4] = '\x01';
  acStack_1150[5] = '\0';
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  pcVar7 = (code *)(*DAT_140039538)(lVar12,puVar10);
  if (pcVar7 == (code *)0x0) {
LAB_1400328e9:
    uVar25 = 0;
  }
  else {
    local_1128 = (ulonglong *)0x0;
    acStack_1150[0] = -0x20;
    acStack_1150[1] = '(';
    acStack_1150[2] = '\x03';
    acStack_1150[3] = '@';
    acStack_1150[4] = '\x01';
    acStack_1150[5] = '\0';
    acStack_1150[6] = '\0';
    acStack_1150[7] = '\0';
    iVar4 = (*pcVar7)(local_c0,lVar18,0,0);
    uVar25 = CONCAT71((int7)(uVar25 >> 8),-1 < iVar4);
  }
  acStack_1150[0] = -8;
  acStack_1150[1] = '(';
  acStack_1150[2] = '\x03';
  acStack_1150[3] = '@';
  acStack_1150[4] = '\x01';
  acStack_1150[5] = '\0';
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  (*DAT_1400394d8)(local_c0);
  puVar8 = local_70;
LAB_14003211b:
  builtin_strncpy(acStack_1150,"\'!\x03@\x01",6);
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  thunk_FUN_1400340c0(local_68);
LAB_140032127:
  builtin_strncpy(acStack_1150,"/!\x03@\x01",6);
  acStack_1150[6] = '\0';
  acStack_1150[7] = '\0';
  thunk_FUN_1400340c0(puVar8);
LAB_14003212f:
  return uVar25 & 0xffffffff;
}


/* Unwind@140032910 */

void Unwind_140032910(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400340c0(*(undefined8 *)(param_2 + 0x10e0));
  *(undefined8 *)(param_2 + 0x1098) = *(undefined8 *)(param_2 + 0x10d8);
  return;
}


/* Unwind@140032970 */

void Unwind_140032970(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x1098) != 0) {
    thunk_FUN_1400340c0();
  }
  return;
}


/* FUN_1400329d0 */

void FUN_1400329d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_1400340d0();
  while( true ) {
    if (lVar1 != 0) {
      return;
    }
    iVar2 = FUN_140034130(param_1);
    if (iVar2 == 0) break;
    lVar1 = FUN_1400340d0(param_1);
  }
  if (param_1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_140033130();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140033110();
}


/* thunk_FUN_1400340c0 */

void thunk_FUN_1400340c0(void)

{
  (*DAT_140039b28)();
  return;
}


/* FUN_140032a30 */

undefined8 * FUN_140032a30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400340c0(param_1,0x18);
  }
  return param_1;
}


/* thunk_FUN_1400329d0 */

void thunk_FUN_1400329d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_1400340d0();
  while( true ) {
    if (lVar1 != 0) {
      return;
    }
    iVar2 = FUN_140034130(param_1);
    if (iVar2 == 0) break;
    lVar1 = FUN_1400340d0(param_1);
  }
  if (param_1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_140033130();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140033110();
}


/* __chkstk */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}


/* FUN_140032ad0 */

int FUN_140032ad0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_14003f988 == -1) {
    iVar1 = FUN_140034170();
  }
  else {
    iVar1 = FUN_1400341e0(&DAT_14003f988,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}


/* FUN_140032ca0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140032ca0(uint param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_14003f981 == '\0') {
    if (1 < param_1) {
      FUN_1400334c0(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = FUN_140033420();
    if ((iVar2 == 0) || (param_1 != 0)) {
      DAT_14003f988 = _DAT_140036250;
      uRam000000014003f990 = _UNK_140036258;
      _DAT_14003f998 = 0xffffffffffffffff;
      _DAT_14003f9a0 = _DAT_140036250;
      uRam000000014003f9a8 = _UNK_140036258;
      _DAT_14003f9b0 = 0xffffffffffffffff;
    }
    else {
      iVar2 = FUN_1400341b0(&DAT_14003f988);
      if (iVar2 != 0) {
        return 0;
      }
      iVar2 = FUN_1400341b0(&DAT_14003f9a0);
      if (iVar2 != 0) {
        return 0;
      }
    }
    DAT_14003f981 = '\x01';
  }
  return 1;
}


/* FUN_140032d40 */

void FUN_140032d40(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*DAT_140039b30)(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = DAT_14003f9b8;
    puVar2[1] = param_1;
    DAT_14003f9b8 = puVar2;
    return;
  }
  FUN_140033df0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* thunk_FUN_140032d90 */

undefined1 (*) [32]
thunk_FUN_140032d90(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_14003f72c & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_14003f72c & 4) != 0)) {
      puVar4 = *param_1;
      auVar9 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar8[0] = -((*param_1)[0] == auVar9[0]);
        auVar8[1] = -((*param_1)[1] == auVar9[1]);
        auVar8[2] = -((*param_1)[2] == auVar9[2]);
        auVar8[3] = -((*param_1)[3] == auVar9[3]);
        auVar8[4] = -((*param_1)[4] == auVar9[4]);
        auVar8[5] = -((*param_1)[5] == auVar9[5]);
        auVar8[6] = -((*param_1)[6] == auVar9[6]);
        auVar8[7] = -((*param_1)[7] == auVar9[7]);
        auVar8[8] = -((*param_1)[8] == auVar9[8]);
        auVar8[9] = -((*param_1)[9] == auVar9[9]);
        auVar8[10] = -((*param_1)[10] == auVar9[10]);
        auVar8[0xb] = -((*param_1)[0xb] == auVar9[0xb]);
        auVar8[0xc] = -((*param_1)[0xc] == auVar9[0xc]);
        auVar8[0xd] = -((*param_1)[0xd] == auVar9[0xd]);
        auVar8[0xe] = -((*param_1)[0xe] == auVar9[0xe]);
        auVar8[0xf] = -((*param_1)[0xf] == auVar9[0xf]);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar9 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar10._16_16_ = auVar9;
    auVar10._0_16_ = auVar9;
    do {
      auVar2 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) goto LAB_140032e31;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_140038770 + -uVar7),*param_1);
      auVar10 = vpcmpeqb_avx2(auVar2,auVar10);
      auVar10 = vpand_avx2(auVar10,*(undefined1 (*) [32])(&DAT_140038770 + -uVar7));
      uVar5 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar10[0x1f] >> 7) << 0x1f;
      if (uVar5 != 0) {
LAB_140032e31:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar3);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}


/* FUN_140032d90 */

undefined1 (*) [32]
FUN_140032d90(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_14003f72c & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_14003f72c & 4) != 0)) {
      puVar4 = *param_1;
      auVar9 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar8[0] = -((*param_1)[0] == auVar9[0]);
        auVar8[1] = -((*param_1)[1] == auVar9[1]);
        auVar8[2] = -((*param_1)[2] == auVar9[2]);
        auVar8[3] = -((*param_1)[3] == auVar9[3]);
        auVar8[4] = -((*param_1)[4] == auVar9[4]);
        auVar8[5] = -((*param_1)[5] == auVar9[5]);
        auVar8[6] = -((*param_1)[6] == auVar9[6]);
        auVar8[7] = -((*param_1)[7] == auVar9[7]);
        auVar8[8] = -((*param_1)[8] == auVar9[8]);
        auVar8[9] = -((*param_1)[9] == auVar9[9]);
        auVar8[10] = -((*param_1)[10] == auVar9[10]);
        auVar8[0xb] = -((*param_1)[0xb] == auVar9[0xb]);
        auVar8[0xc] = -((*param_1)[0xc] == auVar9[0xc]);
        auVar8[0xd] = -((*param_1)[0xd] == auVar9[0xd]);
        auVar8[0xe] = -((*param_1)[0xe] == auVar9[0xe]);
        auVar8[0xf] = -((*param_1)[0xf] == auVar9[0xf]);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar9 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar10._16_16_ = auVar9;
    auVar10._0_16_ = auVar9;
    do {
      auVar2 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) goto LAB_140032e31;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_140038770 + -uVar7),*param_1);
      auVar10 = vpcmpeqb_avx2(auVar2,auVar10);
      auVar10 = vpand_avx2(auVar10,*(undefined1 (*) [32])(&DAT_140038770 + -uVar7));
      uVar5 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar10[0x1f] >> 7) << 0x1f;
      if (uVar5 != 0) {
LAB_140032e31:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar3);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}


/* thunk_FUN_140032ea0 */

void thunk_FUN_140032ea0(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                        ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_14003f780 ^ (ulonglong)auStack_78;
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_140032d90(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar4 = param_2 - (longlong)param_1;
      if (param_4 <= uVar4) {
        if ((((byte)DAT_14003f72c & 4) == 0) || (uVar4 < 0x10)) {
          pauVar5 = (undefined1 (*) [16])((longlong)param_1 + uVar4 + (1 - param_4));
          if (param_1 != pauVar5) {
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                uVar4 = 1;
                while ((*param_1)[uVar4] == (*param_3)[uVar4]) {
                  uVar4 = uVar4 + 1;
                  if (uVar4 == param_4) goto LAB_140033027;
                }
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            } while (param_1 != pauVar5);
          }
        }
        else if (param_4 < 0x11) {
          uVar6 = (uint)param_4;
          uVar7 = 0x10 < uVar6;
          FUN_140034080(auStack_58,param_3,param_4);
          auVar1 = auStack_58;
          do {
            iVar3 = pcmpestri(auStack_58,*param_1,0xc,uVar6,0x10);
            if ((bool)uVar7) {
              param_1 = (undefined1 (*) [16])(*param_1 + iVar3);
              if (iVar3 <= (int)(0x10 - uVar6)) goto LAB_140033027;
            }
            else {
              param_1 = param_1 + 1;
            }
            uVar7 = param_1 < (undefined1 (*) [16])(param_2 - 0x10U);
          } while (param_1 <= (undefined1 (*) [16])(param_2 - 0x10U));
          param_2 = param_2 - (longlong)param_1;
          if (param_2 != 0) {
            FUN_140034080(auStack_58,param_1,param_2);
            pcmpestri(auVar1,auStack_58,0xc,uVar6,(int)param_2);
          }
        }
        else {
          auVar1 = *param_3;
          bVar8 = CARRY8((longlong)param_1 - param_4,uVar4);
          pauVar5 = (undefined1 (*) [16])(((longlong)param_1 - param_4) + uVar4);
          do {
            iVar3 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
            if (bVar8) {
              if (iVar3 == 0) {
LAB_140032ff9:
                iVar3 = FUN_140034070(param_1 + 1,param_3 + 1,param_4 - 0x10);
                if (iVar3 == 0) break;
              }
              else {
                param_1 = (undefined1 (*) [16])(*param_1 + iVar3);
                if (pauVar5 < param_1) break;
                auVar2 = *param_1;
                auVar9._0_4_ = auVar1._0_4_ ^ auVar2._0_4_;
                auVar9._4_4_ = auVar1._4_4_ ^ auVar2._4_4_;
                auVar9._8_4_ = auVar1._8_4_ ^ auVar2._8_4_;
                auVar9._12_4_ = auVar1._12_4_ ^ auVar2._12_4_;
                if (auVar9 == (undefined1  [16])0x0) goto LAB_140032ff9;
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            }
            else {
              param_1 = param_1 + 1;
            }
            bVar8 = param_1 < pauVar5;
          } while (param_1 <= pauVar5);
        }
      }
    }
  }
LAB_140033027:
  FUN_140033740(uStack_48 ^ (ulonglong)auStack_78);
  return;
}


/* FUN_140032ea0 */

void FUN_140032ea0(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14003f780 ^ (ulonglong)auStack_78;
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_140032d90(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar4 = param_2 - (longlong)param_1;
      if (param_4 <= uVar4) {
        if ((((byte)DAT_14003f72c & 4) == 0) || (uVar4 < 0x10)) {
          pauVar5 = (undefined1 (*) [16])((longlong)param_1 + uVar4 + (1 - param_4));
          if (param_1 != pauVar5) {
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                uVar4 = 1;
                while ((*param_1)[uVar4] == (*param_3)[uVar4]) {
                  uVar4 = uVar4 + 1;
                  if (uVar4 == param_4) goto LAB_140033027;
                }
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            } while (param_1 != pauVar5);
          }
        }
        else if (param_4 < 0x11) {
          uVar6 = (uint)param_4;
          uVar7 = 0x10 < uVar6;
          FUN_140034080(local_58,param_3,param_4);
          auVar1 = local_58;
          do {
            iVar3 = pcmpestri(local_58,*param_1,0xc,uVar6,0x10);
            if ((bool)uVar7) {
              param_1 = (undefined1 (*) [16])(*param_1 + iVar3);
              if (iVar3 <= (int)(0x10 - uVar6)) goto LAB_140033027;
            }
            else {
              param_1 = param_1 + 1;
            }
            uVar7 = param_1 < (undefined1 (*) [16])(param_2 - 0x10U);
          } while (param_1 <= (undefined1 (*) [16])(param_2 - 0x10U));
          param_2 = param_2 - (longlong)param_1;
          if (param_2 != 0) {
            FUN_140034080(local_58,param_1,param_2);
            pcmpestri(auVar1,local_58,0xc,uVar6,(int)param_2);
          }
        }
        else {
          auVar1 = *param_3;
          bVar8 = CARRY8((longlong)param_1 - param_4,uVar4);
          pauVar5 = (undefined1 (*) [16])(((longlong)param_1 - param_4) + uVar4);
          do {
            iVar3 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
            if (bVar8) {
              if (iVar3 == 0) {
LAB_140032ff9:
                iVar3 = FUN_140034070(param_1 + 1,param_3 + 1,param_4 - 0x10);
                if (iVar3 == 0) break;
              }
              else {
                param_1 = (undefined1 (*) [16])(*param_1 + iVar3);
                if (pauVar5 < param_1) break;
                auVar2 = *param_1;
                auVar9._0_4_ = auVar1._0_4_ ^ auVar2._0_4_;
                auVar9._4_4_ = auVar1._4_4_ ^ auVar2._4_4_;
                auVar9._8_4_ = auVar1._8_4_ ^ auVar2._8_4_;
                auVar9._12_4_ = auVar1._12_4_ ^ auVar2._12_4_;
                if (auVar9 == (undefined1  [16])0x0) goto LAB_140032ff9;
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            }
            else {
              param_1 = param_1 + 1;
            }
            bVar8 = param_1 < pauVar5;
          } while (param_1 <= pauVar5);
        }
      }
    }
  }
LAB_140033027:
  FUN_140033740(local_48 ^ (ulonglong)auStack_78);
  return;
}


/* FUN_140033090 */

undefined8 * FUN_140033090(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}


/* FUN_1400330e0 */

undefined8 * FUN_1400330e0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}


/* FUN_140033110 */

void FUN_140033110(void)

{
  undefined1 local_28 [40];
  
  FUN_140033090(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_140033ff0(local_28,&DAT_14003e998);
}


/* FUN_140033130 */

void FUN_140033130(void)

{
  undefined1 local_28 [40];
  
  FUN_1400330e0(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_140033ff0(local_28,&DAT_14003b0a0);
}


/* thunk_FUN_1400340c0 */

void thunk_FUN_1400340c0(void)

{
  (*DAT_140039b28)();
  return;
}


/* FUN_140033410 */

undefined8 FUN_140033410(void)

{
  return 1;
}


/* FUN_140033420 */

bool FUN_140033420(void)

{
  return DAT_14003f7d4 != 0;
}


/* FUN_140033490 */

undefined8 FUN_140033490(void)

{
  return 0;
}


/* thunk_FUN_140033490 */

undefined8 thunk_FUN_140033490(void)

{
  return 0;
}


/* FUN_1400334b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400334b0(void)

{
  (*_DAT_1400395d0)(&LAB_1400334d0);
  return;
}


/* FUN_1400334c0 */

void FUN_1400334c0(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}


/* FUN_140033530 */

void FUN_140033530(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}


/* FUN_140033740 */

void FUN_140033740(longlong param_1)

{
  if ((param_1 == DAT_14003f780) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_140033530(param_1);
  return;
}


/* FUN_140033ac0 */

undefined8 FUN_140033ac0(void)

{
  return 0x4000;
}


/* FUN_140033ad0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033ad0(void)

{
  (*_DAT_140039558)(&DAT_14003f9e0);
  return;
}


/* FUN_140033ae0 */

undefined1 FUN_140033ae0(void)

{
  return 1;
}


/* FUN_140033af0 */

void FUN_140033af0(void)

{
  return;
}


/* FUN_140033b00 */

void FUN_140033b00(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140027580();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_140033b20();
  *puVar1 = *puVar1 | 2;
  return;
}


/* FUN_140033b20 */

undefined * FUN_140033b20(void)

{
  return &DAT_14003f9f0;
}


/* FUN_140033b30 */

bool FUN_140033b30(void)

{
  return DAT_14003f7d0 == 0;
}


/* FUN_140033b60 */

/* WARNING: Removing unreachable block (ram,0x000140033b80) */
/* WARNING: Removing unreachable block (ram,0x000140033b88) */
/* WARNING: Removing unreachable block (ram,0x000140033b8e) */

void FUN_140033b60(void)

{
  return;
}


/* FUN_140033c10 */

void FUN_140033c10(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000140033c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* FUN_140033cf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033cf0(void)

{
  (*_DAT_1400394e8)();
  return;
}


/* FUN_140033d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033d00(void)

{
  (*_DAT_140039598)();
  return;
}


/* FUN_140033d10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033d10(void)

{
  (*_DAT_1400395a0)();
  return;
}


/* FUN_140033d20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033d20(void)

{
  (*_DAT_140039578)();
  return;
}


/* FUN_140033d30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033d30(void)

{
  (*_DAT_140039580)();
  return;
}


/* FUN_140033d40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033d40(void)

{
  (*_DAT_1400395e8)();
  return;
}


/* FUN_140033d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033d50(void)

{
  (*_DAT_1400395f0)();
  return;
}


/* FUN_140033d60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033d60(void)

{
  (*_DAT_140039648)();
  return;
}


/* FUN_140033d70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033d70(void)

{
  (*_DAT_140039650)();
  return;
}


/* FUN_140033d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033d80(void)

{
  (*_DAT_140039628)();
  return;
}


/* FUN_140033d90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033d90(void)

{
  (*_DAT_140039638)();
  return;
}


/* FUN_140033da0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033da0(void)

{
  (*_DAT_140039640)();
  return;
}


/* FUN_140033db0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033db0(void)

{
  (*_DAT_1400396b0)();
  return;
}


/* FUN_140033dc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033dc0(void)

{
  (*_DAT_1400396c0)();
  return;
}


/* FUN_140033dd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033dd0(void)

{
  (*_DAT_1400396d0)();
  return;
}


/* FUN_140033de0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033de0(void)

{
  (*_DAT_1400396e0)();
  return;
}


/* FUN_140033df0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033df0(void)

{
  (*_DAT_1400396e8)();
  return;
}


/* FUN_140033e00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033e00(void)

{
  (*_DAT_1400396f0)();
  return;
}


/* FUN_140033e10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033e10(void)

{
  (*_DAT_1400396f8)();
  return;
}


/* FUN_140033e20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033e20(void)

{
  (*_DAT_140039700)();
  return;
}


/* FUN_140033e30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033e30(void)

{
  (*_DAT_140039738)();
  return;
}


/* FUN_140033e40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033e40(void)

{
  (*_DAT_140039758)();
  return;
}


/* FUN_140033e50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033e50(void)

{
  (*_DAT_140039760)();
  return;
}


/* FUN_140033e60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033e60(void)

{
  (*_DAT_140039770)();
  return;
}


/* FUN_140033e70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033e70(void)

{
  (*_DAT_140039780)();
  return;
}


/* FUN_140033e80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033e80(void)

{
  (*_DAT_140039788)();
  return;
}


/* FUN_140033e90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033e90(void)

{
  (*_DAT_140039798)();
  return;
}


/* FUN_140033ea0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033ea0(void)

{
  (*_DAT_1400397a0)();
  return;
}


/* FUN_140033eb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033eb0(void)

{
  (*_DAT_1400397d8)();
  return;
}


/* FUN_140033ed0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033ed0(void)

{
  (*_DAT_1400397e8)();
  return;
}


/* FUN_140033ee0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033ee0(void)

{
  (*_DAT_1400397f8)();
  return;
}


/* FUN_140033ef0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033ef0(void)

{
  (*_DAT_140039800)();
  return;
}


/* FUN_140033f00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033f00(void)

{
  (*_DAT_140039808)();
  return;
}


/* FUN_140033f10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033f10(void)

{
  (*_DAT_140039810)();
  return;
}


/* FUN_140033f20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033f20(void)

{
  (*_DAT_140039818)();
  return;
}


/* FUN_140033f30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033f30(void)

{
  (*_DAT_140039820)();
  return;
}


/* FUN_140033f40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033f40(void)

{
  (*_DAT_140039828)();
  return;
}


/* FUN_140033f50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033f50(void)

{
  (*_DAT_140039830)();
  return;
}


/* FUN_140033f60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033f60(void)

{
  (*_DAT_140039840)();
  return;
}


/* FUN_140033f70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033f70(void)

{
  (*_DAT_140039848)();
  return;
}


/* FUN_140033f80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033f80(void)

{
  (*_DAT_140039850)();
  return;
}


/* FUN_140033f90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033f90(void)

{
  (*_DAT_140039858)();
  return;
}


/* FUN_140033fa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033fa0(void)

{
  (*_DAT_140039860)();
  return;
}


/* FUN_140033fb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033fb0(void)

{
  (*_DAT_140039868)();
  return;
}


/* FUN_140033fc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033fc0(void)

{
  (*_DAT_140039870)();
  return;
}


/* FUN_140033fd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033fd0(void)

{
  (*_DAT_140039878)();
  return;
}


/* FUN_140033fe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033fe0(void)

{
  (*_DAT_140039880)();
  return;
}


/* FUN_140033ff0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140033ff0(void)

{
  (*_DAT_140039918)();
  return;
}


/* FUN_140034020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034020(void)

{
  (*_DAT_140039930)();
  return;
}


/* FUN_140034030 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034030(void)

{
  (*_DAT_140039938)();
  return;
}


/* FUN_140034050 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034050(void)

{
  (*_DAT_140039948)();
  return;
}


/* FUN_140034060 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034060(void)

{
  (*_DAT_140039950)();
  return;
}


/* FUN_140034070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034070(void)

{
  (*_DAT_140039958)();
  return;
}


/* FUN_140034080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034080(void)

{
  (*_DAT_140039960)();
  return;
}


/* FUN_140034090 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034090(void)

{
  (*_DAT_140039968)();
  return;
}


/* FUN_1400340a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400340a0(void)

{
  (*_DAT_140039970)();
  return;
}


/* FUN_1400340b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400340b0(void)

{
  (*_DAT_140039978)();
  return;
}


/* FUN_1400340c0 */

void FUN_1400340c0(void)

{
  (*DAT_140039b28)();
  return;
}


/* FUN_1400340d0 */

void FUN_1400340d0(void)

{
  (*DAT_140039b30)();
  return;
}


/* FUN_140034100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034100(void)

{
  (*_DAT_140039988)();
  return;
}


/* FUN_140034110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034110(void)

{
  (*_DAT_140039b58)();
  return;
}


/* FUN_140034130 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034130(void)

{
  (*_DAT_140039b18)();
  return;
}


/* FUN_140034150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034150(void)

{
  (*_DAT_140039b68)();
  return;
}


/* FUN_140034160 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034160(void)

{
  (*_DAT_140039a28)();
  return;
}


/* FUN_140034170 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034170(void)

{
  (*_DAT_140039a30)();
  return;
}


/* FUN_1400341a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400341a0(void)

{
  (*_DAT_140039a50)();
  return;
}


/* FUN_1400341b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400341b0(void)

{
  (*_DAT_140039a58)();
  return;
}


/* FUN_1400341e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400341e0(void)

{
  (*_DAT_140039a70)();
  return;
}


/* FUN_140034210 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034210(void)

{
  (*_DAT_140039a88)();
  return;
}


/* FUN_140034220 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034220(void)

{
  (*_DAT_1400399a8)();
  return;
}


/* FUN_140034230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034230(void)

{
  (*_DAT_140039b20)();
  return;
}


/* FUN_140034250 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034250(void)

{
  (*_DAT_140039ad0)();
  return;
}


/* FUN_140034260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034260(void)

{
  (*_DAT_140039ae0)();
  return;
}


/* FUN_140034270 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034270(void)

{
  (*_DAT_140039a98)();
  return;
}


/* entry */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong entry(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  ulonglong unaff_RBP;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte *local_res8;
  byte *local_res18;
  
  FUN_1406e91df();
  bVar7 = 0x80;
  pbVar10 = local_res18;
  do {
    bVar1 = *local_res8;
    local_res8 = local_res8 + 1;
    *pbVar10 = bVar1;
    pbVar10 = pbVar10 + 1;
    iVar8 = 2;
LAB_1406e907e:
    bVar11 = CARRY1(bVar7,bVar7);
    bVar7 = bVar7 * '\x02';
    bVar12 = bVar11;
    if (bVar7 == 0) {
      bVar7 = *local_res8;
      local_res8 = local_res8 + 1;
      bVar12 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar11);
      bVar7 = bVar7 * '\x02' + bVar11;
    }
  } while (!bVar12);
  bVar11 = CARRY1(bVar7,bVar7);
  bVar7 = bVar7 * '\x02';
  bVar12 = bVar11;
  if (bVar7 == 0) {
    bVar7 = *local_res8;
    local_res8 = local_res8 + 1;
    bVar12 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar11);
    bVar7 = bVar7 * '\x02' + bVar11;
  }
  if (bVar12) {
    bVar11 = CARRY1(bVar7,bVar7);
    bVar7 = bVar7 * '\x02';
    bVar12 = bVar11;
    if (bVar7 == 0) {
      bVar7 = *local_res8;
      local_res8 = local_res8 + 1;
      bVar12 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar11);
      bVar7 = bVar7 * '\x02' + bVar11;
    }
    if (bVar12) {
      bVar11 = CARRY1(bVar7,bVar7);
      bVar7 = bVar7 * '\x02';
      bVar12 = bVar11;
      if (bVar7 == 0) {
        bVar7 = *local_res8;
        local_res8 = local_res8 + 1;
        bVar12 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar11);
        bVar7 = bVar7 * '\x02' + bVar11;
      }
      bVar13 = CARRY1(bVar7,bVar7);
      bVar7 = bVar7 * '\x02';
      bVar11 = bVar13;
      if (bVar7 == 0) {
        bVar7 = *local_res8;
        local_res8 = local_res8 + 1;
        bVar11 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar13);
        bVar7 = bVar7 * '\x02' + bVar13;
      }
      bVar14 = CARRY1(bVar7,bVar7);
      bVar7 = bVar7 * '\x02';
      bVar13 = bVar14;
      if (bVar7 == 0) {
        bVar7 = *local_res8;
        local_res8 = local_res8 + 1;
        bVar13 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar14);
        bVar7 = bVar7 * '\x02' + bVar14;
      }
      bVar15 = CARRY1(bVar7,bVar7);
      bVar7 = bVar7 * '\x02';
      bVar14 = bVar15;
      if (bVar7 == 0) {
        bVar7 = *local_res8;
        local_res8 = local_res8 + 1;
        bVar14 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar15);
        bVar7 = bVar7 * '\x02' + bVar15;
      }
      uVar3 = (((uint)bVar12 * 2 + (uint)bVar11) * 2 + (uint)bVar13) * 2 + (uint)bVar14;
      bVar1 = 0;
      if (uVar3 != 0) {
        bVar1 = pbVar10[-(ulonglong)uVar3];
      }
      *pbVar10 = bVar1;
      pbVar10 = pbVar10 + 1;
      iVar8 = 2;
    }
    else {
      bVar1 = *local_res8;
      local_res8 = local_res8 + 1;
      bVar2 = bVar1 >> 1;
      unaff_RBP = (ulonglong)bVar2;
      if (bVar2 == 0) {
        return (longlong)pbVar10 - (longlong)local_res18 & 0xffffffff;
      }
      pbVar9 = pbVar10 + -unaff_RBP;
      for (uVar6 = (ulonglong)(((bVar1 & 1) != 0) + 2); uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar10 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar10 = pbVar10 + 1;
      }
      iVar8 = 1;
    }
  }
  else {
    iVar4 = 1;
    do {
      bVar11 = CARRY1(bVar7,bVar7);
      bVar7 = bVar7 * '\x02';
      bVar12 = bVar11;
      if (bVar7 == 0) {
        bVar7 = *local_res8;
        local_res8 = local_res8 + 1;
        bVar12 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar11);
        bVar7 = bVar7 * '\x02' + bVar11;
      }
      iVar4 = iVar4 * 2 + (uint)bVar12;
      bVar11 = CARRY1(bVar7,bVar7);
      bVar7 = bVar7 * '\x02';
      bVar12 = bVar11;
      if (bVar7 == 0) {
        bVar7 = *local_res8;
        local_res8 = local_res8 + 1;
        bVar12 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar11);
        bVar7 = bVar7 * '\x02' + bVar11;
      }
    } while (bVar12);
    iVar4 = iVar4 - iVar8;
    iVar8 = 1;
    if (iVar4 != 0) {
      uVar3 = CONCAT31((int3)iVar4 + -1,*local_res8);
      local_res8 = local_res8 + 1;
      unaff_RBP = (ulonglong)uVar3;
      uVar6 = 1;
      do {
        bVar11 = CARRY1(bVar7,bVar7);
        bVar7 = bVar7 * '\x02';
        bVar12 = bVar11;
        if (bVar7 == 0) {
          bVar7 = *local_res8;
          local_res8 = local_res8 + 1;
          bVar12 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar11);
          bVar7 = bVar7 * '\x02' + bVar11;
        }
        uVar5 = (int)uVar6 * 2 + (uint)bVar12;
        uVar6 = (ulonglong)uVar5;
        bVar11 = CARRY1(bVar7,bVar7);
        bVar7 = bVar7 * '\x02';
        bVar12 = bVar11;
        if (bVar7 == 0) {
          bVar7 = *local_res8;
          local_res8 = local_res8 + 1;
          bVar12 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar11);
          bVar7 = bVar7 * '\x02' + bVar11;
        }
      } while (bVar12);
      if (uVar3 < 32000) {
        if (0x4ff < uVar3) {
          pbVar9 = pbVar10 + -(ulonglong)uVar3;
          for (uVar6 = (ulonglong)(uVar5 + 1); uVar6 != 0; uVar6 = uVar6 - 1) {
            *pbVar10 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            pbVar10 = pbVar10 + 1;
          }
          goto LAB_1406e907e;
        }
        if (uVar3 < 0x80) goto LAB_1406e919b;
      }
      else {
LAB_1406e919b:
        uVar6 = (ulonglong)(uVar5 + 2);
      }
      pbVar9 = pbVar10 + -(ulonglong)uVar3;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar10 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar10 = pbVar10 + 1;
      }
      goto LAB_1406e907e;
    }
    uVar6 = 1;
    do {
      bVar11 = CARRY1(bVar7,bVar7);
      bVar7 = bVar7 * '\x02';
      bVar12 = bVar11;
      if (bVar7 == 0) {
        bVar7 = *local_res8;
        local_res8 = local_res8 + 1;
        bVar12 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar11);
        bVar7 = bVar7 * '\x02' + bVar11;
      }
      uVar6 = (ulonglong)((int)uVar6 * 2 + (uint)bVar12);
      bVar11 = CARRY1(bVar7,bVar7);
      bVar7 = bVar7 * '\x02';
      bVar12 = bVar11;
      if (bVar7 == 0) {
        bVar7 = *local_res8;
        local_res8 = local_res8 + 1;
        bVar12 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar11);
        bVar7 = bVar7 * '\x02' + bVar11;
      }
    } while (bVar12);
    pbVar9 = pbVar10 + -unaff_RBP;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar10 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
    }
  }
  goto LAB_1406e907e;
}


/* FUN_1406e91df */

void FUN_1406e91df(void)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  code **ppcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  code *unaff_retaddr;
  longlong alStack_70 [8];
  code *pcStack_30;
  
  puVar6 = (undefined8 *)&stack0xffffffffffffffd8;
  pcVar3 = unaff_retaddr + -0x6a405d;
  pcStack_30 = unaff_retaddr;
  if (*(int *)(unaff_retaddr + -0x34a5f3) == 0) {
    ppcVar4 = &pcStack_30;
    pcStack_30 = pcVar3;
    pcVar7 = unaff_retaddr + 0x1ec;
    uVar2 = CONCAT71((int7)((ulonglong)(unaff_retaddr + 0x1eb) >> 8),unaff_retaddr[0x1eb]);
    while ((char)uVar2 != '\0') {
      ppcVar4[-1] = (code *)uVar2;
      ppcVar4[-2] = unaff_retaddr;
      ppcVar4[-3] = pcVar3;
      ppcVar4[-4] = (code *)0x0;
      ppcVar4[-5] = pcVar3;
      ppcVar4[-6] = (code *)0x0;
      ppcVar4[-7] = pcVar7;
      ppcVar4[-8] = (code *)0x1406e922d;
      lVar1 = (*unaff_retaddr)();
      pcVar3 = (code *)((longlong)ppcVar4[-7] + lVar1);
      unaff_retaddr = ppcVar4[-6];
      puVar5 = ppcVar4 + -5;
      ppcVar4 = ppcVar4 + -4;
      uVar2 = CONCAT71((int7)((ulonglong)*puVar5 >> 8),(char)*puVar5 + -1);
    }
    pcVar3 = *ppcVar4;
    puVar6 = ppcVar4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001406e9246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pcVar3 + 0x359a6a))
            (*(undefined8 *)((longlong)puVar6 + 0x20),*(undefined8 *)((longlong)puVar6 + 0x18));
  return;
}


