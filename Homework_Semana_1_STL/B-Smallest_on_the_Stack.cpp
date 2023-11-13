#include <map>

#include "../../bits/stdc++.h"

using namespace std;

map<int, int> mp;

void solve(string command, stack<int> &st) {
    int v;

    if (command == "PUSH") {
        cin >> v;
        st.push(v);
        mp[v]++;
    } else if (command == "POP") {
        if (st.empty()) {
            cout << "EMPTY"
                 << "\n";
        } else {
            mp[st.top()]--;
            auto itr = mp.find(st.top());
            if (itr != mp.end() && itr->second == 0) { mp.erase(itr->first); }
            st.pop();
        }
    } else {
        if (st.empty()) {
            cout << "EMPTY"
                 << "\n";
        } else {
            cout << mp.begin()->first << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    stack<int> st;
    int n;
    string command;

    cin >> n;

    while (n--) {
        cin >> command;
        solve(command, st);
    }

    return 0;
}
