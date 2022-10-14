// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;
    
//     while(n--) {
//         int ans = 0;
//         long long x, y;
//         cin >> x >> y;

//         double dis = y - x;          //두 지점 사이의 거리
//         double d = sqrt(dis);        //dis의 제곱근
//         int pow = round(sqrt(dis));    //d 반올림
        
//         if(d <= pow) {
//             cout << (pow * 2) - 1 << endl;
//         }
//         else {
//             cout << pow * 2 << endl;
//         }
//     }

//     return 0;
// }