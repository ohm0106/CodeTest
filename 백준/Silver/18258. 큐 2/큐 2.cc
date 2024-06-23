#include <iostream>
#include <queue>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    
    queue<int> q;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;

        if (str == "push")
        {
            int n;
            cin >> n;
            q.push(n);
        }
        else if (str == "front") {
            if (q.empty())
                cout << -1 << "\n";
            else 
                cout << q.front() << "\n";
        }
        else if (str == "back") {
            if (q.empty())
                cout << -1 << "\n";
            else
                cout << q.back() << "\n";
        }
        else if (str == "empty") {
            if (q.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (str == "size") {
            
            cout << q.size() << "\n";

        }
        else if (str == "pop") {
            if (q.empty())
                cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }

    }

}