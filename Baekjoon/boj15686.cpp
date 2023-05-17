// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Point {
//     int x;
//     int y;
// };

// int n, m;
// vector<Point> chicken;  //치킨집 좌표를 저장할 벡터
// vector<Point> house;    //집 좌표를 저장할 벡터
// vector<bool> visited;   //방문 여부를 저장할 벡터

// int minDist = 1e9;  //최소 거리를 저장할 변수

// int getDist(Point p1, Point p2) {   //두 좌표 사이의 거리를 계산하는 함수
//     return abs(p1.x - p2.x) + abs(p1.y - p2.y);
// }

// void calcDist() {   //치킨 거리를 계산하는 함수
//     int totalDist = 0;
//     //집 마다의 최소 치킨 거리 계산
//     for(int i = 0; i < house.size(); i++) {
//         int minHouseDist = 1e9;
//         //선택된 치킨집 중에서 가장 가까운 거리를 구함
//         for(int j = 0; j < chicken.size(); j++) {
//             if(visited[j]) {
//                 int dist = getDist(house[i], chicken[j]);
//                 minHouseDist = min(minHouseDist, dist);
//             }
//         }

//         totalDist += minHouseDist;
//     }
//     //최소 거리 갱신
//     minDist = min(minDist, totalDist);
// }
// //치킨집 선택을 위한 백트래킹 함수
// void selectChicken(int idx, int cnt) {
//     //m개의 치킨집을 선택한 경우 거리 계산
//     if(cnt == m) {
//         calcDist();
//         return;
//     }
//     //모든 치킨집을 검사한 경우 종료
//     if(idx == chicken.size()) {
//         return;
//     }
//     //현재 치킨집을 선택하는 경우
//     visited[idx] = true;
//     selectChicken(idx + 1, cnt + 1);

//     //현재 치킨집을 선택하지 않은 경우
//     visited[idx] = false;
//     selectChicken(idx + 1, cnt); 
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;

//     vector<vector<int>> map(n, vector<int>(n));

//     //도시 정보 입력
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             int type;
//             cin >> type;

//             if(type == 1) {
//                 house.push_back({i, j});    //집 좌표 저장
//             } else if(type == 2) {
//                 chicken.push_back({i, j});  //치킨집 좌표 저장
//             }
//         }
//     }

//     visited.resize(chicken.size(), false);  //치킨집 방문 여부 벡터 초기화
//     selectChicken(0, 0);    //백트래킹으로 치킨집 선택

//     cout << minDist << endl;

//     return 0;
// }