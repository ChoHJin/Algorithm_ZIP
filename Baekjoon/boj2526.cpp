// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, p, cnt = 1;
//     cin >> n >> p;

//     int tmp = 0;
//     tmp = n;

//     vector<int> v(101);

//     while(!v[tmp]) {
//         v[tmp] = cnt++;
//         tmp = tmp * n % p;
//     }

//     cout << cnt - v[tmp] << endl;

//     return 0;
// }