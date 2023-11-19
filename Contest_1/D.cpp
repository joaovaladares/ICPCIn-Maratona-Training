#include "../../bits/stdc++.h"

using namespace std;

void solve(int n, string s) {
    string ans = "";

    ans += s[0];

    if (s[0] == s[1] || s[1] > s[0]) {
        ans += s[0];
        cout << ans << "\n";
        return;
    }

    for (int i = 1; i < s.size(); i++) {
        if (s[i] <= s[i - 1]) {
            ans += s[i];
        } else {
            break;
        }
    }

    for (int i = ans.size() - 1; i >= 0; i--) { ans += ans[i]; }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc, n;
    string s;

    cin >> tc;

    while (tc--) {
        cin >> n >> s;
        solve(n, s);
    }
    return 0;
}
