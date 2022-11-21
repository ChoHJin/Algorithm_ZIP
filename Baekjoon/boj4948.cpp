// #include <iostream>

// #define MAX 123456 * 2

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     bool arr[MAX + 1] = { false };
//     arr[1] = true;

//     for(int i = 2; i * i <= MAX; i++) {
//         if(!arr[i]) {
//             for(int j = 2; i * j <= MAX; j++) {
//                 arr[i * j] = true;
//             }
//         }
//     }

//     while(1) {
//         int cnt = 0;

//         cin >> n;
        
//         if(n == 0) break;
        
//         for(int i = n + 1; i <= n * 2; i++) {
//             if(!arr[i]) 
//                 cnt++;
//         }

//         cout << cnt << endl;
//     }

//     return 0;
// }