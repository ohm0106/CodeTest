#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> A(N);

	for (int i = 0; i < N; i++) {
		A[i] = i + 1;
	}


	int a, b, temp;
	for (int i = 0; i < M; i++) {

		cin >> a >> b;
		reverse(A.begin() + a - 1, A.begin() + b);  // 벡터의 부분 범위를 역순으로 뒤집음
	}

	for (int i = 0; i < N; i++) {
		cout << A[i] << " ";
	}
}