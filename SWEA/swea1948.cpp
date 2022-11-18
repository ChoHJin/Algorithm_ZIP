#include <iostream>

using namespace std;

int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

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
        int m1, d1, m2, d2;

        cin >> m1 >> d1 >> m2 >> d2;

        int ans = 0;

        for(int i = m1; i <= m2; i++) {
            if(i == m2) {
                ans += d2 - d1 + 1;
                continue;
            }
            ans += days[i];
        }

        cout << "#" << test_case << " ";
        cout << ans << endl;
    }

    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}