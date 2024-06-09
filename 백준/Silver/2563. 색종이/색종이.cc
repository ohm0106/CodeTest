#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int V[100][100];

int main() {
	int N = 0;
	cin >> N;

	fill(&V[0][0], &V[99][99], 1); // 한꺼번에 채우기. 

	for (int i = 0; i < N; i++) {
		int x ;
		int y ;
		cin >> x>> y;

		for(int j = x-1; j < x+9 ; j ++ )
			fill(&V[j][y - 1], &V[j][y + 9], 0); // 한꺼번에 채우기. 
	}

	int sum = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			sum += V[i][j];
		}
	}
	cout << 10000 - sum -1;
}