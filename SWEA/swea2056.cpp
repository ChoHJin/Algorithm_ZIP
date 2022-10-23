// #include <iostream>

// using namespace std;

// int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

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
//         string s;

//         cin >> s;
//         int m = atoi(s.substr(4, 2).c_str());
//         int d = atoi(s.substr(6).c_str());
        
//         cout << "#" << test_case << " ";
//         if(1 <= m && m <= 12 && 1 <= d && d <= day[m - 1]) {
//             cout << s.substr(0,4) << "/" << s.substr(4, 2) << "/" << s.substr(6) << endl;
//         }
//         else {
//             cout << -1 << endl;
//         }
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }