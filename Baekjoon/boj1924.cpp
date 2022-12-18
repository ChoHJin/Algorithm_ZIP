// #include <iostream>

// using namespace std;

// int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// string day[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int m, d;
//     int sum = 0;

//     cin >> m >> d;

//     for(int i = 0; i < m - 1; i++) {
//         sum += month[i];
//     }

//     sum += d;

//     cout << day[sum % 7] << endl;

//     return 0;
// }