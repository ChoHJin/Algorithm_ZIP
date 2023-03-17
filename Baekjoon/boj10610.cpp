#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;
    
    int sum = 0;
    bool isZeroExist = false;
    for (char c : n) {
        if (c == '0') isZeroExist = true;
        sum += c - '0';
    }

    if (!isZeroExist || sum % 3 != 0) {
        cout << "-1\n";
        return 0;
    }

    sort(n.begin(), n.end(), greater<char>());
    cout << n << "\n";


    return 0;
}