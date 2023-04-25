// #include <iostream>
// #include <algorithm>
// #include <string>

// using namespace std;

// int alpCnt[26];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s; 

//     // 알파벳별 개수를 셈
//     for(char c : s) {
//         alpCnt[c - 'A']++;
//     }

//     int odd = 0;
//     for(int i = 0; i < 26; i++) {
//         if(alpCnt[i] % 2 != 0) {
//             odd++;
//         }
//     }

//     // 팰린드롬을 만들 수 없는 경우
//     if((s.length() % 2 == 0 && odd > 0) || (s.length() % 2 == 1 && odd != 1)) {
//         cout << "I'm Sorry Hansoo" << endl;
//         return 0;
//     }

//     string ans;

//     // 알파벳을 정렬하여 반으로 나눠서 문자열 생성
//     for(int i = 0 ; i < 26; i++) {
//         if(alpCnt[i] > 0) {
//             int len = alpCnt[i] / 2;
//             while(len--) {
//                 ans += ('A' + i);
//             }
//         }
//     }

//     string tmp = ans;

//     // 역순으로 문자열을 생성하여 뒤에 붙임
//     reverse(tmp.begin(), tmp.end());
//     ans += tmp;

//     // 홀수 개수의 알파벳이 있다면 가운데에 추가
//     if(s.length() % 2 == 1) {
//         for(int i = 0; i < 26; i++) {
//             if(alpCnt[i] % 2 == 1) {
//                 ans.insert(ans.length() / 2, string(1, 'A' + i));
//                 break;
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }
