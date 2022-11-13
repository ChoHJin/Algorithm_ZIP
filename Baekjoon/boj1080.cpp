#include <iostream>

using namespace std;

int arrA[51][51];
int arrB[51][51];

void reverseArr(int y, int x) {
    for(int i = y - 1; i <= y + 1; i++) {
        for(int j = x - 1; j < x + 1; j++) {
            arrA[i][j] = 1 - arrA[i][j];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int cnt = 0;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            // cin >> arrA[i][j];
            scanf("%1d",&arrA[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            // cin >> arrB[i][j];
            scanf("%1d",&arrB[i][j]);
        }
    }

    for(int i = 0; i < n - 2; i++) {
        for(int j = 0; j < m - 2; j++) {
            if(arrA[i][j] != arrB[i][j]) {
                cnt++;
                reverseArr(i + 1, j + 1);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arrA[i][j] != arrB[i][j]) {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}