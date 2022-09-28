// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     int cnt = 0;

//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         if (i < 100) {  //1~99까지는 모두 등차수열이므로 cnt증가
//             cnt++;
//         }

//         else {
//             int a = i / 100;        //100의 자리
//             int b = i / 10 % 10;    //10의 자리
//             int c = i % 10;         //1의 자리

//             if (a - b == b - c)     //각 자릿수가 수열을 이루면 cnt 증가
//                 cnt++;
//         }
//     }
//     cout << cnt << endl;
// }