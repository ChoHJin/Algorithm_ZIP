// #include <iostream>
// #include <algorithm>

// using namespace std;

// struct Student {
//     string name;
//     int kor, eng, math;
// };

// bool operator<(const Student& a, const Student& b) {
//     if(a.kor != b.kor) {
//         return a.kor > b.kor;
//     } else if(a.eng != b.eng) {
//         return a.eng < b.eng;
//     } else if(a.math != b.math) {
//         return a.math > b.math;
//     } else {
//         return a.name < b.name;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     Student std[n];

//     for(int i = 0; i < n; i++) {
//         cin >> std[i].name >> std[i].kor >> std[i].eng >> std[i].math;
//     }
    
//     sort(std, std + n);

//     for(int i = 0; i < n; i++) {
//         cout << std[i].name << "\n";
//     }


//     return 0;
// }