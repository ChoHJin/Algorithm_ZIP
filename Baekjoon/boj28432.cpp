// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n;

//     vector<string> recordList(n);

//     for(int i = 0; i < n; i++) {
//         cin >> recordList[i];
//     }

//     cin >> m;

//     int target = find(recordList.begin(), recordList.end(), "?") - recordList.begin();

//     for(int i = 0; i < m; i++) {
//         string s;
//         cin >> s;

//         if(find(recordList.begin(), recordList.end(), s) != recordList.end()) 
//             continue;
//         if(target != 0 && recordList[target - 1].back() != s.front())
//             continue;
//         if(target != n - 1 && s.back() != recordList[target + 1].front()) 
//             continue;
        
//         cout << s << endl;
//     }


//     return 0;
// }