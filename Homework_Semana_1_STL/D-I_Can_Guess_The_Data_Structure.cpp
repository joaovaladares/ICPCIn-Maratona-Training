#include <queue>
#include <stack>

#include "../../bits/stdc++.h"

using namespace std;

void solve(int n) {}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, cmd, num;

    while (cin >> n) {
        stack<int> st;
        queue<int> q;
        priority_queue<int> pq;

        bool isStack = 1;
        bool isQueue = 1;
        bool isPrio = 1;

        while (n--) {
            cin >> cmd >> num;
            if (cmd == 1) {
                st.push(num);
                q.push(num);
                pq.push(num);
            } else {
                if (!st.empty()) {
                    if (st.top() != num) { isStack = 0; }
                    st.pop();
                } else {
                    isStack = 0;
                }
                if (!q.empty()) {
                    if (q.front() != num) { isQueue = 0; }
                    q.pop();
                } else {
                    isQueue = 0;
                }
                if (!pq.empty()) {
                    if (pq.top() != num) { isPrio = 0; }
                    pq.pop();
                } else {
                    isPrio = 0;
                }
            }
        }

        if (isStack + isPrio + isQueue > 1) {
            cout << "not sure"
                 << "\n";
        } else if (isStack + isPrio + isQueue == 0) {
            cout << "impossible"
                 << "\n";
        } else if (isStack) {
            cout << "stack"
                 << "\n";
        } else if (isQueue) {
            cout << "queue"
                 << "\n";
        } else if (isPrio) {
            cout << "priority queue"
                 << "\n";
        }

        while (!st.empty()) { st.pop(); }
        while (!q.empty()) { q.pop(); }
        while (!pq.empty()) { pq.pop(); }
    }

    return 0;
}
