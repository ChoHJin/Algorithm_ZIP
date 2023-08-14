// #include <iostream>

// using namespace std;

// string fb(int n) {
//     if(n % 15 == 0) {
//         return "FizzBuzz";
//     } 
//     if(n % 3 == 0) {
//         return "Fizz";
//     }
//     if(n % 5 == 0) {
//         return "Buzz";
//     }

//     return to_string(n);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     for(int i = 0; i < 3; i++) {
//         string s;
//         cin >> s;

//         if(isdigit(s[0])) {
//             cout << fb(stoi(s) + 3 - i) << endl;

//             return 0;
//         }
//     }
// }