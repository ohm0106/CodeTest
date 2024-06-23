#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    stack<int> s;

  
    for (int i = 0;i < N; i++) {
        int num , num2;
        cin >> num;

        switch (num)
        {
        case 1:
            cin >> num2;
            s.push(num2);
            break;
        case 2:
            if (s.empty())
                cout << -1 << "\n";
            else {
                num2 = s.top();
                s.pop();
                cout << num2 << "\n";
            }
               
            break;
        case 3:
                cout << s.size() << "\n";
            break;
        case 4:
            if (s.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
            break;
        case 5:
            if (s.empty())
                cout << -1 << "\n";
            else {
                num2 = s.top();
                cout << num2 << "\n";
            }
              
            break;

        default:
            break;
        }
    }
}