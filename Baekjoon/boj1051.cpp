#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> map(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        string row; //공백없이 입력받기 때문에 string으로 입력받음.
        cin >> row; 

        for(int j = 0; j < m; j++) {
            map[i][j] = row[j] - '0';
        }
    }

    int maxSquare = 1;  //정사각형의 최소 넓이는 1

    //각 위치에서 가능한 최대 정사각형의 변 길이 찾기
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int maxLen = min(n - i, m - j); //현재 위치에서 가능한 최대 변 길이

            for(int k = 1; k < maxLen; k++) {
                //현재 위치에서 변의 길이 k인 정사각형이 모두 같은 숫자로 이루어져 있는지 확인
                if(map[i][j] == map[i + k][j] && map[i][j] == map[i][j + k] 
                && map[i][j] == map[i + k][j + k]) {
                    //최대 넓이 업데이트
                    maxSquare = max(maxSquare, (k + 1) * (k + 1));
                }
            }
        }
    }

    cout << maxSquare << endl;

    return 0;
}