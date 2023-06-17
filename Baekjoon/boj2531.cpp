// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, d, k ,c;

//     cin >> n >> d >> k >> c;

//     vector<int> belt(n);

//     for(int i = 0; i < n; i++) {
//         cin >> belt[i];
//     }

//     unordered_map<int, int> sushi;  //초밥 종류 개수를 저장하는 해시 맵
//     int cnt = 0, ans = 0;   // cnt : 현재 선택된 초밥 종류의 갯수, ans : 최대로 먹을 수 있는 초밥 종류의 갯수

//     //초기 k개의 초밥 종류 개수를 계산
//     for(int i = 0; i < k; i++) {
//         sushi[belt[i]]++;

//         if(sushi[belt[i]] == 1) {
//             cnt++;
//         }
//     }  

//     // 맨 처음에 쿠폰으로 제공되는 초밥이 포함되지 않은 경우
//     if(sushi[c] == 0) {
//         ans = max(ans, cnt + 1);
//     } else {    // 쿠폰 초밥이 포함된 경우
//         ans = max(ans, cnt);
//     }

//     //두 포인터를 이용하여 회전 초밥 문제 해결
//     int start = 0;
//     int end = k - 1;

//     while(end < n + k - 1) {
//         //윈도우에서 맨 앞의 초밥 종류 개수 감소
//         sushi[belt[start]]--;
//         if(sushi[belt[start]] == 0) {
//             cnt--;
//         }

//         start++;
//         end++;

//         //윈도우에서 맨 뒤의 초밥 종류 개수 증가
//         sushi[belt[end % n]]++;
        
//         if(sushi[belt[end % n]] == 1) {
//             cnt++;
//         }

//         //맨 처음에 쿠폰으로 제공되는 초밥이 포함되지 않은 경우
//         if(sushi[c] == 0) {
//             ans = max(ans, cnt + 1);
//         } else {    //쿠폰 초밥이 포함된 경우
//             ans = max(ans, cnt);
//         }

//     }
    
//     cout << ans << endl;

//     return 0;
// }