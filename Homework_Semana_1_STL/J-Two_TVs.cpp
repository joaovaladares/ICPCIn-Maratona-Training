#include "../../bits/stdc++.h"

using namespace std;

void solve(vector<pair<int, int>> &vp) {
    int cnt = 0;
    for (int i = 0; i < vp.size(); i++) {
        if (vp[i].second == 0) {
            cnt++;
        } else {
            cnt--;
        }
        if (cnt > 2) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<pair<int, int>> vp;
    int n, show1, show2;

    cin >> n;

    while (n--) {
        cin >> show1 >> show2;
        vp.push_back(make_pair(show1, 0));
        vp.push_back(make_pair(show2, 1));
    }

    sort(vp.begin(), vp.end());
    solve(vp);

    return 0;
}
