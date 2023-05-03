// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, score, p;

//     cin >> n >> score >> p;

//     vector<int> rankBoard;

//     if(n == 0) rankBoard.push_back(score);
//     else {
//         for(int i = 0; i < n; i++) {
//             int num; cin >> num;
//             rankBoard.push_back(num);
//         }
//     }

//     int rank = 1;

//     if(n == p && rankBoard[n - 1] >= score) {   //리스트가 꽉 찬 상태에서 가장 낮은 점수와 태수의 점수가 같거나 작으면 -1
//         rank = -1;
//     } else {
//         for(int i = 0; i < n; i++) {    //그 이외의 경우 리스트에서 값이 큰 수의 개수를 카운트 
//             if(rankBoard[i] > score) {
//                 rank++;
//             }
//         }
//     }

//     cout << rank << endl;

//     return 0;
// }