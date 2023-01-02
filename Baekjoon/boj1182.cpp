// #include <iostream>

// using namespace std;

// int arr[21];
// int n, s, cnt;

// void bt(int idx, int tmp) {
//     if(idx == n) return;
//     if(tmp + arr[idx] == s) cnt++;

//     bt(idx + 1, tmp);
//     bt(idx + 1, tmp + arr[idx]);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> s;

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     bt(0, 0);

//     cout << cnt << endl;

//     return 0;
// }