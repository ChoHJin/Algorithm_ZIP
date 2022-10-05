// #include <iostream>
// #include <vector>
// #include <string>
// #include <sstream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     int cnt = 0;
//     getline(cin, s);

//     istringstream ss(s);
//     string buf;
//     vector<string> v;

//     while(getline(ss, buf, ' ')) {
//         v.push_back(buf);
//     }

//     for(int i = 0; i < v.size(); i++) {
//         cnt++;
//     }

//     if(s[0] == ' ') {
//         cnt--;
//     }

//     cout << cnt << "\n";

//     return 0;
// }