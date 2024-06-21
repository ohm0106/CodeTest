#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    cin >> N >> M;

    unordered_set<string> s;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        s.insert(str);
    }

    int count = 0;

    for (int i = 0; i < M; i++) {
        string t;
        cin >> t;
        if (s.find(t) != s.end()) {
            count++;
        }
    }


    cout << count;


}