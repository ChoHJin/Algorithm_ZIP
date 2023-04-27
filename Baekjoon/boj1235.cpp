// #include <iostream>
// #include <string>
// #include <set>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     string s[n];
    
//     // n개의 문자열을 입력받음
//     for (int i = 0; i < n; i++) {
//         cin >> s[i];
//     }

//     int ans = 1;
//     // s[0]의 접미사 중 가장 긴 공통 접미사를 찾음
//     for (int i = 0; i < s[0].length(); i++) {
//         set<string> st; // 이전에 나온 접미사를 저장하는 set
//         bool flag = true;

//         // 모든 문자열에 대해 현재 길이의 접미사를 찾음
//         for (int j = 0; j < n; j++) {
//             string suffix = s[j].substr(s[j].length() - i - 1, i + 1);

//             // 이전에 이미 등장한 접미사라면 중복이므로 탐색 중지
//             if (st.find(suffix) != st.end()) {
//                 flag = false;
//                 break;
//             }

//             st.insert(suffix); // 이전에 등장하지 않았으면 set에 추가
//         }

//         // 중복이 없는 가장 긴 접미사 길이를 출력
//         if (flag) {
//             ans = i + 1;
//             break;
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }
