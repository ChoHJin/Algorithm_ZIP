// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     int score = 0, bonus = 0;
//     int arr[101];

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];

//         if(arr[i] == 1) {
//             score++;

//             if(arr[i - 1] == 1) {
//                 bonus++;
//                 score += bonus;
//             } else {
//                 bonus = 0;
//             }
//         }
//     }
    
//     cout << score << endl;

//     return 0;
// }