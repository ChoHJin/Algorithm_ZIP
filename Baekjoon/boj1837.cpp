// #include <iostream>
// #include <cmath>
// #include <vector>

// using namespace std;

// bool visited[1000001]; 
// int K;
// string P;

// bool check(int num){
// 	int sum = 0;

// 	for(int i = 0; P[i]; i++) 
// 		sum = (sum * 10 + (P[i] - '0')) % num;

// 	if(sum == 0) return true;

// 	return false;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> P >> K;

//     bool good = true;
//     int ans = 0;

//     for(int i=2; i<K; ++i){
//         if(visited[i]) continue;
        
//         if(check(i)){
//             good = false;
//             ans = i;
//             break;
//         }
//         for(int j = 2 * i; j < K; j += i) 
//             visited[j] = true;
//     }

//     if(good) cout << "GOOD" << '\n';
//     else cout << "BAD " << ans << '\n';

//     return 0;
// }