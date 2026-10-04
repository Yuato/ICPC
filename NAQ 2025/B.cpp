//SOLVED (Kattis)
/*
BFS, grid stores two towers each, FIFO.
*/
#include <bits/stdc++.h>
#define pii pair<int, int>

using namespace std;

int main() {
    int r, c, n; cin >> r >> c >> n;
    pii arr[r][c];

    deque <pair<int, pii>> q;
    int a, b;
    for (int i = 1; i <= n; i++){
        cin >> a >> b;
        q.push_back(pair(i, pair(a - 1, b - 1)));

    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr [i][j] = pair(-1,-1);
        }    
    }

    int t, node;
    while (!q.empty()){
        auto [t, node] = q.front();
        q.pop_front();
        bool in = true;
        if (node.first < 0 || node.second < 0){
            in = false;
        }
        if (node.first >= r || node.second >= c){
            in = false;
        }
        if (in){
            if (arr[node.first][node.second].first == -1){
                arr[node.first][node.second].first = t;
                q.push_back(pair(t,pair(node.first,node.second+1)));
                q.push_back(pair(t,pair(node.first+1,node.second)));
                q.push_back(pair(t,pair(node.first,node.second-1)));
                q.push_back(pair(t,pair(node.first-1,node.second)));
            }
            else if (arr[node.first][node.second].first != t && arr[node.first][node.second].second == -1){
                arr[node.first][node.second].second = t;
                q.push_back(pair(t,pair(node.first,node.second+1)));
                q.push_back(pair(t,pair(node.first+1,node.second)));
                q.push_back(pair(t,pair(node.first,node.second-1)));
                q.push_back(pair(t,pair(node.first-1,node.second)));
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr [i][j].first << " "; 
        }    
        cout << "\n";
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr [i][j].second << " "; 
        }    
        cout << "\n";
    }
}