// #include <iostream>
// #include <stack>
// #include <vector>

// using namespace std;

// stack<int> seq;
// vector<char> v;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int cnt = 1;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         int num;
//         cin >> num;
        
//         while(cnt <= num) {
//             v.push_back('+');
//             seq.push(cnt);
//             cnt++;
//         }

//         if(num == seq.top()) {
//             seq.pop();
//             v.push_back('-');
//         }
//         else {
//             cout << "NO";
//             return 0;
//         }
//     }

//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << "\n";
//     }

//     return 0;
// }