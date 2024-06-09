#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<int>> A(9, vector<int>(9));

	for (int i = 0; i < 9; i++) {
		for (int j = 0;j < 9;j++) {
			cin >> A[i][j];
		}
	}

	int max_index_x = 0;
	int max_index_y = 0;
	int max = A[0][0];
	for (int i = 0; i < 9; i++) {
		for (int j = 0;j < 9;j++) {
			if (max <= A[i][j]) {
				max = A[i][j];
				max_index_x = i;
				max_index_y = j;
			}
		}
	}

	cout << max << "\n";
	cout << max_index_x + 1 << " " << max_index_y + 1;
}