// #include <iostream>
// #include <queue>

// #define MAX 100001

// using namespace std;

// queue<pair<int, int>> q;
// bool visited[MAX];

// int n, k;

// int bfs(int n) {
//     q.push(make_pair(n, 0));
//     visited[n] = true;

//     while(!q.empty()) {
//         int x = q.front().first;
//         int cnt = q.front().second;
//         q.pop();

//         if(x == k) {    //수빈이가 동생을 찾았으면 cnt 리턴
//             return cnt;
//         }

//         if(x + 1 < MAX && visited[x + 1] == false) {
//             q.push(make_pair(x + 1, cnt + 1));
//             visited[x + 1] = true;
//         }

//         if(x - 1 >= 0 && visited[x - 1] == false) {
//             q.push(make_pair(x - 1, cnt + 1));
//             visited[x - 1] = true;
//         }

//         if(x*2 < MAX && visited[x*2] == false) {
//             q.push(make_pair(x*2, cnt + 1));
//             visited[x*2] = true;
//         }
//     }
//     return 0;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> k;

//     cout << bfs(n) << endl;

//     return 0;
// }