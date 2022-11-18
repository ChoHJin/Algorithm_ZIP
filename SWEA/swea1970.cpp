// #include <iostream>

// using namespace std;

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
//         int money[] = {0, 0, 0, 0, 0, 0, 0, 0};
//         // int money[] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};

//         int num;

//         cin >> num;

//         while(num != 0) {
//             if(num >= 50000) {
//                 num -= 50000;
//                 money[0]++;
//             }
//             else if(num >= 10000) {
//                 num -= 10000;
//                 money[1]++;
//             }
//             else if(num >= 5000) {
//                 num -= 5000;
//                 money[2]++;
//             }
//             else if(num >= 1000) {
//                 num -= 1000;
//                 money[3]++;
//             }
//             else if(num >= 500) {
//                 num -= 500;
//                 money[4]++;
//             }
//             else if(num >= 100) {
//                 num -= 100;
//                 money[5]++;
//             }
//             else if(num >= 50) {
//                 num -= 50;
//                 money[6]++;
//             }
//             else if(num >= 10) {
//                 num -= 10;
//                 money[7]++;
//             }
//             else if(num >= 1) {
//                 break;
//             }
//         }

//         cout << "#" << test_case << endl;
//         for(int i = 0; i < 8; i++) {
//             // cout << num/money[i] << " ";
//             // num %= money[i];
//             cout << money[i] << " ";
//         }
//         cout << endl;

//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }