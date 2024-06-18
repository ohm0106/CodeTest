#include<iostream>
#include<cmath>

using namespace std;

int MAX = 10000;
int MIN = -10000;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N; 
	cin >> N;

	int minX = MAX, minY = MAX, maxX = MIN, maxY = MIN;

	for (int i = 0; i < N; i++) {
		int cinX, cinY;

		cin >> cinX >> cinY;

		if (min(minX, cinX) == cinX)
			minX = cinX;

		if (min(minY, cinY) == cinY)
			minY = cinY;

		if (max(maxX, cinX) == cinX)
			maxX = cinX;

		if (max(maxY, cinY) == cinY)
			maxY = cinY;

	}

	if (N <= 1)
		cout << 0;
	else {
		cout << (maxX - minX) * (maxY - minY);
	}
		
}
