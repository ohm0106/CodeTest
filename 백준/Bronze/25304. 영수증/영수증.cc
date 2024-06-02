#include <iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int X, N;
	cin >> X;
	cin >> N;

	vector<pair<int, int>> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i].first >> A[i].second;
	}

	for (int i = 0; i < N; i++) {
		X -= A[i].first * A[i].second;
	}

	if (X == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}