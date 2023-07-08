// #include <iostream>
// #include <vector>
// #include <stack>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     vector<double> v(n);
//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     stack<double> stk;

//     for(char ch : s) {
//         //알파벳인 경우 해당 변수의 값을 스택에 저장
//         if(ch >= 'A' && ch <= 'Z') {
//             stk.push(v[ch - 'A']);
//         }
//         //연산자인 경우 스택에서 두 개의 피연산자를 꺼내 연산 수행 
//         else {
//             double b = stk.top();
//             stk.pop();
//             double a = stk.top();
//             stk.pop();

//             //연산 결과를 스택에 저장
//             if(ch == '+') {
//                 stk.push(a + b);
//             } else if(ch == '-') {
//                 stk.push(a - b);
//             } else if(ch == '*') {
//                 stk.push(a * b);
//             } else if(ch == '/') {
//                 stk.push(a / b);
//             }
//         }
//     }

//     //스택의 top에는 최종 결과값이 남아있음
//     cout << fixed;
//     cout.precision(2);
//     cout << stk.top() << '\n'; 

//     return 0;
// }