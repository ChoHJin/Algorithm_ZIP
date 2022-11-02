#include <iostream>

using namespace std;

long long POW(long long a, long long b, long long c) {
    if(b == 0) return 1;
    else {
        long long tmp = POW(a, b / 2, c);
        tmp = tmp*tmp % c;
        
        if(b % 2 == 0) {
            return tmp;
        }
        else {
            return (tmp * a) % c;
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    int ans = 0;

    cin >> a >> b >> c;
    
    ans = POW(a, b, c);

    cout << ans << endl;

    return 0;
}