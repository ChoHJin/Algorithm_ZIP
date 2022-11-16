// #include <iostream>

// using namespace std;

// int map[15][15];

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
//         int cnt = 0;

//         cin >> n >> k;

//         //퍼즐 입력
//         for(int i = 0; i < n; i++) {
//             for(int j = 0; j < n; j++) {
//                 cin >> map[i][j];
//             }
//         }


//         for(int x = 0; x < n; x++) {
//             int xCnt = 0;
//             int yCnt = 0;
            
//             for(int y = 0; y < n; y++) {
//                 //세로축
//                 if(map[y][x]) xCnt++;   //값을 넣을 수 있다면 x축 카운트
//                 else {  //값을 넣을 수 없다면 확인함.
//                     if(xCnt == k) cnt++;    //k만큼 넣을 수 있다면 카운트 증가
//                     xCnt = 0;   //x카운트 변수 초기화
//                 }

//                 //가로축 위와 동일한 과정을 거침
//                 if(map[x][y]) yCnt++;
//                 else {
//                     if(yCnt == k) cnt++;
//                     yCnt = 0;
//                 }
//             }
//             //마지막 부분까지 넣을 수 있다면 체크해야함.
//             //마지막 뒷부분이 k만큼인지 체크하여 참이면 cnt증가
//             if(xCnt == k) cnt++;
//             if(yCnt == k) cnt++;
//         }

//         cout << "#" << test_case << " ";
//         cout << cnt << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }