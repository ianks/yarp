#include "yp_encoding.h"

typedef uint32_t unicode_codepoint_t;

#define UNICODE_ALPHA_CODEPOINTS_LENGTH 1444
unicode_codepoint_t unicode_alpha_codepoints[UNICODE_ALPHA_CODEPOINTS_LENGTH] = {
  0x0041, 0x005a,
  0x0061, 0x007a,
  0x00aa, 0x00aa,
  0x00b5, 0x00b5,
  0x00ba, 0x00ba,
  0x00c0, 0x00d6,
  0x00d8, 0x00f6,
  0x00f8, 0x02c1,
  0x02c6, 0x02d1,
  0x02e0, 0x02e4,
  0x02ec, 0x02ec,
  0x02ee, 0x02ee,
  0x0345, 0x0345,
  0x0370, 0x0374,
  0x0376, 0x0377,
  0x037a, 0x037d,
  0x037f, 0x037f,
  0x0386, 0x0386,
  0x0388, 0x038a,
  0x038c, 0x038c,
  0x038e, 0x03a1,
  0x03a3, 0x03f5,
  0x03f7, 0x0481,
  0x048a, 0x052f,
  0x0531, 0x0556,
  0x0559, 0x0559,
  0x0560, 0x0588,
  0x05b0, 0x05bd,
  0x05bf, 0x05bf,
  0x05c1, 0x05c2,
  0x05c4, 0x05c5,
  0x05c7, 0x05c7,
  0x05d0, 0x05ea,
  0x05ef, 0x05f2,
  0x0610, 0x061a,
  0x0620, 0x0657,
  0x0659, 0x065f,
  0x066e, 0x06d3,
  0x06d5, 0x06dc,
  0x06e1, 0x06e8,
  0x06ed, 0x06ef,
  0x06fa, 0x06fc,
  0x06ff, 0x06ff,
  0x0710, 0x073f,
  0x074d, 0x07b1,
  0x07ca, 0x07ea,
  0x07f4, 0x07f5,
  0x07fa, 0x07fa,
  0x0800, 0x0817,
  0x081a, 0x082c,
  0x0840, 0x0858,
  0x0860, 0x086a,
  0x0870, 0x0887,
  0x0889, 0x088e,
  0x08a0, 0x08c9,
  0x08d4, 0x08df,
  0x08e3, 0x08e9,
  0x08f0, 0x093b,
  0x093d, 0x094c,
  0x094e, 0x0950,
  0x0955, 0x0963,
  0x0971, 0x0983,
  0x0985, 0x098c,
  0x098f, 0x0990,
  0x0993, 0x09a8,
  0x09aa, 0x09b0,
  0x09b2, 0x09b2,
  0x09b6, 0x09b9,
  0x09bd, 0x09c4,
  0x09c7, 0x09c8,
  0x09cb, 0x09cc,
  0x09ce, 0x09ce,
  0x09d7, 0x09d7,
  0x09dc, 0x09dd,
  0x09df, 0x09e3,
  0x09f0, 0x09f1,
  0x09fc, 0x09fc,
  0x0a01, 0x0a03,
  0x0a05, 0x0a0a,
  0x0a0f, 0x0a10,
  0x0a13, 0x0a28,
  0x0a2a, 0x0a30,
  0x0a32, 0x0a33,
  0x0a35, 0x0a36,
  0x0a38, 0x0a39,
  0x0a3e, 0x0a42,
  0x0a47, 0x0a48,
  0x0a4b, 0x0a4c,
  0x0a51, 0x0a51,
  0x0a59, 0x0a5c,
  0x0a5e, 0x0a5e,
  0x0a70, 0x0a75,
  0x0a81, 0x0a83,
  0x0a85, 0x0a8d,
  0x0a8f, 0x0a91,
  0x0a93, 0x0aa8,
  0x0aaa, 0x0ab0,
  0x0ab2, 0x0ab3,
  0x0ab5, 0x0ab9,
  0x0abd, 0x0ac5,
  0x0ac7, 0x0ac9,
  0x0acb, 0x0acc,
  0x0ad0, 0x0ad0,
  0x0ae0, 0x0ae3,
  0x0af9, 0x0afc,
  0x0b01, 0x0b03,
  0x0b05, 0x0b0c,
  0x0b0f, 0x0b10,
  0x0b13, 0x0b28,
  0x0b2a, 0x0b30,
  0x0b32, 0x0b33,
  0x0b35, 0x0b39,
  0x0b3d, 0x0b44,
  0x0b47, 0x0b48,
  0x0b4b, 0x0b4c,
  0x0b56, 0x0b57,
  0x0b5c, 0x0b5d,
  0x0b5f, 0x0b63,
  0x0b71, 0x0b71,
  0x0b82, 0x0b83,
  0x0b85, 0x0b8a,
  0x0b8e, 0x0b90,
  0x0b92, 0x0b95,
  0x0b99, 0x0b9a,
  0x0b9c, 0x0b9c,
  0x0b9e, 0x0b9f,
  0x0ba3, 0x0ba4,
  0x0ba8, 0x0baa,
  0x0bae, 0x0bb9,
  0x0bbe, 0x0bc2,
  0x0bc6, 0x0bc8,
  0x0bca, 0x0bcc,
  0x0bd0, 0x0bd0,
  0x0bd7, 0x0bd7,
  0x0c00, 0x0c03,
  0x0c05, 0x0c0c,
  0x0c0e, 0x0c10,
  0x0c12, 0x0c28,
  0x0c2a, 0x0c39,
  0x0c3d, 0x0c44,
  0x0c46, 0x0c48,
  0x0c4a, 0x0c4c,
  0x0c55, 0x0c56,
  0x0c58, 0x0c5a,
  0x0c5d, 0x0c5d,
  0x0c60, 0x0c63,
  0x0c80, 0x0c83,
  0x0c85, 0x0c8c,
  0x0c8e, 0x0c90,
  0x0c92, 0x0ca8,
  0x0caa, 0x0cb3,
  0x0cb5, 0x0cb9,
  0x0cbd, 0x0cc4,
  0x0cc6, 0x0cc8,
  0x0cca, 0x0ccc,
  0x0cd5, 0x0cd6,
  0x0cdd, 0x0cde,
  0x0ce0, 0x0ce3,
  0x0cf1, 0x0cf2,
  0x0d00, 0x0d0c,
  0x0d0e, 0x0d10,
  0x0d12, 0x0d3a,
  0x0d3d, 0x0d44,
  0x0d46, 0x0d48,
  0x0d4a, 0x0d4c,
  0x0d4e, 0x0d4e,
  0x0d54, 0x0d57,
  0x0d5f, 0x0d63,
  0x0d7a, 0x0d7f,
  0x0d81, 0x0d83,
  0x0d85, 0x0d96,
  0x0d9a, 0x0db1,
  0x0db3, 0x0dbb,
  0x0dbd, 0x0dbd,
  0x0dc0, 0x0dc6,
  0x0dcf, 0x0dd4,
  0x0dd6, 0x0dd6,
  0x0dd8, 0x0ddf,
  0x0df2, 0x0df3,
  0x0e01, 0x0e3a,
  0x0e40, 0x0e46,
  0x0e4d, 0x0e4d,
  0x0e81, 0x0e82,
  0x0e84, 0x0e84,
  0x0e86, 0x0e8a,
  0x0e8c, 0x0ea3,
  0x0ea5, 0x0ea5,
  0x0ea7, 0x0eb9,
  0x0ebb, 0x0ebd,
  0x0ec0, 0x0ec4,
  0x0ec6, 0x0ec6,
  0x0ecd, 0x0ecd,
  0x0edc, 0x0edf,
  0x0f00, 0x0f00,
  0x0f40, 0x0f47,
  0x0f49, 0x0f6c,
  0x0f71, 0x0f81,
  0x0f88, 0x0f97,
  0x0f99, 0x0fbc,
  0x1000, 0x1036,
  0x1038, 0x1038,
  0x103b, 0x103f,
  0x1050, 0x108f,
  0x109a, 0x109d,
  0x10a0, 0x10c5,
  0x10c7, 0x10c7,
  0x10cd, 0x10cd,
  0x10d0, 0x10fa,
  0x10fc, 0x1248,
  0x124a, 0x124d,
  0x1250, 0x1256,
  0x1258, 0x1258,
  0x125a, 0x125d,
  0x1260, 0x1288,
  0x128a, 0x128d,
  0x1290, 0x12b0,
  0x12b2, 0x12b5,
  0x12b8, 0x12be,
  0x12c0, 0x12c0,
  0x12c2, 0x12c5,
  0x12c8, 0x12d6,
  0x12d8, 0x1310,
  0x1312, 0x1315,
  0x1318, 0x135a,
  0x1380, 0x138f,
  0x13a0, 0x13f5,
  0x13f8, 0x13fd,
  0x1401, 0x166c,
  0x166f, 0x167f,
  0x1681, 0x169a,
  0x16a0, 0x16ea,
  0x16ee, 0x16f8,
  0x1700, 0x1713,
  0x171f, 0x1733,
  0x1740, 0x1753,
  0x1760, 0x176c,
  0x176e, 0x1770,
  0x1772, 0x1773,
  0x1780, 0x17b3,
  0x17b6, 0x17c8,
  0x17d7, 0x17d7,
  0x17dc, 0x17dc,
  0x1820, 0x1878,
  0x1880, 0x18aa,
  0x18b0, 0x18f5,
  0x1900, 0x191e,
  0x1920, 0x192b,
  0x1930, 0x1938,
  0x1950, 0x196d,
  0x1970, 0x1974,
  0x1980, 0x19ab,
  0x19b0, 0x19c9,
  0x1a00, 0x1a1b,
  0x1a20, 0x1a5e,
  0x1a61, 0x1a74,
  0x1aa7, 0x1aa7,
  0x1abf, 0x1ac0,
  0x1acc, 0x1ace,
  0x1b00, 0x1b33,
  0x1b35, 0x1b43,
  0x1b45, 0x1b4c,
  0x1b80, 0x1ba9,
  0x1bac, 0x1baf,
  0x1bba, 0x1be5,
  0x1be7, 0x1bf1,
  0x1c00, 0x1c36,
  0x1c4d, 0x1c4f,
  0x1c5a, 0x1c7d,
  0x1c80, 0x1c88,
  0x1c90, 0x1cba,
  0x1cbd, 0x1cbf,
  0x1ce9, 0x1cec,
  0x1cee, 0x1cf3,
  0x1cf5, 0x1cf6,
  0x1cfa, 0x1cfa,
  0x1d00, 0x1dbf,
  0x1de7, 0x1df4,
  0x1e00, 0x1f15,
  0x1f18, 0x1f1d,
  0x1f20, 0x1f45,
  0x1f48, 0x1f4d,
  0x1f50, 0x1f57,
  0x1f59, 0x1f59,
  0x1f5b, 0x1f5b,
  0x1f5d, 0x1f5d,
  0x1f5f, 0x1f7d,
  0x1f80, 0x1fb4,
  0x1fb6, 0x1fbc,
  0x1fbe, 0x1fbe,
  0x1fc2, 0x1fc4,
  0x1fc6, 0x1fcc,
  0x1fd0, 0x1fd3,
  0x1fd6, 0x1fdb,
  0x1fe0, 0x1fec,
  0x1ff2, 0x1ff4,
  0x1ff6, 0x1ffc,
  0x2071, 0x2071,
  0x207f, 0x207f,
  0x2090, 0x209c,
  0x2102, 0x2102,
  0x2107, 0x2107,
  0x210a, 0x2113,
  0x2115, 0x2115,
  0x2119, 0x211d,
  0x2124, 0x2124,
  0x2126, 0x2126,
  0x2128, 0x2128,
  0x212a, 0x212d,
  0x212f, 0x2139,
  0x213c, 0x213f,
  0x2145, 0x2149,
  0x214e, 0x214e,
  0x2160, 0x2188,
  0x24b6, 0x24e9,
  0x2c00, 0x2ce4,
  0x2ceb, 0x2cee,
  0x2cf2, 0x2cf3,
  0x2d00, 0x2d25,
  0x2d27, 0x2d27,
  0x2d2d, 0x2d2d,
  0x2d30, 0x2d67,
  0x2d6f, 0x2d6f,
  0x2d80, 0x2d96,
  0x2da0, 0x2da6,
  0x2da8, 0x2dae,
  0x2db0, 0x2db6,
  0x2db8, 0x2dbe,
  0x2dc0, 0x2dc6,
  0x2dc8, 0x2dce,
  0x2dd0, 0x2dd6,
  0x2dd8, 0x2dde,
  0x2de0, 0x2dff,
  0x2e2f, 0x2e2f,
  0x3005, 0x3007,
  0x3021, 0x3029,
  0x3031, 0x3035,
  0x3038, 0x303c,
  0x3041, 0x3096,
  0x309d, 0x309f,
  0x30a1, 0x30fa,
  0x30fc, 0x30ff,
  0x3105, 0x312f,
  0x3131, 0x318e,
  0x31a0, 0x31bf,
  0x31f0, 0x31ff,
  0x3400, 0x4dbf,
  0x4e00, 0xa48c,
  0xa4d0, 0xa4fd,
  0xa500, 0xa60c,
  0xa610, 0xa61f,
  0xa62a, 0xa62b,
  0xa640, 0xa66e,
  0xa674, 0xa67b,
  0xa67f, 0xa6ef,
  0xa717, 0xa71f,
  0xa722, 0xa788,
  0xa78b, 0xa7ca,
  0xa7d0, 0xa7d1,
  0xa7d3, 0xa7d3,
  0xa7d5, 0xa7d9,
  0xa7f2, 0xa805,
  0xa807, 0xa827,
  0xa840, 0xa873,
  0xa880, 0xa8c3,
  0xa8c5, 0xa8c5,
  0xa8f2, 0xa8f7,
  0xa8fb, 0xa8fb,
  0xa8fd, 0xa8ff,
  0xa90a, 0xa92a,
  0xa930, 0xa952,
  0xa960, 0xa97c,
  0xa980, 0xa9b2,
  0xa9b4, 0xa9bf,
  0xa9cf, 0xa9cf,
  0xa9e0, 0xa9ef,
  0xa9fa, 0xa9fe,
  0xaa00, 0xaa36,
  0xaa40, 0xaa4d,
  0xaa60, 0xaa76,
  0xaa7a, 0xaabe,
  0xaac0, 0xaac0,
  0xaac2, 0xaac2,
  0xaadb, 0xaadd,
  0xaae0, 0xaaef,
  0xaaf2, 0xaaf5,
  0xab01, 0xab06,
  0xab09, 0xab0e,
  0xab11, 0xab16,
  0xab20, 0xab26,
  0xab28, 0xab2e,
  0xab30, 0xab5a,
  0xab5c, 0xab69,
  0xab70, 0xabea,
  0xac00, 0xd7a3,
  0xd7b0, 0xd7c6,
  0xd7cb, 0xd7fb,
  0xf900, 0xfa6d,
  0xfa70, 0xfad9,
  0xfb00, 0xfb06,
  0xfb13, 0xfb17,
  0xfb1d, 0xfb28,
  0xfb2a, 0xfb36,
  0xfb38, 0xfb3c,
  0xfb3e, 0xfb3e,
  0xfb40, 0xfb41,
  0xfb43, 0xfb44,
  0xfb46, 0xfbb1,
  0xfbd3, 0xfd3d,
  0xfd50, 0xfd8f,
  0xfd92, 0xfdc7,
  0xfdf0, 0xfdfb,
  0xfe70, 0xfe74,
  0xfe76, 0xfefc,
  0xff21, 0xff3a,
  0xff41, 0xff5a,
  0xff66, 0xffbe,
  0xffc2, 0xffc7,
  0xffca, 0xffcf,
  0xffd2, 0xffd7,
  0xffda, 0xffdc,
  0x10000, 0x1000b,
  0x1000d, 0x10026,
  0x10028, 0x1003a,
  0x1003c, 0x1003d,
  0x1003f, 0x1004d,
  0x10050, 0x1005d,
  0x10080, 0x100fa,
  0x10140, 0x10174,
  0x10280, 0x1029c,
  0x102a0, 0x102d0,
  0x10300, 0x1031f,
  0x1032d, 0x1034a,
  0x10350, 0x1037a,
  0x10380, 0x1039d,
  0x103a0, 0x103c3,
  0x103c8, 0x103cf,
  0x103d1, 0x103d5,
  0x10400, 0x1049d,
  0x104b0, 0x104d3,
  0x104d8, 0x104fb,
  0x10500, 0x10527,
  0x10530, 0x10563,
  0x10570, 0x1057a,
  0x1057c, 0x1058a,
  0x1058c, 0x10592,
  0x10594, 0x10595,
  0x10597, 0x105a1,
  0x105a3, 0x105b1,
  0x105b3, 0x105b9,
  0x105bb, 0x105bc,
  0x10600, 0x10736,
  0x10740, 0x10755,
  0x10760, 0x10767,
  0x10780, 0x10785,
  0x10787, 0x107b0,
  0x107b2, 0x107ba,
  0x10800, 0x10805,
  0x10808, 0x10808,
  0x1080a, 0x10835,
  0x10837, 0x10838,
  0x1083c, 0x1083c,
  0x1083f, 0x10855,
  0x10860, 0x10876,
  0x10880, 0x1089e,
  0x108e0, 0x108f2,
  0x108f4, 0x108f5,
  0x10900, 0x10915,
  0x10920, 0x10939,
  0x10980, 0x109b7,
  0x109be, 0x109bf,
  0x10a00, 0x10a03,
  0x10a05, 0x10a06,
  0x10a0c, 0x10a13,
  0x10a15, 0x10a17,
  0x10a19, 0x10a35,
  0x10a60, 0x10a7c,
  0x10a80, 0x10a9c,
  0x10ac0, 0x10ac7,
  0x10ac9, 0x10ae4,
  0x10b00, 0x10b35,
  0x10b40, 0x10b55,
  0x10b60, 0x10b72,
  0x10b80, 0x10b91,
  0x10c00, 0x10c48,
  0x10c80, 0x10cb2,
  0x10cc0, 0x10cf2,
  0x10d00, 0x10d27,
  0x10e80, 0x10ea9,
  0x10eab, 0x10eac,
  0x10eb0, 0x10eb1,
  0x10f00, 0x10f1c,
  0x10f27, 0x10f27,
  0x10f30, 0x10f45,
  0x10f70, 0x10f81,
  0x10fb0, 0x10fc4,
  0x10fe0, 0x10ff6,
  0x11000, 0x11045,
  0x11071, 0x11075,
  0x11082, 0x110b8,
  0x110c2, 0x110c2,
  0x110d0, 0x110e8,
  0x11100, 0x11132,
  0x11144, 0x11147,
  0x11150, 0x11172,
  0x11176, 0x11176,
  0x11180, 0x111bf,
  0x111c1, 0x111c4,
  0x111ce, 0x111cf,
  0x111da, 0x111da,
  0x111dc, 0x111dc,
  0x11200, 0x11211,
  0x11213, 0x11234,
  0x11237, 0x11237,
  0x1123e, 0x1123e,
  0x11280, 0x11286,
  0x11288, 0x11288,
  0x1128a, 0x1128d,
  0x1128f, 0x1129d,
  0x1129f, 0x112a8,
  0x112b0, 0x112e8,
  0x11300, 0x11303,
  0x11305, 0x1130c,
  0x1130f, 0x11310,
  0x11313, 0x11328,
  0x1132a, 0x11330,
  0x11332, 0x11333,
  0x11335, 0x11339,
  0x1133d, 0x11344,
  0x11347, 0x11348,
  0x1134b, 0x1134c,
  0x11350, 0x11350,
  0x11357, 0x11357,
  0x1135d, 0x11363,
  0x11400, 0x11441,
  0x11443, 0x11445,
  0x11447, 0x1144a,
  0x1145f, 0x11461,
  0x11480, 0x114c1,
  0x114c4, 0x114c5,
  0x114c7, 0x114c7,
  0x11580, 0x115b5,
  0x115b8, 0x115be,
  0x115d8, 0x115dd,
  0x11600, 0x1163e,
  0x11640, 0x11640,
  0x11644, 0x11644,
  0x11680, 0x116b5,
  0x116b8, 0x116b8,
  0x11700, 0x1171a,
  0x1171d, 0x1172a,
  0x11740, 0x11746,
  0x11800, 0x11838,
  0x118a0, 0x118df,
  0x118ff, 0x11906,
  0x11909, 0x11909,
  0x1190c, 0x11913,
  0x11915, 0x11916,
  0x11918, 0x11935,
  0x11937, 0x11938,
  0x1193b, 0x1193c,
  0x1193f, 0x11942,
  0x119a0, 0x119a7,
  0x119aa, 0x119d7,
  0x119da, 0x119df,
  0x119e1, 0x119e1,
  0x119e3, 0x119e4,
  0x11a00, 0x11a32,
  0x11a35, 0x11a3e,
  0x11a50, 0x11a97,
  0x11a9d, 0x11a9d,
  0x11ab0, 0x11af8,
  0x11c00, 0x11c08,
  0x11c0a, 0x11c36,
  0x11c38, 0x11c3e,
  0x11c40, 0x11c40,
  0x11c72, 0x11c8f,
  0x11c92, 0x11ca7,
  0x11ca9, 0x11cb6,
  0x11d00, 0x11d06,
  0x11d08, 0x11d09,
  0x11d0b, 0x11d36,
  0x11d3a, 0x11d3a,
  0x11d3c, 0x11d3d,
  0x11d3f, 0x11d41,
  0x11d43, 0x11d43,
  0x11d46, 0x11d47,
  0x11d60, 0x11d65,
  0x11d67, 0x11d68,
  0x11d6a, 0x11d8e,
  0x11d90, 0x11d91,
  0x11d93, 0x11d96,
  0x11d98, 0x11d98,
  0x11ee0, 0x11ef6,
  0x11fb0, 0x11fb0,
  0x12000, 0x12399,
  0x12400, 0x1246e,
  0x12480, 0x12543,
  0x12f90, 0x12ff0,
  0x13000, 0x1342e,
  0x14400, 0x14646,
  0x16800, 0x16a38,
  0x16a40, 0x16a5e,
  0x16a70, 0x16abe,
  0x16ad0, 0x16aed,
  0x16b00, 0x16b2f,
  0x16b40, 0x16b43,
  0x16b63, 0x16b77,
  0x16b7d, 0x16b8f,
  0x16e40, 0x16e7f,
  0x16f00, 0x16f4a,
  0x16f4f, 0x16f87,
  0x16f8f, 0x16f9f,
  0x16fe0, 0x16fe1,
  0x16fe3, 0x16fe3,
  0x16ff0, 0x16ff1,
  0x17000, 0x187f7,
  0x18800, 0x18cd5,
  0x18d00, 0x18d08,
  0x1aff0, 0x1aff3,
  0x1aff5, 0x1affb,
  0x1affd, 0x1affe,
  0x1b000, 0x1b122,
  0x1b150, 0x1b152,
  0x1b164, 0x1b167,
  0x1b170, 0x1b2fb,
  0x1bc00, 0x1bc6a,
  0x1bc70, 0x1bc7c,
  0x1bc80, 0x1bc88,
  0x1bc90, 0x1bc99,
  0x1bc9e, 0x1bc9e,
  0x1d400, 0x1d454,
  0x1d456, 0x1d49c,
  0x1d49e, 0x1d49f,
  0x1d4a2, 0x1d4a2,
  0x1d4a5, 0x1d4a6,
  0x1d4a9, 0x1d4ac,
  0x1d4ae, 0x1d4b9,
  0x1d4bb, 0x1d4bb,
  0x1d4bd, 0x1d4c3,
  0x1d4c5, 0x1d505,
  0x1d507, 0x1d50a,
  0x1d50d, 0x1d514,
  0x1d516, 0x1d51c,
  0x1d51e, 0x1d539,
  0x1d53b, 0x1d53e,
  0x1d540, 0x1d544,
  0x1d546, 0x1d546,
  0x1d54a, 0x1d550,
  0x1d552, 0x1d6a5,
  0x1d6a8, 0x1d6c0,
  0x1d6c2, 0x1d6da,
  0x1d6dc, 0x1d6fa,
  0x1d6fc, 0x1d714,
  0x1d716, 0x1d734,
  0x1d736, 0x1d74e,
  0x1d750, 0x1d76e,
  0x1d770, 0x1d788,
  0x1d78a, 0x1d7a8,
  0x1d7aa, 0x1d7c2,
  0x1d7c4, 0x1d7cb,
  0x1df00, 0x1df1e,
  0x1e000, 0x1e006,
  0x1e008, 0x1e018,
  0x1e01b, 0x1e021,
  0x1e023, 0x1e024,
  0x1e026, 0x1e02a,
  0x1e100, 0x1e12c,
  0x1e137, 0x1e13d,
  0x1e14e, 0x1e14e,
  0x1e290, 0x1e2ad,
  0x1e2c0, 0x1e2eb,
  0x1e7e0, 0x1e7e6,
  0x1e7e8, 0x1e7eb,
  0x1e7ed, 0x1e7ee,
  0x1e7f0, 0x1e7fe,
  0x1e800, 0x1e8c4,
  0x1e900, 0x1e943,
  0x1e947, 0x1e947,
  0x1e94b, 0x1e94b,
  0x1ee00, 0x1ee03,
  0x1ee05, 0x1ee1f,
  0x1ee21, 0x1ee22,
  0x1ee24, 0x1ee24,
  0x1ee27, 0x1ee27,
  0x1ee29, 0x1ee32,
  0x1ee34, 0x1ee37,
  0x1ee39, 0x1ee39,
  0x1ee3b, 0x1ee3b,
  0x1ee42, 0x1ee42,
  0x1ee47, 0x1ee47,
  0x1ee49, 0x1ee49,
  0x1ee4b, 0x1ee4b,
  0x1ee4d, 0x1ee4f,
  0x1ee51, 0x1ee52,
  0x1ee54, 0x1ee54,
  0x1ee57, 0x1ee57,
  0x1ee59, 0x1ee59,
  0x1ee5b, 0x1ee5b,
  0x1ee5d, 0x1ee5d,
  0x1ee5f, 0x1ee5f,
  0x1ee61, 0x1ee62,
  0x1ee64, 0x1ee64,
  0x1ee67, 0x1ee6a,
  0x1ee6c, 0x1ee72,
  0x1ee74, 0x1ee77,
  0x1ee79, 0x1ee7c,
  0x1ee7e, 0x1ee7e,
  0x1ee80, 0x1ee89,
  0x1ee8b, 0x1ee9b,
  0x1eea1, 0x1eea3,
  0x1eea5, 0x1eea9,
  0x1eeab, 0x1eebb,
  0x1f130, 0x1f149,
  0x1f150, 0x1f169,
  0x1f170, 0x1f189,
  0x20000, 0x2a6df,
  0x2a700, 0x2b738,
  0x2b740, 0x2b81d,
  0x2b820, 0x2cea1,
  0x2ceb0, 0x2ebe0,
  0x2f800, 0x2fa1d,
  0x30000, 0x3134a,
};

