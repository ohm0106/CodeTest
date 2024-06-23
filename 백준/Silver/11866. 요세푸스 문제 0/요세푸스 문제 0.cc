#include <iostream>
#include <queue>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,K;
    cin >> N >> K;
    
    queue<int> q;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    vector<int> a;

    for (int i = 1; i <= N; i++) {
        int count = 1;

        while (true)
        {
            if (q.empty())
                break;

            int num = q.front();
            q.pop();
            if (count == K)
            {
                a.push_back(num);
                break;
            }
            else {
                q.push(num);
                count += 1;
            }
        }
    }
    
    cout << "<";
    for (int i = 0; i < N; i++) {
        cout << a[i];
        if (i < N - 1) {
            cout << ", ";
        }
    }
    cout << ">";

}