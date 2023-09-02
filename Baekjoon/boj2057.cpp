// #include <iostream>

// using namespace std;

// long long factorial[20];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long n;
//     cin >> n;
    
//     int m = 1;
//     factorial[0] = 1;
// 	for (long long i = 1; i < 20; i++) {
// 		factorial[i] = factorial[i - 1] * i;
// 	}

//     if(n == 0) cout << "NO";
// 	else {
// 		for (int i = 19; i > -1; i--) {
// 			if(n >= factorial[i]) n -= factorial[i];
// 		}
// 		if(n) cout << "NO";
// 		else cout << "YES";
// 	}

//     return 0;
// }