#define UNICODE_ALNUM_CODEPOINTS_LENGTH 1520
unicode_codepoint_t unicode_alnum_codepoints[UNICODE_ALNUM_CODEPOINTS_LENGTH] = {
  0x0030, 0x0039,
  0x0041, 0x005a,
  0x0061, 0x007a,
  0x00aa, 0x00aa,
  0x00b5, 0x00b5,
  0x00ba, 0x00ba,
  0x00c0, 0x00d6,
  0x00d8, 0x00f6,
  0x00f8, 0x02c1,
  0x02c6, 0x02d1,
  0x02e0, 0x02e4,
  0x02ec, 0x02ec,
  0x02ee, 0x02ee,
  0x0345, 0x0345,
  0x0370, 0x0374,
  0x0376, 0x0377,
  0x037a, 0x037d,
  0x037f, 0x037f,
  0x0386, 0x0386,
  0x0388, 0x038a,
  0x038c, 0x038c,
  0x038e, 0x03a1,
  0x03a3, 0x03f5,
  0x03f7, 0x0481,
  0x048a, 0x052f,
  0x0531, 0x0556,
  0x0559, 0x0559,
  0x0560, 0x0588,
  0x05b0, 0x05bd,
  0x05bf, 0x05bf,
  0x05c1, 0x05c2,
  0x05c4, 0x05c5,
  0x05c7, 0x05c7,
  0x05d0, 0x05ea,
  0x05ef, 0x05f2,
  0x0610, 0x061a,
  0x0620, 0x0657,
  0x0659, 0x0669,
  0x066e, 0x06d3,
  0x06d5, 0x06dc,
  0x06e1, 0x06e8,
  0x06ed, 0x06fc,
  0x06ff, 0x06ff,
  0x0710, 0x073f,
  0x074d, 0x07b1,
  0x07c0, 0x07ea,
  0x07f4, 0x07f5,
  0x07fa, 0x07fa,
  0x0800, 0x0817,
  0x081a, 0x082c,
  0x0840, 0x0858,
  0x0860, 0x086a,
  0x0870, 0x0887,
  0x0889, 0x088e,
  0x08a0, 0x08c9,
  0x08d4, 0x08df,
  0x08e3, 0x08e9,
  0x08f0, 0x093b,
  0x093d, 0x094c,
  0x094e, 0x0950,
  0x0955, 0x0963,
  0x0966, 0x096f,
  0x0971, 0x0983,
  0x0985, 0x098c,
  0x098f, 0x0990,
  0x0993, 0x09a8,
  0x09aa, 0x09b0,
  0x09b2, 0x09b2,
  0x09b6, 0x09b9,
  0x09bd, 0x09c4,
  0x09c7, 0x09c8,
  0x09cb, 0x09cc,
  0x09ce, 0x09ce,
  0x09d7, 0x09d7,
  0x09dc, 0x09dd,
  0x09df, 0x09e3,
  0x09e6, 0x09f1,
  0x09fc, 0x09fc,
  0x0a01, 0x0a03,
  0x0a05, 0x0a0a,
  0x0a0f, 0x0a10,
  0x0a13, 0x0a28,
  0x0a2a, 0x0a30,
  0x0a32, 0x0a33,
  0x0a35, 0x0a36,
  0x0a38, 0x0a39,
  0x0a3e, 0x0a42,
  0x0a47, 0x0a48,
  0x0a4b, 0x0a4c,
  0x0a51, 0x0a51,
  0x0a59, 0x0a5c,
  0x0a5e, 0x0a5e,
  0x0a66, 0x0a75,
  0x0a81, 0x0a83,
  0x0a85, 0x0a8d,
  0x0a8f, 0x0a91,
  0x0a93, 0x0aa8,
  0x0aaa, 0x0ab0,
  0x0ab2, 0x0ab3,
  0x0ab5, 0x0ab9,
  0x0abd, 0x0ac5,
  0x0ac7, 0x0ac9,
  0x0acb, 0x0acc,
  0x0ad0, 0x0ad0,
  0x0ae0, 0x0ae3,
  0x0ae6, 0x0aef,
  0x0af9, 0x0afc,
  0x0b01, 0x0b03,
  0x0b05, 0x0b0c,
  0x0b0f, 0x0b10,
  0x0b13, 0x0b28,
  0x0b2a, 0x0b30,
  0x0b32, 0x0b33,
  0x0b35, 0x0b39,
  0x0b3d, 0x0b44,
  0x0b47, 0x0b48,
  0x0b4b, 0x0b4c,
  0x0b56, 0x0b57,
  0x0b5c, 0x0b5d,
  0x0b5f, 0x0b63,
  0x0b66, 0x0b6f,
  0x0b71, 0x0b71,
  0x0b82, 0x0b83,
  0x0b85, 0x0b8a,
  0x0b8e, 0x0b90,
  0x0b92, 0x0b95,
  0x0b99, 0x0b9a,
  0x0b9c, 0x0b9c,
  0x0b9e, 0x0b9f,
  0x0ba3, 0x0ba4,
  0x0ba8, 0x0baa,
  0x0bae, 0x0bb9,
  0x0bbe, 0x0bc2,
  0x0bc6, 0x0bc8,
  0x0bca, 0x0bcc,
  0x0bd0, 0x0bd0,
  0x0bd7, 0x0bd7,
  0x0be6, 0x0bef,
  0x0c00, 0x0c03,
  0x0c05, 0x0c0c,
  0x0c0e, 0x0c10,
  0x0c12, 0x0c28,
  0x0c2a, 0x0c39,
  0x0c3d, 0x0c44,
  0x0c46, 0x0c48,
  0x0c4a, 0x0c4c,
  0x0c55, 0x0c56,
  0x0c58, 0x0c5a,
  0x0c5d, 0x0c5d,
  0x0c60, 0x0c63,
  0x0c66, 0x0c6f,
  0x0c80, 0x0c83,
  0x0c85, 0x0c8c,
  0x0c8e, 0x0c90,
  0x0c92, 0x0ca8,
  0x0caa, 0x0cb3,
  0x0cb5, 0x0cb9,
  0x0cbd, 0x0cc4,
  0x0cc6, 0x0cc8,
  0x0cca, 0x0ccc,
  0x0cd5, 0x0cd6,
  0x0cdd, 0x0cde,
  0x0ce0, 0x0ce3,
  0x0ce6, 0x0cef,
  0x0cf1, 0x0cf2,
  0x0d00, 0x0d0c,
  0x0d0e, 0x0d10,
  0x0d12, 0x0d3a,
  0x0d3d, 0x0d44,
  0x0d46, 0x0d48,
  0x0d4a, 0x0d4c,
  0x0d4e, 0x0d4e,
  0x0d54, 0x0d57,
  0x0d5f, 0x0d63,
  0x0d66, 0x0d6f,
  0x0d7a, 0x0d7f,
  0x0d81, 0x0d83,
  0x0d85, 0x0d96,
  0x0d9a, 0x0db1,
  0x0db3, 0x0dbb,
  0x0dbd, 0x0dbd,
  0x0dc0, 0x0dc6,
  0x0dcf, 0x0dd4,
  0x0dd6, 0x0dd6,
  0x0dd8, 0x0ddf,
  0x0de6, 0x0def,
  0x0df2, 0x0df3,
  0x0e01, 0x0e3a,
  0x0e40, 0x0e46,
  0x0e4d, 0x0e4d,
  0x0e50, 0x0e59,
  0x0e81, 0x0e82,
  0x0e84, 0x0e84,
  0x0e86, 0x0e8a,
  0x0e8c, 0x0ea3,
  0x0ea5, 0x0ea5,
  0x0ea7, 0x0eb9,
  0x0ebb, 0x0ebd,
  0x0ec0, 0x0ec4,
  0x0ec6, 0x0ec6,
  0x0ecd, 0x0ecd,
  0x0ed0, 0x0ed9,
  0x0edc, 0x0edf,
  0x0f00, 0x0f00,
  0x0f20, 0x0f29,
  0x0f40, 0x0f47,
  0x0f49, 0x0f6c,
  0x0f71, 0x0f81,
  0x0f88, 0x0f97,
  0x0f99, 0x0fbc,
  0x1000, 0x1036,
  0x1038, 0x1038,
  0x103b, 0x1049,
  0x1050, 0x109d,
  0x10a0, 0x10c5,
  0x10c7, 0x10c7,
  0x10cd, 0x10cd,
  0x10d0, 0x10fa,
  0x10fc, 0x1248,
  0x124a, 0x124d,
  0x1250, 0x1256,
  0x1258, 0x1258,
  0x125a, 0x125d,
  0x1260, 0x1288,
  0x128a, 0x128d,
  0x1290, 0x12b0,
  0x12b2, 0x12b5,
  0x12b8, 0x12be,
  0x12c0, 0x12c0,
  0x12c2, 0x12c5,
  0x12c8, 0x12d6,
  0x12d8, 0x1310,
  0x1312, 0x1315,
  0x1318, 0x135a,
  0x1380, 0x138f,
  0x13a0, 0x13f5,
  0x13f8, 0x13fd,
  0x1401, 0x166c,
  0x166f, 0x167f,
  0x1681, 0x169a,
  0x16a0, 0x16ea,
  0x16ee, 0x16f8,
  0x1700, 0x1713,
  0x171f, 0x1733,
  0x1740, 0x1753,
  0x1760, 0x176c,
  0x176e, 0x1770,
  0x1772, 0x1773,
  0x1780, 0x17b3,
  0x17b6, 0x17c8,
  0x17d7, 0x17d7,
  0x17dc, 0x17dc,
  0x17e0, 0x17e9,
  0x1810, 0x1819,
  0x1820, 0x1878,
  0x1880, 0x18aa,
  0x18b0, 0x18f5,
  0x1900, 0x191e,
  0x1920, 0x192b,
  0x1930, 0x1938,
  0x1946, 0x196d,
  0x1970, 0x1974,
  0x1980, 0x19ab,
  0x19b0, 0x19c9,
  0x19d0, 0x19d9,
  0x1a00, 0x1a1b,
  0x1a20, 0x1a5e,
  0x1a61, 0x1a74,
  0x1a80, 0x1a89,
  0x1a90, 0x1a99,
  0x1aa7, 0x1aa7,
  0x1abf, 0x1ac0,
  0x1acc, 0x1ace,
  0x1b00, 0x1b33,
  0x1b35, 0x1b43,
  0x1b45, 0x1b4c,
  0x1b50, 0x1b59,
  0x1b80, 0x1ba9,
  0x1bac, 0x1be5,
  0x1be7, 0x1bf1,
  0x1c00, 0x1c36,
  0x1c40, 0x1c49,
  0x1c4d, 0x1c7d,
  0x1c80, 0x1c88,
  0x1c90, 0x1cba,
  0x1cbd, 0x1cbf,
  0x1ce9, 0x1cec,
  0x1cee, 0x1cf3,
  0x1cf5, 0x1cf6,
  0x1cfa, 0x1cfa,
  0x1d00, 0x1dbf,
  0x1de7, 0x1df4,
  0x1e00, 0x1f15,
  0x1f18, 0x1f1d,
  0x1f20, 0x1f45,
  0x1f48, 0x1f4d,
  0x1f50, 0x1f57,
  0x1f59, 0x1f59,
  0x1f5b, 0x1f5b,
  0x1f5d, 0x1f5d,
  0x1f5f, 0x1f7d,
  0x1f80, 0x1fb4,
  0x1fb6, 0x1fbc,
  0x1fbe, 0x1fbe,
  0x1fc2, 0x1fc4,
  0x1fc6, 0x1fcc,
  0x1fd0, 0x1fd3,
  0x1fd6, 0x1fdb,
  0x1fe0, 0x1fec,
  0x1ff2, 0x1ff4,
  0x1ff6, 0x1ffc,
  0x2071, 0x2071,
  0x207f, 0x207f,
  0x2090, 0x209c,
  0x2102, 0x2102,
  0x2107, 0x2107,
  0x210a, 0x2113,
  0x2115, 0x2115,
  0x2119, 0x211d,
  0x2124, 0x2124,
  0x2126, 0x2126,
  0x2128, 0x2128,
  0x212a, 0x212d,
  0x212f, 0x2139,
  0x213c, 0x213f,
  0x2145, 0x2149,
  0x214e, 0x214e,
  0x2160, 0x2188,
  0x24b6, 0x24e9,
  0x2c00, 0x2ce4,
  0x2ceb, 0x2cee,
  0x2cf2, 0x2cf3,
  0x2d00, 0x2d25,
  0x2d27, 0x2d27,
  0x2d2d, 0x2d2d,
  0x2d30, 0x2d67,
  0x2d6f, 0x2d6f,
  0x2d80, 0x2d96,
  0x2da0, 0x2da6,
  0x2da8, 0x2dae,
  0x2db0, 0x2db6,
  0x2db8, 0x2dbe,
  0x2dc0, 0x2dc6,
  0x2dc8, 0x2dce,
  0x2dd0, 0x2dd6,
  0x2dd8, 0x2dde,
  0x2de0, 0x2dff,
  0x2e2f, 0x2e2f,
  0x3005, 0x3007,
  0x3021, 0x3029,
  0x3031, 0x3035,
  0x3038, 0x303c,
  0x3041, 0x3096,
  0x309d, 0x309f,
  0x30a1, 0x30fa,
  0x30fc, 0x30ff,
  0x3105, 0x312f,
  0x3131, 0x318e,
  0x31a0, 0x31bf,
  0x31f0, 0x31ff,
  0x3400, 0x4dbf,
  0x4e00, 0xa48c,
  0xa4d0, 0xa4fd,
  0xa500, 0xa60c,
  0xa610, 0xa62b,
  0xa640, 0xa66e,
  0xa674, 0xa67b,
  0xa67f, 0xa6ef,
  0xa717, 0xa71f,
  0xa722, 0xa788,
  0xa78b, 0xa7ca,
  0xa7d0, 0xa7d1,
  0xa7d3, 0xa7d3,
  0xa7d5, 0xa7d9,
  0xa7f2, 0xa805,
  0xa807, 0xa827,
  0xa840, 0xa873,
  0xa880, 0xa8c3,
  0xa8c5, 0xa8c5,
  0xa8d0, 0xa8d9,
  0xa8f2, 0xa8f7,
  0xa8fb, 0xa8fb,
  0xa8fd, 0xa92a,
  0xa930, 0xa952,
  0xa960, 0xa97c,
  0xa980, 0xa9b2,
  0xa9b4, 0xa9bf,
  0xa9cf, 0xa9d9,
  0xa9e0, 0xa9fe,
  0xaa00, 0xaa36,
  0xaa40, 0xaa4d,
  0xaa50, 0xaa59,
  0xaa60, 0xaa76,
  0xaa7a, 0xaabe,
  0xaac0, 0xaac0,
  0xaac2, 0xaac2,
  0xaadb, 0xaadd,
  0xaae0, 0xaaef,
  0xaaf2, 0xaaf5,
  0xab01, 0xab06,
  0xab09, 0xab0e,
  0xab11, 0xab16,
  0xab20, 0xab26,
  0xab28, 0xab2e,
  0xab30, 0xab5a,
  0xab5c, 0xab69,
  0xab70, 0xabea,
  0xabf0, 0xabf9,
  0xac00, 0xd7a3,
  0xd7b0, 0xd7c6,
  0xd7cb, 0xd7fb,
  0xf900, 0xfa6d,
  0xfa70, 0xfad9,
  0xfb00, 0xfb06,
  0xfb13, 0xfb17,
  0xfb1d, 0xfb28,
  0xfb2a, 0xfb36,
  0xfb38, 0xfb3c,
  0xfb3e, 0xfb3e,
  0xfb40, 0xfb41,
  0xfb43, 0xfb44,
  0xfb46, 0xfbb1,
  0xfbd3, 0xfd3d,
  0xfd50, 0xfd8f,
  0xfd92, 0xfdc7,
  0xfdf0, 0xfdfb,
  0xfe70, 0xfe74,
  0xfe76, 0xfefc,
  0xff10, 0xff19,
  0xff21, 0xff3a,
  0xff41, 0xff5a,
  0xff66, 0xffbe,
  0xffc2, 0xffc7,
  0xffca, 0xffcf,
  0xffd2, 0xffd7,
  0xffda, 0xffdc,
  0x10000, 0x1000b,
  0x1000d, 0x10026,
  0x10028, 0x1003a,
  0x1003c, 0x1003d,
  0x1003f, 0x1004d,
  0x10050, 0x1005d,
  0x10080, 0x100fa,
  0x10140, 0x10174,
  0x10280, 0x1029c,
  0x102a0, 0x102d0,
  0x10300, 0x1031f,
  0x1032d, 0x1034a,
  0x10350, 0x1037a,
  0x10380, 0x1039d,
  0x103a0, 0x103c3,
  0x103c8, 0x103cf,
  0x103d1, 0x103d5,
  0x10400, 0x1049d,
  0x104a0, 0x104a9,
  0x104b0, 0x104d3,
  0x104d8, 0x104fb,
  0x10500, 0x10527,
  0x10530, 0x10563,
  0x10570, 0x1057a,
  0x1057c, 0x1058a,
  0x1058c, 0x10592,
  0x10594, 0x10595,
  0x10597, 0x105a1,
  0x105a3, 0x105b1,
  0x105b3, 0x105b9,
  0x105bb, 0x105bc,
  0x10600, 0x10736,
  0x10740, 0x10755,
  0x10760, 0x10767,
  0x10780, 0x10785,
  0x10787, 0x107b0,
  0x107b2, 0x107ba,
  0x10800, 0x10805,
  0x10808, 0x10808,
  0x1080a, 0x10835,
  0x10837, 0x10838,
  0x1083c, 0x1083c,
  0x1083f, 0x10855,
  0x10860, 0x10876,
  0x10880, 0x1089e,
  0x108e0, 0x108f2,
  0x108f4, 0x108f5,
  0x10900, 0x10915,
  0x10920, 0x10939,
  0x10980, 0x109b7,
  0x109be, 0x109bf,
  0x10a00, 0x10a03,
  0x10a05, 0x10a06,
  0x10a0c, 0x10a13,
  0x10a15, 0x10a17,
  0x10a19, 0x10a35,
  0x10a60, 0x10a7c,
  0x10a80, 0x10a9c,
  0x10ac0, 0x10ac7,
  0x10ac9, 0x10ae4,
  0x10b00, 0x10b35,
  0x10b40, 0x10b55,
  0x10b60, 0x10b72,
  0x10b80, 0x10b91,
  0x10c00, 0x10c48,
  0x10c80, 0x10cb2,
  0x10cc0, 0x10cf2,
  0x10d00, 0x10d27,
  0x10d30, 0x10d39,
  0x10e80, 0x10ea9,
  0x10eab, 0x10eac,
  0x10eb0, 0x10eb1,
  0x10f00, 0x10f1c,
  0x10f27, 0x10f27,
  0x10f30, 0x10f45,
  0x10f70, 0x10f81,
  0x10fb0, 0x10fc4,
  0x10fe0, 0x10ff6,
  0x11000, 0x11045,
  0x11066, 0x1106f,
  0x11071, 0x11075,
  0x11082, 0x110b8,
  0x110c2, 0x110c2,
  0x110d0, 0x110e8,
  0x110f0, 0x110f9,
  0x11100, 0x11132,
  0x11136, 0x1113f,
  0x11144, 0x11147,
  0x11150, 0x11172,
  0x11176, 0x11176,
  0x11180, 0x111bf,
  0x111c1, 0x111c4,
  0x111ce, 0x111da,
  0x111dc, 0x111dc,
  0x11200, 0x11211,
  0x11213, 0x11234,
  0x11237, 0x11237,
  0x1123e, 0x1123e,
  0x11280, 0x11286,
  0x11288, 0x11288,
  0x1128a, 0x1128d,
  0x1128f, 0x1129d,
  0x1129f, 0x112a8,
  0x112b0, 0x112e8,
  0x112f0, 0x112f9,
  0x11300, 0x11303,
  0x11305, 0x1130c,
  0x1130f, 0x11310,
  0x11313, 0x11328,
  0x1132a, 0x11330,
  0x11332, 0x11333,
  0x11335, 0x11339,
  0x1133d, 0x11344,
  0x11347, 0x11348,
  0x1134b, 0x1134c,
  0x11350, 0x11350,
  0x11357, 0x11357,
  0x1135d, 0x11363,
  0x11400, 0x11441,
  0x11443, 0x11445,
  0x11447, 0x1144a,
  0x11450, 0x11459,
  0x1145f, 0x11461,
  0x11480, 0x114c1,
  0x114c4, 0x114c5,
  0x114c7, 0x114c7,
  0x114d0, 0x114d9,
  0x11580, 0x115b5,
  0x115b8, 0x115be,
  0x115d8, 0x115dd,
  0x11600, 0x1163e,
  0x11640, 0x11640,
  0x11644, 0x11644,
  0x11650, 0x11659,
  0x11680, 0x116b5,
  0x116b8, 0x116b8,
  0x116c0, 0x116c9,
  0x11700, 0x1171a,
  0x1171d, 0x1172a,
  0x11730, 0x11739,
  0x11740, 0x11746,
  0x11800, 0x11838,
  0x118a0, 0x118e9,
  0x118ff, 0x11906,
  0x11909, 0x11909,
  0x1190c, 0x11913,
  0x11915, 0x11916,
  0x11918, 0x11935,
  0x11937, 0x11938,
  0x1193b, 0x1193c,
  0x1193f, 0x11942,
  0x11950, 0x11959,
  0x119a0, 0x119a7,
  0x119aa, 0x119d7,
  0x119da, 0x119df,
  0x119e1, 0x119e1,
  0x119e3, 0x119e4,
  0x11a00, 0x11a32,
  0x11a35, 0x11a3e,
  0x11a50, 0x11a97,
  0x11a9d, 0x11a9d,
  0x11ab0, 0x11af8,
  0x11c00, 0x11c08,
  0x11c0a, 0x11c36,
  0x11c38, 0x11c3e,
  0x11c40, 0x11c40,
  0x11c50, 0x11c59,
  0x11c72, 0x11c8f,
  0x11c92, 0x11ca7,
  0x11ca9, 0x11cb6,
  0x11d00, 0x11d06,
  0x11d08, 0x11d09,
  0x11d0b, 0x11d36,
  0x11d3a, 0x11d3a,
  0x11d3c, 0x11d3d,
  0x11d3f, 0x11d41,
  0x11d43, 0x11d43,
  0x11d46, 0x11d47,
  0x11d50, 0x11d59,
  0x11d60, 0x11d65,
  0x11d67, 0x11d68,
  0x11d6a, 0x11d8e,
  0x11d90, 0x11d91,
  0x11d93, 0x11d96,
  0x11d98, 0x11d98,
  0x11da0, 0x11da9,
  0x11ee0, 0x11ef6,
  0x11fb0, 0x11fb0,
  0x12000, 0x12399,
  0x12400, 0x1246e,
  0x12480, 0x12543,
  0x12f90, 0x12ff0,
  0x13000, 0x1342e,
  0x14400, 0x14646,
  0x16800, 0x16a38,
  0x16a40, 0x16a5e,
  0x16a60, 0x16a69,
  0x16a70, 0x16abe,
  0x16ac0, 0x16ac9,
  0x16ad0, 0x16aed,
  0x16b00, 0x16b2f,
  0x16b40, 0x16b43,
  0x16b50, 0x16b59,
  0x16b63, 0x16b77,
  0x16b7d, 0x16b8f,
  0x16e40, 0x16e7f,
  0x16f00, 0x16f4a,
  0x16f4f, 0x16f87,
  0x16f8f, 0x16f9f,
  0x16fe0, 0x16fe1,
  0x16fe3, 0x16fe3,
  0x16ff0, 0x16ff1,
  0x17000, 0x187f7,
  0x18800, 0x18cd5,
  0x18d00, 0x18d08,
  0x1aff0, 0x1aff3,
  0x1aff5, 0x1affb,
  0x1affd, 0x1affe,
  0x1b000, 0x1b122,
  0x1b150, 0x1b152,
  0x1b164, 0x1b167,
  0x1b170, 0x1b2fb,
  0x1bc00, 0x1bc6a,
  0x1bc70, 0x1bc7c,
  0x1bc80, 0x1bc88,
  0x1bc90, 0x1bc99,
  0x1bc9e, 0x1bc9e,
  0x1d400, 0x1d454,
  0x1d456, 0x1d49c,
  0x1d49e, 0x1d49f,
  0x1d4a2, 0x1d4a2,
  0x1d4a5, 0x1d4a6,
  0x1d4a9, 0x1d4ac,
  0x1d4ae, 0x1d4b9,
  0x1d4bb, 0x1d4bb,
  0x1d4bd, 0x1d4c3,
  0x1d4c5, 0x1d505,
  0x1d507, 0x1d50a,
  0x1d50d, 0x1d514,
  0x1d516, 0x1d51c,
  0x1d51e, 0x1d539,
  0x1d53b, 0x1d53e,
  0x1d540, 0x1d544,
  0x1d546, 0x1d546,
  0x1d54a, 0x1d550,
  0x1d552, 0x1d6a5,
  0x1d6a8, 0x1d6c0,
  0x1d6c2, 0x1d6da,
  0x1d6dc, 0x1d6fa,
  0x1d6fc, 0x1d714,
  0x1d716, 0x1d734,
  0x1d736, 0x1d74e,
  0x1d750, 0x1d76e,
  0x1d770, 0x1d788,
  0x1d78a, 0x1d7a8,
  0x1d7aa, 0x1d7c2,
  0x1d7c4, 0x1d7cb,
  0x1d7ce, 0x1d7ff,
  0x1df00, 0x1df1e,
  0x1e000, 0x1e006,
  0x1e008, 0x1e018,
  0x1e01b, 0x1e021,
  0x1e023, 0x1e024,
  0x1e026, 0x1e02a,
  0x1e100, 0x1e12c,
  0x1e137, 0x1e13d,
  0x1e140, 0x1e149,
  0x1e14e, 0x1e14e,
  0x1e290, 0x1e2ad,
  0x1e2c0, 0x1e2eb,
  0x1e2f0, 0x1e2f9,
  0x1e7e0, 0x1e7e6,
  0x1e7e8, 0x1e7eb,
  0x1e7ed, 0x1e7ee,
  0x1e7f0, 0x1e7fe,
  0x1e800, 0x1e8c4,
  0x1e900, 0x1e943,
  0x1e947, 0x1e947,
  0x1e94b, 0x1e94b,
  0x1e950, 0x1e959,
  0x1ee00, 0x1ee03,
  0x1ee05, 0x1ee1f,
  0x1ee21, 0x1ee22,
  0x1ee24, 0x1ee24,
  0x1ee27, 0x1ee27,
  0x1ee29, 0x1ee32,
  0x1ee34, 0x1ee37,
  0x1ee39, 0x1ee39,
  0x1ee3b, 0x1ee3b,
  0x1ee42, 0x1ee42,
  0x1ee47, 0x1ee47,
  0x1ee49, 0x1ee49,
  0x1ee4b, 0x1ee4b,
  0x1ee4d, 0x1ee4f,
  0x1ee51, 0x1ee52,
  0x1ee54, 0x1ee54,
  0x1ee57, 0x1ee57,
  0x1ee59, 0x1ee59,
  0x1ee5b, 0x1ee5b,
  0x1ee5d, 0x1ee5d,
  0x1ee5f, 0x1ee5f,
  0x1ee61, 0x1ee62,
  0x1ee64, 0x1ee64,
  0x1ee67, 0x1ee6a,
  0x1ee6c, 0x1ee72,
  0x1ee74, 0x1ee77,
  0x1ee79, 0x1ee7c,
  0x1ee7e, 0x1ee7e,
  0x1ee80, 0x1ee89,
  0x1ee8b, 0x1ee9b,
  0x1eea1, 0x1eea3,
  0x1eea5, 0x1eea9,
  0x1eeab, 0x1eebb,
  0x1f130, 0x1f149,
  0x1f150, 0x1f169,
  0x1f170, 0x1f189,
  0x1fbf0, 0x1fbf9,
  0x20000, 0x2a6df,
  0x2a700, 0x2b738,
  0x2b740, 0x2b81d,
  0x2b820, 0x2cea1,
  0x2ceb0, 0x2ebe0,
  0x2f800, 0x2fa1d,
  0x30000, 0x3134a,
};

