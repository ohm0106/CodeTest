#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// false : a true : b
bool customsort(const pair<int, string> &a, const pair<int, string> &b) {
    if (a.first != b.first)
        return a.first < b.first; // 나이에 맞게 오름차순으로 정렬 

    return false; // 나이가 같을 경우 무조건 먼저 가입한 사람이 앞으로 오도록 

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, string>> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i].first >> A[i].second;
    }

    stable_sort(A.begin(), A.end(),customsort);

    for (const auto& p : A) {
        cout << p.first << " " << p.second << "\n";
    }
 
}
 