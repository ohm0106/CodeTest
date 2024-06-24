#include <iostream>
#include <deque>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N ;
    
    deque<int> q;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        if (num == 1) {
            int p;
            cin >> p;
            q.push_front(p);
           
        }
        else if (num == 2)
        {
            int p;
            cin >> p;
            q.push_back(p);
        }
        else if (num == 3) {
            if (!q.empty()) {
                int c = q.front();
                q.pop_front();
                cout << c << "\n";

            }
            else {

                cout << -1 << "\n";
            }

        }
        else if (num == 4) {
            if (!q.empty()) {

                int c = q.back();
                q.pop_back();

                cout << c << "\n";

            }
            else {

                cout << -1 << "\n";
            }

        }
        else if (num == 5) {

            cout << q.size() << "\n";
        }
        else if (num == 6) {
            if (!q.empty()) {
               
                cout << 0 << "\n";

            }
            else {

                cout << 1 << "\n";
            }

        }
        else if (num == 7) {
            if (!q.empty()) {

                cout << q.front() << "\n";

            }
            else {

                cout << -1 << "\n";
            }

        }
        else if (num == 8) {
            if (!q.empty()) {

                cout << q.back() << "\n";

            }
            else {

                cout << -1 << "\n";
            }

        }
    }
   
}