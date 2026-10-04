#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    
    int n ; cin >> n;
    vector<int>v(n);
    for (int i = 0 ; i < n; i++){
        cin >> v[i];
    }

    int a = v[0]/3;
    int c = v[n-1]/3;
    int b = v[1]- 2 * a;
    cout << a << " "<< b << " " << c;
}