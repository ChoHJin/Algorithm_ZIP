// #include <iostream>
// #include <cmath>
// #include <queue>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     //우선 순위 큐를 사용하여 절댓값 큐를 구현함.
//     //pair의 첫번째 요소는 절댓값, 두번쨰 요소는 원래 값 자체를 저장함
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

//     while (t--) {
//         int n;
//         cin >> n;

        
//         if (n == 0) {   //입력값이 0인 경우, 가장 우선순위가 높은 값을 출력하고 큐에서 제거
//             if (pq.empty()) {
//                 cout << 0 << '\n';
//             } else {
//                 cout << pq.top().second << '\n';
//                 pq.pop();
//             }
//         } else {    //입력 값이 0이 아닌 경우, 우선순위 큐에서 절댓값과 원래 값의 쌍을 추가한다.
//             pq.push(make_pair(abs(n), n));
//         }
//     }


//     return 0;
// }