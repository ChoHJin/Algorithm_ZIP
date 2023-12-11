// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     double n, p, ans;
//     cin >> n >> p;

//     if(n < 5) {
//         ans = p;
//     } else if(n < 10) {
//         ans = p - 500;
//     } else if(n < 15) {
//         ans = min(p - 500, p * 0.9);
//     } else if(n < 20) {
//         ans = min({p - 500, p * 0.9, p - 2000});
//     } else {
//         ans = min({p - 500, p * 0.9, p - 2000, p * 0.75});
//     }

//     if(ans < 0) ans = 0;
    
//     cout << ans << endl;

//     return 0;
// }