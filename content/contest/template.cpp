#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
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
#define int long long
void solve(){}
signed main(){
#ifdef LOCAL_DBG
    auto begin = chrono::high_resolution_clock::now();
    cin.tie(nullptr);
#endif
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    int T=1;
    //cin >> T;
    while(T--) solve();
#ifdef LOCAL_DBG
    auto end = chrono::high_resolution_clock::now();
    cerr << setprecision(4) << fixed;
    cerr << endl << "Execution time: " << chrono::duration_cast<chrono::duration<double>>(end - begin).count() << " seconds" << endl;
#endif
    return 0;
}
