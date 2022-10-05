// #include <iostream>
// #include <queue>

// using namespace std;

// priority_queue<int, vector<int>, greater<int>> q;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int card;
//     int ans = 0;   
    
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> card;
//         q.push(card);
//     }

//     //1 2 4
//     //1 + 2 = 3,,, 3 + 4 = 7,,, 3 + 7 = 10

//     //1, 2, 3, 5
//     //1 + 2 = 3,,,, 3 + 5 - 8,,, 3 + 8 = 11 -> 3 + 8 + 11 = 22 -> x
//     //1 + 2 = 3,,,,, 3 + 3 = 6,,, 6 + 5 = 11 -> 3 + 6 + 11 = 20 -> o

//     //가장 작은 수 부터 더해 올라가야 하므로 정렬을 계속해서 반복해야됨. 따라서 우선순위 큐를 사용

//     while(q.size() != 1) {
//         int a, b;
//         // 큐에서 가장 작은수 두 개를 꺼낸다.
//         a = q.top();   
//         q.pop();

//         b = q.top();
//         q.pop();
//         // 두 수를 ans에 더하고,
//         ans += a + b;
//         // 더한 값을 큐에 다시 넣어서 사이즈가 1이 될때 까지 반복
//         q.push(a + b);
//     }

//     cout << ans << endl;

//     return 0;
// }