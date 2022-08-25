// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// bool isPrime(int n) {
//     if(n < 2) return false;
    
//     for(int i = 2; i <= sqrt(n); i++) {
//         if(n % i == 0) return false;
//     }

//     return true;
// }

// vector<int> p;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;

//     cin >> n >> m;


//     for(int i = n; i <= m; i++){
//         if(isPrime(i)) {
//             p.push_back(i);
//         }
//     }

//     sort(p.begin(), p.end());

//     int sum = 0;

//     if(p.empty()) {
//         cout << -1 << endl;
//         return 0;
//     }
//     else {
//         for(int i = 0; i < p.size(); i++) {
//             sum += p[i]; 
//     }

//         cout << sum << endl;
//         cout << p[0] << endl; 
//     }
    
//     return 0;
// }