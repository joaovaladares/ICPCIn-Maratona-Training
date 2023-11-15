#include <functional>
#include <queue>
#include <vector>

#include "../../bits/stdc++.h"

using namespace std;

void solve(priority_queue<int, vector<int>, greater<int>> &pq) {
    int ans = 0;
    int cost = 0;

    while (!pq.empty() && pq.size() > 1) {
        cost = cost + pq.top();
        pq.pop();
        cost = cost + pq.top();
        pq.pop();
        pq.push(cost);
        ans += cost;
        cost = 0;
    }
    cout << ans << "\n";
    while (!pq.empty()) { pq.pop(); }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, num;
    priority_queue<int, vector<int>, greater<int>> pq;

    while (cin >> n && n) {
        for (int i = 0; i < n; i++) {
            cin >> num;
            pq.push(num);
        }

        solve(pq);
    }

    return 0;
}
