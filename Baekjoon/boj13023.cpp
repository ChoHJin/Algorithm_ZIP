// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v[2001];
// bool visited[2001];

// int n, m, ans;

// void dfs(int x, int cnt) {
//     visited[x] = true;

//     if(cnt == 4) {    //x가 4가 되면 ABCDE를 만족함.
//         ans =  1;
//         return;
//     }

//     for(int i = 0; i < v[x].size(); i++) {
//         int next = v[x][i];

//         if(!visited[next]) {
//             visited[next] = true;
//             dfs(next, cnt + 1);
//             visited[next] = false;
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;

//     for(int i = 0; i < m; i++) {
//         int a, b;

//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }

//     for(int i = 0; i < n; i++) {
//         visited[i] = true;
//         dfs(i, 0);

//         if(ans == 1) {
//             break;
//         }

//         visited[i] = false;
//     }

//     cout << ans << endl;

//     return 0;
// }