/**
 * Author: TWNWAKing
 * Date: 2022-10-12
 * License: CC0
 * Source: own work
 * Description: Some useful pragmas. Just use them.
 */
#ifndef LOCAL_DBG
#pragma GCC optimize("Ofast","unroll-loops","no-stack-protector","fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma comment(linker, "/stack:200000000")
#else
#pragma GCC optimize("trapv")
#endif