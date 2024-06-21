#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// unordered map : 정렬 x map / 중복 x 
// unordered set : 정렬 x set / 중복 x 
// unordered multiset & multiset : 중복 o

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    cin >> N ;

    unordered_map<int,int> s;

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;

        
        s[n] += 1;
    }

    
    cin >> M;

    vector<int> A;

    for (int i = 0; i < M; i++) {
        int m;

        cin >> m;

        cout << s[m] << " ";
    }


}