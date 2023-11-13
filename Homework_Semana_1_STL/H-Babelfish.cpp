#include <sstream>
#include <string>
#include <unordered_map>

#include "../../bits/stdc++.h"

using namespace std;

void solve(unordered_map<string, string> &mp, string &s) {
    if (mp.find(s) != mp.end()) {
        cout << mp[s] << "\n";
    } else {
        cout << "eh"
             << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    unordered_map<string, string> mp;

    string s;

    while (getline(cin, s) && !s.empty()) {
        stringstream ss(s);
        string eng, foreign;

        ss >> eng >> foreign;

        mp[foreign] = eng;
    }

    string word;

    while (cin >> word) { solve(mp, word); }

    return 0;
}
