#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool visited[101];
vector<int>com[101];
int cnt = 0;


void dfs(int v) {
    visited[v] = true;
    cnt++;

    for (int i : com[v]) {
        if(!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int n, p;
    cin >> n;
    cin >> p;

    for(int i = 0; i < p; i++) {
        int c1, c2;
        cin >> c1 >> c2;
        com[c1].push_back(c2);
        com[c2].push_back(c1);
    }
    dfs(1);

    cout << cnt - 1 << "\n";

    return 0;
}