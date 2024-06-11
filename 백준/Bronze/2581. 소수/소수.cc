#include<iostream>
#include<cmath>

using namespace std;


void checkPrime(int num1 , int num2);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N;

	cin >> M >> N;

	checkPrime(M, N);
}


void checkPrime(int num1, int num2) {

	bool* PrimeArray = new bool[num2 + 1];
	int sum = 0;
	int minNum = num2;

	for (int i = 2; i <= num2; i++) {
		PrimeArray[i] = true;
	}

	for(int i = 2 ; i <= num2; i ++){
		if (PrimeArray[i]) {
			for (int j = i * i; j <= num2; j += i) {
				PrimeArray[j] = false;
			}
		}

	}

	for (int i = num1; i <= num2; i++) {
		if (PrimeArray[i]) {
			sum += i;
			minNum = min(minNum, i);
		}
			
	}


	if (sum == 0)
		cout << -1 <<"\n";
	else {
		cout << sum << "\n";
		cout << minNum << "\n";
	}
		
}