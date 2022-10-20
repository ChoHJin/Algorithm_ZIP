// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// int mid, len;


// vector<int> num;
// int cntNum[8001];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     double avg;
//     int sum = 0;

//     cin >> n;
//     num.resize(n);

//     for(int i = 0; i < n; i++) {
//         cin >> num[i];

//         sum += num[i];
        
//         cntNum[num[i] + 4000]++;  //음수 인덱스 때문에 4000을 더해줌.
//     }

//     sort(num.begin(), num.end());
    
    
//     //산술평균값
//     avg = sum / (double)n;
//     if(avg < 0 && avg > -0.5) { // -0 출력때문에 -0.5 < avg < 0 범위면 -를 붙여줌.
//         avg = -avg;
//     }
//     cout << round(avg) << endl;
    
//     //중앙값
//     mid = num[num.size()/ 2];
//     cout << mid << endl;
// \

//     //최빈수 구하기
//     int mostNum = 0;
//     int maxIdx = *max_element(cntNum, cntNum + 8001);   //최대 빈도수 저장
//     int cnt = 0;

//     for(int i = 0; i < 8001; i++) {
//         if(cntNum[i] == maxIdx) {
//             mostNum = i - 4000;
//             cnt++;
//         }

//         if(cnt == 2) {  //최빈값중 두번째로 작은값 출력하기 위해 cnt가 2가 되면 break
//             break;
//         }
//     }
//     cout << mostNum << endl;

//     //범위구하기
//     len = abs(num.back() - num.front());
//     cout << len << endl;


//     return 0;
// }