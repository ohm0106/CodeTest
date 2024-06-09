#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<int, int>> A;

	while (true) {
		int N, M;
		cin >> N >> M;

		if (N == 0 && M == 0)
			break;

		A.push_back({ N, M });


	}

	for (int i = 0; i < A.size(); i++) {

		if (A[i].second % A[i].first == 0)
			cout << "factor\n";
		else if (A[i].first % A[i].second == 0)
			cout << "multiple\n";
		else
			cout << "neither\n";
	}
}
