
#include <iostream>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N , S = 0;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        S += i;
    }

    cout << S;
}