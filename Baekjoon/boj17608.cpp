// #include <iostream>
// #include <stack>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     stack<int> stk;
//     int cnt = 1;

//     for(int i = 0; i < n; i++) {
//         int num;
//         cin >> num;

//         stk.push(num);
//     }

//     int tmp = stk.top();

//     while(!stk.empty()) {
//         if(stk.top() > tmp) {
//             tmp = stk.top();
//             cnt++;
//         }

//         stk.pop();
//     }

//     cout << cnt << endl;

//     return 0;
// }