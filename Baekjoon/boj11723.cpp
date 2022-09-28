// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>

// using namespace std;

// vector<int> arr;

// int B;

// void add(int x) {
//     if(find(arr.begin(), arr.end(), x) != arr.end()) {
//         return;
//     }

//     else {
//         arr.push_back(x);
//     }
// }

// void reMove(int x) {
//     if(find(arr.begin(), arr.end(), x) == arr.end()) {
//         return;
//     }
//     else {
//         // for(int i = 0; i < arr.size(); i++) {
//         //     if(arr[i] == x) {
//         //         arr.erase(arr.begin() + i);
//         //     }
//         // }
//         arr.erase(remove(arr.begin(), arr.end(), x), arr.end());
//     }
// }

// void check(int x) {
//     if(find(arr.begin(), arr.end(), x) != arr.end()) {
//         cout << 1 << "\n";
//     }
//     else {
//         cout << 0 << "\n";
//     }
// }

// void toggle(int x) {
//     if(find(arr.begin(), arr.end(), x) != arr.end()) {
//         reMove(x);
//     }
//     else {
//         add(x);
//     }
// }

// void all() {
//     for(int i = 0; i < 20; i++) {
//         arr.push_back(i + 1);
//     }
// }

// void empty() {
//     for(int i = 0 ; i < arr.size(); i++) {
//         arr[i] = 0;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n, m;
//     string s;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> s;

//         // << , >> : Shift 연산자 : 비트를 왼쪽 또는 오른쪽으로 한칸씩 이동

//         if(s == "add") {
//             cin >> m;           // | : OR 연산자
//             B |= (1 << m);      // | 연산자를 사용하여 m번째 수를 1로 채워줌
//             //add(m);
//         }

//         else if(s == "remove") {
//             cin >> m;           //& : AND연산자
//             B &= ~(1 << m);     // 1000 & ~(1000) = 0000 
//             //reMove(m);
//         }

//         if(s == "check") {
//             cin >> m;
//             // check(m);
//             if(B & (1 << m)) {
//                 cout << 1 << "\n";
//             }
//             else {
//                 cout << 0 << "\n";
//             }
//         }

//         if(s == "toggle") {
//             cin >> m;
//             //toggle(m);

//             //Bit의 m번째 자리가 1이라면 1 ^ 1 = 0 이 되어 1 -> 0이 되고,
//             //m번째 자리가 0이라면 0 ^ 1 = 1 이 되어 0 -> 1이 된다. 
//             B ^= (1 << m);
//         }

//         if(s == "all") {
//             //all();
//             B = (1 << 21) - 1;
//             //ex) 10000 - 1 = 1111
//         }

//         if(s == "empty") {
//             //empty();
//             B = 0;
//         }
//     }


//     return 0;
// }