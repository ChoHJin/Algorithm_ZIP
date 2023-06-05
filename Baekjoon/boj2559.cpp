#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;

    cin >> n >> k;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int sum = 0;
    int ans = -1e9;

    for(int i = 0; i < k; i++) {
        sum += v[i];
    }

    ans = sum;

    for(int i = k; i < n; i++) {
        sum += v[i] - v[i - k];

        ans = max(ans, sum);
    }


    cout << ans << '\n';

    return 0;
}