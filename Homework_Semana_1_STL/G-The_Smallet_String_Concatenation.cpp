#include <vector>

#include "../../bits/stdc++.h"

using namespace std;

bool compare(string s, string t) {
    return (s + t < t + s);
}

void solve(vector<string> &v) {
    string ans = "";
    sort(v.begin(), v.end(), compare);

    for (auto s : v) { ans += s; }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string a;
    vector<string> v;

    cin >> n;

    while (n--) {
        cin >> a;
        v.push_back(a);
    }

    solve(v);
    return 0;
}
