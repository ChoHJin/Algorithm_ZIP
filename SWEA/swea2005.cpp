#include <iostream>

using namespace std;

int arr[10][10];

int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case;
    int T;

    cin>>T;
/*
여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
*/
    for(test_case = 1; test_case <= T; ++test_case) {
        int n;

        cin >> n;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                if(i == 0 || j == 0) {
                    arr[i][j] = 1;
                }
                else {
                    arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
                }
            }
        }

        cout << "#" << test_case << endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}