// #include <iostream>

// using namespace std;

// int euclid(int a, int b) {  //gcd : 최대공약수
//     if(b == 0) {
//         return a;
//     }
//     else return euclid(b, a % b);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;

//     cin >> t;

//     while(t--) {
//         int a, b;

//         cin >> a >> b;

//         cout <<  a * b / euclid(a, b) << endl;  //lcm : 최소공배수
//     }

//     return 0;
// }