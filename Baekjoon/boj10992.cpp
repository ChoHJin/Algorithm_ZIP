// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     for(int i = 1; i <= n; ++i) {
// 		for(int j = 1; j <= n - i; ++j) {
// 			cout << " ";
// 		}
		
// 		if(i == 1 || i == n) {
// 			for(int j = 1; j <= (i - 1) * 2 + 1; ++j) {
// 				cout << "*";
// 			}
// 		} else {
// 			cout << "*";

// 			for(int j = 1; j <= (i - 1) * 2 - 1; ++j) {
// 				cout << " ";
// 			}
// 			cout << "*";
// 		}

// 		cout << "\n";
// 	}

//     return 0;
// }