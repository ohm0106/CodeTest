#include<iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> A(N, 0); // N 크기의 벡터를 0으로 초기화
    int i, j, k;
    for (int a = 0; a < M; a++) {
        cin >> i >> j >> k;
        for (int b = i - 1; b < j; b++) {
            A[b] = k;
        }
    }

    for (const auto& p : A) {
        cout << p << " ";
    }

}