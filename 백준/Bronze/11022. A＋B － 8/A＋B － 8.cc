#include<iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T; 
	cin >> T;

	vector<pair<int, int>> A(T);

	for (int i = 0; i < T; i++) {
		cin >> A[i].first >> A[i].second;
	}

	for (int i = 0; i < T; i++) {
		cout << "Case #"<< i+1 << ": "<< A[i].first<< " + " << A[i].second << " = " << A[i].first + A[i].second << "\n";
	}
}