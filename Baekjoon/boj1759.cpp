// #include <iostream>
// #include <algorithm>

// using namespace std;

// string str;
// char password[17];
// bool visited[17] = {false, };

// int n, m;

// bool isAeiou(char c) {
//     if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//         return true;
//     }
//     return false;
// }

// void dfs(int cnt, int current) {
//     if(cnt == n) {
//         int l = 0, c = 0;
        
//         for(int i = 0; i < str.size(); i++) {
//             if(visited[i]) {
//                 if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//                     l++;
//                 }
//                 else {
//                     c++;
//                 }
//             }
//         }
        
//         if(l >= 1 && c >= 2) {
//             for(int i = 0; i < str.size(); i++) {
//                 if(visited[i]) {
//                     cout << str[i];
//                 }
//             }
//             cout << endl;
//         }
//         return;
//     }

//     for(int i = current; i < str.size(); i++) {
//         if(visited[i] == 0) {
//             visited[i] = true;
//             dfs(cnt + 1, i);
//             visited[i] = 0;
//         }
//     }
//     return;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     char c;

//     cin >> n >> m;

//     for(int i = 0; i < m; i++) {
//         char c;
//         cin >> c;
//         str += c;
//     }
    
//     sort(str.begin(), str.end());

//     dfs(0, 0);    
    
//     return 0;
// }