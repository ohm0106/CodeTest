#include<iostream>
#include<cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int C,N; 

	cin >> C;

	N = 1 + pow(2, C);

	cout << (long long)pow(N, 2);
}
