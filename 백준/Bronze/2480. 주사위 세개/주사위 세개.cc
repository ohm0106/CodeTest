#include<iostream>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, C;

	cin >> A >> B >> C;

	if (A == B && A == C) {
		cout << 10000 + (A * 1000);
	}
	else if(A == B) {
		cout << 1000 + (A * 100);
	}
	else if (A == C) {
		cout << 1000 + (A * 100);
	}
	else if (C == B) {
		cout << 1000 + (C * 100);
	}
	else {

		int max = A;

		if (max < B)
			max = B;

		if (max < C)
			max = C;

		cout << (max * 100);
	}

}