#include "../../bits/stdc++.h"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n, num;

    cin >> t;

    while (t--) {
        cin >> n;

        int sum = 0;

        while (n--) {
            cin >> num;
            if (num <= 2048) { sum += num; }
        }

        if (sum >= 2048) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}
