// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> v1; //  정렬할 벡터
// vector<int> v2; // 원본을 저장할 벡터

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         int num; cin >> num;
//         v1.push_back(num);
//     }

//     v2 = v1;    //원본 복사

//     sort(v1.begin(), v1.end());
//     v1.erase(unique(v1.begin(), v1.end()), v1.end());   //중복값 제거

//     //lower_bound(시작값, 종료값, 찾는값)을 해주면 찾는 값보다 같거나 큰 값을 리턴해주는데,
//     //이때 리턴값이 iterator이므로 v1.begin()을 빼주면 인덱스를 구할 수 있음.
//     for(int i = 0; i < n; i++) {
//         cout << lower_bound(v1.begin(), v1.end(), v2[i]) - v1.begin() << " "; 
//     }

//     return 0;
// }