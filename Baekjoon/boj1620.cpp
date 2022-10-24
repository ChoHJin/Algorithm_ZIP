// #include <iostream>
// #include <map>
// #include <istream>
// #include <algorithm>

// using namespace std;

// string pokemonNum[100001];
// map<string, int> pokemon;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n, m;
//     string dict;

//     cin >> n >> m;

//     for(int i = 1; i <= n; i++) {
//         string name;
//         cin >> name;
//         pokemonNum[i] = name;
//         pokemon.insert(make_pair(name, i));
//     }
//     for(int i = 0; i < m; i++) {
//         cin >> dict;
        
//         if(isdigit(dict[0])) {
//             cout << pokemonNum[stoi(dict)] << "\n";
//         }
//         else {
//             cout << pokemon[dict] << '\n';
//         }
//     }

    
//     return 0;
// }