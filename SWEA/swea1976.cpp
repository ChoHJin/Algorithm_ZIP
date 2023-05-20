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
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;

//         int h = a + c;
//         int m = b + d;

//         h = (a + c) % 12;
        
//         if(b + d >= 60) {
//             h++;
//         }
//         if(h == 0) {
//             h = 12;
//         }
//         m = (b + d) % 60;

//         cout << "#" << test_case << " ";
//         cout << h << " " << m << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }