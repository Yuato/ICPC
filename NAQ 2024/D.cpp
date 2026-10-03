
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    map <int,int> m;
    forn(1000) {
        m[i + 1] = 0;
    }
    
    int n; cin >> n;
    forn (n*50) {
        int a; cin >> a;
        m[a] += 1;
    }

    vector<int> v;
    bool y = true;
    forn(1000) {
        if (m[i + 1] > 2*n) {
            cout << i + 1 << " ";
            y = false;
        }
    }

    if (y) cout << -1;
    

    return 0;
}