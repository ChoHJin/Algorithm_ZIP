#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, q;
    cin >> n >> m >> q;

    vector<int> r(n);
    vector<int> c(m);

    for(int i = 0; i < q; i++) {
        int op, a, b;
        cin >> op >> a >> b;

        if(op == 1) {
            r[a - 1] += b;
        } else {
            c[a - 1] += b;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << r[i] + c[j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}