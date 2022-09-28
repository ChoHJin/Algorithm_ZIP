// #include <iostream>
// #include <cmath>

// using namespace std;

// bool isPrime(int x) {
// 	int rt = (int)sqrt(x);
    
//     if(x < 2) 
//         return false;

// 	for (int i = 2; i <= rt; i++) {
//         if (x % i == 0) 
//             return false;
//     }
//     return true;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;

//     cin >> n >> m;

//     for(int i = n; i <= m; i++) {
//         if(isPrime(i)) {
//             cout << i << "\n";
//         }
//     }
// }