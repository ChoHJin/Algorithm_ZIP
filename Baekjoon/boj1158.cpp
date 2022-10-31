// #include <iostream>
// #include <queue>
// #include <vector>

// using namespace std;

// int ans[5001];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k;
//     queue<int> q;
//     vector<int> v;

//     cin >> n >> k;

//     for(int i = 1; i <= n; i++) {
//         q.push(i);
//     }
//     while(!q.empty()) {
//         for(int i = 0; i < k - 1; i++) {
//             q.push(q.front());
//             q.pop();
//         }
//         v.push_back(q.front());
//         q.pop();
//     }
    
//     cout << "<";
//     for(int i = 0; i < n - 1; i++) {
//         cout << v[i] << ", ";
//     }
//     cout << v[n - 1] << ">" << endl;

//     return 0;
// }