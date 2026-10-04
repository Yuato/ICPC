#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    int p;
    map<int,bool>m;
    forn (n){
        cin >> p;
        m[(p-1)/10] = true;
    }
    int ans = 0;
    forn(4){
        if (m[i]) ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    forn (t) {
        solve();
    }
    return 0;
}