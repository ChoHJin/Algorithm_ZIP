// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool isPalindrome(const string& word) {
//     string rWord = word;

//     reverse(rWord.begin(), rWord.end());
    
//     return word == rWord;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<string> words(n);

//     for(int i = 0; i < n; i++) {
//         cin >> words[i];
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(isPalindrome(words[i] + words[j])) {
//                 cout << words[i].size() << ' ' << words[i][words[i].size() / 2] << endl;

//                 return 0;
//             }
//         }
//     }

//     return 0;
// }