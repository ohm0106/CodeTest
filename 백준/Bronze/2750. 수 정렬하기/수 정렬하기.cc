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
	vector<int> answer(N);

	for (int i = 0; i < N; i++) {
		cin >> answer[i];
	}

	sort(answer.begin(), answer.end());

	for (const auto &p : answer) {
		cout << p << "\n";
	}

		
}
