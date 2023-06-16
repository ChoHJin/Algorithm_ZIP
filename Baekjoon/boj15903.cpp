// #include <iostream>
// #include <queue>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     priority_queue<long long, vector<long long>, greater<long long>> cards;

//     for(int i = 0; i < n; i++) {
//         long long n;
//         cin >> n;
        
//         cards.push(n);
//     }

//     for(int i = 0; i < m; i++) {
//         long long card1 = cards.top();
//         cards.pop();

//         long long card2 = cards.top();
//         cards.pop();

//         long long sum = card1 + card2;

//         cards.push(sum);
//         cards.push(sum);
//     }

//     long long sum = 0;

//     while(!cards.empty()) {
//         sum += cards.top();
//         cards.pop();
//     }

//     cout << sum << endl;

//     return 0;
// }