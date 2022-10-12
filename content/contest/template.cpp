#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define sz(x) (int)(x).size()
#define ll long long
#define pii pair<int,int> 
#define vi vector<int>
#define int long long //Be careful
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
