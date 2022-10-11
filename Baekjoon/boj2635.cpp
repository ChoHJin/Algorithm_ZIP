// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int cnt = 0;

//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         vector<int> tmp;
//         int secNum = i;
//         int nextNum = n - secNum;
//         tmp = {n, secNum, nextNum};

//         int tmpCnt = 3;

//         while(1) {
//             int temp = nextNum;
//             nextNum = secNum - nextNum;
            
//             if(nextNum < 0) {
//                 break;
//             }
//             secNum = temp;
//             tmpCnt++;
//             tmp.push_back(nextNum);
//         }

//         if(cnt < tmpCnt) {
//             cnt = tmpCnt;
//             v = tmp;
//         }
//     }

//     cout << cnt << endl;

//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

    
//     return 0;
// }