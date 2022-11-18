#include <iostream>
#include <vector>

using namespace std;

vector<int> tree[51];
bool visited[51];
int parent[51];
int n, cnt, removeNode;

void dfs(int x) {
    if(visited[x]) return;

    visited[x] = true;

    if(tree[x].size() == 0 || (tree[x].size() == 1 && tree[x][0] == removeNode)) {
        cnt++;
    }

    for(int i = 0; i < tree[x].size(); i++) {
        int next = tree[x][i];

        if(removeNode != next) {
            dfs(next);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int root = -1;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if(a == -1) root = i;
        else {
            tree[a].push_back(i);
        }
    }
    cin >> removeNode;

    if(removeNode == root) {
        cout << 0 << endl;
    }
    else {
        dfs(root);
        cout << cnt << endl;
    }

    return 0;
}