#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    int M;
    string T;

    vector<pair<int, string>> A(N);

    for (int i = 0; i < N; i++) {
        cin >> M >> T;
        A[i].first = M;
        A[i].second = T;
    }

    for (int i = 0; i < N; i++) {
        string result = ""; 
        string S = A[i].second;

        for (int j = 0; j < A[i].second.size(); j++) {

            for (int h = 0; h < A[i].first; h++) {
                result += S[j];
            }

        }
        cout << result << "\n";
    }
}