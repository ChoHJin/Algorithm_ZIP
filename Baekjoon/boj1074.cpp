#include <iostream>
#include <cmath>

using namespace std;

int N, c, r, answer;

void board(int n, int x, int y) {
    if(n == 1) {
        if(x == c && y == r) {
            cout << answer << endl;
        }
        answer++;
        return;
    }

    int half = n / 2;

    if(c < x + half && r < y + half) {
        board(half, x, y);
    }
    else if(c < x + half && r >= y + half) {
        answer += half * half;
        board(half, x, y + half);
    }
    else if(c >= x + half && r < y + half) {
        answer += half * half * 2;      //pow를 사용시 값이 double형으로 반환되어 결과값이 다르게 나옴
        board(half, x + half, y);
    }
    else {
        answer += half * half * 3;
        board(half, x + half, y + half);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> c >> r;
    int size = pow(2, N);
    board(size, 0, 0);

    return 0;
}