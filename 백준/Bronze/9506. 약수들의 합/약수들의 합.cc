#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<numeric>

using namespace std;

int main() {

	// 완전수 란? n이 자신을 제외한 모든 약수들의 합

	while (true)
	{
		int N;
		cin >> N;
		
		vector<int> A;

		if (N == -1)
			break;

		for (int i = 1; i < sqrt(N); i++) {
			if (N % i == 0) {
				A.push_back(i);
				if (i != N / i && N != N/i ) {
					A.push_back(N / i);
				}
			}

		}

		if (accumulate(A.begin(), A.end(),0) == N) {
			// 완전수 
			sort(A.begin(), A.end());
			
			cout << N << " = ";
			for (int i = 0; i < A.size();i++) {
				cout << A[i];
				if(i != A.size()-1)
					cout << " + ";
			}
			cout << "\n";

		}
		else {
			cout << N << " is NOT perfect.\n";
		}
	}


}