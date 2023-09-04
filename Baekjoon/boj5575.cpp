// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     for (int i = 0; i < 3; i++) {
//         int startH, startM, startS;
//         int endH, endM, endS;

//         cin >> startH >> startM >> startS;
//         cin >> endH >> endM >> endS;

//         int totalSeconds = (endH - startH) * 3600 + (endM - startM) * 60 + (endS - startS);

//         int work_hours = totalSeconds / 3600;
//         int work_minutes = (totalSeconds % 3600) / 60;
//         int work_seconds = totalSeconds % 60;

//         cout << work_hours << " " << work_minutes << " " << work_seconds << endl;
//     }

//     return 0;
// }