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
ll find_first_true(function<bool(ll)> f,ll lb,ll rb){ 
    while(lb<rb){
        ll mb=(lb+rb)>>1;
        f(mb)?rb=mb:lb=mb+1; 
    } 
    return lb;
}
ll find_last_true(function<bool(ll)> f,ll lb,ll rb){
    while(lb<rb){
        ll mb=(lb+rb+1)>>1;
        f(mb)?lb=mb:rb=mb-1; 
    } 
    return lb;
}