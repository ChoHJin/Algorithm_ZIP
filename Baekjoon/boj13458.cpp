#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, b, c;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    cin >> b >> c;

    long long ans = 0;

    for(int i = 0; i < n; i++) {
        if(v[i] <= b) {
            ans++;
        }
        else {
            ans += (v[i] - b) / c + 1;
            if((v[i] - b) % c != 0) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}