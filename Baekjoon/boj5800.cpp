// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     int cnt = 1;
//     cin >> t;

//     while(t--) {
//         vector<int> v;

//         int n;
//         int lg = 0;
//         cin >> n;

//         for(int i = 0; i < n; i++) {
//             int score;
//             cin >> score;
//             v.push_back(score);
//         }
//         sort(v.begin(), v.end(), greater<>());

//         for(int i = 0; i < v.size() - 1; i++) {
//             if(lg < v[i] - v[i + 1]) lg = v[i] - v[i + 1];
//         }
//         cout << "Class " << cnt << endl;
//         cout << "Max " << v.front() << ", Min " << v.back() << ", Largest gap "; 
//         cout << lg << endl;
        
//         cnt++;
//     }   

//     return 0;
// }