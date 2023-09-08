// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     cin.ignore();

//     for(int i = 1; i <= t; i++) {
//         string input;
//         getline(cin, input);

//         vector<string> words;
//         string word = "";

//         for(char ch : input) {
//             if(ch == ' ') {
//                 words.push_back(word);
//                 word = "";
//             } else {
//                 word += ch;
//             }
//         }
//         words.push_back(word);

//         cout << "Case #" << i << ": ";
//         for(int j = words.size() - 1; j >= 0; j--) {
//             cout << words[j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }