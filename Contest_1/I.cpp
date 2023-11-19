#include "../../bits/stdc++.h"

using namespace std;

void solve() {}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, ans = 0;

    cin >> x;

    while (x) {
        if (x & 1) ans++;
        x >>= 1;
    }
    cout << ans;
    return 0;
}
