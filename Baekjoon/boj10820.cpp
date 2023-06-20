// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;

//     while(getline(cin, s)) {
//         int l = 0, u = 0, n = 0, sp = 0;

//         for(int i = 0; i < s.length(); i++) {
//             if(s[i] >= 'a' && s[i] <= 'z') l++;
//             else if(s[i] >= 'A' && s[i] <= 'Z') u++;
//             else if(s[i] >= '0' && s[i] <= '9') n++;
//             else if(s[i] == ' ') sp++;
//         }

//         cout << l << " " << u << " " << n << " " << sp << endl;

//     }

//     return 0;
// }