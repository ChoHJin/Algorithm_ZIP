// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <stdio.h>
// #include <queue>

// using namespace std;

// vector<int> arr;
// priority_queue<int, vector<int>, greater<int>> pq;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     int n, x;
    
//     scanf("%d", &n);

//     for(int i = 0 ; i < n; i++) {
//         scanf("%d", &x);

//         if(x != 0) {
//             pq.push(x);
//         }
//         else {
//             if(!pq.empty()) {
//                 printf("%d\n", pq.top());
//                 pq.pop();
//             }
//             else {
//                 printf("%d\n", x);
//             }
//         }
//     }
//     // for(int i = 0; i < n; i++) {
//     //     scanf("%d", &x);

//     //     if(x != 0) {
//     //         arr.push_back(x);
//     //     }
//     //     else {
//     //         if(!arr.empty()) {
//     //             sort(arr.begin(), arr.end(), greater<>());
//     //             //cout << arr.back() << "\n";
//     //             printf("%d\n", arr.back());
//     //             arr.pop_back();
//     //         }
//     //         else {
//     //             // cout << x << "\n";
//     //             printf("%d\n", x);
//     //         }
            
//     //     }
//     // }

//     return 0;
// }