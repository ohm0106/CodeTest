#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool customCompare(const string& a, const string& b) {
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    set<string> uniqueStrings; 
    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        uniqueStrings.insert(input);
    }

    vector<string> A(uniqueStrings.begin(), uniqueStrings.end()); 

    sort(A.begin(), A.end(), customCompare); // 커스텀 정렬 기준 사용

    for (const auto& str : A) {
        cout << str << "\n";
    }

 
}
