#include <iostream>
#include <string>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y1, y2, m1, m2, d1, d2;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;

    int totalDays = 0;

    for(int i = 1; i < y1; i++) {
        if(isLeapYear(i)) {
            totalDays += 366;
        } else {
            totalDays += 365;
        }
    }

    for(int i = 1; i < m1; i++) {
        totalDays += daysMonth[i];

        if(i == 2 && isLeapYear(y1)) {
            totalDays++;
        }
    }

    totalDays += d1;

    int Dday = 0;

    for(int i = 1; i < y2; i++) {
        if(isLeapYear(i)) {
            Dday += 366;
        } else {
            Dday += 365;
        }
    }

    for(int i = 1; i < m2; i++) {
        Dday += daysMonth[i];

        if(i == 2 && isLeapYear(y2)) {
            Dday++;
        }
    }

    Dday += d2;

    int ans = Dday - totalDays;

    if(ans >= 1000) {
        cout << "gg" << endl;
    } else {
        cout << "D-" << ans << endl;
    }

    return 0;
}