#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
vector<int> dp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;

    cin >> n >> k;

    v.resize(n);
    dp.resize(k + 1);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 1; i <= k; i++) {   //최솟값을 구하기 위해 초기화함.
        dp[i] = 10001;
    }

    for(int i = 0; i < n; i++) {
        for(int j = v[i]; j <= k; j++) {
            dp[j] = min(dp[j], dp[j - v[i]] + 1);
        }
    }

    if(dp[k] == 10001) {
        cout << -1 << endl;
    }
    else {
        cout << dp[k] << endl;
    }

    return 0;
}