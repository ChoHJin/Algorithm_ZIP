// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int ct[21];
//     int m = 0, y = 0;
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> ct[i];

//         m += (ct[i] / 60 + 1) * 15;
//         y += (ct[i] / 30 + 1) * 10;
//     }

//     if(m < y) 
//         cout << "M " << m << endl;
//     else if(m > y) 
//         cout << "Y " << y << endl;
//     else 
//         cout << "Y M " << y << endl;

//     return 0;
// }