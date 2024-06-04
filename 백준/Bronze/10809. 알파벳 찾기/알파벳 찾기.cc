#include<iostream>
#include<vector>

using namespace std;

int main() {
	string S;
	cin >> S;
	vector<int> A(26,-1);

	for (int i = 0; i < S.size() ; i++) {
		int a = (int)S[i] - 97;
		if(A[a] == -1)
			A[a] = i;
	}

	for (const auto& p : A) {
		cout << p << " ";
	}
}