#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N,X;
	cin >> N >> X;

	vector<int> A;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		
		if (a < X) {
			A.push_back(a);
		}
	}


	for (const auto& p : A) {
		cout << p << " ";
	}

}