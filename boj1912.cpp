#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001];
int dp[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int sum;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        dp[i] = arr[i];
    }

    sum = dp[0];

    for(int i = 1; i < n; i++) {
        dp[i] = max(dp[i], dp[i - 1] + arr[i]);
        if(dp[i] > sum) {
            sum = dp[i];
        }
    }
    
    cout << sum << endl;

    return 0;
}