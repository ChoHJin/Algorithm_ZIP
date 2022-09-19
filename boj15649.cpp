// #include <iostream>

// using namespace std;

// int n, m;
// int arr[9];
// bool visited[9];

// void dfs(int idx) {
//     if(idx == m) {      //idx가 m과 같다면 배열의 원소를 모두 출력
//         for(int i = 0; i < m; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << "\n";
//         return;
//     }

//     for(int i = 1; i <= n; i++) {
//         if(!visited[i]) {       //i가 방문되지 않은 숫자라면
//             visited[i] = true;  //방문 체크
//             arr[idx] = i;       //현재 dfs 깊이를 i로 갱신.
//             dfs(idx + 1);       //dfs를 현재 idx + 1 하여 수행
//             visited[i] = false; //visited를 false로 갱신시키며 dfs종료(되돌아감)
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;

//     dfs(0);     //0부터 시작하는 dfs호출

//     return 0;
// }