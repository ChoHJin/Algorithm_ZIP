// #include <iostream>
// #include <queue>
// #include <algorithm>

// using namespace std;

// queue<int> q;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int  n;

//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         q.push(i);
//     }

//     while(q.size() != 1) {
//         q.pop();
//         q.push(q.front());
//         q.pop();
//     }
    
//     cout << q.front() << endl;

//     return 0;
// }