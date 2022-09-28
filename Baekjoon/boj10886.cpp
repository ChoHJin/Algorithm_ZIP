// #include <iostream>

// using namespace std;

// int arr[10001];
// int f, b;  //front, back
// int arrSize;

// bool empty() {
//     return arrSize == 0;
// }

// void push_front(int x) {
//     arr[f] = x;
//     f--;
//     arrSize++;

//     if(f < 0) {
//         f = 10000; 
//     }
// }

// void push_back(int x) {
//     b++;
//     arrSize++;

//     if(b > 10000) { 
//         b = 0;
//     }

//     arr[b] = x;
// }

// int pop_front() {
//     if(empty()) {
//         return -1;
//     }
//     else {
//         f++;
//         arrSize--;

//         if(f > 10000) {
//             f = 0;
//         }

//         return arr[f];
//     }
// }

// int pop_back() {
//     if(empty()) {
//         return -1;
//     }
//     else {
//         int t = arr[b];
//         b--;
//         arrSize--;

//         if(b < 0) {
//             b = 10000;
//         }
//         return t;
//     }
// }

// int Front() {
//     if(empty()) {
//         return -1;
//     }
//     else {
//         if(f + 1 > 10000) {
//             return arr[0];
//         }
//         else {
//             return arr[f + 1];
//         }
//     }
// }

// int Back() {
//     if(empty()) {
//         return -1;
//     }
//     else {
//         return arr[b];
//     }   
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         string s;
//         cin >> s;

//         if(s == "push_front") {
//             int n;
//             cin >> n;
//             push_front(n);
//         }

//         if(s == "push_back") {
//             int n;
//             cin >> n;
//             push_back(n);
//         }

//         if(s == "pop_front") {
//             cout << pop_front() << "\n";
//         }

//         if(s == "pop_back") {
//             cout << pop_back() << "\n";
//         }

//         if(s == "size") {
//             cout << arrSize << "\n";
//         }

//         if(s == "empty") {
//             if(f == b) 
//                 cout << 1 << "\n";
//             else 
//                 cout << 0 << "\n";
//         }

//         if(s == "front") {
//            cout << Front() << "\n";
//         }

//         if(s == "back") {
//             cout << Back() << "\n";
//         }
//     }
// }