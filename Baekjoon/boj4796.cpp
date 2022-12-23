// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int l, p, v;
//     int tc = 1;

//     while(1) {
        
//         int ans = 0;

//         cin >> l >> p >> v;

//         if(l == 0 && p == 0 && v == 0) break;

//         ans = (v / p) * l + min(v % p, l);

//         cout << "Case " << tc << ": " << ans << endl;
//         tc++;
//     }


//     return 0;
// }