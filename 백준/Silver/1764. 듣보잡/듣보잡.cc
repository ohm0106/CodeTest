#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

// unordered map : 정렬 x map / 중복 x 
// unordered set : 정렬 x set / 중복 x 
// unordered multiset & multiset : 중복 o

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    cin >> N >>M;

    unordered_set<string> s;

    for (int i = 0; i < N; i++) {
        string n;
        cin >> n;

        
        s.insert(n);
    }


    vector<string> strs;

    for (int i = 0; i < M; i++) {
        string n;
        cin >> n;


        if (s.find(n) != s.end())
            strs.push_back(n);
    }

    sort(strs.begin(), strs.end());

    cout << strs.size() << "\n";

    for (const auto& p : strs) {
        cout << p << "\n";
    }

}