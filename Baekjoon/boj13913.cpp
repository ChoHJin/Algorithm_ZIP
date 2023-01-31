// #include <iostream>
// #include <queue>
// #include <vector>

// #define MAX 100001

// using namespace std;

// queue<pair<int, int>> q;
// vector<int> v;  //이동순서 출력에 사용할 배열
// int path[MAX];  //이동순서를 저장할 배열
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
//             int idx = x;    //현재위치를 idx에 저장

//             while(idx != n) {   
//                 v.push_back(idx);  //idx값을 v에 push
//                 idx = path[idx];   //path[idx]값을 idx에 저장하여 이전 값을 추적함.
//             }
//             v.push_back(n);

//             return cnt;
//         }

//         if(x + 1 < MAX && !visited[x + 1]) {
//             q.push(make_pair(x + 1, cnt + 1));
//             visited[x + 1] = true;
//             path[x + 1] = x;    //현재위치인 x를 배열에 저장함.
//         }

//         if(x - 1 >= 0 && !visited[x - 1]) {
//             q.push(make_pair(x - 1, cnt + 1));
//             visited[x - 1] = true;
//             path[x - 1] = x;
//         }

//         if(x * 2 < MAX && !visited[x * 2]) {
//             q.push(make_pair(x * 2, cnt + 1));
//             visited[x * 2] = true;
//             path[x * 2] = x;
//         }
//     }
//     return 0;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> k;

//     cout << bfs(n) << endl;

//     for(int i = v.size() - 1; i >= 0; i--) {    //이동과정 출력, 역순으로 저장되어 있으므로 반대로 출력함.
//         cout << v[i] << " ";
//     }

//     return 0;
// }