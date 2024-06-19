#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> answer(5);

	int sum = 0;
	for (int i = 0; i < answer.size(); i++) {
		cin >> answer[i];
		sum += answer[i];
	}

	sort(answer.begin(), answer.end());

	cout << sum / 5 << "\n";
	cout << answer[2] << "\n";
		
}
