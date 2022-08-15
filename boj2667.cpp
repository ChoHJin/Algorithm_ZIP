#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int n;
int cnt = 0;
int map[26][26];
bool visited[26][26];

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
vector<int> v;

void dfs(int x, int y) {
    visited[x][y] = true;
    cnt++;
    for(int i = 0; i < 4; i++) {
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx >= 0 && ny >= 0 && nx <= n && ny <= n) {
            if(!visited[nx][ny] && map[nx][ny] == 1) {
                dfs(nx, ny);
            }
        }

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;
        for(int j = 0; j < n; j++) {
            // scanf("%1d", &map[i][j]);   //한개씩 입력받음
            map[i][j] = s[j] - '0';
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(!visited[i][j] && map[i][j] == 1) {
                cnt = 0;
                dfs(i, j);
                v.push_back(cnt);
            }
        }
    }
    cout << v.size() << endl;

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}