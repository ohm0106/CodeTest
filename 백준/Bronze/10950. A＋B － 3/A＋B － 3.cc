#include<iostream>
#include<vector>

using namespace std;

int main() {

	int N;

	cin >> N;

	vector<pair<int,int>> A(N);

	for (int i = 0; i < N; i++) {

		cin >> A[i].first >> A[i].second;
	}

	for (int i = 0; i < N; i++) {
	
		cout << A[i].first + A[i].second << endl;
	}
}