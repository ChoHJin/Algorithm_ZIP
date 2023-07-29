// #include <iostream>
// #include <vector>

// using namespace std;

// void toggleSwitch(vector<int>& switches, int index) {
//     switches[index] = (switches[index] == 0) ? 1 : 0;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> switches(n + 1);
//     for (int i = 1; i <= n; i++) {
//         cin >> switches[i];
//     }

//     int students;
//     cin >> students;

//     while (students--) {
//         int gender, index;
//         cin >> gender >> index;

//         if (gender == 1) {
//             for (int i = index; i <= n; i += index) {
//                 toggleSwitch(switches, i);
//             }
//         } else if (gender == 2) {
//             toggleSwitch(switches, index);
//             int left = index - 1;
//             int right = index + 1;

//             while (left >= 1 && right <= n && switches[left] == switches[right]) {
//                 toggleSwitch(switches, left);
//                 toggleSwitch(switches, right);
//                 left--;
//                 right++;
//             }
//         }
//     }

//     for (int i = 1; i <= n; i++) {
//         cout << switches[i] << " ";
//         if (i % 20 == 0 || i == n) cout << '\n';
//     }

//     return 0;
// }