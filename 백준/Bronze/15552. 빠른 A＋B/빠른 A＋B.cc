#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T; // T 는 최대 1,000,000
	cin >> T;

	vector<pair<int, int>> A(T);

	for (int i = 0; i < T; i++) {
		cin >> A[i].first >> A[i].second;
	}

	for (int i = 0; i < T; i++) {
		cout << A[i].first + A[i].second  << "\n";
	}
}