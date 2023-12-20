// #include <iostream>
// #include <stack>
// #include <queue>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     queue<int> line;  // 대기 줄
//     stack<int> side;  // 옆으로 이동하는 사람들을 저장하는 스택

//     for (int i = 0; i < n; i++) {
//         int student;
//         cin >> student;
//         line.push(student);
//     }

//     int expected = 1;  // 예상되는 차례의 학생 번호

//     while (!line.empty() || !side.empty()) {
//         if (!line.empty() && line.front() == expected) {
//             // 대기 줄 맨 앞에 있는 사람이 예상되는 차례인 경우
//             line.pop();
//             expected++;
//         } else if (!side.empty() && side.top() == expected) {
//             // 옆으로 이동하는 사람 중에 예상되는 차례인 경우
//             side.pop();
//             expected++;
//         } else if (!line.empty()) {
//             // 대기 줄에서 옆으로 이동하는 경우
//             side.push(line.front());
//             line.pop();
//         } else {
//             // 아무 조건에도 해당하지 않으면 줄을 서기 불가능
//             cout << "Sad\n";
//             return 0;
//         }
//     }

//     cout << "Nice\n";

//     return 0;
// }