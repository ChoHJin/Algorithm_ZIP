// #include <iostream>
// #include <vector>

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
//         vector<int> v;
//         string n;
//         cin >> n;
        
//         int cnt = n.size() - 1;
        
//         for(int i = 0; i < 3; i++) {
//             v.push_back(n[i] - '0');
//         }

//         if(v[2] >= 5) {
//             v[1]++;
//         }
//         if(v[1] == 10) {
//             v[0]++;
//             v[1] = 0;
//         }
//         if(v[0] == 10) {
//             v[1] = v[0] % 10;
//             v[0] = v[0] / 10;
//             cnt++;
//         }

//         cout << "#" << test_case << " ";
//         cout << v[0] << "." << v[1] << "*10^" << cnt << endl;

//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }