#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    map<string, string> m;

    for (int i = 0;i < N; i++) {
        string name, status;
        cin >> name >> status;
        m[name] = status;

    }

    for (auto it = m.rbegin(); it != m.rend(); ++it) { // it = reverse_iterator
        if (it->second == "enter")
            cout << it->first << "\n";
    }
   
}