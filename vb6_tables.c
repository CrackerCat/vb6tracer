/*
 * VB6Tracer - VB6 Instrumentation
 * Copyright (C) 2013-2014 Jurriaan Bremer, Marion Marschalek
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "vb6.h"

vb6_insns_t vb6_table_00[256] = {
    [0] = {2, "LargeBos"},
    [1] = {5, "InvalidExcode"},
    [2] = {2, "SelectCaseByte"},
    [4] = {3, "FLdRfVar"},
    [5] = {3, "ImpAdLdRf"},
    [6] = {3, "MemLdRfVar"},
    [7] = {5, "FMemLdRf"},
    [8] = {3, "FLdPr"},
    [9] = {5, "ImpAdCallHresult"},
    [10] = {5, "ImpAdCallFPR4"},
    [11] = {5, "ImpAdCallI2"},
    [12] = {5, "ImpAdCallCy"},
    [13] = {5, "VCallHresult"},
    [14] = {3, "VCallFPR8"},
    [15] = {3, "VCallAd"},
    [16] = {5, "ThisVCallHresult"},
    [17] = {3, "ThisVCall"},
    [18] = {3, "ThisVCallAd"},
    [19] = {1, "ExitProcHresult"},
    [20] = {1, "ExitProc"},
    [21] = {1, "ExitProcI2"},
    [22] = {1, "ExitProcR4"},
    [23] = {1, "ExitProcR8"},
    [24] = {1, "ExitProcCy"},
    [25] = {3, "FStAdFunc"},
    [26] = {3, "FFree1Ad"},
    [27] = {3, "LitStr"},
    [28] = {3, "BranchF"},
    [29] = {3, "BranchT"},
    [30] = {3, "Branch"},
    [31] = {3, "CRec2Ansi"},
    [32] = {3, "CRec2Uni"},
    [33] = {1, "FLdPrThis"},
    [34] = {3, "ImpAdLdPr"},
    [35] = {3, "FStStrNoPop"},
    [36] = {3, "NewIfNullPr"},
    [37] = {1, "PopAdLdVar"},
    [38] = {3, "AryDescTemp"},
    [39] = {3, "LitVar_Missing"},
    [40] = {5, "LitVarI2"},
    [41] = {-1, "FFreeAd"},
    [42] = {1, "ConcatStr"},
    [43] = {3, "PopTmpLdAd2"},
    [44] = {5, "LateIdSt"},
    [45] = {3, "AryUnlock"},
    [46] = {3, "AryLock"},
    [47] = {3, "FFree1Str"},
    [48] = {3, "PopTmpLdAd8"},
    [49] = {3, "FStStr"},
    [50] = {-1, "FFreeStr"},
    [51] = {3, "LdFixedStr"},
    [52] = {1, "CStr2Ansi"},
    [53] = {3, "FFree1Var"},
    [54] = {-1, "FFreeVar"},
    [55] = {1, "PopFPR4"},
    [56] = {3, "CopyBytes"},
    [57] = {1, "PopFPR8"},
    [58] = {5, "LitVarStr"},
    [59] = {1, "Ary1StStrCopy"},
    [60] = {1, "SetLastSystemError"},
    [61] = {3, "CastAd"},
    [62] = {3, "FLdZeroAd"},
    [63] = {3, "CVarCy"},
    [64] = {1, "Ary1LdRf"},
    [65] = {1, "Ary1LdPr"},
    [66] = {1, "CR4Var"},
    [67] = {3, "FStStrCopy"},
    [68] = {3, "CVarI2"},
    [69] = {1, "Error"},
    [70] = {3, "CVarStr"},
    [71] = {3, "StFixedStr"},
    [72] = {3, "ILdPr"},
    [73] = {1, "PopAdLd4"},
    [74] = {1, "FnLenStr"},
    [75] = {3, "OnErrorGoto"},
    [76] = {1, "FnLBound"},
    [77] = {5, "CVarRef"},
    [78] = {3, "FStVarCopyObj"},
    [79] = {3, "MidStr"},
    [80] = {1, "CI4Str"},
    [82] = {1, "Ary1StVar"},
    [83] = {1, "CBoolCy"},
    [84] = {5, "FMemStStrCopy"},
    [85] = {1, "CI2Var"},
    [86] = {3, "NewIfNullAd"},
    [87] = {5, "LateMemLdVar"},
    [88] = {3, "MemLdPr"},
    [89] = {3, "PopTmpLdAdStr"},
    [90] = {1, "Erase"},
    [91] = {3, "FStAdFuncNoPop"},
    [92] = {3, "BranchFVar"},
    [93] = {1, "HardType"},
    [95] = {5, "FMemLdPr"},
    [96] = {1, "CStrVarTmp"},
    [97] = {7, "LateIdLdVar"},
    [98] = {3, "IStDarg"},
    [99] = {3, "LitVar_TRUE"},
    [100] = {5, "NextI2"},
    [101] = {5, "NextStepI2"},
    [102] = {5, "NextI4"},
    [103] = {5, "NextStepI4"},
    [104] = {5, "NextStepR4"},
    [105] = {5, "NextStepR8"},
    [106] = {5, "NextStepCy"},
    [107] = {3, "FLdI2"},
    [108] = {3, "ILdRf"},
    [109] = {3, "FLdR8"},
    [110] = {3, "FLdFPR4"},
    [111] = {3, "FLdFPR8"},
    [112] = {3, "FStI2"},
    [113] = {3, "FStR4"},
    [114] = {3, "FStR8"},
    [115] = {3, "FStFPR4"},
    [116] = {3, "FStFPR8"},
    [117] = {3, "ImpAdLdI2"},
    [118] = {3, "ImpAdLdI4"},
    [119] = {3, "ImpAdLdCy"},
    [120] = {3, "ImpAdLdFPR4"},
    [121] = {3, "ImpAdLdFPR8"},
    [122] = {3, "ImpAdStI2"},
    [123] = {3, "ImpAdStR4"},
    [124] = {3, "ImpAdStCy"},
    [125] = {3, "ImpAdStFPR4"},
    [126] = {3, "ImpAdStFPR8"},
    [127] = {3, "ILdI2"},
    [128] = {3, "ILdI4"},
    [129] = {3, "ILdR8"},
    [130] = {3, "ILdFPR4"},
    [131] = {3, "ILdFPR8"},
    [132] = {3, "IStI2"},
    [133] = {3, "IStI4"},
    [134] = {3, "IStR8"},
    [135] = {3, "IStFPR4"},
    [136] = {3, "IStFPR8"},
    [137] = {3, "MemLdI2"},
    [138] = {3, "MemLdStr"},
    [139] = {3, "MemLdR8"},
    [140] = {3, "MemLdFPR4"},
    [141] = {3, "MemLdFPR8"},
    [142] = {3, "MemStI2"},
    [143] = {3, "MemStI4"},
    [144] = {3, "MemStR8"},
    [145] = {3, "MemStFPR4"},
    [146] = {3, "MemStFPR8"},
    [147] = {5, "FMemLdI2"},
    [148] = {5, "FMemLdR4"},
    [149] = {5, "FMemLdCy"},
    [150] = {5, "FMemLdFPR4"},
    [151] = {5, "FMemLdFPR8"},
    [152] = {5, "FMemStI2"},
    [153] = {5, "FMemStI4"},
    [154] = {5, "FMemStR8"},
    [155] = {5, "FMemStFPR4"},
    [156] = {5, "FMemStFPR8"},
    [157] = {1, "Ary1LdI2"},
    [158] = {1, "Ary1LdI4"},
    [159] = {1, "Ary1LdCy"},
    [160] = {1, "Ary1LdFPR4"},
    [161] = {1, "Ary1LdFPR8"},
    [162] = {1, "Ary1StI2"},
    [163] = {1, "Ary1StI4"},
    [164] = {1, "Ary1StCy"},
    [165] = {1, "Ary1StFPR4"},
    [166] = {1, "Ary1StFPR8"},
    [167] = {3, "AryLdPr"},
    [168] = {3, "AryLdRf"},
    [169] = {1, "AddI2"},
    [170] = {1, "AddI4"},
    [171] = {1, "AddR8"},
    [172] = {1, "AddCy"},
    [173] = {1, "SubI2"},
    [174] = {1, "SubI4"},
    [175] = {1, "SubR4"},
    [176] = {1, "SubCy"},
    [177] = {1, "MulI2"},
    [178] = {1, "MulI4"},
    [179] = {1, "MulR8"},
    [180] = {1, "MulCy"},
    [181] = {1, "MulCyI2"},
    [182] = {1, "DivR8"},
    [183] = {1, "UMiI2"},
    [184] = {1, "UMiI4"},
    [185] = {1, "UMiR8"},
    [186] = {1, "UMiCy"},
    [187] = {1, "FnAbsI2"},
    [188] = {1, "FnAbsI4"},
    [189] = {1, "FnAbsR4"},
    [190] = {1, "FnAbsCy"},
    [191] = {1, "IDvI2"},
    [192] = {1, "IDvI4"},
    [193] = {1, "ModI2"},
    [194] = {1, "ModI4"},
    [195] = {1, "NotI4"},
    [196] = {1, "AndI4"},
    [197] = {1, "OrI4"},
    [198] = {1, "EqI2"},
    [199] = {1, "EqI4"},
    [200] = {1, "EqR4"},
    [201] = {1, "EqCy"},
    [202] = {1, "EqCyR8"},
    [203] = {1, "NeI2"},
    [204] = {1, "NeI4"},
    [205] = {1, "NeR8"},
    [206] = {1, "NeCy"},
    [207] = {1, "NeCyR8"},
    [208] = {1, "LtI2"},
    [209] = {1, "LtI4"},
    [210] = {1, "LtR8"},
    [211] = {1, "LtCy"},
    [212] = {1, "LtCyR8"},
    [213] = {1, "LeI2"},
    [214] = {1, "LeI4"},
    [215] = {1, "LeR8"},
    [216] = {1, "LeCy"},
    [217] = {1, "LeCyR8"},
    [218] = {1, "GtI2"},
    [219] = {1, "GtI4"},
    [220] = {1, "GtR4"},
    [221] = {1, "GtCy"},
    [222] = {1, "GtCyR8"},
    [223] = {1, "GeI2"},
    [224] = {1, "GeI4"},
    [225] = {1, "GeR8"},
    [226] = {1, "GeCy"},
    [227] = {1, "GeCyR8"},
    [228] = {1, "CI2I4"},
    [229] = {1, "CI2R8"},
    [230] = {1, "CI2Cy"},
    [231] = {1, "CI4UI1"},
    [232] = {1, "CI4R8"},
    [233] = {1, "CI4Cy"},
    [234] = {1, "CR4R4"},
    [235] = {1, "CR8I2"},
    [236] = {1, "CR8I4"},
    [237] = {1, "CR8R8"},
    [238] = {1, "CR8Cy"},
    [239] = {1, "CCyI2"},
    [240] = {1, "CCyI4"},
    [241] = {1, "CCyR4"},
    [242] = {1, "CDateR8"},
    [243] = {3, "LitI2"},
    [244] = {2, "LitI2_Byte"},
    [245] = {5, "LitI4"},
    [246] = {9, "LitCy"},
    [247] = {5, "LitCy4"},
    [248] = {3, "LitI2FP"},
    [249] = {5, "LitR4FP"},
    [250] = {9, "LitDate"},
    [251] = {1, "Lead0"},
    [252] = {1, "Lead1"},
    [253] = {1, "Lead2"},
    [254] = {1, "Lead3"},
    [255] = {1, "Lead4"},
};
vb6_insns_t vb6_table_fb[256] = {
    [1] = {1, "ImpUI1"},
    [2] = {1, "ImpI4"},
    [7] = {3, "ImpVar"},
    [9] = {1, "EqvUI1"},
    [10] = {1, "EqvI4"},
    [15] = {3, "EqvVar"},
    [17] = {1, "XorI4"},
    [23] = {3, "XorVar"},
    [25] = {1, "OrI2"},
    [31] = {3, "OrVar"},
    [33] = {1, "AndUI1"},
    [39] = {3, "AndVar"},
    [41] = {1, "EqI2"},
    [42] = {1, "EqI2"},
    [43] = {1, "EqI4"},
    [44] = {1, "EqR8"},
    [45] = {1, "EqR8"},
    [46] = {1, "EqCy"},
    [47] = {3, "EqVar"},
    [48] = {1, "EqStr"},
    [49] = {3, "EqTextVar"},
    [50] = {1, "EqTextStr"},
    [51] = {1, "EqVarBool"},
    [52] = {1, "EqTextVarBool"},
    [53] = {1, "EqCyR8"},
    [54] = {1, "NeUI1"},
    [55] = {1, "NeUI1"},
    [57] = {1, "NeR4"},
    [58] = {1, "NeR4"},
    [59] = {1, "NeCy"},
    [60] = {3, "NeVar"},
    [61] = {1, "NeStr"},
    [62] = {3, "NeTextVar"},
    [63] = {1, "NeTextStr"},
    [64] = {1, "NeVarBool"},
    [65] = {1, "NeTextVarBool"},
    [66] = {1, "NeCyR8"},
    [67] = {1, "LeUI1"},
    [68] = {1, "LeI2"},
    [70] = {1, "LeR4"},
    [71] = {1, "LeR4"},
    [72] = {1, "LeCy"},
    [73] = {3, "LeVar"},
    [74] = {1, "LeStr"},
    [75] = {3, "LeTextVar"},
    [76] = {1, "LeTextStr"},
    [77] = {1, "LeVarBool"},
    [78] = {1, "LeTextVarBool"},
    [79] = {1, "LeCyR8"},
    [80] = {1, "GeUI1"},
    [81] = {1, "GeI2"},
    [83] = {1, "GeR4"},
    [84] = {1, "GeR4"},
    [85] = {1, "GeCy"},
    [86] = {3, "GeVar"},
    [87] = {1, "GeStr"},
    [88] = {3, "GeTextVar"},
    [89] = {1, "GeTextStr"},
    [90] = {1, "GeVarBool"},
    [91] = {1, "GeTextVarBool"},
    [92] = {1, "GeCyR8"},
    [93] = {1, "LtUI1"},
    [94] = {1, "LtI2"},
    [95] = {1, "LtI4"},
    [96] = {1, "LtR4"},
    [97] = {1, "LtR4"},
    [98] = {1, "LtCy"},
    [99] = {3, "LtVar"},
    [100] = {1, "LtStr"},
    [101] = {3, "LtTextVar"},
    [102] = {1, "LtTextStr"},
    [103] = {1, "LtVarBool"},
    [104] = {1, "LtTextVarBool"},
    [105] = {1, "LtCyR8"},
    [106] = {1, "GtUI1"},
    [107] = {1, "GtI2"},
    [109] = {1, "GtR4"},
    [110] = {1, "GtR4"},
    [111] = {1, "GtCy"},
    [112] = {3, "GtVar"},
    [113] = {1, "GtStr"},
    [114] = {3, "GtTextVar"},
    [115] = {1, "GtTextStr"},
    [116] = {1, "GtVarBool"},
    [117] = {1, "GtTextVarBool"},
    [118] = {1, "GtCyR8"},
    [125] = {3, "LikeVar"},
    [126] = {1, "LikeStr"},
    [127] = {3, "LikeTextVar"},
    [128] = {1, "LikeTextStr"},
    [129] = {1, "LikeVarBool"},
    [130] = {1, "LikeTextVarBool"},
    [132] = {1, "BetweenUI1"},
    [133] = {1, "BetweenI2"},
    [134] = {1, "BetweenI4"},
    [135] = {1, "BetweenR4"},
    [136] = {1, "BetweenR4"},
    [137] = {1, "BetweenCy"},
    [138] = {1, "BetweenVar"},
    [139] = {1, "BetweenStr"},
    [140] = {1, "BetweenTextVar"},
    [141] = {1, "BetweenTextStr"},
    [142] = {1, "AddUI1"},
    [143] = {1, "AddI2"},
    [145] = {1, "AddR4"},
    [146] = {1, "AddR4"},
    [147] = {1, "AddCy"},
    [148] = {3, "AddVar"},
    [150] = {1, "SubUI1"},
    [151] = {1, "SubI2"},
    [152] = {1, "SubI4"},
    [153] = {1, "SubR4"},
    [154] = {1, "SubR4"},
    [155] = {1, "SubCy"},
    [156] = {3, "SubVar"},
    [158] = {1, "ModUI1"},
    [159] = {1, "ModI2"},
    [160] = {1, "ModI4"},
    [164] = {3, "ModVar"},
    [166] = {1, "IDvUI1"},
    [167] = {1, "IDvI2"},
    [168] = {1, "IDvI4"},
    [172] = {3, "IDvVar"},
    [173] = {0, "Unknow"},
    [174] = {1, "MulUI1"},
    [175] = {1, "MulI2"},
    [176] = {1, "MulI4"},
    [177] = {1, "MulR4"},
    [178] = {1, "MulR4"},
    [179] = {1, "MulCy"},
    [180] = {3, "MulVar"},
    [188] = {3, "DivVar"},
    [190] = {1, "NotUI1"},
    [191] = {1, "NotI4"},
    [192] = {1, "NotI4"},
    [196] = {3, "NotVar"},
    [199] = {1, "UMiI2"},
    [200] = {1, "UMiI2"},
    [201] = {1, "UMiR4"},
    [202] = {1, "UMiR4"},
    [203] = {1, "UMiCy"},
    [204] = {3, "UMiVar"},
    [206] = {3, "PwrVar"},
    [207] = {1, "PwrR8R8"},
    [208] = {1, "PwrR8I2"},
    [209] = {1, "MulCyI2"},
    [210] = {1, "Is"},
    [212] = {1, "FnAbsI2"},
    [213] = {1, "FnAbsI4"},
    [214] = {1, "FnAbsR4"},
    [215] = {1, "FnAbsR4"},
    [216] = {1, "FnAbsCy"},
    [217] = {3, "FnAbsVar"},
    [222] = {1, "FnFixR8"},
    [223] = {1, "FnFixR8"},
    [224] = {1, "FnFixCy"},
    [225] = {3, "FnFixVar"},
    [230] = {1, "FnIntR8"},
    [231] = {1, "FnIntR8"},
    [232] = {1, "FnIntCy"},
    [233] = {3, "FnIntVar"},
    [235] = {3, "FnLenVar"},
    [236] = {1, "FnLenStr"},
    [237] = {3, "FnLenBVar"},
    [238] = {1, "FnLenBStr"},
    [239] = {3, "ConcatVar"},
    [242] = {1, "FnSgnUI1"},
    [243] = {1, "FnSgnUI1"},
    [244] = {1, "FnSgnI4"},
    [245] = {1, "FnSgnR8"},
    [246] = {1, "FnSgnR4"},
    [247] = {1, "FnSgnCy"},
    [250] = {1, "SeekFile"},
    [251] = {1, "NameFile"},
    [252] = {1, "CStrI2"},
    [253] = {1, "CStrUI1"},
    [254] = {1, "CStrI4"},
    [255] = {1, "CStrR4"},
};
vb6_insns_t vb6_table_fc[256] = {
    [0] = {1, "CStrR8"},
    [1] = {1, "CStrCy"},
    [2] = {1, "CStrVar"},
    [6] = {1, "CCyI4"},
    [7] = {1, "CCyR4"},
    [8] = {1, "CCyR4"},
    [10] = {1, "CCyVar"},
    [11] = {1, "CCyStr"},
    [13] = {1, "CUI1I2"},
    [14] = {1, "CUI1I4"},
    [15] = {1, "CUI1R4"},
    [16] = {1, "CUI1R4"},
    [17] = {1, "CUI1Cy"},
    [18] = {1, "CUI1Var"},
    [19] = {1, "CUI1Str"},
    [20] = {1, "CI2UI1"},
    [22] = {1, "CI2I4"},
    [23] = {1, "CI2R8"},
    [24] = {1, "CI2R8"},
    [25] = {1, "CI2Cy"},
    [26] = {1, "CI2Var"},
    [27] = {1, "CI2Str"},
    [28] = {1, "CI4UI1"},
    [29] = {1, "CI4UI1"},
    [31] = {1, "CI4R8"},
    [32] = {1, "CI4R8"},
    [33] = {1, "CI4Cy"},
    [34] = {1, "CI4Var"},
    [35] = {1, "CI4Str"},
    [36] = {1, "FnCSngI2"},
    [37] = {1, "FnCSngI2"},
    [38] = {1, "CR4I4"},
    [39] = {1, "CR4R8"},
    [40] = {1, "CR4R8"},
    [41] = {1, "CR8Cy"},
    [42] = {1, "CR8Var"},
    [43] = {1, "CR4Str"},
    [44] = {1, "FnCSngI2"},
    [45] = {1, "FnCSngI2"},
    [46] = {1, "CR4I4"},
    [47] = {1, "CR8R4"},
    [48] = {1, "CR8R4"},
    [49] = {1, "CR8Cy"},
    [50] = {1, "CR8Var"},
    [51] = {1, "CR8Str"},
    [52] = {1, "CAdVar"},
    [53] = {1, "CRefVarAry"},
    [56] = {1, "CUI1Bool"},
    [57] = {1, "FnCDblCy"},
    [58] = {1, "FnCDblR8"},
    [59] = {1, "FnCDblR8"},
    [60] = {1, "FnCSngI2"},
    [61] = {1, "FnCSngI2"},
    [62] = {1, "FnCSngI4"},
    [63] = {1, "CSng"},
    [64] = {1, "CSng"},
    [65] = {1, "FnCSngCy"},
    [66] = {1, "FnCSngVar"},
    [67] = {1, "FnCSngStr"},
    [68] = {1, "FnCByteVar"},
    [69] = {1, "FnCIntVar"},
    [70] = {1, "FnCLngVar"},
    [71] = {1, "CDateR8"},
    [72] = {1, "FnCDblVar"},
    [73] = {1, "FnCCurVar"},
    [75] = {1, "FnCStrVar"},
    [77] = {1, "FnCBoolVar"},
    [78] = {1, "FnCDateVar"},
    [79] = {1, "FnCDateVar"},
    [80] = {1, "CBoolUI1"},
    [81] = {1, "CBoolUI1"},
    [82] = {1, "CBoolI4"},
    [83] = {1, "CBoolR4"},
    [84] = {1, "CBoolR4"},
    [85] = {1, "CBoolCy"},
    [86] = {1, "CBoolVar"},
    [87] = {1, "CBoolStr"},
    [88] = {1, "CStr2Uni"},
    [89] = {1, "CStrAry2Uni"},
    [90] = {1, "CStr2Ansi"},
    [91] = {1, "CStrAry2Ansi"},
    [92] = {1, "PopAdLd4"},
    [93] = {3, "CRecAnsi2Uni"},
    [94] = {3, "CRecUni2Ansi"},
    [95] = {3, "CStr2Vec"},
    [96] = {3, "CVar2Vec"},
    [97] = {5, "CVec2Var"},
    [98] = {1, "GetLastError"},
    [99] = {1, "LitNothing"},
    [100] = {3, "LitVar_NULL"},
    [101] = {3, "LitVar_TRUE"},
    [102] = {3, "LitVar_FALSE"},
    [103] = {3, "LitVar_Empty"},
    [106] = {5, "ThisVCallHresult"},
    [111] = {3, "CheckTypeVar"},
    [113] = {1, "CUnkVar"},
    [114] = {3, "CVarUnk"},
    [115] = {1, "LdPrUnkVar"},
    [116] = {9, "FLdLateIdUnkVar"},
    [117] = {1, "GetRec3"},
    [118] = {1, "GetRec4"},
    [119] = {1, "PutRec3"},
    [120] = {1, "PutRec4"},
    [121] = {-1, "GetRecOwner3"},
    [122] = {-1, "GetRecOwner4"},
    [123] = {-1, "PutRecOwner3"},
    [124] = {-1, "PutRecOwner4"},
    [125] = {1, "Input"},
    [126] = {1, "InputDone"},
    [127] = {1, "InputItemUI1"},
    [128] = {1, "InputItemI2"},
    [129] = {1, "InputItemI4"},
    [130] = {1, "InputItemR4"},
    [131] = {1, "InputItemR8"},
    [132] = {1, "InputItemCy"},
    [133] = {1, "InputItemVar"},
    [134] = {1, "InputItemStr"},
    [135] = {1, "InputItemBool"},
    [136] = {1, "InputItemDate"},
    [137] = {1, "PopFPR4"},
    [138] = {1, "PopFPR8"},
    [139] = {1, "PopAd"},
    [141] = {3, "AryLdPr"},
    [142] = {3, "AryLdRf"},
    [143] = {5, "ParmAry1St"},
    [144] = {1, "Ary1LdUI1"},
    [145] = {1, "Ary1LdI2"},
    [148] = {1, "Ary1LdR8"},
    [149] = {1, "Ary1LdR8"},
    [150] = {1, "Ary1LdRfVar"},
    [153] = {1, "Ary1LdFPR4"},
    [154] = {1, "Ary1LdFPR8"},
    [155] = {1, "Ary1LdPr"},
    [156] = {1, "Ary1LdRf"},
    [157] = {1, "Ary1LdVar"},
    [160] = {1, "Ary1StUI1"},
    [161] = {1, "Ary1StI2"},
    [162] = {1, "Ary1StR4"},
    [163] = {1, "Ary1StR4"},
    [164] = {1, "Ary1StCy"},
    [165] = {1, "Ary1StCy"},
    [166] = {1, "Ary1StVar"},
    [167] = {1, "Ary1StStr"},
    [168] = {1, "Ary1StAd"},
    [169] = {1, "Ary1StFPR4"},
    [170] = {1, "Ary1StFPR8"},
    [171] = {1, "Ary1StVarAd"},
    [172] = {1, "Ary1StVarAdFunc"},
    [173] = {1, "Ary1StVarUnk"},
    [174] = {1, "Ary1StVarUnkFunc"},
    [175] = {1, "Ary1StAdFunc"},
    [176] = {1, "Ary1StVarCopy"},
    [177] = {1, "Ary1StStrCopy"},
    [178] = {3, "Ary1LdRfVarg"},
    [179] = {1, "Ary1LdVarg"},
    [180] = {1, "Ary1LdRfVargParam"},
    [181] = {1, "Ary1StVarg"},
    [182] = {1, "Ary1StVargCopy"},
    [183] = {1, "Ary1StVargAd"},
    [184] = {1, "Ary1StVargAdFunc"},
    [185] = {1, "Ary1StVargUnk"},
    [186] = {1, "Ary1StVargUnkFunc"},
    [187] = {1, "MidVar"},
    [188] = {3, "MidBStr"},
    [189] = {1, "MidBVar"},
    [190] = {3, "MidBStrB"},
    [191] = {1, "LineInputVar"},
    [192] = {1, "LineInputStr"},
    [193] = {1, "Error"},
    [194] = {1, "Stop"},
    [195] = {1, "Erase"},
    [196] = {2, "LargeBos"},
    [200] = {1, "End"},
    [201] = {1, "Return"},
    [202] = {1, "FnLBound"},
    [203] = {1, "FnUBound"},
    [204] = {1, "ExitProcUI1"},
    [205] = {1, "ExitProcI2"},
    [206] = {1, "ExitProcStr"},
    [207] = {1, "ExitProcR4"},
    [208] = {1, "ExitProcR8"},
    [209] = {1, "ExitProcCy"},
    [211] = {1, "ExitProcStr"},
    [212] = {1, "ExitProcStr"},
    [213] = {1, "ExitProcStr"},
    [224] = {3, "FLdUI1"},
    [225] = {3, "FLdI2"},
    [226] = {3, "FLdR4"},
    [227] = {3, "FLdR4"},
    [228] = {3, "FLdR8"},
    [229] = {3, "FLdR8"},
    [231] = {3, "FLdR4"},
    [232] = {3, "FLdR4"},
    [233] = {3, "FLdFPR4"},
    [237] = {3, "FLdVar"},
    [240] = {3, "FStUI1"},
    [246] = {3, "FStVar"},
    [248] = {3, "FStAd"},
    [251] = {3, "FStVarAd"},
    [252] = {3, "FStVarAdFunc"},
    [253] = {3, "FStVarUnk"},
    [254] = {3, "FStVarUnkFunc"},
};
vb6_insns_t vb6_table_fd[256] = {
    [0] = {3, "FStVarCopy"},
    [2] = {1, "HardType"},
    [5] = {3, "BranchFVar"},
    [6] = {3, "BranchFVarFree"},
    [8] = {3, "BranchTVar"},
    [9] = {3, "BranchTVarFree"},
    [10] = {3, "Gosub"},
    [11] = {3, "OnErrorGoto"},
    [12] = {3, "Resume"},
    [13] = {3, "AryLock"},
    [14] = {3, "AryUnlock"},
    [15] = {3, "AryDescTemp"},
    [16] = {3, "ILdUI1"},
    [18] = {3, "ILdAd"},
    [19] = {3, "ILdAd"},
    [20] = {3, "ILdR8"},
    [21] = {3, "ILdR8"},
    [22] = {5, "ILdRfDarg"},
    [23] = {3, "ILdAd"},
    [24] = {3, "ILdAd"},
    [25] = {3, "ILdFPR4"},
    [26] = {3, "ILdFPR8"},
    [27] = {3, "ILdPr"},
    [28] = {3, "FLdR4"},
    [29] = {3, "ILdDarg"},
    [32] = {3, "IStUI1"},
    [33] = {3, "IStI2"},
    [34] = {3, "IStI4"},
    [35] = {3, "IStI4"},
    [36] = {3, "IStR8"},
    [37] = {3, "IStR8"},
    [38] = {3, "IStDarg"},
    [39] = {3, "IStStr"},
    [40] = {3, "IStAd"},
    [41] = {3, "IStFPR4"},
    [42] = {3, "IStFPR8"},
    [43] = {3, "IStDargAd"},
    [44] = {3, "IStDargAdFunc"},
    [45] = {3, "IStDargUnk"},
    [46] = {3, "IStDargUnkFunc"},
    [47] = {3, "IStAdFunc"},
    [48] = {3, "IStDargCopy"},
    [49] = {3, "IStStrCopy"},
    [50] = {1, "PrintChan"},
    [51] = {1, "WriteChan"},
    [52] = {1, "PrintComma"},
    [53] = {1, "PrintEos"},
    [54] = {1, "PrintNL"},
    [55] = {1, "PrintItemComma"},
    [56] = {1, "PrintItemSemi"},
    [57] = {1, "PrintItemNL"},
    [58] = {3, "PrintObj"},
    [59] = {1, "PrintSpc"},
    [60] = {1, "PrintTab"},
    [61] = {1, "Close"},
    [62] = {1, "CloseAll"},
    [64] = {3, "IWMemLdUI1"},
    [65] = {3, "IWMemLdI2"},
    [66] = {3, "IWMemLdI4"},
    [67] = {3, "IWMemLdI4"},
    [68] = {3, "IWMemLdCy"},
    [69] = {3, "IWMemLdCy"},
    [70] = {5, "IWMemLdRfDarg"},
    [71] = {3, "IWMemLdI4"},
    [72] = {3, "IWMemLdI4"},
    [73] = {3, "IWMemLdFPR4"},
    [74] = {3, "IWMemLdFPR8"},
    [75] = {3, "IWMemLdPr"},
    [76] = {3, "IWMemLdRf"},
    [77] = {3, "IWMemLdDarg"},
    [80] = {3, "IWMemStUI1"},
    [81] = {3, "IWMemStI2"},
    [82] = {3, "IWMemStR4"},
    [83] = {3, "IWMemStR4"},
    [84] = {3, "IWMemStCy"},
    [85] = {3, "IWMemStCy"},
    [86] = {3, "IWMemStDarg"},
    [87] = {3, "IWMemStStr"},
    [88] = {3, "IWMemStAd"},
    [89] = {3, "IWMemStFPR4"},
    [90] = {3, "IWMemStFPR8"},
    [91] = {3, "IWMemStDargAd"},
    [92] = {3, "IWMemStDargAdFunc"},
    [93] = {3, "IWMemStDargUnk"},
    [94] = {3, "IWMemStDargUnkFunc"},
    [95] = {3, "IWMemStAdFunc"},
    [96] = {3, "IWMemStDargCopy"},
    [97] = {3, "IWMemStStrCopy"},
    [99] = {3, "FStVarNoPop"},
    [100] = {3, "FStStrNoPop"},
    [103] = {3, "CVarUI1"},
    [104] = {3, "CVarI2"},
    [105] = {3, "CVarI4"},
    [106] = {3, "CVarR4"},
    [107] = {3, "CVarR8"},
    [108] = {3, "CVarCy"},
    [110] = {3, "CVarStr"},
    [111] = {3, "CVarAd"},
    [112] = {3, "MemLdUI1h%"},
    [113] = {3, "MemLdI2"},
    [114] = {3, "MemLdR4"},
    [115] = {3, "MemLdR4"},
    [116] = {3, "MemLdR8"},
    [117] = {3, "MemLdR8"},
    [118] = {3, "MemLdRfVar"},
    [119] = {3, "MemLdR4"},
    [120] = {3, "MemLdR4"},
    [121] = {3, "MemLdFPR4"},
    [122] = {3, "MemLdFPR8"},
    [123] = {3, "MemLdPr"},
    [124] = {3, "MemLdRfVar"},
    [125] = {3, "MemLdVar"},
    [128] = {3, "MemStUI1"},
    [129] = {3, "MemStI2"},
    [130] = {3, "MemStR4"},
    [131] = {3, "MemStR4"},
    [132] = {3, "MemStCy"},
    [133] = {3, "MemStCy"},
    [134] = {3, "MemStVar"},
    [135] = {3, "MemStStr"},
    [136] = {3, "MemStAd"},
    [137] = {3, "MemStFPR4"},
    [138] = {3, "MemStFPR8"},
    [139] = {3, "MemStVarAd"},
    [140] = {3, "MemStVarAdFunc"},
    [141] = {3, "MemStVarUnk"},
    [142] = {3, "MemStVarUnkFunc"},
    [143] = {3, "MemStAdFunc"},
    [144] = {3, "MemStVarCopy"},
    [145] = {3, "MemStStrCopy"},
    [147] = {3, "CDargRef"},
    [148] = {5, "CVarRef"},
    [149] = {3, "ExitProcCb"},
    [150] = {3, "ExitProcCbStack"},
    [156] = {3, "FStAdNoPop"},
    [159] = {1, "LdPrVar"},
    [160] = {3, "ImpAdLdUI1"},
    [161] = {3, "ImpAdLdI2"},
    [162] = {3, "ImpAdLdStr"},
    [163] = {3, "ImpAdLdStr"},
    [164] = {3, "ImpAdLdCy"},
    [165] = {3, "ImpAdLdCy"},
    [167] = {3, "ImpAdLdStr"},
    [168] = {3, "ImpAdLdStr"},
    [169] = {3, "ImpAdLdFPR4"},
    [170] = {3, "ImpAdLdFPR8"},
    [171] = {3, "ImpAdLdPr"},
    [173] = {3, "ImpAdLdVar"},
    [176] = {3, "ImpAdStUI1"},
    [177] = {3, "ImpAdStI2"},
    [178] = {3, "ImpAdStR4"},
    [179] = {3, "ImpAdStR4"},
    [180] = {3, "ImpAdStR8"},
    [181] = {3, "ImpAdStR8"},
    [182] = {3, "ImpAdStVar"},
    [183] = {3, "ImpAdStStr"},
    [184] = {3, "ImpAdStAd"},
    [185] = {3, "ImpAdStFPR4"},
    [186] = {3, "ImpAdStFPR8"},
    [187] = {3, "ImpAdStVarAd"},
    [188] = {3, "ImpAdStVarAdFunc"},
    [189] = {3, "ImpAdStVarUnk"},
    [190] = {3, "ImpAdStVarUnkFunc"},
    [191] = {3, "ImpAdStAdFunc"},
    [192] = {3, "ImpAdStVarCopy"},
    [193] = {3, "ImpAdStStrCopy"},
    [194] = {3, "PopTmpLdAd1"},
    [195] = {3, "PopTmpLdAd2"},
    [196] = {3, "PopTmpLdAdStr"},
    [197] = {3, "PopTmpLdAd8"},
    [198] = {3, "PopTmpLdAdVar"},
    [199] = {3, "PopTmpLdAdStr"},
    [200] = {3, "PopTmpLdAdFPR4"},
    [201] = {3, "PopTmpLdAdFPR8"},
    [202] = {3, "CopyBytes"},
    [203] = {5, "ExitForCollObj"},
    [204] = {5, "ExitForCollObj"},
    [205] = {5, "ExitForCollObj"},
    [206] = {5, "ExitForAryVar"},
    [207] = {5, "ExitForVar"},
    [208] = {5, "FMemLdUI1"},
    [209] = {5, "FMemLdI2"},
    [210] = {5, "FMemLdR4"},
    [211] = {5, "FMemLdR4"},
    [212] = {5, "FMemLdR8"},
    [213] = {5, "FMemLdR8"},
    [214] = {5, "FMemLdRf"},
    [215] = {5, "FMemLdR4"},
    [216] = {5, "FMemLdR4"},
    [217] = {5, "FMemLdFPR4"},
    [218] = {5, "FMemLdFPR8"},
    [219] = {5, "FMemLdPr"},
    [220] = {5, "FMemLdRf"},
    [221] = {5, "FMemLdVar"},
    [224] = {5, "FMemStUI1"},
    [225] = {5, "FMemStI2"},
    [226] = {5, "FMemStR4"},
    [227] = {5, "FMemStR4"},
    [228] = {5, "FMemStR8"},
    [229] = {5, "FMemStR8"},
    [230] = {5, "FMemStVar"},
    [231] = {5, "FMemStStr"},
    [232] = {5, "FMemStAd"},
    [233] = {5, "FMemStFPR4"},
    [234] = {5, "FMemStFPR8"},
    [235] = {5, "FMemStVarAd"},
    [236] = {5, "FMemStVarAdFunc"},
    [237] = {5, "FMemStVarUnk"},
    [238] = {5, "FMemStVarUnkFunc"},
    [239] = {5, "FMemStAdFunc"},
    [240] = {5, "FMemStVarCopy"},
    [241] = {5, "FMemStStrCopy"},
    [242] = {3, "CastAd"},
    [243] = {3, "CastAdVar"},
    [244] = {3, "New"},
    [245] = {3, "NewIfNullRf"},
    [246] = {3, "NewIfNullAd"},
    [248] = {3, "CVarBoolI2"},
    [249] = {3, "CVarDateVar"},
    [250] = {3, "CVarErrI4"},
    [251] = {3, "CVarDate"},
    [252] = {3, "CVarAryVarg"},
    [253] = {1, "CStrVarTmp"},
    [254] = {3, "CStrVarVal"},
    [255] = {5, "DestructOFrame"},
};
vb6_insns_t vb6_table_fe[256] = {
    [0] = {3, "ThisVCallUI1"},
    [1] = {3, "ThisVCallI2"},
    [2] = {3, "ThisVCallI2"},
    [3] = {3, "ThisVCallR4"},
    [4] = {3, "ThisVCallR8"},
    [5] = {3, "ThisVCallCy"},
    [7] = {3, "ThisVCallI2"},
    [8] = {3, "ThisVCallI2"},
    [9] = {3, "ThisVCallHidden"},
    [10] = {3, "ThisVCallHidden"},
    [12] = {3, "ThisVCallHidden"},
    [13] = {5, "ThisVCallCbFrame"},
    [14] = {3, "StLsetFixStr"},
    [15] = {3, "StFixedStrFree"},
    [16] = {3, "VCallUI1"},
    [17] = {3, "VCallStr"},
    [18] = {3, "VCallStr"},
    [19] = {3, "VCallR4"},
    [20] = {3, "VCallR8"},
    [21] = {3, "VCallCy"},
    [23] = {3, "VCallStr"},
    [24] = {3, "VCallStr"},
    [25] = {3, "VCallFPR8"},
    [26] = {3, "VCallFPR8"},
    [28] = {3, "VCallFPR8"},
    [29] = {5, "VCallCbFrame"},
    [30] = {3, "StFixedStrR"},
    [31] = {3, "StFixedStrRFree"},
    [32] = {5, "ImpAdCallUI1"},
    [33] = {5, "ImpAdCallI4"},
    [35] = {5, "ImpAdCallR4"},
    [36] = {5, "ImpAdCallR8"},
    [37] = {5, "ImpAdCallCy"},
    [39] = {5, "ImpAdCallI4"},
    [45] = {9, "ImpAdCallCbFrame"},
    [46] = {3, "LdStkRf"},
    [47] = {3, "LdFrameRf"},
    [61] = {5, "LitVarUI1"},
    [77] = {1, "SetVarVar"},
    [78] = {1, "SetVarVarFunc"},
    [79] = {5, "ImpAdCallHresult"},
    [93] = {3, "OpenFile"},
    [94] = {3, "LockFile"},
    [96] = {3, "EraseDestruct"},
    [97] = {3, "LdFixedStr"},
    [98] = {5, "ForUI1"},
    [99] = {5, "ForI2"},
    [100] = {5, "ForI4"},
    [101] = {5, "ForR4"},
    [102] = {5, "ForR8"},
    [103] = {5, "ForCy"},
    [104] = {5, "ForVar"},
    [106] = {5, "ForStepUI1"},
    [107] = {5, "ForStepI2"},
    [108] = {5, "ForStepI4"},
    [109] = {5, "ForStepR4"},
    [110] = {5, "ForStepR8"},
    [111] = {5, "ForStepCy"},
    [112] = {5, "ForStepVar"},
    [114] = {5, "ForEachCollVar"},
    [115] = {5, "NextEachCollVar"},
    [116] = {5, "ForEachCollAd"},
    [117] = {5, "NextEachCollAd"},
    [118] = {7, "ForEachAryVar"},
    [119] = {7, "NextEachAryVar"},
    [120] = {5, "NextUI1"},
    [124] = {5, "NextR8"},
    [126] = {5, "NextStepVar"},
    [128] = {5, "NextStepUI1"},
    [130] = {5, "NextStepI4"},
    [131] = {5, "NextStepR4"},
    [136] = {7, "ForEachCollObj"},
    [137] = {5, "ForEachVar"},
    [138] = {5, "ForEachVarFree"},
    [139] = {7, "NextEachCollObj"},
    [140] = {9, "NextEachVar"},
    [141] = {3, "CheckType"},
    [142] = {9, "Redim"},
    [143] = {9, "RedimPreserve"},
    [144] = {5, "RedimVar"},
    [145] = {5, "RedimPreserveVar"},
    [146] = {5, "FDupVar"},
    [147] = {5, "FDupStr"},
    [149] = {7, "OnGosub"},
    [150] = {7, "OnGoto"},
    [151] = {1, "AddRef"},
    [152] = {5, "LateMemCall"},
    [153] = {5, "LateMemLdVar"},
    [154] = {7, "LateMemCallLdVar"},
    [155] = {3, "LateMemSt"},
    [156] = {5, "LateMemCallSt"},
    [157] = {5, "LateMemStAd"},
    [158] = {4, "ExitProcFrameCb"},
    [159] = {4, "ExitProcFrameCbStack"},
    [160] = {7, "LateIdCall"},
    [161] = {7, "LateIdLdVar"},
    [162] = {9, "LateIdCallLdVar"},
    [163] = {5, "LateIdSt"},
    [164] = {7, "LateIdCallSt"},
    [165] = {7, "LateIdStAd"},
    [166] = {7, "LateMemNamedCall"},
    [167] = {9, "LateMemNamedCallLdVar"},
    [168] = {7, "LateMemNamedCallSt"},
    [169] = {7, "LateMemNamedStAd"},
    [170] = {9, "LateIdNamedCall"},
    [171] = {17, "LateIdNamedCallLdVar"},
    [172] = {9, "LateIdNamedCallSt"},
    [173] = {9, "LateIdNamedStAd"},
    [174] = {5, "VarIndexLdVar"},
    [175] = {5, "VarIndexLdRfVar"},
    [176] = {3, "VarIndexSt"},
    [177] = {3, "VarIndexStAd"},
    [182] = {3, "LitI2FP"},
    [183] = {5, "LitCy4"},
    [186] = {5, "LitR4FP"},
    [187] = {9, "LitR8"},
    [188] = {9, "LitR8"},
    [189] = {9, "LitR8FP"},
    [190] = {9, "LitR8FP"},
    [193] = {7, "LitVarI4"},
    [194] = {7, "LitVarR4"},
    [195] = {17, "LitVarCy"},
    [196] = {17, "LitVarR8"},
    [197] = {17, "LitVarDate"},
    [199] = {1, "CStrBool"},
    [200] = {1, "CStrDate"},
    [201] = {1, "CDateStr"},
    [204] = {1, "FreeStrNoPop"},
    [205] = {1, "FreeVarNoPop"},
    [206] = {1, "FreeAdNoPop"},
    [207] = {1, "EraseNoPop"},
    [208] = {3, "WMemLdUI1"},
    [209] = {3, "WMemLdI2"},
    [210] = {3, "WMemLdStr"},
    [211] = {3, "WMemLdStr"},
    [212] = {3, "WMemLdCy"},
    [213] = {3, "WMemLdCy"},
    [214] = {3, "WMemLdRfVar"},
    [215] = {3, "WMemLdStr"},
    [216] = {3, "WMemLdStr"},
    [217] = {3, "WMemLdFPR4"},
    [218] = {3, "WMemLdFPR8"},
    [219] = {3, "IWMemLdPr"},
    [220] = {3, "WMemLdRfVar"},
    [221] = {3, "WMemLdVar"},
    [224] = {3, "WMemStUI1"},
    [225] = {3, "WMemStI2"},
    [226] = {3, "WMemStR4"},
    [227] = {3, "WMemStR4"},
    [228] = {3, "WMemStR8"},
    [229] = {3, "WMemStR8"},
    [230] = {3, "WMemStVar"},
    [231] = {3, "WMemStStr"},
    [232] = {3, "WMemStAd"},
    [233] = {3, "WMemStFPR4"},
    [234] = {3, "WMemStFPR8"},
    [235] = {3, "WMemStVarAd"},
    [236] = {3, "WMemStVarAdFunc"},
    [237] = {3, "WMemStVarUnk"},
    [238] = {3, "WMemStVarUnkFunc"},
    [239] = {3, "WMemStAdFunc"},
    [240] = {3, "WMemStVarCopy"},
    [241] = {3, "WMemStStrCopy"},
    [242] = {7, "VarIndexLdRfVarLock"},
    [245] = {3, "AssignRecord"},
    [246] = {5, "DestructAnsiOFrame"},
    [247] = {3, "FStVarZero"},
    [249] = {1, "VerifyVarObj"},
    [250] = {1, "VerifyPVarObj"},
    [251] = {1, "FnInStrB4"},
    [252] = {3, "FnInStrB4Var"},
    [253] = {1, "FnInStr4"},
    [254] = {3, "FnInStr4Var"},
    [255] = {1, "FnStrComp3"},
};
vb6_insns_t vb6_table_ff[256] = {
    [0] = {3, "FnStrComp3Var"},
    [1] = {1, "StAryMove"},
    [2] = {1, "StAryCopy"},
    [3] = {3, "StAryRecMove"},
    [4] = {3, "StAryRecCopy"},
    [6] = {5, "AryInRecLdPr"},
    [7] = {5, "AryInRecLdRf"},
    [8] = {1, "CExtInstUnk"},
    [9] = {3, "IStVarCopyObj"},
    [10] = {1, "ArrayRebase1Var"},
    [11] = {1, "Assert"},
    [12] = {7, "RaiseEvent"},
    [13] = {5, "PrintObject"},
    [14] = {5, "PrintFile"},
    [15] = {5, "WriteFile"},
    [16] = {5, "InputFile"},
    [18] = {1, "GetRecFxStr3"},
    [19] = {1, "GetRecFxStr4"},
    [20] = {1, "PutRecFxStr3"},
    [21] = {1, "PutRecFxStr4"},
    [22] = {3, "GetRecOwn3"},
    [23] = {3, "GetRecOwn4"},
    [24] = {3, "PutRecOwn3"},
    [25] = {3, "PutRecOwn4"},
    [26] = {2, "LitI2_Byte"},
    [27] = {1, "CBoolVarNull"},
    [28] = {2, "LargeBos"},
    [29] = {1, "Bos"},
    [30] = {5, "ImpAdCallNonVirt"},
    [42] = {3, "DestructRecord"},
    [43] = {3, "VCallFPR8"},
    [44] = {3, "ThisVCallHidden"},
    [45] = {1, "ZeroRetVal"},
    [46] = {1, "ZeroRetValVar"},
    [47] = {5, "ExitProcCbHresult"},
    [48] = {7, "ExitProcFrameCbHresult"},
    [49] = {3, "EraseDestrKeepData"},
    [50] = {5, "CDargRefUdt"},
    [51] = {5, "CVarRefUdt"},
    [52] = {5, "CVarUdt"},
    [53] = {3, "StUdtVar"},
    [54] = {3, "StAryVar"},
    [55] = {3, "CopyBytesZero"},
    [56] = {5, "FLdZeroAry"},
    [57] = {3, "FStVarZero"},
    [58] = {7, "CVarAryUdt"},
    [59] = {7, "RedimVarUdt"},
    [60] = {7, "RedimPreserveVarUdt"},
    [61] = {5, "VarLateMemLdRfVar"},
    [62] = {6, "VarLateMemCallLdRfVar"},
    [65] = {5, "VarLateMemLdVar"},
    [66] = {7, "VarLateMemCallLdVar"},
    [67] = {3, "VarLateMemSt"},
    [68] = {5, "VarLateMemCallSt"},
    [69] = {5, "VarLateMemStAd"},
};
