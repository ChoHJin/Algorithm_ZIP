// #include <iostream>
// #include <queue>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     priority_queue<int, vector<int>, greater<int>> pq;

//     //n개의 숫자를 먼저 우선순위 큐에 저장
//     for(int i = 0; i < n; i++) {
//         int num;
//         cin >> num;

//         pq.push(num);
//     }

//     //두 번째줄부터 n번째 행까지 입력받은수를 확인
//     for(int i = 1; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             int num;
//             cin >> num;
            
//             //만약 현재 행의 수가 우선순위 큐의 가장 작은 수 보다 크다면
//             //우선순위 큐에서 가장 작은 수를 제거하고 그 수를 삽입
//             if(num > pq.top()) {
//                 pq.pop();
//                 pq.push(num);
//             }
//         }
//     }

//     cout << pq.top() << '\n';    

//     return 0;
// }