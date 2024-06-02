#include<iostream>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int H = 0, M = 0;
	int A, B, C;

	cin >> A >> B;
	cin >> C;

	int Sum = (A * 60) + B + C;


	if (Sum / 60 >= 24) {
		H -= 24;
	}

	H += Sum / 60;
	M += Sum % 60;

	cout << H << " " << M << endl;
}