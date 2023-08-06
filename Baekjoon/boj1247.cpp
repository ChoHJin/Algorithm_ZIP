// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     for(int t = 0; t < 3; t++) {
//         int n, cnt = 0;
//         cin >> n;

//         long long sum = 0;
//         long long tmp;
        
//         while(n--) {
//             cin >> tmp;

//             long long prv = sum;

//             sum += tmp;

//             if(tmp > 0 && prv > 0 && sum < 0) 
//                 cnt++;
//             if(tmp < 0 && prv < 0 && sum > 0) 
//                 cnt--;

//         }

//         if(cnt > 0) {
//             cout << '+' << endl;
//         } else if(cnt == 0) {
//             if(sum > 0) {
//                 cout << '+' << endl;
//             } else if(sum == 0) {
//                 cout << 0 << endl;
//             } else {
//                 cout << '-' << endl;
//             }
//         } else {
//             cout << '-' << endl;
//         }
//     }

//     return 0;
// }