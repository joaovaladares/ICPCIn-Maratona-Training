#include <algorithm>
#include <unordered_map>
#include <vector>

#include "../../bits/stdc++.h"

using namespace std;

void solve() {}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n && n != 0) {
        unordered_map<string, int> mp;
        vector<string> v;

        while (n--) {
            for (int i = 0; i < 5; i++) {
                string s;
                cin >> s;
                v.push_back(s);
            }

            sort(v.begin(), v.end());
            string t;
            for (auto x : v) { t += x; }
            mp[t]++;
            v.clear();
        }

        int maxVal = 0;
        for (auto x : mp) { maxVal = max(maxVal, x.second); }

        int total = 0;
        for (auto x : mp) {
            if (x.second == maxVal) { total += x.second; }
        }

        cout << total << "\n";
    }

    return 0;
}
