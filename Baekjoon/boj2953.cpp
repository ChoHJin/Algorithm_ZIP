// #include <iostream>
// #include <algorithm>

// using namespace std;

// int arr[5];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int maxScore = 0;

//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 4; j++) {
//             int score;
//             cin >> score;
//             arr[i] += score;
//         }
//         maxScore = max(maxScore, arr[i]);
//     }

//     int winner = 0;

//     for(int i = 0; i < 5; i++) {
//         if(arr[i] == maxScore) {
//             winner = i + 1;
//         }
//     }

//     cout << winner << " " << maxScore << endl;

//     return 0;
// }