static bool
unicode_codepoint_match(unicode_codepoint_t codepoint, unicode_codepoint_t *codepoints, size_t size) {
  for (size_t index = 0; index < size; index += 2) {
    if (codepoint >= codepoints[index] && codepoint <= codepoints[index + 1])
      return true;
  }
  return false;
}

static unicode_codepoint_t
utf8_codepoint(const char *c, size_t *width) {
  if ((c[0] >> 7) == 0b0) {
    // 0xxxxxxx
    *width = 1;
    return c[0];
  }
  if (((c[0] >> 5) == 0b110) && ((c[1] >> 6) == 0b10)) {
    // 110xxxxx 10xxxxxx
    *width = 2;
    return ((c[0] & 0b11111) << 6) | (c[1] & 0b111111);
  }
  if (((c[0] >> 4) == 0b1110) && ((c[1] >> 6) == 0b10) && ((c[2] >> 6) == 0b10)) {
    // 1110xxxx 10xxxxxx 10xxxxxx
    *width = 3;
    return ((c[0] & 0b1111) << 12) | ((c[1] & 0b111111) << 6) | (c[2] & 0b11111);
  }
  if (((c[0] >> 3) == 0b11110) && ((c[1] >> 6) == 0b10) && ((c[2] >> 6) == 0b10) && ((c[3] >> 6) == 0b10)) {
    // 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
    *width = 4;
    return ((c[0] & 0b111) << 18) | ((c[1] & 0b111111) << 12) | ((c[2] & 0b11111) << 6) | (c[3] & 0b11111);
  }
  return 0;
}

size_t
yp_encoding_utf8_alpha_char(const char *c) {
  size_t width;
  unicode_codepoint_t codepoint = utf8_codepoint(c, &width);
  return (codepoint && unicode_codepoint_match(codepoint, unicode_alpha_codepoints, UNICODE_ALPHA_CODEPOINTS_LENGTH)) ? width : 0;
}

size_t
yp_encoding_utf8_alnum_char(const char *c) {
  size_t width;
  unicode_codepoint_t codepoint = utf8_codepoint(c, &width);
  return (codepoint && unicode_codepoint_match(codepoint, unicode_alnum_codepoints, UNICODE_ALNUM_CODEPOINTS_LENGTH)) ? width : 0;
}
