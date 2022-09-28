// #include <iostream>

// using namespace std;

// int arr[26];
// int cnt,mCnt,idx;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;

//     cin >> s;

//     for(int i = 0; i < s.length(); i++) {
//         if(s[i] < 97) {     //대문자일때
//             arr[s[i] - 65]++;   
//         }
//         else {              //소문자일때
//             arr[s[i] - 97]++;   
//         }
//     }

//     for(int i = 0; i < 26; i++) {
//         if(arr[i] > mCnt) {
//             mCnt = arr[i];
//             idx = i;
//         }
//     }

//     for(int i = 0; i < 26; i++) {
//         if(arr[i] == mCnt) 
//             cnt++;
//     }

//     if(cnt > 1) {
//         cout << "?" << endl;
//     }
//     else {
//         cout << (char)(idx+65) << endl;
//     }

//     return 0;
// }