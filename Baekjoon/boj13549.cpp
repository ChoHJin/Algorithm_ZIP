// #include <iostream>
// #include <queue>
// #include <vector>

// using namespace std;

// const int MAX = 100000;

// int bfs01(int n, int k) {
//     vector<int> visited(MAX + 1, -1);

//     queue<int> q;
//     q.push(n);
//     visited[n] = 0;

//     while (!q.empty()) {
//         int current = q.front();
//         q.pop();

//         if (current == k) {
//             break;
//         }

//         // 2배로 이동하는 경우
//         if (current * 2 <= MAX && visited[current * 2] == -1) {
//             q.push(current * 2);
//             visited[current * 2] = visited[current];
//         }

//         // -1로 이동하는 경우
//         if (current - 1 >= 0 && visited[current - 1] == -1) {
//             q.push(current - 1);
//             visited[current - 1] = visited[current] + 1;
//         }
        
//         // +1로 이동하는 경우
//         if (current + 1 <= MAX && visited[current + 1] == -1) {
//             q.push(current + 1);
//             visited[current + 1] = visited[current] + 1;
//         }
//     }

//     return visited[k];
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k;
//     cin >> n >> k;

//     int result = bfs01(n, k);
//     cout << result << endl;

//     return 0;
// }
