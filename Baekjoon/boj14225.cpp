// #include <iostream>
// #include <vector>

// using namespace std;

// bool visited[2000001];
// int s[21];
// int n;

// void dfs(int idx, int sum) {
//     if(idx == n) {
//         visited[sum] = true;
//         return;
//     }

//     dfs(idx + 1, sum + s[idx]);
//     dfs(idx + 1, sum);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;    

//     for(int i = 0; i < n; i++) {
//         cin >> s[i];
//     }

//     dfs(0, 0);

//     for(int i = 0; i < 2000001; i++) {
//         if(!visited[i]) {
//             cout << i << endl;
//             break;
//         }
//     }

//     return 0;
// }