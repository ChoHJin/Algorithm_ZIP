// #include <iostream>
// #include <queue>

// #define MAX 100001

// using namespace std;

// queue<pair<int, int>> q;
// bool visited[MAX];

// int n, k, ans, cnt;

// int bfs(int n) {
//     q.push(make_pair(n, 0));
//     visited[n] = true;

//     while(!q.empty()) {
//         int x = q.front().first;
//         int y = q.front().second;
//         q.pop();

//         visited[x] = true;  //숨바꼭질1 과 달리 숨바꼭질 2에서는 큐에서 pop할 때 방문지점 표시

//         //이미 목적지에 한번 도달했을 경우 cnt++
//         if(ans && ans == y && x == k) cnt++;

//         //최초로 목적지 도달시 최소 시간 갱신하고 cnt++;
//         if(!ans && x == k) {
//             ans = y;
//             cnt++;
//         }

//         //3개의 경우의 수
//         if(x + 1 < MAX && !visited[x + 1]) {
//             q.push(make_pair(x + 1, y + 1));
//         }

//         if(x - 1 >= 0 && !visited[x - 1]) {
//             q.push(make_pair(x - 1, y + 1));
//         }

//         if(x * 2 < MAX && !visited[x * 2]) {
//             q.push(make_pair(x * 2, y + 1));
//         }
//     }

//     return ans;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> k;

//     cout << bfs(n) << endl;
//     cout << cnt << endl;

//     return 0;
// }