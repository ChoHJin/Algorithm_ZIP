// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long n, m;
//     long long left, right;
//     long long ans = 0;
    
//     vector<long long> wood;

//     cin >> n >> m;

//     for(int i = 0; i < n; i++) {
//         int cut;
//         cin >> cut;
//         wood.push_back(cut); 
//     }

//     sort(wood.begin(), wood.end());

//     left = 0;           
//     right = wood[n-1];  //나무 최대 높이

//     while(left <= right) {
//         long long mid = (left + right) / 2;

//         long long sum = 0;

//         for(int i = 0; i < n; i++) {
//             if((wood[i] - mid) > 0) {
//                 sum += (wood[i] - mid);
//             }
//         }

//         if(sum >= m) {
//             if(ans < mid) {
//                 ans = mid;
//             }
//             left = mid+1;
//         }
//         else 
//             right = mid - 1;
//     }

//     cout << ans << endl;

//     return 0;

// }