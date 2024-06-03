#include<iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    vector<int> A(N); 
    for (int i = 0; i < N; i++) {
        A[i] = i + 1;
    }
    int i, j,temp;
    for (int a = 0; a < M; a++) {
        cin >> i >> j;
        temp = A[i-1];
        A[i-1] = A[j-1];
        A[j-1] = temp;
    }

    for (const auto& p : A) {
        cout << p << " ";
    }
}