// #include <iostream>
// #include <string>
// #include <cmath>
// #include <map>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     map<string, int> color_map = {
//         {"black", 0}, {"brown", 1}, {"red", 2},
//         {"orange", 3}, {"yellow", 4}, {"green", 5},
//         {"blue", 6}, {"violet", 7}, {"grey", 8},
//         {"white", 9}
//     };
    
//     string color;
//     long long value = 0;
    
//     cin >> color;
//     value += color_map[color] * 10;
    
//     cin >> color;
//     value += color_map[color];
    
//     cin >> color;
//     value *= pow(10, color_map[color]);
    
//     cout << value << endl;

//     return 0;
// }