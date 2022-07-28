// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
    
//     int num; 
//     int first, second;
//     int temp = 0, sum = 0, cnt = 0, result = 0;

//     cin >> num;

//     temp = num;

//     while(1) {
//         first = temp / 10;
//         second = temp % 10;

//         sum = first + second;

//         temp = (second * 10) + (sum % 10);

//         result = temp;

//         // if(result != num) {
//         //     cnt++;
//         // }
//         cnt++;
        
//         if(num == result) 
//             break;
//     }

//     cout << cnt << endl;
    
// }