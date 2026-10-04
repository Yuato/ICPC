#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    long long n; cin >> n;
    int a = n%10;

    string num = "";
    while(n > 0){
        num = char(n%10 + '0') + num;
        n /= 10;
    }
    int inx = num.size()-1;
    string con = num;
    bool over = false;

    if (10-(con[0] -'0') < num.size()){
        over = true;
    }
    if (!over){
        forn (con.size()-1){
            con[i+1] = con[i] + 1; 
        }
    }
    bool check = false;
    forn (num.size()){
        if (con[i] > num[i]){
            break;
        }
        else if (con[i] < num[i]){
            check = true;
        }
    }
    if (check){
        if (con[0] == 9){
            con = '1' + con;
        }
        else {
            con[0] += 1;
        }
    }
    if (10-(con[0] -'0') < con.size()){
        over = true;
    }
    if (!over){
        forn (con.size()-1){
            con[i+1] = con[i] + 1; 
        }
    }


    long long ans = 0;
    if (over){
        if (con.size() < 9){
            forn(con.size()+1){
                ans *= 10;
                ans += (i + 1);
            }
        }
    }
    else{
        forn(con.size()){
            ans *= 10;
            ans += (con[i]-'0');
        }
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