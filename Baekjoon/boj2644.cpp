// #include <iostream>
// #include <vector>

// using namespace std;

// int n, m, ans;
// vector<int> v[101];
// bool visited[101];

// void dfs(int x, int y, int cnt) {
//     visited[x] = true;
//     if(x == y) {    //x노드가 y노드에 도달했다면,
//         ans = cnt;  //촌수 리턴
//         return;
//     }

//     for(int i = 0; i < v[x].size(); i++) {
//         if(!visited[v[x][i]]) { //방문하지 않은 노드가 있다면
//             dfs(v[x][i], y, cnt + 1);   //cnt 증가후 다음 노드 탐색
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int a, b;

//     cin >> n;
//     cin >> a >> b;  //찾고자 하는 촌수 관계
//     cin >> m;

//     for(int i = 0; i < m; i++) {    //그래프(트리) 생성
//         int c, d;
//         cin >> c >> d;
//         v[c].push_back(d);
//         v[d].push_back(c);
//     }

//     dfs(a, b, 0);   // 

//     if(ans == 0) {
//         cout << -1 << endl;
//     }
//     else
//         cout << ans << endl;

//     return 0;
// }