// #include <iostream>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     int body[51][2];
//     int rank = 1;

//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cin >> body[i][0] >> body[i][1];
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(body[i][0] < body[j][0] && body[i][1] < body[j][1]) {
//                 rank++;
//             }
//         }
//         cout << rank << " ";
//         rank = 1;
//     }
// }
