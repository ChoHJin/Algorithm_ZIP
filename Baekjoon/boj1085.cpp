// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int x, y, w, h;
//     int ans = 0;
//     int a, b;

//     cin >> x >> y >> w >> h;

//     a = x <= y ? x : y;          //아래쪽 경계선 까지의 거리
//     b = w - x <= h - y ? w - x : h - y;  //위쪽 경계선 까지의 거리

//     ans = a <= b ? a : b;

//     cout << ans << endl;

//     return 0;
// }