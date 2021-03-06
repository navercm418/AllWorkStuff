// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo(struct _frozen *destination) {
    struct frozen_desc frozen_modules[] = {
        {"_collections_abc", 179596, 28791},
        {"_compression", 214947, 4098},
        {"_weakrefset", 355075, 7822},
        {"abc", 362897, 7509},
        {"ast", 456527, 11698},
        {"base64", 777873, 17053},
        {"bz2", 826703, 11276},
        {"codecs", 933920, 33894},
        {"collections", 974078, -45810},
        {"collections.abc", 179596, 28791},
        {"copyreg", 1136035, 4238},
        {"dis", 1423666, 14175},
        {"encodings", 2181646, -3924},
        {"encodings.aliases", 2185570, 6268},
        {"encodings.ascii", 2191838, 1856},
        {"encodings.base64_codec", 2193694, 2395},
        {"encodings.big5", 2196089, 1416},
        {"encodings.big5hkscs", 2197505, 1426},
        {"encodings.bz2_codec", 2198931, 3257},
        {"encodings.charmap", 2202188, 2909},
        {"encodings.cp037", 2205097, 2401},
        {"encodings.cp1006", 2207498, 2477},
        {"encodings.cp1026", 2209975, 2405},
        {"encodings.cp1125", 2212380, 8098},
        {"encodings.cp1140", 2220478, 2391},
        {"encodings.cp1250", 2222869, 2428},
        {"encodings.cp1251", 2225297, 2425},
        {"encodings.cp1252", 2227722, 2428},
        {"encodings.cp1253", 2230150, 2441},
        {"encodings.cp1254", 2232591, 2430},
        {"encodings.cp1255", 2235021, 2449},
        {"encodings.cp1256", 2237470, 2427},
        {"encodings.cp1257", 2239897, 2435},
        {"encodings.cp1258", 2242332, 2433},
        {"encodings.cp273", 2244765, 2387},
        {"encodings.cp424", 2247152, 2431},
        {"encodings.cp437", 2249583, 7815},
        {"encodings.cp500", 2257398, 2401},
        {"encodings.cp720", 2259799, 2498},
        {"encodings.cp737", 2262297, 8137},
        {"encodings.cp775", 2270434, 7845},
        {"encodings.cp850", 2278279, 7476},
        {"encodings.cp852", 2285755, 7853},
        {"encodings.cp855", 2293608, 8106},
        {"encodings.cp856", 2301714, 2463},
        {"encodings.cp857", 2304177, 7458},
        {"encodings.cp858", 2311635, 7446},
        {"encodings.cp860", 2319081, 7794},
        {"encodings.cp861", 2326875, 7809},
        {"encodings.cp862", 2334684, 7998},
        {"encodings.cp863", 2342682, 7809},
        {"encodings.cp864", 2350491, 7955},
        {"encodings.cp865", 2358446, 7809},
        {"encodings.cp866", 2366255, 8142},
        {"encodings.cp869", 2374397, 7835},
        {"encodings.cp874", 2382232, 2529},
        {"encodings.cp875", 2384761, 2398},
        {"encodings.cp932", 2387159, 1418},
        {"encodings.cp949", 2388577, 1418},
        {"encodings.cp950", 2389995, 1418},
        {"encodings.euc_jis_2004", 2391413, 1432},
        {"encodings.euc_jisx0213", 2392845, 1432},
        {"encodings.euc_jp", 2394277, 1420},
        {"encodings.euc_kr", 2395697, 1420},
        {"encodings.gb18030", 2397117, 1422},
        {"encodings.gb2312", 2398539, 1420},
        {"encodings.gbk", 2399959, 1414},
        {"encodings.hex_codec", 2401373, 2382},
        {"encodings.hp_roman8", 2403755, 2602},
        {"encodings.hz", 2406357, 1412},
        {"encodings.idna", 2407769, 5759},
        {"encodings.iso2022_jp", 2413528, 1433},
        {"encodings.iso2022_jp_1", 2414961, 1437},
        {"encodings.iso2022_jp_2", 2416398, 1437},
        {"encodings.iso2022_jp_2004", 2417835, 1443},
        {"encodings.iso2022_jp_3", 2419278, 1437},
        {"encodings.iso2022_jp_ext", 2420715, 1441},
        {"encodings.iso2022_kr", 2422156, 1433},
        {"encodings.iso8859_1", 2423589, 2400},
        {"encodings.iso8859_10", 2425989, 2405},
        {"encodings.iso8859_11", 2428394, 2499},
        {"encodings.iso8859_13", 2430893, 2408},
        {"encodings.iso8859_14", 2433301, 2426},
        {"encodings.iso8859_15", 2435727, 2405},
        {"encodings.iso8859_16", 2438132, 2407},
        {"encodings.iso8859_2", 2440539, 2400},
        {"encodings.iso8859_3", 2442939, 2407},
        {"encodings.iso8859_4", 2445346, 2400},
        {"encodings.iso8859_5", 2447746, 2401},
        {"encodings.iso8859_6", 2450147, 2445},
        {"encodings.iso8859_7", 2452592, 2408},
        {"encodings.iso8859_8", 2455000, 2439},
        {"encodings.iso8859_9", 2457439, 2400},
        {"encodings.johab", 2459839, 1418},
        {"encodings.koi8_r", 2461257, 2452},
        {"encodings.koi8_t", 2463709, 2363},
        {"encodings.koi8_u", 2466072, 2438},
        {"encodings.kz1048", 2468510, 2415},
        {"encodings.latin_1", 2470925, 1868},
        {"encodings.mac_arabic", 2472793, 7709},
        {"encodings.mac_centeuro", 2480502, 2439},
        {"encodings.mac_croatian", 2482941, 2447},
        {"encodings.mac_cyrillic", 2485388, 2437},
        {"encodings.mac_farsi", 2487825, 2381},
        {"encodings.mac_greek", 2490206, 2421},
        {"encodings.mac_iceland", 2492627, 2440},
        {"encodings.mac_latin2", 2495067, 2581},
        {"encodings.mac_roman", 2497648, 2438},
        {"encodings.mac_romanian", 2500086, 2448},
        {"encodings.mac_turkish", 2502534, 2441},
        {"encodings.palmos", 2504975, 2428},
        {"encodings.ptcp154", 2507403, 2522},
        {"encodings.punycode", 2509925, 6439},
        {"encodings.quopri_codec", 2516364, 2415},
        {"encodings.raw_unicode_escape", 2518779, 1741},
        {"encodings.rot_13", 2520520, 2973},
        {"encodings.shift_jis", 2523493, 1426},
        {"encodings.shift_jis_2004", 2524919, 1436},
        {"encodings.shift_jisx0213", 2526355, 1436},
        {"encodings.tis_620", 2527791, 2490},
        {"encodings.undefined", 2530281, 2135},
        {"encodings.unicode_escape", 2532416, 1721},
        {"encodings.unicode_internal", 2534137, 1731},
        {"encodings.utf_16", 2535868, 4805},
        {"encodings.utf_16_be", 2540673, 1606},
        {"encodings.utf_16_le", 2542279, 1606},
        {"encodings.utf_32", 2543885, 4698},
        {"encodings.utf_32_be", 2548583, 1499},
        {"encodings.utf_32_le", 2550082, 1499},
        {"encodings.utf_7", 2551581, 1527},
        {"encodings.utf_8", 2553108, 1586},
        {"encodings.utf_8_sig", 2554694, 4503},
        {"encodings.uu_codec", 2559197, 3199},
        {"encodings.zlib_codec", 2562396, 3095},
        {"enum", 2565491, 23447},
        {"functools", 2677437, 24056},
        {"genericpath", 2701493, 3720},
        {"heapq", 2752692, 14286},
        {"importlib", 3036240, -3594},
        {"importlib._bootstrap", 3039834, 29108},
        {"importlib._bootstrap_external", 3068942, 38895},
        {"importlib.machinery", 3119124, 944},
        {"inspect", 3128962, 79733},
        {"io", 3208695, 3381},
        {"keyword", 3311780, 1759},
        {"linecache", 3549908, 3772},
        {"locale", 3553680, 34039},
        {"opcode", 4074978, 5407},
        {"operator", 4080385, 13907},
        {"os", 61199, 29622},
        {"posixpath", 4432745, 10417},
        {"quopri", 5007076, 5767},
        {"re", 5032167, 14052},
        {"reprlib", 5046219, 5394},
        {"sre_compile", 5225599, 10272},
        {"sre_constants", 5235871, 5966},
        {"sre_parse", 5241837, 20352},
        {"stat", 5298685, 3845},
        {"stringprep", 5328656, 10024},
        {"struct", 5338680, 306},
        {"threading", 5509535, 37228},
        {"token", 5558360, 3314},
        {"tokenize", 5561674, 18641},
        {"traceback", 5599804, 19640},
        {"types", 5637733, 8195},
        {"warnings", 6036920, 13252},
        {"weakref", 6068051, 19137},
        {NULL, 0, 0}
    };

    struct frozen_desc *current = frozen_modules;

    for(;;) {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
