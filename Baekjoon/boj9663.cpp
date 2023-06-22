// #include <iostream>
// #include <vector>

// using namespace std;

// int n, cnt;
// vector<int> v;

// bool check(int r, int c) {
//     for(int i = 0; i < r; i++) {
//         //같은 열 검사
//         if(v[i] == c) return false;

//         //대각선 검사
//         if(abs(r - i) == abs(c - v[i])) return false;
//     }

//     return true;
// }

// void nQueen(int r) {
//     //마지막 행까지 퀸을 배치한 경우
//     if(r == n) {
//         cnt++;
//         return;
//     }

//     for(int i = 0; i < n; i++) {
//         if(check(r, i)) {
//             v[r] = i;   //현재 행의 퀸 위치 설정
//             nQueen(r + 1);  //다음 행으로 넘어감
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;

//     v.resize(n);

//     nQueen(0);

//     cout << cnt << endl;

//     return 0;
// }