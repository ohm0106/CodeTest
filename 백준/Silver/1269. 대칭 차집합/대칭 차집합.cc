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

    unordered_set<int> s1 ;
    unordered_set<int> s2;
    unordered_set<int> m ;
    unordered_set<int> p ;

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;

        s1.insert(n);
    }



    for (int i = 0; i < M; i++) {
        int n;
        cin >> n;


        if (s1.find(n) == s1.end())
            p.insert(n);
        
        s2.insert(n);
    }

    for (const auto&p : s1) {
        

        if (s2.find(p) == s2.end()) {
            m.insert(p);
        }
    }


    cout << p.size() + m.size();

}