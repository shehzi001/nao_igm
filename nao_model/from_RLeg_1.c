/* Generated using codegen (2011-11-26, 15:35:38) */
#include <math.h>
void from_RLeg_1(q,LL,T,A)
double q[36];
double LL[16];
double T[16];
double A[156];
{
    double t10;
    double t101;
    double t102;
    double t104;
    double t107;
    double t109;
    double t11;
    double t112;
    double t115;
    double t116;
    double t118;
    double t119;
    double t12;
    double t121;
    double t122;
    double t124;
    double t125;
    double t126;
    double t13;
    double t130;
    double t131;
    double t132;
    double t135;
    double t136;
    double t138;
    double t139;
    double t14;
    double t142;
    double t146;
    double t148;
    double t149;
    double t15;
    double t150;
    double t151;
    double t154;
    double t155;
    double t156;
    double t157;
    double t158;
    double t159;
    double t16;
    double t160;
    double t163;
    double t164;
    double t165;
    double t166;
    double t167;
    double t168;
    double t17;
    double t172;
    double t173;
    double t175;
    double t176;
    double t177;
    double t178;
    double t179;
    double t18;
    double t181;
    double t182;
    double t183;
    double t184;
    double t185;
    double t186;
    double t187;
    double t188;
    double t189;
    double t19;
    double t191;
    double t192;
    double t196;
    double t199;
    double t2;
    double t201;
    double t204;
    double t208;
    double t210;
    double t211;
    double t214;
    double t215;
    double t216;
    double t217;
    double t22;
    double t220;
    double t221;
    double t222;
    double t226;
    double t228;
    double t229;
    double t23;
    double t230;
    double t232;
    double t233;
    double t234;
    double t235;
    double t236;
    double t237;
    double t238;
    double t239;
    double t24;
    double t241;
    double t243;
    double t245;
    double t246;
    double t247;
    double t248;
    double t249;
    double t25;
    double t250;
    double t253;
    double t254;
    double t255;
    double t259;
    double t26;
    double t261;
    double t266;
    double t269;
    double t27;
    double t270;
    double t272;
    double t275;
    double t277;
    double t280;
    double t283;
    double t284;
    double t286;
    double t287;
    double t289;
    double t290;
    double t292;
    double t296;
    double t299;
    double t3;
    double t301;
    double t304;
    double t308;
    double t31;
    double t310;
    double t311;
    double t314;
    double t315;
    double t316;
    double t317;
    double t32;
    double t320;
    double t321;
    double t322;
    double t326;
    double t328;
    double t329;
    double t330;
    double t332;
    double t333;
    double t334;
    double t335;
    double t336;
    double t337;
    double t338;
    double t339;
    double t34;
    double t341;
    double t35;
    double t351;
    double t353;
    double t356;
    double t36;
    double t360;
    double t362;
    double t364;
    double t369;
    double t371;
    double t373;
    double t380;
    double t384;
    double t389;
    double t393;
    double t394;
    double t395;
    double t396;
    double t398;
    double t399;
    double t4;
    double t400;
    double t401;
    double t403;
    double t404;
    double t405;
    double t407;
    double t41;
    double t411;
    double t412;
    double t413;
    double t415;
    double t416;
    double t417;
    double t419;
    double t42;
    double t420;
    double t421;
    double t426;
    double t428;
    double t431;
    double t441;
    double t443;
    double t446;
    double t45;
    double t456;
    double t457;
    double t458;
    double t46;
    double t460;
    double t461;
    double t462;
    double t464;
    double t465;
    double t466;
    double t471;
    double t473;
    double t475;
    double t48;
    double t480;
    double t481;
    double t482;
    double t484;
    double t485;
    double t486;
    double t488;
    double t489;
    double t49;
    double t490;
    double t495;
    double t497;
    double t499;
    double t50;
    double t517;
    double t518;
    double t519;
    double t520;
    double t521;
    double t522;
    double t524;
    double t525;
    double t526;
    double t527;
    double t528;
    double t529;
    double t53;
    double t531;
    double t532;
    double t533;
    double t534;
    double t535;
    double t536;
    double t537;
    double t54;
    double t540;
    double t543;
    double t546;
    double t549;
    double t552;
    double t555;
    double t556;
    double t559;
    double t56;
    double t560;
    double t563;
    double t568;
    double t57;
    double t573;
    double t576;
    double t579;
    double t597;
    double t6;
    double t60;
    double t603;
    double t609;
    double t63;
    double t64;
    double t66;
    double t67;
    double t69;
    double t7;
    double t70;
    double t72;
    double t73;
    double t75;
    double t77;
    double t78;
    double t79;
    double t80;
    double t81;
    double t82;
    double t85;
    double t86;
    double t87;
    double t9;
    double t91;
    double t93;
    double t98;
    {
        t2 = q[34];
        t3 = q[11];
        t4 = cos(t3);
        t6 = q[31];
        t7 = sin(t3);
        t9 = -t2*t4-t6*t7;
        t10 = q[10];
        t11 = cos(t10);
        t12 = t9*t11;
        t13 = q[28];
        t14 = sin(t10);
        t15 = t13*t14;
        t16 = t12+t15;
        t17 = q[9];
        t18 = cos(t17);
        t19 = t16*t18;
        t22 = t9*t14-t13*t11;
        t23 = sin(t17);
        t24 = t22*t23;
        t25 = t19-t24;
        t26 = q[8];
        t27 = sin(t26);
        t31 = t16*t23+t22*t18;
        t32 = cos(t26);
        t34 = -t25*t27-t31*t32;
        t35 = q[6];
        t36 = sin(t35);
        t41 = sqrt(2.0);
        t42 = (t25*t32-t31*t27)*t41;
        t45 = -t2*t7+t6*t4;
        t46 = t45*t41;
        t48 = t42/2.0-t46/2.0;
        t49 = q[7];
        t50 = sin(t49);
        t53 = t42/2.0+t46/2.0;
        t54 = cos(t49);
        t56 = t48*t50+t53*t54;
        t57 = cos(t35);
        t60 = (t34*t36+t56*t57)*t41;
        t63 = -t48*t54+t53*t50;
        t64 = t63*t41;
        t66 = t60/2.0+t64/2.0;
        t67 = t66*t41;
        t69 = -t60/2.0+t64/2.0;
        t70 = t69*t41;
        t72 = t67/2.0-t70/2.0;
        t73 = q[35];
        t75 = q[32];
        t77 = -t73*t4-t75*t7;
        t78 = t77*t11;
        t79 = q[29];
        t80 = t79*t14;
        t81 = t78+t80;
        t82 = t81*t18;
        t85 = t77*t14-t79*t11;
        t86 = t85*t23;
        t87 = t82-t86;
        t91 = t81*t23+t85*t18;
        t93 = -t87*t27-t91*t32;
        t98 = (t87*t32-t91*t27)*t41;
        t101 = -t73*t7+t75*t4;
        t102 = t101*t41;
        t104 = t98/2.0-t102/2.0;
        t107 = t98/2.0+t102/2.0;
        t109 = t104*t50+t107*t54;
        t112 = (t93*t36+t109*t57)*t41;
        t115 = -t104*t54+t107*t50;
        t116 = t115*t41;
        t118 = t112/2.0+t116/2.0;
        t119 = t118*t41;
        t121 = -t112/2.0+t116/2.0;
        t122 = t121*t41;
        t124 = -t119/2.0+t122/2.0;
        t125 = q[1];
        t126 = cos(t125);
        t130 = t93*t57-t109*t36;
        t131 = q[0];
        t132 = sin(t131);
        t135 = -t119/2.0-t122/2.0;
        t136 = cos(t131);
        t138 = -t130*t132+t135*t136;
        t139 = sin(t125);
        t142 = (t124*t126+t138*t139)*t41;
        t146 = (-t124*t139+t138*t126)*t41;
        t148 = t142/2.0-t146/2.0;
        t149 = q[2];
        t150 = cos(t149);
        t151 = t148*t150;
        t154 = t130*t136+t135*t132;
        t155 = sin(t149);
        t156 = t154*t155;
        t157 = t151+t156;
        t158 = q[3];
        t159 = cos(t158);
        t160 = t157*t159;
        t163 = -t148*t155+t154*t150;
        t164 = sin(t158);
        t165 = t163*t164;
        t166 = t160+t165;
        t167 = q[4];
        t168 = cos(t167);
        t172 = -t157*t164+t163*t159;
        t173 = sin(t167);
        t175 = t166*t168+t172*t173;
        t176 = q[5];
        t177 = cos(t176);
        t178 = t175*t177;
        t179 = 0.4511E-1*t178;
        t181 = t142/2.0+t146/2.0;
        t182 = sin(t176);
        t183 = t181*t182;
        t184 = 0.4511E-1*t183;
        t185 = 0.10274*t160;
        t186 = 0.10274*t165;
        t187 = 0.1*t151;
        t188 = 0.1*t156;
        t189 = -t179-t184-t185-t186-t187-t188;
        t191 = -t124;
        t192 = -t72;
        t196 = t34*t57-t56*t36;
        t199 = -t67/2.0-t70/2.0;
        t201 = -t196*t132+t199*t136;
        t204 = (t192*t126+t201*t139)*t41;
        t208 = (-t192*t139+t201*t126)*t41;
        t210 = t204/2.0-t208/2.0;
        t211 = t210*t150;
        t214 = t196*t136+t199*t132;
        t215 = t214*t155;
        t216 = t211+t215;
        t217 = t216*t159;
        t220 = -t210*t155+t214*t150;
        t221 = t220*t164;
        t222 = t217+t221;
        t226 = -t216*t164+t220*t159;
        t228 = t222*t168+t226*t173;
        t229 = t228*t177;
        t230 = 0.4511E-1*t229;
        t232 = t204/2.0+t208/2.0;
        t233 = t232*t182;
        t234 = 0.4511E-1*t233;
        t235 = 0.10274*t217;
        t236 = 0.10274*t221;
        t237 = 0.1*t211;
        t238 = 0.1*t215;
        t239 = -t230-t234-t235-t236-t237-t238;
        A[0] = t72*t189-t191*t239;
        t241 = q[33];
        t243 = q[30];
        t245 = -t241*t4-t243*t7;
        t246 = t245*t11;
        t247 = q[27];
        t248 = t247*t14;
        t249 = t246+t248;
        t250 = t249*t18;
        t253 = t245*t14-t247*t11;
        t254 = t253*t23;
        t255 = t250-t254;
        t259 = t249*t23+t253*t18;
        t261 = -t255*t27-t259*t32;
        t266 = (t255*t32-t259*t27)*t41;
        t269 = -t241*t7+t243*t4;
        t270 = t269*t41;
        t272 = t266/2.0-t270/2.0;
        t275 = t266/2.0+t270/2.0;
        t277 = t272*t50+t275*t54;
        t280 = (t261*t36+t277*t57)*t41;
        t283 = -t272*t54+t275*t50;
        t284 = t283*t41;
        t286 = t280/2.0+t284/2.0;
        t287 = t286*t41;
        t289 = -t280/2.0+t284/2.0;
        t290 = t289*t41;
        t292 = -t287/2.0+t290/2.0;
        t296 = t261*t57-t277*t36;
        t299 = -t287/2.0-t290/2.0;
        t301 = -t296*t132+t299*t136;
        t304 = (t292*t126+t301*t139)*t41;
        t308 = (-t292*t139+t301*t126)*t41;
        t310 = t304/2.0-t308/2.0;
        t311 = t310*t150;
        t314 = t296*t136+t299*t132;
        t315 = t314*t155;
        t316 = t311+t315;
        t317 = t316*t159;
        t320 = -t310*t155+t314*t150;
        t321 = t320*t164;
        t322 = t317+t321;
        t326 = -t316*t164+t320*t159;
        t328 = t322*t168+t326*t173;
        t329 = t328*t177;
        t330 = 0.4511E-1*t329;
        t332 = t304/2.0+t308/2.0;
        t333 = t332*t182;
        t334 = 0.4511E-1*t333;
        t335 = 0.10274*t317;
        t336 = 0.10274*t321;
        t337 = 0.1*t311;
        t338 = 0.1*t315;
        t339 = -t330-t334-t335-t336-t337-t338;
        t341 = -t292;
        A[1] = t191*t339-t341*t189;
        A[2] = t341*t239-t72*t339;
        A[3] = t341;
        A[4] = t72;
        A[5] = t191;
        A[6] = 0.0;
        A[7] = 0.0;
        A[8] = 0.0;
        A[9] = 0.0;
        A[10] = 0.0;
        A[11] = 1.0;
        A[12] = t214*t189-t154*t239;
        A[13] = t154*t339-t314*t189;
        A[14] = t314*t239-t214*t339;
        A[15] = t314;
        A[16] = t214;
        A[17] = t154;
        A[18] = 0.0;
        A[19] = 0.0;
        A[20] = 0.0;
        A[21] = 0.0;
        A[22] = 0.0;
        A[23] = 0.0;
        t351 = -t232;
        t353 = -t181;
        A[24] = t351*t189-t353*t239;
        t356 = -t332;
        A[25] = t353*t339-t356*t189;
        A[26] = t356*t239-t351*t339;
        A[27] = t356;
        A[28] = t351;
        A[29] = t353;
        A[30] = 0.0;
        A[31] = 0.0;
        A[32] = 0.0;
        A[33] = 0.0;
        A[34] = 0.0;
        A[35] = 0.0;
        t360 = -t179-t184-t185-t186;
        t362 = -t230-t234-t235-t236;
        A[36] = A[28]*t360-A[29]*t362;
        t364 = -t330-t334-t335-t336;
        A[37] = A[29]*t364-A[27]*t360;
        A[38] = A[27]*t362-A[28]*t364;
        A[39] = A[27];
        A[40] = A[28];
        A[41] = A[29];
        A[42] = 0.0;
        A[43] = 0.0;
        A[44] = 0.0;
        A[45] = 0.0;
        A[46] = 0.0;
        A[47] = 0.0;
        t369 = -t179-t184;
        t371 = -t230-t234;
        A[48] = A[40]*t369-A[41]*t371;
        t373 = -t330-t334;
        A[49] = A[41]*t373-A[39]*t369;
        A[50] = A[39]*t371-A[40]*t373;
        A[51] = A[39];
        A[52] = A[40];
        A[53] = A[41];
        A[54] = 0.0;
        A[55] = 0.0;
        A[56] = 0.0;
        A[57] = 0.0;
        A[58] = 0.0;
        A[59] = 0.0;
        t380 = -t222*t173+t226*t168;
        t384 = -t166*t173+t172*t168;
        A[60] = t380*t369-t384*t371;
        t389 = -t322*t173+t326*t168;
        A[61] = t384*t373-t389*t369;
        A[62] = t389*t371-t380*t373;
        A[63] = t389;
        A[64] = t380;
        A[65] = t384;
        A[66] = 0.0;
        A[67] = 0.0;
        A[68] = 0.0;
        A[69] = 0.0;
        A[70] = 0.0;
        A[71] = 0.0;
        t393 = -t63;
        t394 = 0.5E-1*t112;
        t395 = 0.5E-1*t116;
        t396 = -t179-t184-t185-t186-t187-t188+t394+t395;
        t398 = -t115;
        t399 = 0.5E-1*t60;
        t400 = 0.5E-1*t64;
        t401 = -t230-t234-t235-t236-t237-t238+t399+t400;
        A[72] = t393*t396-t398*t401;
        t403 = 0.5E-1*t280;
        t404 = 0.5E-1*t284;
        t405 = -t330-t334-t335-t336-t337-t338+t403+t404;
        t407 = -t283;
        A[73] = t398*t405-t407*t396;
        A[74] = t407*t401-t393*t405;
        A[75] = t407;
        A[76] = t393;
        A[77] = t398;
        t411 = 0.175E-1*t112;
        t412 = 0.675E-1*t116;
        t413 = -t411+t412;
        t415 = 0.175E-1*t60;
        t416 = 0.675E-1*t64;
        t417 = -t415+t416;
        A[78] = A[76]*t413-A[77]*t417;
        t419 = 0.175E-1*t280;
        t420 = 0.675E-1*t284;
        t421 = -t419+t420;
        A[79] = A[77]*t421-A[75]*t413;
        A[80] = A[75]*t417-A[76]*t421;
        A[81] = A[75];
        A[82] = A[76];
        A[83] = -1.0;
        t426 = -t34;
        t428 = -t93;
        A[84] = t426*t396-t428*t401;
        t431 = -t261;
        A[85] = t428*t405-t431*t396;
        A[86] = t431*t401-t426*t405;
        A[87] = t431;
        A[88] = t426;
        A[89] = t428;
        A[90] = A[88]*t413-A[89]*t417;
        A[91] = A[89]*t421-A[87]*t413;
        A[92] = A[87]*t417-A[88]*t421;
        A[93] = A[87];
        A[94] = A[88];
        A[95] = 0.0;
        t441 = -t45;
        t443 = -t101;
        A[96] = t441*t396-t443*t401;
        t446 = -t269;
        A[97] = t443*t405-t446*t396;
        A[98] = t446*t401-t441*t405;
        A[99] = t446;
        A[100] = t441;
        A[101] = t443;
        A[102] = A[100]*t413-A[101]*t417;
        A[103] = A[101]*t421-A[99]*t413;
        A[104] = A[99]*t417-A[100]*t421;
        A[105] = A[99];
        A[106] = A[100];
        A[107] = 0.0;
        t456 = 0.1*t82;
        t457 = 0.1*t86;
        t458 = -t179-t184-t185-t186-t187-t188+t394+t395-t456+t457;
        t460 = 0.1*t19;
        t461 = 0.1*t24;
        t462 = -t230-t234-t235-t236-t237-t238+t399+t400-t460+t461;
        A[108] = A[106]*t458-A[101]*t462;
        t464 = 0.1*t250;
        t465 = 0.1*t254;
        t466 = -t330-t334-t335-t336-t337-t338+t403+t404-t464+t465;
        A[109] = A[101]*t466-A[105]*t458;
        A[110] = A[105]*t462-A[106]*t466;
        A[111] = A[105];
        A[112] = A[106];
        A[113] = A[101];
        t471 = -t411+t412-t456+t457;
        t473 = -t415+t416-t460+t461;
        A[114] = A[112]*t471-A[113]*t473;
        t475 = -t419+t420-t464+t465;
        A[115] = A[113]*t475-A[111]*t471;
        A[116] = A[111]*t473-A[112]*t475;
        A[117] = A[111];
        A[118] = A[112];
        A[119] = 0.0;
        t480 = 0.10274*t78;
        t481 = 0.10274*t80;
        t482 = -t179-t184-t185-t186-t187-t188+t394+t395-t456+t457-t480-t481;
        t484 = 0.10274*t12;
        t485 = 0.10274*t15;
        t486 = -t230-t234-t235-t236-t237-t238+t399+t400-t460+t461-t484-t485;
        A[120] = A[118]*t482-A[113]*t486;
        t488 = 0.10274*t246;
        t489 = 0.10274*t248;
        t490 = -t330-t334-t335-t336-t337-t338+t403+t404-t464+t465-t488-t489;
        A[121] = A[113]*t490-A[117]*t482;
        A[122] = A[117]*t486-A[118]*t490;
        A[123] = A[117];
        A[124] = A[118];
        A[125] = A[113];
        t495 = -t411+t412-t456+t457-t480-t481;
        t497 = -t415+t416-t460+t461-t484-t485;
        A[126] = A[124]*t495-A[125]*t497;
        t499 = -t419+t420-t464+t465-t488-t489;
        A[127] = A[125]*t499-A[123]*t495;
        A[128] = A[123]*t497-A[124]*t499;
        A[129] = A[123];
        A[130] = A[124];
        A[131] = 0.0;
        A[132] = -t13*t482+t79*t486;
        A[133] = -t79*t490+t247*t482;
        A[134] = -t247*t486+t13*t490;
        A[135] = -t247;
        A[136] = -t13;
        A[137] = -t79;
        A[138] = -t13*t495+t79*t497;
        A[139] = -t79*t499+t247*t495;
        A[140] = -t247*t497+t13*t499;
        A[141] = A[135];
        A[142] = A[136];
        A[143] = 0.0;
        t517 = 0.1*t250;
        t518 = 0.1*t254;
        t519 = 0.10274*t246;
        t520 = 0.10274*t248;
        t521 = 0.4511E-1*t241;
        t522 = q[24];
        A[144] = LL[12]+t330+t334+t335+t336+t337+t338-t403-t404+t517-t518+t519+t520
                 -t521-t522;
        t524 = 0.1*t19;
        t525 = 0.1*t24;
        t526 = 0.10274*t12;
        t527 = 0.10274*t15;
        t528 = 0.4511E-1*t2;
        t529 = q[25];
        A[145] = LL[13]+t230+t234+t235+t236+t237+t238-t399-t400+t524-t525+t526+t527
                 -t528-t529;
        t531 = 0.1*t82;
        t532 = 0.1*t86;
        t533 = 0.10274*t78;
        t534 = 0.10274*t80;
        t535 = 0.4511E-1*t73;
        t536 = q[26];
        A[146] = LL[14]+t179+t184+t185+t186+t187+t188-t394-t395+t531-t532+t533+t534
                 -t535-t536;
        t537 = LL[2];
        t540 = LL[1];
        t543 = LL[6];
        t546 = t228*t182-t232*t177;
        t549 = LL[5];
        t552 = t175*t182-t181*t177;
        t555 = LL[10];
        t556 = t229+t233;
        t559 = LL[9];
        t560 = t178+t183;
        A[147] = 0.5*t537*A[64]-0.5*t540*A[65]+0.5*t543*t546-0.5*t549*t552+0.5*t555
                 *t556-0.5*t559*t560;
        t563 = LL[0];
        t568 = LL[4];
        t573 = t328*t182-t332*t177;
        t576 = LL[8];
        t579 = t329+t333;
        A[148] = 0.5*t563*A[65]-0.5*t537*A[63]+0.5*t568*t552-0.5*t543*t573+0.5*t576
                 *t560-0.5*t555*t579;
        A[149] = 0.5*t540*A[63]-0.5*t563*A[64]+0.5*t549*t573-0.5*t568*t546+0.5*t559
                 *t579-0.5*t576*t556;
        A[150] = T[12]+t419-t420+t517-t518+t519+t520-t521-t522;
        A[151] = T[13]+t415-t416+t524-t525+t526+t527-t528-t529;
        A[152] = T[14]+t411-t412+t531-t532+t533+t534-t535-t536;
        t597 = T[2];
        t603 = T[6];
        t609 = T[10];
        A[153] = 0.5*t597*t196-0.5*T[1]*t130+0.5*t603*t66-0.5*T[5]*t118+0.5*t609*
                 t69-0.5*T[9]*t121;
        A[154] = 0.5*T[0]*t130-0.5*t597*t296+0.5*T[4]*t118-0.5*t603*t286+0.5*T[8]*
                 t121-0.5*t609*t289;
        A[155] = 0.0;
        return;
    }
}

