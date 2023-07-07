// #include <iostream>
// #include <unordered_set>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int a, b, cnt = 0;
//     cin >> a >> b;

//     unordered_set<int> A;
//     unordered_set<int> B;

//     //a집합
//     for(int i = 0; i < a; i++) {
//         int num; cin >> num;
//         A.insert(num);
//     }

//     //b집합
//     for(int i = 0; i < b; i++) {
//         int num; cin >> num;

//         //b집합에 이미 있는 수라면 교집합에 포함
//         if(A.count(num) > 0) {
//             cnt++;
//         }

//         B.insert(num);
//     }

//     //차집합 계수 계산
//     int ans = a - cnt + b - cnt;

//     cout << ans << endl;

//     return 0;
// }