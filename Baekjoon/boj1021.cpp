// #include <iostream>
// #include <deque>

// using namespace std;

// deque<int> dq;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     int ans = 0;
    
//     cin >> n >> m;

//     for(int i = 1; i <= n; i++) {
//         dq.push_back(i);
//     }

//     for(int i = 0; i < m; i++) {
//         int num;
//         cin >> num;

//         int idx = 0;
//         for(deque<int>::iterator it = dq.begin(); it != dq.end(); it++) {
//             if(*it == num) {
//                 break;
//             }
//             idx++;
//         }

//         //왼쪽으로 회전하는 경우
//         if(idx <= dq.size() / 2) {
//             for(int j = 0; j < idx; j++) {
//                 int tmp = dq.front();
//                 dq.pop_front();
//                 dq.push_back(tmp);
//                 ans++;
//             }
//         }
//         //오른쪽으로 회전하는 경우
//         else {
//             for(int j = 0; j < dq.size() - idx; j++) {
//                 int tmp = dq.back();
//                 dq.pop_back();
//                 dq.push_front(tmp);
//                 ans++;
//             }
//         }

//         //뽑아내기
//         dq.pop_front();
//     }

//     cout << ans << endl;

//     return 0;
// }