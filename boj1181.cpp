// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<string> s;

// bool cmp(string a, string b) {
//     if(a.length() != b.length()) {  //길이 순(짧은것부터)
//         return a.length() < b.length(); 
//     }
//     else
//         return a < b;   //사전 순
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     string str;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> str;

//         s.push_back(str);
//     }

//     sort(s.begin(), s.end(), cmp);
//     s.erase(unique(s.begin(), s.end()), s.end());
    
//     for(int i = 0; i < s.size(); i++) {
//         cout << s[i] << endl;
//     }

//     return 0;
// }