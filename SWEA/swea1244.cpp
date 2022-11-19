// #include <iostream>
// #include <algorithm>
// #include <string>

// using namespace std;

// int change, ans;
// string numStr;

// void dfs(int h, int cnt) {
//     if(cnt == change) {
//         ans = max(ans, stoi(numStr));
//         return;
//     }

//     for(int i = h; i < numStr.size() - 1; i++) {
//         for(int j = i + 1; j < numStr.size(); j++) {
//             swap(numStr[i],numStr[j]);
//             dfs(i, cnt + 1);
//             swap(numStr[i], numStr[j]);
//         }
//     }
// }

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
//         cin >> numStr >> change;

//         ans = 0;

//         if(change > numStr.size()) 
//             change = numStr.size();

//         // Max = stoi(numStr);
        
//         dfs(0, 0);
        
//         cout << "#" << test_case << " " << ans << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }