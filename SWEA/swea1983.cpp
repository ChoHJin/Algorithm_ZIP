// #include <iostream>
// #include <vector>
// #include <tuple>

// using namespace std;

// vector<tuple<int, int, int>> v;

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
//         int n, k;
//         int middleTest, finalTest, assignment;
//         int cnt = 0;
//         cin >> n >> k;

//         for(int i = 0; i < n; i++) {
//             cin >> middleTest >> finalTest >> assignment;
//             v.push_back(make_tuple(middleTest, finalTest, assignment));
//         }

//         vector<double> tmp;
//         string grade[] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
        
//         for(int i = 0; i < n; i++) {
//             tmp.push_back((get<0>(v[i]) * 0.35) + (get<1>(v[i]) * 0.45) + (get<2>(v[i]) * 0.2));
//         }

//         for(int i = 0; i < n; i++) {
//             if(tmp[i] > tmp[k - 1]) {
//                 cnt++;
//             }
//         }
//         string ans = grade[cnt/(n/10)];
//         cout << "#" << test_case << " ";
//         cout << ans << endl;
        

//         v.clear();
//         tmp.clear();
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }