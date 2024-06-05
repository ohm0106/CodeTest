#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, C = 0;
	cin >> N;

	string curA;
	bool check = false;

	for (int i = 0;i < N;i++) {
		cin >> curA;
		vector<bool> A(26,false);
		A[curA[0] - 97] = true;
		for (int j = 1; j < curA.size();j++) {

			if (curA[j] == curA[j - 1])
				continue;
			else if (curA[j] != curA[j - 1] && A[curA[j] - 97]) {
				C++;
				break;
			}
			else
				A[curA[j] - 97] = true;
		}

	}

	cout << (N - C);
}