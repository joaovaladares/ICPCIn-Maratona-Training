#include <algorithm>
#include <vector>

#include "../../bits/stdc++.h"

using namespace std;

void solve(int n, vector<int> &v) {
    int s = 0;
    sort(v.begin(), v.end());
    int low = 0;
    int high = v.size() - 1;

    while (low < high) {
        s += v[high - 1];
        low++;
        high = high - 2;
    }
    cout << s << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int d, n, nums, total;

    cin >> d;

    while (d--) {
        vector<int> v;
        cin >> n;
        total = 3 * n;
        while (total--) {
            cin >> nums;
            v.push_back(nums);
        }
        solve(n, v);
    }

    return 0;
}
