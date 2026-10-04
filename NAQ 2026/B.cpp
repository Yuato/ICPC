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
    priority_queue<int, vector<int>, greater<int> > pq;
    
    int n; cin >> n;
    int ans = 0;
    long long a, b, c; cin >> a >> b >> c;
    if (b - a > c - b){
        ans ++;
    }
    forn (n-3){
        a = b;
        b = c;
        cin >> c;
        if (b - a > c - b){
            ans ++;
        }
    }
    cout << ans;
    return 0;
}