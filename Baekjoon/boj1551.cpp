// #include <iostream>
// #include <vector>
// #include <sstream>

// using namespace std;

// vector<int> parseInput(string input) {
//     vector<int> result;
//     stringstream ss(input);
//     string token;

//     while (getline(ss, token, ',')) {
//         result.push_back(stoi(token));
//     }
//     return result;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k;
//     cin >> n >> k;

//     string input;
//     cin >> input;

//     vector<int> seq = parseInput(input);

//     for (int i = 0; i < k; ++i) {
//         vector<int> temp;
//         for (int j = 1; j < seq.size(); ++j) {
//             temp.push_back(seq[j] - seq[j - 1]);
//         }
//         seq = temp;
//     }

//     for (int i = 0; i < seq.size(); ++i) {
//         cout << seq[i];
//         if (i != seq.size() - 1) {
//             cout << ",";
//         }
//     }
//     cout << endl;

//     return 0;
// }