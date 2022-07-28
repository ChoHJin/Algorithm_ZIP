// #include <iostream>
// #include <algorithm>

// using namespace std;

// int x[10000001] = {0, };

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;
    
//     for(int i = 2; i <= n; i++) {
//         x[i] = x[i-1] + 1;

//         if(i % 3 == 0) {
//             x[i] = min(x[i], x[i/3] + 1);
//         }

//         if(i % 2 == 0) {
//             x[i] = min(x[i], x[i/2] + 1);
//         }
//     }
//     cout << x[n] << "\n";
//  }
