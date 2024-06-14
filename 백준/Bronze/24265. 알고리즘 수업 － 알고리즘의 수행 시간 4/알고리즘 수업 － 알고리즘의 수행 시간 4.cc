#include<iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	long long num = 0;
	for (int i = 1; i < N; i++) {
		num += i;
	}

	cout << num << "\n";
	cout << 2;
}