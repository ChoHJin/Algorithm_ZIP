// #include <iostream>

// using namespace std;

// int paper[101][101];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     int ans = 0;

//     for(int i = 0; i < n; i++) {
//         int x, y;
//         cin >> x >> y;
        
//         //색종이가 붙은 영역을 1로 설정
//         for(int j = y; j < y + 10; j++) {
//             for(int k = x; k < x + 10; k++) {
//                 paper[j][k] = 1;
//             }
//         }
//     }

//     //색종이가 붙은 영역의 갯수를 계산
//     for(int i = 1; i <= 100; i++) {
//         for(int j = 1; j <= 100; j++) {
//             if(paper[i][j]) ans++;
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }