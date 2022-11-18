// #include <iostream>
// #include <vector>

// using namespace std;

// vector<pair<string, int>> v;

// int main(int argc, char** argv) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int test_case;
//     int T;

//     cin>>T;
// /*
// 여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
// */
//     for(test_case = 1; test_case <= T; ++test_case) {
        
//         int n;
//         int cnt = 0;
        
//         cin >> n;

//         for(int i = 0; i < n; i++) {
//             string s;
//             int num;

//             cin >> s >> num;

//             v.push_back(make_pair(s, num));
//         }
        
//         cout << "#" << test_case << endl;

//         for(int i = 0; i < n; i++) {
//             for(int j = 1; j <= v[i].second; j++) {
//                 cout << v[i].first;
//                 cnt++;
//                 if(cnt % 10 == 0) {
//                     cout << endl;
//                 }
//             }
//         }
//         cout << endl;
//         v.clear();
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }