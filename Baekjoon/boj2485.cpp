// #include <iostream>
// #include <vector>
// #include <algorithm>
                                                                                                                                             
// using namespace std;

// int gcd(int a, int b) {
//     if(b == 0) {
//         return a;
//     }

//     return gcd(b, a % b);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> v(n);

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     int gap = v[1] - v[0]; 

//     for(int i = 2; i < n; i++) {
//         gap = gcd(gap, v[i] - v[i - 1]);
//     }

//     int totalGap = (v[n - 1] - v[0]) / gap + 1;
    
//     int ans = totalGap - n;

//     cout << ans << endl;

//     return 0;
// }