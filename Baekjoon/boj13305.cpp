// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<long long> dist(n - 1);
//     vector<long long> price(n);

//     for(int i = 0; i < n - 1; i++) {
//         cin >> dist[i];
//     }

//     for(int i = 0; i < n; i++) {
//         cin >> price[i];
//     }

//     long long ans = 0;
//     long long minP = price[0];

//     for(int i = 0; i < n - 1; i++) {
//         //이전 도시 가격과 현재 도시 가격 중 더 저렴한 가격을 선택
//         minP = min(minP, price[i]);
//         //최소 가격으로 현재 도시까지의 거리만큼 주유비용 더함
//         ans += minP * dist[i];
//     }

//     cout << ans << '\n';

//     return 0;
// }