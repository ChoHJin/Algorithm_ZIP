// #include <iostream>
// #include <cmath>

// using namespace std;

// int cnt;

// void hanoi(int n, int start, int mid, int end) {
//     if(n == 1) {
//         cout << start << " " << end << '\n';
//     } else {
//         hanoi(n - 1, start, end, mid);
//         cout << start << " " << end << '\n';
//         hanoi(n - 1, mid, start, end);
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     cnt = pow(2, n) - 1;

//     cout << cnt << '\n';
    
//     hanoi(n, 1, 2, 3);

//     return 0;
// }