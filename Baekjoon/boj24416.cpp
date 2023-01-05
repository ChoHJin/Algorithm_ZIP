// #include <iostream>

// using namespace std;

// int f[41];
// int cnt1, cnt2;

// int fib1(int n) {
//     if(n == 1 || n == 2) {
//         cnt1++;
//         return 1;
//     }
//     else 
//         return (fib1(n - 1) + fib1(n - 2));
// }

// int fib2(int n) {
//     f[1] = f[2] = 1;
//     for(int i = 3; i <= n; i++) {
//         f[i] = f[i - 1] + f[i - 2];
//         cnt2++;
//     }

//     return f[n];
// }


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     fib1(n);

//     fib2(n);

//     cout << cnt1 << " " << cnt2 << endl;


//     return 0;
// }