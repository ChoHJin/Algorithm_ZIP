// #include <iostream>
// #include <algorithm>

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
//         int n;
//         int mul = 1;
//         long long arr[10] = {0, };

//         cin >> n;
        
//         while(true) {
//             int tmp = n * mul;
            
//             while(tmp != 0) {
//                 int a = tmp % 10;
//                 arr[a]++;
//                 tmp /= 10;
//             }

//             auto it = find(begin(arr), end(arr), 0);
//             if(it == end(arr)) {
//                 break;
//             }

//             mul++;
//         }


//         cout << "#" << test_case << " ";
//         cout << n * mul << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }