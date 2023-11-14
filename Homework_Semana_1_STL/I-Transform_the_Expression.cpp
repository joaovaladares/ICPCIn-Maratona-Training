#include "../../bits/stdc++.h"

using namespace std;

void solve(string exp) {
    stack<char> st;
    string ans = "";

    for (int i = 0; i < exp.size(); i++) {
        if ((exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= 'a' && exp[i] <= 'z')) {
            ans += exp[i];
        } else if (exp[i] == ')') {
            while (st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop();  //pop no parenteses que restou
        } else {
            st.push(exp[i]);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;

    cin >> t;
    string exp;

    while (t--) {
        cin >> exp;

        solve(exp);
    }

    return 0;
}
