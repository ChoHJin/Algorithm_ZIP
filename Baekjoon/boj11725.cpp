// #include <iostream>
// #include <vector>

// using namespace std;

// bool visited[100001];
// vector<int> v[100001];  //트리
// int arr[100001];    //부모
// int n;

// void dfs(int x) {   // x : 노드
//     visited[x] = true;  //방문한 노드는 true로 표시
    
//     for(int i = 0; i < v[x].size(); i++) {
//         if(!visited[v[x][i]]) { //방문하지 않은 노드라면
//             arr[v[x][i]] = x;   //다음 노드의 부모는 x
//             dfs(v[x][i]);       //다음 노드 탐색
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         int a, b;
//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }

//     dfs(1); //루트가 1부터 시작이므로

//     for(int i = 2; i <= n; i++) {
//         cout << arr[i] << "\n";
//     }
//     return 0;
// }