// #include <iostream>

// using namespace std;

// int stack;
// int arr[10001];

// void push(int x) {
//     arr[stack] = x;
//     stack++;
// }

// int pop() {
//     if(stack == 0) return -1;
    
//     int t = arr[stack - 1];
//     stack--;
    
//     return t;
// }

// int top() {
//     if(stack == 0) {
//         return -1;
//     }

//     return arr[stack - 1];
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         string s;
//         cin >> s;

//         if(s == "push") {
//             int n;
//             cin >> n;
//             push(n);
//         }

//         if(s == "pop") {
//             cout << pop() << "\n";
//         }

//         if(s == "size") {
//             cout << stack << "\n";
//         }

//         if(s == "empty") {
//             if(stack == 0) 
//                 cout << 1 << "\n";
//             else 
//                 cout << 0 << "\n";
//         }

//         if(s == "top") {
//            cout << top() << "\n";
//         }
//     }
// }