#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int c, mx = 0;

	int n;
	for (int i = 0; i < 9; i++) {
		
		cin >> n;
		if (mx != max(mx, n)) {
			c = i;
			mx = n;
		}
	}

	cout << mx << "\n";
	cout << c+1 << "\n";

}