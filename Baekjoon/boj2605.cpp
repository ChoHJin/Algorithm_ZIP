// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> student;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;

//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         student.push_back(i);
//     }

//     for(int i = 0; i < n; i++) {
//         cin >> m;

//         for(int j = 0; j < m; j++) {
//             int tmp = student[i];
//             student[i] = student[i + j - m];
//             student[i + j - m] = tmp;
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         cout << student[i] << " ";
//     }
//     cout << endl;
    

//     return 0;
// }