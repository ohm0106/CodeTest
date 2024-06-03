#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> A;

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		A.push_back(n);
	}
	int Min = A[0], Max = A[0];
	for (const auto& p : A) {
		if (p > Max)
			Max = p;
		if (p < Min)
			Min = p;
	}

	cout << Min << " " << Max;
}