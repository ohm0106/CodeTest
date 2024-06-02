#include<iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int H, M;

	cin >> H >> M;

	int Sum = (H * 60) + M;

	Sum -= 45;

	if (Sum < 0) {
		Sum += 24 * 60;
	}

	H = Sum / 60;
	M = Sum % 60;

	cout << H << " " << M;

}