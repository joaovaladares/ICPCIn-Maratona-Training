#include <queue>

#include "../../bits/stdc++.h"

using namespace std;

void solve(int b, priority_queue<int> &gq, priority_queue<int> &bq) {
    queue<int> greenq, blueq;
    int m, minpq, blue, green;
    while (!gq.empty() && !bq.empty()) {
        minpq = min(gq.size(), bq.size());
        m = min(b, minpq);

        while (m--) {
            green = gq.top();
            blue = bq.top();

            greenq.push(green);
            blueq.push(blue);

            gq.pop();
            bq.pop();
        }

        while (!greenq.empty() && !blueq.empty()) {
            green = greenq.front();
            greenq.pop();
            blue = blueq.front();
            blueq.pop();

            if (green == blue) { continue; }

            if (green > blue) { gq.push(green - blue); }

            if (blue > green) { bq.push(blue - green); }
        }

        if (gq.empty() && bq.empty()) {
            cout << "green and blue died"
                 << "\n";
        } else if (gq.empty()) {
            cout << "blue wins"
                 << "\n";
            while (!bq.empty()) {
                cout << bq.top() << "\n";
                bq.pop();
            }
        } else if (bq.empty()) {
            cout << "green wins"
                 << "\n";
            while (!gq.empty()) {
                cout << gq.top() << "\n";
                gq.pop();
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    priority_queue<int> gq;
    priority_queue<int> bq;

    int n, b, sg, sb, gl, bl;

    cin >> n;

    while (n--) {
        cin >> b >> sg >> sb;
        while (sg--) {
            cin >> gl;
            gq.push(gl);
        }
        while (sb--) {
            cin >> bl;
            bq.push(bl);
        }
        solve(b, gq, bq);
        if (n) { cout << "\n"; }
    }

    return 0;
}
