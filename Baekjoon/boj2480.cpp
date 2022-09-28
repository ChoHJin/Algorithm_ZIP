// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     int d1, d2, d3;
    
//     int num, reward  = 0;

//     cin >> d1 >> d2 >> d3;

//     if (d1 == d2 && d1 == d3) {
//         num = d1;
//         reward = 10000 + num * 1000;
//     }
    
//     else if(d1 == d2 && d1 != d3 || d1 != d2 && d1 == d3) {
//         num = d1;
//         reward = 1000 + num * 100;
//         num = 0;
//     }
//     else if(d2 == d3 && d2 != d1) {
//         num = d2;
//         reward = 1000 + num * 100;
//         num = 0;
//     }
    
//     else if (d1 != d2 && d1 != d3 && d2 != d3){
//         if (d1 < d2) {
//             if(d2 < d3)
//                 num = d3;
//             else 
//                 num = d2;
//         }
//         else if (d1 < d3) 
//             num = d3;
//         else 
//             num = d1;
        
//         reward = num * 100;

//     }
//     else 
//         cout << "sorry" << endl;

//     cout << reward << endl;

//     return 0;
// }