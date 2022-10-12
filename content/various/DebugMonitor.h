/**
 * Author: TWNWAKing
 * Date: 2022-10-12
 * License: CC0
 * Source: Neal Wu
 * Description: Use this tool to watch the line of variables and their value in stderr, including normal variables and iterable STL.
 * Usage: debug(a,b,c);
 * To watch variable a,b,c(the number of arguments has no limit). We don't have to comment it since we have conditional compilation.
 */
#ifdef LOCAL_DBG
template<typename A,typename B> ostream& operator<<(ostream &os,const pair<A, B>&p){return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container,typename T=typename enable_if<!is_same<T_container,string>::value,typename T_container::value_type>::type>ostream&operator<<(ostream &os,const T_container&v){os<<'{';string sep;for(const T&x:v)os<<sep<<x,sep=", ";return os<<'}';}
void debug_out(){cerr<<"]\n"<<flush;}
template<typename Head,typename... Tail>void debug_out(Head H,Tail... T){cerr << H;if(sizeof...(T))cerr<<", ";debug_out(T...);}
#define debug(...) cerr<<"LINE("<<__LINE__<<") : ["<<#__VA_ARGS__<<"] = [";debug_out(__VA_ARGS__)
#else
#define debug(...)
#define cerr if(false)cerr
#endif