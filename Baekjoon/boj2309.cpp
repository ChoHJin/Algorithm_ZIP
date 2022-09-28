// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     vector<int> ss;
//     int n;
//     int sum = 0;
//     int test = 0;

//     for(int i = 0; i < 9; i++) {
//         cin >> n;
//         ss.push_back(n);
//         sum += ss[i];
//     }

//     sort(ss.begin(), ss.end());

//     for(int i = 0; i < 8; i++) {
//         for(int j = i + 1; j < 9; j++) {
//             if(sum - (ss[i] + ss[j]) == 100) {  //i번째와 j번째 2명을 뺀 합이 100이 되는지 체크함
//                 for(int k = 0; k < 9; k++) {    
//                     if(k != i && k != j) {      //해당되는 2명을 제외하고 출력
//                         cout << ss[k] << endl;  
//                     }
//                 }
//                 return 0;   //정답이 여러개인 경우 하나만 출력해야 되므로 종료함
//             }
//         }
//     }

//     return 0;
// }