// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// #include <string>
// #include <vector>

// using namespace std;

// string solution(string new_id) {
//     string answer = "";
//     int len = new_id.length();

//     //1단계 : 모든 대문자를 대응하는 소문자로 치환
//     for(int i = 0; i < len; i++) {
//         if(isupper(new_id[i])) {
//             new_id[i] = tolower(new_id[i]);
//         }
//     }

//     //2단계 new_id에서 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 제거합니다.
//     for(int i = 0; i < len;) {
//         if((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9')
//         || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.') {
//             i++;
//             continue;
//         }

//         new_id.erase(new_id.begin() + i);
//     }

//     //3단계 new_id에서 마침표(.)가 2번 이상 연속된 부분을 하나의 마침표(.)로 치환합니다.
//     for(int i = 1; i < len;) {
//         if(new_id[i] == '.' && new_id[i - 1] == '.') {
//             new_id.erase(new_id.begin() + i);
//             continue;
//         }
//         else 
//             i++;
//     }

//     //4단계 new_id에서 마침표(.)가 처음이나 끝에 위치한다면 제거합니다.
//     if(new_id.front() == '.') {
//         new_id.erase(new_id.begin());
//     }
//     if(new_id.back() == '.') {
//         new_id.erase(new_id.end() - 1);
//     }

//     //5단계 new_id가 빈 문자열이라면, new_id에 "a"를 대입합니다.
//     if(len == 0) {
//         new_id = "a";
//     }
//     //6단계 new_id의 길이가 16자 이상이면, new_id의 첫 15개의 문자를 제외한 나머지 문자들을 모두 제거합니다.
//     // 만약 제거 후 마침표(.)가 new_id의 끝에 위치한다면 끝에 위치한 마침표(.) 문자를 제거합니다.
//     if(len >= 16) {
//         while(len != 15) {
//             new_id.erase(new_id.begin() + 15);
//         }
//     }
//     if(new_id.back() == '.') {
//         new_id.erase(new_id.end() - 1);
//     }
//     //7단계 new_id의 길이가 2자 이하라면, new_id의 마지막 문자를 new_id의 길이가 3이 될 때까지 반복해서 끝에 붙입니다.
//     if(len <= 2) {
//         while(len != 3) {
//             new_id += new_id.back();
//         }
//     }

//     return new_id;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;

//     cin >> s;

//     cout << solution(s);

//     return 0;
// }