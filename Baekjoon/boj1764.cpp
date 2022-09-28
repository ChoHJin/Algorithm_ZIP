// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <map>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;   //듣도보도 못한 사람 수 : n, 보도 못한 사람 수 : m
//     string s;
    
//     map<string, int> name;  //map <key타입, value타입>... 중복허용안함
//     vector<string> cnt;

//     cin >> n >> m;

//     // for(int i = 0; i < n; i++) {
//     //     cin >> s;
//     //     name[s]++;
//     // }

//     // for(int i = 0; i < m; i++) {
//     //     cin >> s;
//     //     name[s]++;
//     // }

//     for(int i = 0; i < n + m; i++) {  //한번에 n과 m 모두 입력받음
//         cin >> s;
//         name[s]++;      //이름이 2번 나오면 name[s] = 2가 됨
//     }

//     for(auto it : name) {
//         if(it.second == 2)              //second => int형을 가리킴 
//             cnt.push_back(it.first);    //first => string
//     }

//     sort(cnt.begin(), cnt.end());

//     cout << cnt.size() << "\n";
//     for(auto it : cnt) {
//         cout << it << "\n";
//     }

//     return 0;

// }