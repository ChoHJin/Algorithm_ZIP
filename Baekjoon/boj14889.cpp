// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int n;
// int minDiff = 987654321;    //최소 차이 초기값 설정

// vector<vector<int>> v;  //능력치 벡터
// vector<int> team;       //팀 구성 벡터

// //팀의 능력치 차이 계산하는 함수
// int calculateDiff() {
//     int t1 = 0, t2 = 0;

//     //team 벡터를 이용하여 팀의 능력치 합 구하기
//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             //team[i]와 team[j]가 같은 팀인 경우
//             if(team[i] == 1 && team[j] == 1) {
//                 t1 += v[i][j] + v[j][i];
//             }
//             //team[i]와 team[j]가 다른 팀인 경우 
//             else if(team[i] == 0 && team[j] == 0) {
//                 t2 += v[i][j] + v[j][i];
//             }
//         }
//     }
//     //두 팀의 능력치 차이의 절댓값 리턴
//     return abs(t1 - t2);
// }

// //팀 생성 함수(조합)
// void makeTeam(int idx, int cnt) {
//     if(cnt == n / 2) {  //팀 생성이 완료된 경우
//         minDiff = min(minDiff, calculateDiff());    //최소 차이 갱신

//         return;
//     }

//     for(int i = idx; i < n; i++) {
//         team[i] = 1;    //i번째 선수를 팀 1에 포함
//         makeTeam(i + 1, cnt + 1);
//         team[i] = 0;    //i번째 선수를 팀 0에 포함
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;

//     v.resize(n, vector<int>(n));
//     team.resize(n);

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             cin >> v[i][j];
//         }
//     }

//     makeTeam(0, 0);
    
//     cout << minDiff << '\n';

//     return 0;
// }