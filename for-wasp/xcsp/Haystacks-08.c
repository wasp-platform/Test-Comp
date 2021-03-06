void assume(int);
void assert(int);
void *alloc(void *, unsigned int);
void dealloc(void *);
int is_symbolic(void *, unsigned int);
_Bool sym_bool(char *);
int sym_int(char *);
long long sym_long(char *);
float sym_float(char *);
double sym_double(char *);
int __logand(int a, int b);
int __logor(int a, int b);
int __ternary(int c, int r1, int r0);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
int __VERIFIER_nondet_int(char *);
void reach_error()
{
  __assert_fail("0", "Haystacks-08.c", 5, "reach_error");
}

int main()
{
  int cond0;
  int dummy = 0;
  int N;
  int var0;
  var0 = __VERIFIER_nondet_int("var0");
  assume(var0 >= 0);
  assume(var0 <= 7);
  int var1;
  var1 = __VERIFIER_nondet_int("var1");
  assume(var1 >= 0);
  assume(var1 <= 7);
  int var2;
  var2 = __VERIFIER_nondet_int("var2");
  assume(var2 >= 0);
  assume(var2 <= 7);
  int var3;
  var3 = __VERIFIER_nondet_int("var3");
  assume(var3 >= 0);
  assume(var3 <= 7);
  int var4;
  var4 = __VERIFIER_nondet_int("var4");
  assume(var4 >= 0);
  assume(var4 <= 7);
  int var5;
  var5 = __VERIFIER_nondet_int("var5");
  assume(var5 >= 0);
  assume(var5 <= 7);
  int var6;
  var6 = __VERIFIER_nondet_int("var6");
  assume(var6 >= 0);
  assume(var6 <= 7);
  int var7;
  var7 = __VERIFIER_nondet_int("var7");
  assume(var7 >= 0);
  assume(var7 <= 7);
  int var8;
  var8 = __VERIFIER_nondet_int("var8");
  assume(var8 >= 0);
  assume(var8 <= 7);
  int var9;
  var9 = __VERIFIER_nondet_int("var9");
  assume(var9 >= 0);
  assume(var9 <= 7);
  int var10;
  var10 = __VERIFIER_nondet_int("var10");
  assume(var10 >= 0);
  assume(var10 <= 7);
  int var11;
  var11 = __VERIFIER_nondet_int("var11");
  assume(var11 >= 0);
  assume(var11 <= 7);
  int var12;
  var12 = __VERIFIER_nondet_int("var12");
  assume(var12 >= 0);
  assume(var12 <= 7);
  int var13;
  var13 = __VERIFIER_nondet_int("var13");
  assume(var13 >= 0);
  assume(var13 <= 7);
  int var14;
  var14 = __VERIFIER_nondet_int("var14");
  assume(var14 >= 0);
  assume(var14 <= 7);
  int var15;
  var15 = __VERIFIER_nondet_int("var15");
  assume(var15 >= 0);
  assume(var15 <= 7);
  int var16;
  var16 = __VERIFIER_nondet_int("var16");
  assume(var16 >= 0);
  assume(var16 <= 7);
  int var17;
  var17 = __VERIFIER_nondet_int("var17");
  assume(var17 >= 0);
  assume(var17 <= 7);
  int var18;
  var18 = __VERIFIER_nondet_int("var18");
  assume(var18 >= 0);
  assume(var18 <= 7);
  int var19;
  var19 = __VERIFIER_nondet_int("var19");
  assume(var19 >= 0);
  assume(var19 <= 7);
  int var20;
  var20 = __VERIFIER_nondet_int("var20");
  assume(var20 >= 0);
  assume(var20 <= 7);
  int var21;
  var21 = __VERIFIER_nondet_int("var21");
  assume(var21 >= 0);
  assume(var21 <= 7);
  int var22;
  var22 = __VERIFIER_nondet_int("var22");
  assume(var22 >= 0);
  assume(var22 <= 7);
  int var23;
  var23 = __VERIFIER_nondet_int("var23");
  assume(var23 >= 0);
  assume(var23 <= 7);
  int var24;
  var24 = __VERIFIER_nondet_int("var24");
  assume(var24 >= 0);
  assume(var24 <= 7);
  int var25;
  var25 = __VERIFIER_nondet_int("var25");
  assume(var25 >= 0);
  assume(var25 <= 7);
  int var26;
  var26 = __VERIFIER_nondet_int("var26");
  assume(var26 >= 0);
  assume(var26 <= 7);
  int var27;
  var27 = __VERIFIER_nondet_int("var27");
  assume(var27 >= 0);
  assume(var27 <= 7);
  int var28;
  var28 = __VERIFIER_nondet_int("var28");
  assume(var28 >= 0);
  assume(var28 <= 7);
  int var29;
  var29 = __VERIFIER_nondet_int("var29");
  assume(var29 >= 0);
  assume(var29 <= 7);
  int var30;
  var30 = __VERIFIER_nondet_int("var30");
  assume(var30 >= 0);
  assume(var30 <= 7);
  int var31;
  var31 = __VERIFIER_nondet_int("var31");
  assume(var31 >= 0);
  assume(var31 <= 7);
  int var32;
  var32 = __VERIFIER_nondet_int("var32");
  assume(var32 >= 0);
  assume(var32 <= 7);
  int var33;
  var33 = __VERIFIER_nondet_int("var33");
  assume(var33 >= 0);
  assume(var33 <= 7);
  int var34;
  var34 = __VERIFIER_nondet_int("var34");
  assume(var34 >= 0);
  assume(var34 <= 7);
  int var35;
  var35 = __VERIFIER_nondet_int("var35");
  assume(var35 >= 0);
  assume(var35 <= 7);
  int var36;
  var36 = __VERIFIER_nondet_int("var36");
  assume(var36 >= 0);
  assume(var36 <= 7);
  int var37;
  var37 = __VERIFIER_nondet_int("var37");
  assume(var37 >= 0);
  assume(var37 <= 7);
  int var38;
  var38 = __VERIFIER_nondet_int("var38");
  assume(var38 >= 0);
  assume(var38 <= 7);
  int var39;
  var39 = __VERIFIER_nondet_int("var39");
  assume(var39 >= 0);
  assume(var39 <= 7);
  int var40;
  var40 = __VERIFIER_nondet_int("var40");
  assume(var40 >= 0);
  assume(var40 <= 7);
  int var41;
  var41 = __VERIFIER_nondet_int("var41");
  assume(var41 >= 0);
  assume(var41 <= 7);
  int var42;
  var42 = __VERIFIER_nondet_int("var42");
  assume(var42 >= 0);
  assume(var42 <= 7);
  int var43;
  var43 = __VERIFIER_nondet_int("var43");
  assume(var43 >= 0);
  assume(var43 <= 7);
  int var44;
  var44 = __VERIFIER_nondet_int("var44");
  assume(var44 >= 0);
  assume(var44 <= 7);
  int var45;
  var45 = __VERIFIER_nondet_int("var45");
  assume(var45 >= 0);
  assume(var45 <= 7);
  int var46;
  var46 = __VERIFIER_nondet_int("var46");
  assume(var46 >= 0);
  assume(var46 <= 7);
  int var47;
  var47 = __VERIFIER_nondet_int("var47");
  assume(var47 >= 0);
  assume(var47 <= 7);
  int var48;
  var48 = __VERIFIER_nondet_int("var48");
  assume(var48 >= 0);
  assume(var48 <= 7);
  int var49;
  var49 = __VERIFIER_nondet_int("var49");
  assume(var49 >= 0);
  assume(var49 <= 7);
  int var50;
  var50 = __VERIFIER_nondet_int("var50");
  assume(var50 >= 0);
  assume(var50 <= 7);
  int var51;
  var51 = __VERIFIER_nondet_int("var51");
  assume(var51 >= 0);
  assume(var51 <= 7);
  int var52;
  var52 = __VERIFIER_nondet_int("var52");
  assume(var52 >= 0);
  assume(var52 <= 7);
  int var53;
  var53 = __VERIFIER_nondet_int("var53");
  assume(var53 >= 0);
  assume(var53 <= 7);
  int var54;
  var54 = __VERIFIER_nondet_int("var54");
  assume(var54 >= 0);
  assume(var54 <= 7);
  int var55;
  var55 = __VERIFIER_nondet_int("var55");
  assume(var55 >= 0);
  assume(var55 <= 7);
  int var56;
  var56 = __VERIFIER_nondet_int("var56");
  assume(var56 >= 0);
  assume(var56 <= 7);
  int var57;
  var57 = __VERIFIER_nondet_int("var57");
  assume(var57 >= 0);
  assume(var57 <= 7);
  int var58;
  var58 = __VERIFIER_nondet_int("var58");
  assume(var58 >= 0);
  assume(var58 <= 7);
  int var59;
  var59 = __VERIFIER_nondet_int("var59");
  assume(var59 >= 0);
  assume(var59 <= 7);
  int var60;
  var60 = __VERIFIER_nondet_int("var60");
  assume(var60 >= 0);
  assume(var60 <= 7);
  int var61;
  var61 = __VERIFIER_nondet_int("var61");
  assume(var61 >= 0);
  assume(var61 <= 7);
  int var62;
  var62 = __VERIFIER_nondet_int("var62");
  assume(var62 >= 0);
  assume(var62 <= 7);
  int var63;
  var63 = __VERIFIER_nondet_int("var63");
  assume(var63 >= 0);
  assume(var63 <= 7);
  int myvar0 = 1;
  assume(var0 != var11);
  assume(var1 != var41);
  assume(var1 != var47);
  assume(var12 != var5);
  assume(var14 != var47);
  assume(var16 != var21);
  assume(var16 != var29);
  assume(var16 != var32);
  assume(var16 != var55);
  assume(var17 != var28);
  assume(var17 != var44);
  assume(var18 != var0);
  assume(var18 != var11);
  assume(var18 != var20);
  assume(var18 != var40);
  assume(var20 != var0);
  assume(var20 != var11);
  assume(var20 != var24);
  assume(var21 != var55);
  assume(var22 != var46);
  assume(var22 != var8);
  assume(var23 != var29);
  assume(var23 != var32);
  assume(var24 != var0);
  assume(var24 != var11);
  assume(var24 != var40);
  assume(var25 != var46);
  assume(var26 != var22);
  assume(var26 != var25);
  assume(var26 != var46);
  assume(var26 != var62);
  assume(var30 != var36);
  assume(var31 != var13);
  assume(var32 != var21);
  assume(var33 != var14);
  assume(var33 != var15);
  assume(var33 != var34);
  assume(var34 != var1);
  assume(var34 != var14);
  assume(var34 != var15);
  assume(var37 != var13);
  assume(var37 != var27);
  assume(var37 != var31);
  assume(var39 != var28);
  assume(var39 != var42);
  assume(var39 != var44);
  assume(var39 != var51);
  assume(var39 != var9);
  assume(var4 != var12);
  assume(var4 != var3);
  assume(var4 != var53);
  assume(var40 != var0);
  assume(var42 != var44);
  assume(var43 != var10);
  assume(var43 != var19);
  assume(var45 != var31);
  assume(var45 != var37);
  assume(var45 != var48);
  assume(var45 != var63);
  assume(var48 != var27);
  assume(var48 != var31);
  assume(var50 != var10);
  assume(var50 != var36);
  assume(var52 != var62);
  assume(var52 != var8);
  assume(var53 != var3);
  assume(var53 != var5);
  assume(var53 != var6);
  assume(var55 != var29);
  assume(var56 != var0);
  assume(var56 != var11);
  assume(var56 != var24);
  assume(var56 != var40);
  assume(var57 != var42);
  assume(var57 != var44);
  assume(var58 != var19);
  assume(var58 != var36);
  assume(var6 != var3);
  assume(var61 != var3);
  assume(var61 != var5);
  assume(var62 != var25);
  assume(var63 != var13);
  assume(var63 != var27);
  assume(var63 != var37);
  assume(var63 != var48);
  assume(var8 != var25);
  assume(var9 != var42);
  assume(var9 != var44);
  assume(var9 != var51);
  assume(0 > ((var1 - var14) * (var14 - var1)));
  assume(0 > ((var12 - var3) * (var3 - var12)));
  assume(0 > ((var12 - var61) * (var61 - var12)));
  assume(0 > ((var13 - var27) * (var27 - var13)));
  assume(0 > ((var14 - var41) * (var41 - var14)));
  assume(0 > ((var15 - var1) * (var1 - var15)));
  assume(0 > ((var15 - var14) * (var14 - var15)));
  assume(0 > ((var15 - var41) * (var41 - var15)));
  assume(0 > ((var15 - var47) * (var47 - var15)));
  assume(0 > ((var16 - var23) * (var23 - var16)));
  assume(0 > ((var16 - var49) * (var49 - var16)));
  assume(0 > ((var17 - var42) * (var42 - var17)));
  assume(0 > ((var18 - var24) * (var24 - var18)));
  assume(0 > ((var18 - var56) * (var56 - var18)));
  assume(0 > ((var19 - var10) * (var10 - var19)));
  assume(0 > ((var20 - var40) * (var40 - var20)));
  assume(0 > ((var20 - var56) * (var56 - var20)));
  assume(0 > ((var21 - var29) * (var29 - var21)));
  assume(0 > ((var22 - var25) * (var25 - var22)));
  assume(0 > ((var22 - var52) * (var52 - var22)));
  assume(0 > ((var22 - var62) * (var62 - var22)));
  assume(0 > ((var23 - var21) * (var21 - var23)));
  assume(0 > ((var23 - var49) * (var49 - var23)));
  assume(0 > ((var23 - var55) * (var55 - var23)));
  assume(0 > ((var26 - var52) * (var52 - var26)));
  assume(0 > ((var26 - var8) * (var8 - var26)));
  assume(0 > ((var28 - var44) * (var44 - var28)));
  assume(0 > ((var3 - var5) * (var5 - var3)));
  assume(0 > ((var30 - var10) * (var10 - var30)));
  assume(0 > ((var30 - var19) * (var19 - var30)));
  assume(0 > ((var30 - var43) * (var43 - var30)));
  assume(0 > ((var30 - var50) * (var50 - var30)));
  assume(0 > ((var30 - var58) * (var58 - var30)));
  assume(0 > ((var31 - var27) * (var27 - var31)));
  assume(0 > ((var32 - var29) * (var29 - var32)));
  assume(0 > ((var32 - var49) * (var49 - var32)));
  assume(0 > ((var32 - var55) * (var55 - var32)));
  assume(0 > ((var33 - var1) * (var1 - var33)));
  assume(0 > ((var33 - var41) * (var41 - var33)));
  assume(0 > ((var33 - var47) * (var47 - var33)));
  assume(0 > ((var34 - var41) * (var41 - var34)));
  assume(0 > ((var34 - var47) * (var47 - var34)));
  assume(0 > ((var36 - var10) * (var10 - var36)));
  assume(0 > ((var36 - var19) * (var19 - var36)));
  assume(0 > ((var39 - var17) * (var17 - var39)));
  assume(0 > ((var39 - var57) * (var57 - var39)));
  assume(0 > ((var4 - var5) * (var5 - var4)));
  assume(0 > ((var4 - var6) * (var6 - var4)));
  assume(0 > ((var4 - var61) * (var61 - var4)));
  assume(0 > ((var40 - var11) * (var11 - var40)));
  assume(0 > ((var42 - var28) * (var28 - var42)));
  assume(0 > ((var43 - var36) * (var36 - var43)));
  assume(0 > ((var43 - var50) * (var50 - var43)));
  assume(0 > ((var45 - var13) * (var13 - var45)));
  assume(0 > ((var45 - var27) * (var27 - var45)));
  assume(0 > ((var47 - var41) * (var41 - var47)));
  assume(0 > ((var48 - var13) * (var13 - var48)));
  assume(0 > ((var48 - var37) * (var37 - var48)));
  assume(0 > ((var49 - var21) * (var21 - var49)));
  assume(0 > ((var49 - var29) * (var29 - var49)));
  assume(0 > ((var49 - var55) * (var55 - var49)));
  assume(0 > ((var50 - var19) * (var19 - var50)));
  assume(0 > ((var51 - var17) * (var17 - var51)));
  assume(0 > ((var51 - var28) * (var28 - var51)));
  assume(0 > ((var51 - var42) * (var42 - var51)));
  assume(0 > ((var51 - var44) * (var44 - var51)));
  assume(0 > ((var52 - var25) * (var25 - var52)));
  assume(0 > ((var52 - var46) * (var46 - var52)));
  assume(0 > ((var53 - var12) * (var12 - var53)));
  assume(0 > ((var53 - var61) * (var61 - var53)));
  assume(0 > ((var57 - var17) * (var17 - var57)));
  assume(0 > ((var57 - var28) * (var28 - var57)));
  assume(0 > ((var57 - var51) * (var51 - var57)));
  assume(0 > ((var58 - var10) * (var10 - var58)));
  assume(0 > ((var58 - var43) * (var43 - var58)));
  assume(0 > ((var58 - var50) * (var50 - var58)));
  assume(0 > ((var6 - var12) * (var12 - var6)));
  assume(0 > ((var6 - var5) * (var5 - var6)));
  assume(0 > ((var6 - var61) * (var61 - var6)));
  assume(0 > ((var62 - var46) * (var46 - var62)));
  assume(0 > ((var62 - var8) * (var8 - var62)));
  assume(0 > ((var63 - var31) * (var31 - var63)));
  assume(0 > ((var8 - var46) * (var46 - var8)));
  assume(0 > ((var9 - var17) * (var17 - var9)));
  assume(0 > ((var9 - var28) * (var28 - var9)));
  assume(0 > ((var9 - var57) * (var57 - var9)));
  assume(var17 == var54);
  assume(var28 == var35);
  assume(var39 == var2);
  assume(var42 == var59);
  assume(var51 == var38);
  assume(var57 == var7);
  assume(var9 == var60);
  assume(var2 != var10);
  assume((var2 + var10) >= 2);
  assume(var2 != var19);
  assume((var2 + var19) >= 2);
  assume(var2 != var30);
  assume((var2 + var30) >= 2);
  assume(var2 != var36);
  assume((var2 + var36) >= 2);
  assume(var2 != var43);
  assume((var2 + var43) >= 2);
  assume(var2 != var50);
  assume((var2 + var50) >= 2);
  assume(var2 != var58);
  assume((var2 + var58) >= 2);
  assume(var35 != var12);
  assume((var35 + var12) >= 2);
  assume(var35 != var3);
  assume((var35 + var3) >= 2);
  assume(var35 != var4);
  assume((var35 + var4) >= 2);
  assume(var35 != var5);
  assume((var35 + var5) >= 2);
  assume(var35 != var53);
  assume((var35 + var53) >= 2);
  assume(var35 != var6);
  assume((var35 + var6) >= 2);
  assume(var35 != var61);
  assume((var35 + var61) >= 2);
  assume(var38 != var16);
  assume((var38 + var16) >= 2);
  assume(var38 != var21);
  assume((var38 + var21) >= 2);
  assume(var38 != var23);
  assume((var38 + var23) >= 2);
  assume(var38 != var29);
  assume((var38 + var29) >= 2);
  assume(var38 != var32);
  assume((var38 + var32) >= 2);
  assume(var38 != var49);
  assume((var38 + var49) >= 2);
  assume(var38 != var55);
  assume((var38 + var55) >= 2);
  assume(var54 != var13);
  assume((var54 + var13) >= 2);
  assume(var54 != var27);
  assume((var54 + var27) >= 2);
  assume(var54 != var31);
  assume((var54 + var31) >= 2);
  assume(var54 != var37);
  assume((var54 + var37) >= 2);
  assume(var54 != var45);
  assume((var54 + var45) >= 2);
  assume(var54 != var48);
  assume((var54 + var48) >= 2);
  assume(var54 != var63);
  assume((var54 + var63) >= 2);
  assume(var59 != var1);
  assume((var59 + var1) >= 2);
  assume(var59 != var14);
  assume((var59 + var14) >= 2);
  assume(var59 != var15);
  assume((var59 + var15) >= 2);
  assume(var59 != var33);
  assume((var59 + var33) >= 2);
  assume(var59 != var34);
  assume((var59 + var34) >= 2);
  assume(var59 != var41);
  assume((var59 + var41) >= 2);
  assume(var59 != var47);
  assume((var59 + var47) >= 2);
  assume(var60 != var0);
  assume((var60 + var0) >= 2);
  assume(var60 != var11);
  assume((var60 + var11) >= 2);
  assume(var60 != var18);
  assume((var60 + var18) >= 2);
  assume(var60 != var20);
  assume((var60 + var20) >= 2);
  assume(var60 != var24);
  assume((var60 + var24) >= 2);
  assume(var60 != var40);
  assume((var60 + var40) >= 2);
  assume(var60 != var56);
  assume((var60 + var56) >= 2);
  assume(var7 != var22);
  assume((var7 + var22) >= 2);
  assume(var7 != var25);
  assume((var7 + var25) >= 2);
  assume(var7 != var26);
  assume((var7 + var26) >= 2);
  assume(var7 != var46);
  assume((var7 + var46) >= 2);
  assume(var7 != var52);
  assume((var7 + var52) >= 2);
  assume(var7 != var62);
  assume((var7 + var62) >= 2);
  assume(var7 != var8);
  assume((var7 + var8) >= 2);
  reach_error();
  return 0;
}

