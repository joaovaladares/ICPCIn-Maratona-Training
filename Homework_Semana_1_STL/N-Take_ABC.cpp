#include "../../bits/stdc++.h"

using namespace std;

void solve(string &s) {
    string ans;

    for (auto c : s) {
        ans += c;
        if ((ans.size() >= 3) && (ans.substr(ans.size() - 3, ans.size()) == "ABC")) {
            ans.erase(ans.size() - 3, 3);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;

    cin >> s;

    solve(s);

    return 0;
}
