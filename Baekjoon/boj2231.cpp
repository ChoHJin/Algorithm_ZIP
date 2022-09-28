// #include <iostream>
// #include <algorithm>

// using namespace std;

// int boon(int m) {   //각 자리수의 합을 구함.
//     int sum = m;

//     while(m != 0) {
//         sum += m % 10;
//         m /= 10;
//     }

//     return sum;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int ans = 0;

//     cin >> n;

//     for(int i = 1; i < n; i++) {
//        if(boon(i) == n) {   //가장 낮은수를 찾기 위해 처음으로 찾은 값을 출력함
//             ans = i;
//             break;
//        }
//     }

//     cout << ans << endl;

//     return 0;
// }

