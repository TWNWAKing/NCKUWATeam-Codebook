/**
 * Author: TWNWAKing
 * Date: 2022-10-04
 * License: CC0
 * Source: Neal Wu
 * Description: Generator with some random stuff, assume a<=b in the code
 */
#pragma once

uint64_t random_address() { char *p = new char; delete p; return uint64_t(p); }
const uint64_t SEED = (unsigned int)chrono::steady_clock::now().time_since_epoch().count() * (random_address() | 1);
mt19937_64 rng(SEED);
//uniform_real_distribution<double>(a,b)(rng);
//uniform_int_distribution<int64_t>(a,b)(rng);
int64_t log_rng(int64_t a,int64_t b){
    double min_val=double(a)-0.5,max_val=double(b)+0.5;
    int64_t x=int64_t(round(min_val-1+exp(real_rng(0,log(max_val-min_val+1)))));
    static const int UNCHANGED_BITS=30;
    if(uint64_t(x-a)>=1LLU<<UNCHANGED_BITS)
        x^=rng() >> (__builtin_clzll(x-a)+UNCHANGED_BITS);
    return min(max(x,a),b);
}