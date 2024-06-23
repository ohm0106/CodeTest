#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    queue<int> s;
    stack<int> t;

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        s.push(n);
    }
    int count = 1;

    while (true) {
        if (!s.empty()) {
            int c = s.front();
            if (c == count) {
                count++;
                s.pop();
            } else {
                if (!t.empty() && t.top() == count) {
                    t.pop();
                    count++;
                } else {
                    t.push(c);
                    s.pop();
                }
            }
        } else {
            while (!t.empty() && t.top() == count) {
                t.pop();
                count++;
            }
            break;
        }
    }

    if (count == N + 1)
        cout << "Nice";
    else
        cout << "Sad";


}
