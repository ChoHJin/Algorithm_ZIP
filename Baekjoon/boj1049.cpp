// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     int minPack = 1000;
//     int minPiece = 1000;

//     for(int i = 0; i < m; i++) {
//         int pack, piece;
//         cin >> pack >> piece;

//         minPack = min(minPack, pack);
//         minPiece = min(minPiece, piece);
//     }

//     int ans = min((n / 6) * minPack + (n % 6) * minPiece, (n / 6 + 1) * minPack);

//     ans = min(ans, n * minPiece);

//     cout << ans << endl;

//     return 0;
// }