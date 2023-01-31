// #include <iostream>
// #include <deque>

// #define MAX 100001

// using namespace std;

// deque<pair<int, int>> dq;
// bool visited[MAX];

// int n, k;

// int bfs01(int n) {
//     dq.push_back(make_pair(n, 0));
//     visited[n] = true;

//     while(!dq.empty()) {
//         int x = dq.front().first;
//         int cnt = dq.front().second;

//         dq.pop_front();

//         if(x == k) {    //수빈이가 동생을 찾았으면 cnt 리턴
//             return cnt;
//         }

//         //순간이동하는데 걸리는 시간이 없으므로 순간이동을 먼저 할 수 있도록함.
//         if(x * 2 < MAX && !visited[x * 2]) {
//             dq.push_front(make_pair(x * 2, cnt));   //순간이동하는데 걸리는 시간 0초
//             visited[x * 2] = true;
//         }

//         if(x + 1 < MAX && !visited[x + 1]) {
//             dq.push_back(make_pair(x + 1, cnt + 1));
//             visited[x + 1] = true;
//         }

//         if(x - 1 >= 0 && !visited[x - 1]) {
//             dq.push_back(make_pair(x - 1, cnt + 1));
//             visited[x - 1] = true;
//         }
//     }
//     return 0;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> k;

//     cout << bfs01(n) << endl;

//     return 0;
// }