#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;



int main() {
	int N, K; 

	cin >> N >> K;

	vector<int> A;

	for (int i = 1; i <= sqrt(N); ++i) {  // 입력되는 최대값이 10,000이기 때문에 줄여준다.
		if (N % i == 0) {
			A.push_back(i);
			if (i != N / i) {
				A.push_back(N / i);
			}
		}
	}

	if (A.size() < K)
		cout << 0;
	else {
		sort(A.begin(), A.end());
		cout << A[K - 1];
	}
}