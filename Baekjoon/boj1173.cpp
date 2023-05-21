// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int N, m, M, T, R;
//     cin >> N >> m >> M >> T >> R;

//     int cnt = 0, time = 0;
//     int pulse = m;

//     if(M - m < T) {
//         cout << -1 << endl;
//         return 0;
//     }

//     while(cnt < N) {
//         if(pulse + T <= M) {
//             pulse += T;
//             cnt++;
//         } else if(pulse + T > M && pulse + T <= M + R) {
//             pulse = max(m, pulse - R);
//         } else {
//             pulse -= R;
//             pulse = max(m, pulse);
//         }
//         time++;        
//     }

//     cout << time << endl;

//     return 0;
// }