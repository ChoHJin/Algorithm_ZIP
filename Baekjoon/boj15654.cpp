// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int n, m;
// vector<int> v;
// bool visited[9];

// //cnt : 현재까지 선택한 원소의 개수
// //permutation : 순열을 저장하는 벡터
// void backtrack(int cnt, vector<int>& permutation) {
//     //m개의 원소를 모두 선택한 경우, 순열을 출력함
//     if(cnt == m) {
//         for(int i = 0; i < m; i++) {
//             cout << permutation[i] << " ";
//         }
//         cout << '\n';
//         return;
//     }

//     //아직 선택하지 않은 원소들을 탐색
//     for(int i = 0; i < n; i++) {
//         if(!visited[i]) {
//             //원소를 선택하고, 방문 표시
//             visited[i] = true;
//             permutation.push_back(v[i]);

//             //다음 원소를 선택하기 위해 재귀 호출
//             backtrack(cnt + 1, permutation);

//             //선택한 원소와 방문 표시를 해제함.
//             permutation.pop_back();
//             visited[i] = false;
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;
//     v.resize(n);

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//         visited[i] = false;
//     }

//     sort(v.begin(), v.end());    //정렬

//     //백트래킹으로 모든 순열을 출력
//     vector<int> permutation;
//     backtrack(0, permutation);
    

//     return 0;
// }