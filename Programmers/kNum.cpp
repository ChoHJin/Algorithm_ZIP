// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//     vector<int> answer;
//     vector<int> tmp;
//     int cutNum = 0;
//     int size = commands.size();
    
//     while(size--) {
//         vector<int> cut = {0, };
        
//         tmp = commands[cutNum];
//         cutNum++;
        
//         for(int i = tmp[0]; i <= tmp[1]; i++) {
//             cut.push_back(array[i - 1]);
//         }
        
//         sort(cut.begin(), cut.end());
        
//         answer.push_back(cut[tmp[2]]);
//     }
    
//     return answer;
// }