#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    cin >> M;

    vector<int> B(M);

    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;

        if (binary_search(A.begin(), A.end(), num)) {// 이진 탐색 O(NlogN)
            B[i] = 1;
        }
        else {
            B[i] = 0;
        }
    }
    

    for (const auto& p : B) {
        cout << p << " ";
    }

}