// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int n;
//     int name = 0;
//     int cnt = 0;

//     cin >> n;

//     while(1) {
//         //name을 문자열로 바꾸고 find로 666이 포함되어 있는지 확인함.
//         if(to_string(name).find("666") != -1) {
//         //find로 찾을 수 없는 경우 npos(string::npos)가 리턴됨.
//         //npos는 -1 값을 가지는 상수. 다음 부턴 -1대신 string::npos로 사용하자.
//             cnt++;
//         }

//         if(n == cnt) {
//             cout << name << endl;
//             break;
//         }

//         name++;
//     }

//     return 0;

// }