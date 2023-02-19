// #include <iostream>

// using namespace std;

// int s[13];
// int lotto[6];
// int k;

// void lottoNum(int idx, int d) {
//     if(d == 6) {
//         for(int i = 0; i < 6; i++) {
//             cout << lotto[i] << " ";
//         }
//         cout << endl;
//         return;
//     }
    
//     for(int i = idx; i < k; i++) {
//         lotto[d] = s[i];
//         lottoNum(i + 1, d + 1);
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     while(1) {
//         cin >> k;

//         if(k == 0) {
//             break;
//         }

//         for(int i = 0; i < k; i++) {
//             cin >> s[i];
//         }

//         lottoNum(0, 0);
//         cout << endl;
//     }

//     return 0;
// }