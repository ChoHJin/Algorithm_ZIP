// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int n, m;
// vector<int> v;

// bool isPossible(int mid) {
//     int cnt = 1;    //블루레이 개수
//     int sum = 0;    //블루레이에 저장된 레슨의 합

//     for(int i = 0; i < n; i++) {
//         if(v[i] > mid) {    //mid보다 큰 레슨이 있다면 불가능
//             return false;
//         }

//         if(sum + v[i] > mid) {  //새로운 블루레이에 저장해야 할 때
//             cnt++;
//             sum = v[i];
//         } else {
//             sum += v[i];
//         }
//     }

//     return cnt <= m;    //블루레이 개수가 m개 이하인 경우 가능
// }

// int binarySearch(int left, int right) {
//     int result = 0;

//     while(left <= right) {
//         int mid = (left + right) / 2;

//         if(isPossible(mid)) {
//             result = mid;
//             right = mid - 1;
//         } else {
//             left = mid + 1;
//         }
//     }

//     return result;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;
//     v.resize(n);

//     int total = 0;  //모든 레슨의 합

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//         total += v[i];
//     }

//     int left = *max_element(v.begin(), v.end());
//     int right = total;

//     int ans = binarySearch(left, right);

//     cout << ans << '\n';

//     return 0;
// }