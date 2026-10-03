//B. Bikes and Barricades
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
    
    int n; cin >> n;

    double ans = 101;

    double x1, y1, x2, y2;
    forn (n){
        cin >> x1 >> y1 >> x2 >> y2;
        double m = (y2 - y1) / (x2 - x1);
        double yint = y1 - m * x1;
        if (x1 > x2 && (x2 > 0 ||  0 > x1 )) yint = -1;
        if (x2 > x1 && (x1 > 0 ||  0 > x2 )) yint = -1;
        if (yint > 0 && yint < ans) ans = yint;
    }

    if (ans > 100){
        cout << -1;
    }
    else cout << ans;
    

    return 0;
}