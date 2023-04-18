// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> A(n);
//     vector<pair<int, int>> P(n);

//     for (int i = 0; i < n; i++) {
//         cin >> A[i];
//         P[i] = make_pair(A[i], i);
//     }

//     sort(P.begin(), P.end());

//     vector<int> answer(n);
//     for (int i = 0; i < n; i++) {
//         int idx = P[i].second;
//         answer[idx] = i;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << answer[i] << " ";
//     }

//     return 0;
// }
