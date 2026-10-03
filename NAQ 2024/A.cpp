//A. Balatro
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
    
    int n, k; cin >> n >> k;

    vector <int > a, m;
    char s; int v;
    forn (n) {
        cin >> s >> v;
        if (s == 'a') a.push_back(v);
        else m.push_back(v);
    }
    sort(a.begin(),a.end());
    
    sort(m.begin(), m.end());

    int ans = a[a.size()-1];
    cout << ans;
    

    return 0;
}