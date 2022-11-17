// #include <iostream>
// #include <vector>

// using namespace std;

// vector<long long> v;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long n, l;
    
//     cin >> n >> l;
    
//     for(int i = l; i <= 100; i++) {
//         int tmp = n - i * (i + 1) / 2;

//         if(tmp % i == 0) {
//             int a = tmp / i + 1;

//             if(a >= 0) {
//                 for(int j = 0; j < i; j++) {
//                     cout << a + j << " ";
//                 }
//                 cout << endl;

//                 return 0;
//             }
//         } 
//     }
    
//     cout << -1 << endl;

//     return 0;
// }