#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    long long n;
    double p;
    cin >> n >> p;
    vector <long long> v(n);
    double sum = 0;
    forn (n){
        cin >> v[i];
        sum += v[i];
    }
    cout << fixed << setprecision(10);
    p /= sum;

    double ans = 0;
    forn (n) {
        ans += (long double) p * p *v[i];
    }

    cout << (double) ans << '\n';
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