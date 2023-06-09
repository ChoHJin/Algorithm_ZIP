// #include <iostream>
// #include <map>

// using namespace std;

// int cntStr(string& str) {
//     int n = str.length();
    
//     map<string, int> subStr;

//     for(int i = 0; i < n; i++) {
//         string s;
        
//         for(int j = i; j < n; j++) {
//             s += str[j];
//             subStr[s]++;
//         }
//     }

//     return subStr.size();
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;

//     cin >> s;

//     int ans = cntStr(s);

//     cout << ans << endl;

//     return 0;
// }