#include <ios>

#include "../../bits/stdc++.h"

using namespace std;

bool rev = false;

void solve(string s, deque<int> &dq) {
    int val;

    if (s == "toFront") {
        cin >> val;

        if (rev) {
            dq.push_back(val);
        } else {
            dq.push_front(val);
        }
    } else if (s == "push_back") {
        cin >> val;

        if (rev) {
            dq.push_front(val);
        } else {
            dq.push_back(val);
        }
    } else {
        if (s == "front") {
            if (dq.empty()) {
                cout << "No job for Ada?"
                     << "\n";
            } else {
                if (rev) {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                } else {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
            }
        } else if (s == "back") {
            if (dq.empty()) {
                cout << "No job for Ada?"
                     << "\n";
            } else {
                if (rev) {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                } else {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
            }
        } else {
            rev = !rev;
        }
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int q;
    string s;
    deque<int> dq;
    cin >> q;

    while (q--) {
        cin >> s;

        solve(s, dq);
    }
    return 0;
}
