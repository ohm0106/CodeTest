#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> tempA = A;
    sort(tempA.begin(), tempA.end());
    tempA.erase(unique(tempA.begin(), tempA.end()), tempA.end());

    unordered_map<int, int> coord_map;
    for (int i = 0; i < tempA.size(); ++i) {
        coord_map[tempA[i]] = i;
    }

    for (int i = 0; i < N; ++i) {
        cout << coord_map[A[i]] << " ";
    }

}