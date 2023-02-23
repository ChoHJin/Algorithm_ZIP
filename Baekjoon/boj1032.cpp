// #include <iostream>
// #include <vector>

// using namespace std;

// vector<string> str;


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         string s;
//         cin >> s;

//         str.push_back(s);
//     }

//     for(int i = 0; i < str[0].size(); i++) {
//         bool flag = false;
        
//         for(int j = 1; j< n; j++) {
//             if(str[j - 1][i] != str[j][i]) {
//                 flag = true;
//                 cout << '?';
//                 break;
//             }
//         }
//         if(!flag) {
//             cout << str[0][i];
//         }
//     }
//     cout << endl;

//     return 0;
// }