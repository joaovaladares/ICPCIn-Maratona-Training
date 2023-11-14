#include "../../bits/stdc++.h"

using namespace std;

void solve(int l, queue<int> &left, queue<int> &right) {
    int travel = 0;
    int total = 0;

    while (!left.empty() || !right.empty()) {
        if (!left.empty()) {
            while (total + left.front() < l) {
                total = total + left.front();
                left.pop();
                if (left.empty()) { break; }
            }
        }

        if (total > 0 || !right.empty()) {
            travel++;
            total = 0;
        }

        if (!right.empty()) {
            while (total + right.front() < l) {
                total = total + right.front();
                right.pop();
                if (right.empty()) { break; }
            }
        }

        if (total > 0 || !left.empty()) {
            travel++;
            total = 0;
        }
    }

    cout << travel << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    queue<int> left;
    queue<int> right;

    int c, l, m, cl;
    string s;

    cin >> c;

    while (c--) {
        cin >> l >> m;

        while (m--) {
            cin >> cl >> s;
            if (s == "left") { left.push(cl); }
            if (s == "right") { right.push(cl); }
        }
        solve(l * 100, left, right);
    }

    return 0;
}
