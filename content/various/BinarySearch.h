/**
 * Author: TWNWAKing
 * Date: 2022-10-12
 * License: CC0
 * Source: tmwilliamlin168
 * Description:
 * Find the position of first or last true of monotonic function (T...TF...F or F...FT...T)
 * Usage: int pos = find_first_true(lb, rb, [\&](int i)->bool{return a[i] > 0;});
 * Time: O(\log(rb - lb))
 * Status: tested in Codeforces online binary search courses
 */
int64_t find_first_true(function<bool(int64_t)> f,int64_t lb,int64_t rb){ 
    while(lb<rb){
        int64_t mb=(lb+rb)>>1;
        f(mb)?rb=mb:lb=mb+1; 
    } 
    return lb;
}
int64_t find_last_true(function<bool(int64_t)> f,int64_t lb,int64_t rb){
    while(lb<rb){
        int64_t mb=(lb+rb+1)>>1;
        f(mb)?lb=mb:rb=mb-1; 
    } 
    return lb;
}