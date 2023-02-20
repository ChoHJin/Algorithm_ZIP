#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string a, b, tmp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;

    if(a.length() < b.length()) {
        swap(a, b);
    }

    if(a.length() != b.length()) {
        for(int i = 0; i < (a.length() - b.length()); i++) {
            tmp += '0';
        }
    }
    b = tmp + b;

    string ans = "";

    int carry = 0;
    int x, y, digit;
    
    for(int i = a.length() - 1; i >= 0; i--) {
        x = a[i] - '0';
        y = b[i] - '0';
        digit = x + y;

        if(carry == 1) {
            digit++;
            carry = 0;
        }
        if(digit > 9) {
            carry = 1;
        }
        ans += digit % 10 + '0';
    }

    if(carry == 1) ans += '1';

    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}