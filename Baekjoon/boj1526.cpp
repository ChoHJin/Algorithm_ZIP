// #include <iostream>
// #include <algorithm>
// #include <string>

// using namespace std;

// bool checkNum(int num) {
//     while(num) {
//         int digit = num % 10;

//         if(!(digit == 4 || digit == 7)) {
//             return false;

//             break;
//         }

//         num /= 10;
//     }
    
//     return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     for(int i = n; i >= 1; i--) {
//         if(checkNum(i)) {
//             cout << i << endl;
            
//             break;
//         }
//     }
    
//     return 0;
// }