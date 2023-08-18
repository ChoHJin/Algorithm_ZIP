// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> v(n + 1, 0);

//     for(int i = 1; i <= n; i++) {
//         int num;
//         cin >> num;

//         v[i] = v[i - 1] + num;
//     }

//     int m;
//     cin >> m;

//     for(int i = 0; i < m; i++) {
//         int start, end;
//         cin >> start >> end;

//         cout << v[end] - v[start - 1] << '\n';
//     }


//     return 0;
// }