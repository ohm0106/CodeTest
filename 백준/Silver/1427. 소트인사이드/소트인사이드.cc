#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;

	vector<int> A;

	while (true)
	{
		if (N <= 0)
			break;

		A.push_back(N % 10);
		N = N / 10;

	}

	sort(A.begin(), A.end());
	reverse(A.begin(), A.end());

	for (const auto& p : A) {
		cout << p;
	}
}
