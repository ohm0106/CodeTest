#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> M = { 25, 10, 5, 1 };

	int C;
	cin >> C;

	for (int i = 0; i < C; i++) {
		int N;
		cin >> N;

		vector <int> changeM(4, 0);

		for (int j = 0; j < M.size(); j++) {

			if (N == 0)
				break;
			changeM[j] = N / M[j];
			N = N % M[j];
		}

		for (int j = 0; j < changeM.size(); j++) {

			cout << changeM[j] << " ";

		}
		cout <<"\n";
	}
}