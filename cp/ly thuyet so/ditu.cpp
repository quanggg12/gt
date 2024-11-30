#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;
// Một phạm nhân lãnh bản án tù x ngày và bắt đầu thời gian thi hành án từ ngày d, tháng m, năm y. Hãy cho biết phạm nhân được ra tù vào ngày nào.
// Input:
// 5 27 1 2000
// Output:
// 1 2 2000

int days_in_month(int month, int year) {
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return 29;
        } else {
            return 28;
        }
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}

void add_days(ll &d, ll &m, ll &y, ll days) {
    while (days > 0) {
        int days_in_current_month = days_in_month(m, y);
        if (d + days <= days_in_current_month) {
            d += days;
            days = 0;
        } else {
            days -= (days_in_current_month - d + 1);
            d = 1;
            if (m == 12) {
                m = 1;
                y++;
            } else {
                m++;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll x, d, m, y;
    cin >> x >> d >> m >> y;

    add_days(d, m, y, x);

    cout << d << " " << m << " " << y << "\n";

    return 0;
}
