#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int a = stoi(s.length() >= 3 && s[1] == '0' ? s.substr(0, 2) : s.substr(0, 1));
	int b = stoi(a == 10 ? s.substr(2) : s.substr(1));
	int ans = a + b;

	cout << ans << endl;

    return 0;
}