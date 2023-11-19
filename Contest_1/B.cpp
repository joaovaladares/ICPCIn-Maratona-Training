#include <unordered_set>

#include "../../bits/stdc++.h"

using namespace std;

void solve(int n, string &s) {
    unordered_set<string> st;
    string t;

    for (int i = 0; i < s.size() - 1; i++) {
        string aux = "";
        st.insert(aux + s[i] + s[i + 1]);
    }

    cout << st.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    string s;

    cin >> t;

    while (t--) {
        cin >> n >> s;
        solve(n, s);
    }
    return 0;
}
