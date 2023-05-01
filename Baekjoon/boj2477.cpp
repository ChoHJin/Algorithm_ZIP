// #include <iostream>

// using namespace std;

// pair<int, int> len[12]; //방향과 길이를 저장하는 pair

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int k, d, l;
//     int bigArea = 0, smallArea = 0;

//     cin >> k;

//     //방향과 길이를 입력받아 pair 배열에 저장
//     for(int i = 0; i < 6; i++) {
//         cin >> d >> l;
//         len[i] = len[i + 6] = {d, l};
//     }

//     //배열을 순회하며, 큰 사각형과 작은 사각형의 면적을 계산
//     for(int i = 3; i < 12; i++) {
//         if(len[i].first == len[i - 2].first && len[i - 1].first == len[i - 3].first) { //서로 수평인 변을 찾음
//             bigArea = len[i + 1].second * len[i + 2].second;    //큰 사각형의 면적 계산
//             smallArea = len[i - 1].second * len[i - 2].second;  //작은 사각형의 면적 계산

//             break;
//         }
//     }
    
//     cout << k * (bigArea - smallArea) << endl;

//     return 0;
// }