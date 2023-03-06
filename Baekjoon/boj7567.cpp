// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s;
//     cin >> s;
    
//     int height = 10; // 초기 높이는 10으로 설정
//     for (int i = 1; i < s.length(); i++) {
//         if (s[i] == s[i-1]) { // 현재 그릇과 이전 그릇이 같은 경우
//             height += 5; // 닿는 면의 개수가 1이므로 5씩 증가
//         } else { // 현재 그릇과 이전 그릇이 다른 경우
//             height += 10; // 닿는 면의 개수가 2이므로 10씩 증가
//         }
//     }
    
//     cout << height << endl; // 최종 높이 출력
    
//     return 0;
// }