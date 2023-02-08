// #include <iostream>
// #include <deque>

// using namespace std;

// deque<pair<int, int>> dq;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         int b;
//         cin >> b;
//         dq.push_back(make_pair(i + 1, b));
//     }

//     while(!dq.empty()) {
//         cout << dq.front().first << " ";

//         int num = dq.front().second;
//         dq.pop_front();

//         if(dq.empty()) break;

//         if(num > 0) {
//             for(int i = 0; i < num - 1; i++) {
//                 dq.push_back(dq.front());
//                 dq.pop_front();
//             }
//         }
//         else {
//             for(int i = 0; i < ((-1) * num); i++) {
//                 dq.push_front(dq.back());
//                 dq.pop_back();
//             }
//         }
//     }

//     cout << endl;

//     return 0;
// }