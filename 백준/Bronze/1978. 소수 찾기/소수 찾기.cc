#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int num) {
	if (num < 2) return false;
	for (int i = 2; i <= sqrt(num); ++i) {
		if (num % i == 0) return false;
	}
	return true;
}

int main() {
	// 소수 찾기 
	int N;
	cin >> N; // N <= 100 

	int count = 0;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		
		if (isPrime(tmp))
			count++;
	}
	
	cout << count;
}
