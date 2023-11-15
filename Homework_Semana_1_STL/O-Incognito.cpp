#include <string>
#include <unordered_map>

#include "../../bits/stdc++.h"

using namespace std;

void solve(unordered_map<string, int> &mp) {
    int ans = 1;

    for (auto x : mp) { ans *= x.second + 1; }

    cout << ans - 1 << "\n";
    mp.clear();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    unordered_map<string, int> mp;
    int t, n;

    cin >> t;

    while (t--) {
        cin >> n;

        while (n--) {
            string name, category;
            cin >> name >> category;
            mp[category]++;
        }

        solve(mp);
    }

    return 0;
}
