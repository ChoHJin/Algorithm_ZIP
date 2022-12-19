#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, p1, p2;

    cin >> x >> y >> p1 >> p2;

    while(1) {
        if(p1 > p2) {
            p2 += y;
        }
        else if (p1 < p2) {
            p1 += x;
        }
        else {
            cout << p1 << endl;
            break;
        }

        if(p1 > 10000 || p2 > 10000) {
            cout << -1 << endl;
            break;
        }

    }

    return 0;
}