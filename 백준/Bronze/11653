#include<iostream>
#include<vector>

using namespace std;

vector<int> PrimeVec;

void prime(int N);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N; // 1 <= N <= 10,000,000

	if (N > 1) {
		prime(N);

		for (int i = 0;i < PrimeVec.size(); i++) {
			while (N % PrimeVec[i] == 0)
			{
				N = N / PrimeVec[i];
				cout << PrimeVec[i] << "\n";
			}

		}
	}

}

void prime(int N) {
	bool* PrimeArray = new bool[N + 1];


	for (int i = 2; i <= N; i++)
		PrimeArray[i] = true;

	for (int i = 2;i * i <= N; i++) {
		if (PrimeArray[i]) {
			for (int j = i * i; j <= N; j += i) {
				PrimeArray[j] = false;
			}
		}
	}

	for (int i = 2; i <= N; i++)
	{
		if (PrimeArray[i])
			PrimeVec.push_back(i);
	}
}
