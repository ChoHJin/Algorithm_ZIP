// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string oct;
//     cin >> oct;

//     if (oct == "0") { // 입력받은 수가 0일 경우
//         cout << "0" << '\n';
//         return 0;
//     }

//     // 각 8진수 숫자에 해당하는 2진수 3개를 미리 계산해놓음
//     string binary[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};

//     bool leading_zero = true; // 앞자리 0 출력 여부를 나타내는 플래그 변수
//     for (int i = 0; i < oct.length(); i++) {
//         int digit = oct[i] - '0'; // 8진수 숫자를 정수형으로 변환
//         if (leading_zero) { // 앞자리 0 출력 여부를 확인
//             if (digit < 4) { // 2진수 3자리 중 첫 번째 자리가 0일 경우 출력하지 않음
//                 if (digit == 0) continue;
//                 else if (digit == 1) cout << "1";
//                 else if (digit == 2) cout << "10";
//                 else if (digit == 3) cout << "11";
//             }
//             else { // 2진수 3자리 중 첫 번째 자리가 1일 경우 출력
//                 cout << binary[digit];
//             }
//             leading_zero = false; // 앞자리 0 출력을 완료했으므로 플래그 변수 값을 변경
//         }
//         else { // 앞자리 0 출력을 완료한 이후의 경우
//             cout << binary[digit];
//         }
//     }

//     cout << '\n';

//     return 0;
// }
