#include "../../bits/stdc++.h"

using namespace std;

void solve(long long int &n, long long int &m) {
    long long int x = 10;
    long long int ans = n * m;

    while (true) {
        long long int gcdiv = __gcd(x, n);
        long long int k = x / gcdiv;

        if (k <= m && k > 0) {
            ans = k * (m / k) * n;
        } else {
            break;
        }
        x *= 10;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int tc, n, m;

    cin >> tc;

    while (tc--) {
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}
