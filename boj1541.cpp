#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, num;
    bool minus = false;
    int sum = 0;

    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '+' || s[i] == '-') {
            if(minus) {     //마이너스가 나오면 값을 빼줌.
                sum -= stoi(num);
            }
            else {
                sum += stoi(num);
            }

            num.clear();    //숫자는 초기화

            if(s[i] == '-') {   //마이너스가 나오면 다음것들은 다 빼버림
                minus = true;
            }
        }
        else {
            num += s[i];    //피연산자일때
        }
    }
    if(minus) {
        sum -= stoi(num);
    }
    else {
        sum += stoi(num);
    }

    cout << sum << endl;

    return 0;
}