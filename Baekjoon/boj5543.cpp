// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int menu[5];
//     int set_m = 0;
//     int set_b = 0;

//     for(int i = 0; i < 5; i++) {
//         cin >> menu[i];
//     }

//     set_m = menu[0];

//     for(int i = 1; i <= 2; i++) {
//         set_m = min(set_m, menu[i]);
//     }

//     set_b = min(menu[3], menu[4]);

//     int ans = set_b + set_m - 50;

//     cout << ans << endl; 


//     return 0;
// }