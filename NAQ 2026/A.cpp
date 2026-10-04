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
    long long MOD = 998244353;
    long long n; cin >> n;
    long long ans = 0;

    long long six = 0;
    

    ans += (((n/6)*n)%MOD * n);
    long long store = n%6;
    six += (store * ((n*n) % MOD))%MOD;
    ans %= MOD;

    ans += ((((n/6) * n) %MOD) * 3);
    store = n%6;
    six += (store*n*3);
    six %= MOD;
    ans %= MOD;


    ans += ((2 * (n/6)) % MOD);
    store = n%6;
    six +=(store*2);
    six %= MOD;
    ans %= MOD;

    cout << ((ans + six/6) %MOD);
    
    

    return 0;
}