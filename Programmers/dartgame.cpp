// #include <string>
// #include <cmath>
// #include <vector>

// using namespace std;

// int solution(string dartResult) {
//     int answer = 0;
//     string temp;
    
//     vector<int> score;
    
//     for(int i = 0; i < dartResult.size(); i++) {
//         //숫자인 경우
//         if(dartResult[i] != 'S' && dartResult[i] != 'D' && dartResult[i] != 'T' &&
//          dartResult[i] != '*' && dartResult[i] != '#') {
//             temp += dartResult[i];
//         }
//         else {
//             int idx = 0;
//             int result = 0;

//             if(!temp.empty()) {
//                 idx = stoi(temp);
//             }

//             if(dartResult[i] == 'S') {
//                 result = pow(idx, 1);
//                 score.push_back(result);
//                 temp = "";
//             }
//             else if(dartResult[i] == 'D') {
//                 result = pow(idx, 2);
//                 score.push_back(result);
//                 temp = "";
//             }
//             else if(dartResult[i] == 'T') {
//                 result = pow(idx, 3);
//                 score.push_back(result);
//                 temp = "";
//             }
//             else if(dartResult[i] == '*') {
//                 if(score.size() > 1) {
//                     score[score.size() - 1] *= 2;
//                     score[score.size() - 2] *= 2;
//                 }
//                 else {
//                     score[score.size() - 1] *= 2;
//                 }
//             }
//             else if(dartResult[i] == '#') {
//                 score[score.size() - 1] *= -1;
//             }
//         }
//     }
    
//     for(int i = 0; i < score.size(); i++)  {
//         answer += score[i];
//     }   

//     return answer;
// }