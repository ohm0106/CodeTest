#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,V;
	vector<int> A;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;

		A.push_back(a);
	}

	cin >> V;

	int count = 0;
	for (const auto& p : A) {

		if (V == p)
			count++;
	}

	cout << count;
}