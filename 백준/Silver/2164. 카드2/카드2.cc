#include <iostream>
#include <queue>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    
    queue<int> q;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while (true)
    {
        if (q.size() == 1) {
            cout << q.back();
            break;
        }

        q.pop(); 

        int num = q.front();
        q.pop();
        q.push(num);
    }

}