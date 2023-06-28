// #include <iostream>

// using namespace std;

// int student[1001];
// double ans;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int c, n;
//     int num;
//     double avg;

//     cin >> c;
    
//     for(int i = 0; i < c; i++) {
//         cin >> n;

//         avg = 0.0;
//         num = 0;

//         for(int j = 0; j < n; j++) {
//             cin >> student[j];

//             avg += student[j];
//         }
//         avg = avg / n;

//         for(int k = 0; k < n; k++) {
//             if(student[k] > avg){
//                 num++;
//             }
//         }

//         ans = (double)num / n * 100;

//         cout << fixed;
//         cout.precision(3);
//         cout << ans << "%" << endl;

//     }
    

//     return 0;
// }