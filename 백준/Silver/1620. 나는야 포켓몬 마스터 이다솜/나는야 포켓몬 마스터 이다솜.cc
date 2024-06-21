#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cctype>
#include <sstream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    cin >> N >> M;

    unordered_map<string, int> dogam;
    unordered_map<int, string> reversedogam;

    for (int i = 1; i <= N; i++) {
        string name;
        cin >> name;

        dogam[name] = i;
        reversedogam[i] = name;

    }

    for (int i = 0; i < M; i++) {
        string str; 

        cin >> str;

        if (all_of(str.begin(), str.end(), ::isdigit)) {
            // 숫자 일경우 
            stringstream ss(str);
            int num;
            ss >> num;
            
            cout << reversedogam[num] << "\n";

        }
        else {
            // 문자(이름)일 경우 

            cout << dogam[str] << "\n";
        }
    }
}