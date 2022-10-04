// #include <string>
// #include <vector>

// using namespace std;

// int student[35];

// int solution(int n, vector<int> lost, vector<int> reserve) {
//     int answer = 0;
//     int cnt = 0;
// //     vector<int> student;

// //     student.resize(n);

// //     for(int i = 0; i < n; i++) {
// //         student[i] = 1;

// //         for(int j = 0; j < lost.size(); j++) {
// //             if(lost[j] == i) {
// //                 student[i - 1] += -1;
// //             }
// //         }

// //         for(int j = 0; j < reserve.size(); j++) {
// //             if(reserve[j] == i) {
// //                 student[i - 1] += 1;
// //             }
// //         }

// //     }
//     for(int i : lost) student[i] += -1;
//     for(int i : reserve) student[i] += 1;

//     for(int i = 1; i <= n; i++) {
//         if(student[i] == -1) {
//             if(student[i - 1] == 1) {
//                 student[i - 1] = student[i] = 0;
//             }
//             else if(student[i + 1] == 1) {
//                 student[i + 1] = student[i] = 0;
//             }
//         }
//     }

//     for(int i = 1; i <= n; i++) {
//         if(student[i] >= 0) {
//             answer++;
//         }
//     }

//     return answer;
// }
