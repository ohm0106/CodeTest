#include<iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int, int>> A;
    bool isRun = true;

    while (isRun) {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0) {
            isRun = false;
        }
        else {
            A.push_back({ x, y });
        }
    }

    for (const auto& p : A) {
        cout << p.first + p.second << "\n";
    }

    return 0;
}