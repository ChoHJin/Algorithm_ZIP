// #include <iostream>

// using namespace std;

// const int MAX = 2000000; // 큐의 최대 크기
// int queue[MAX];
// int front = 0, rear = 0; // 큐의 앞, 뒤 인덱스

// // 큐에 정수 x를 삽입
// void push(int x) {
//     queue[rear++] = x;
// }

// // 큐에서 가장 앞에 있는 정수를 제거하고 출력
// void pop() {
//     if (front == rear) {
//         cout << -1 << '\n'; // 큐가 비어있는 경우
//     }
//     else {
//         cout << queue[front++] << '\n';
//     }
// }

// // 큐에 가장 앞에 있는 정수 출력
// void printFront() {
//     if (front == rear) {
//         cout << -1 << '\n'; // 큐가 비어있는 경우
//     }
//     else {
//         cout << queue[front] << '\n';
//     }
// }

// // 큐에 가장 뒤에 있는 정수 출력
// void printBack() {
//     if (front == rear) {
//         cout << -1 << '\n'; // 큐가 비어있는 경우
//     }
//     else {
//         cout << queue[rear - 1] << '\n';
//     }
// }

// // 큐에 저장된 정수의 개수 출력
// void printSize() {
//     cout << rear - front << '\n';
// }

// // 큐가 비어있는지 여부 출력
// void printEmpty() {
//     if (front == rear) {
//         cout << 1 << '\n'; // 큐가 비어있는 경우
//     }
//     else {
//         cout << 0 << '\n';
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, x;

//     cin >> n;

//     while (n--) {
//         string cmd;

//         cin >> cmd;

//         if (cmd == "push") {
//             cin >> x;
//             push(x);
//         }
//         else if (cmd == "pop") {
//             pop();
//         }
//         else if (cmd == "size") {
//             printSize();
//         }
//         else if (cmd == "empty") {
//             printEmpty();
//         }
//         else if (cmd == "front") {
//             printFront();
//         }
//         else if (cmd == "back") {
//             printBack();
//         }
//     }

//     return 0;
// }
