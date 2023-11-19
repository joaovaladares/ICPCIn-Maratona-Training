#include <string>

#include "../../bits/stdc++.h"

using namespace std;

void solve(string &s) {
    stack<char> st;

    for (auto ch : s) {
        if (ch == '(' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) {
                cout << "No"
                     << "\n";
                return;
            } else if (ch == ')' && st.top() == '(') {
                st.pop();
            } else if (ch == ']' && st.top() == '[') {
                st.pop();
            }
        }
    }

    if (st.empty()) {
        cout << "Yes"
             << "\n";
    } else {
        cout << "No"
             << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string s;

    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, s);
        if (s.empty()) {
            cout << "Yes"
                 << "\n";
        } else
            solve(s);
        s.clear();
    }
    return 0;
}
