#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//입력 
	int N, M;
	cin >> N >> M;

	vector<int> Arr;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		Arr.push_back(num);
	}

	//풀이 
	sort(Arr.begin(), Arr.end());

	int mx = 0; 

	for (int i = 0 ; i < N - 2;i++) {
		int n1 = 0, n2 = 0, n3 = 0;
		int sum = 0;
		for (int j = i+1; j < N - 1; j++) {
			for (int h = j+1; h < N; h++) {
				n1 = Arr[i];
				n2 = Arr[j];
				n3 = Arr[h];

				sum = (n1 + n2 + n3);
				if (sum <= M && (sum > mx)) {
					mx = n1 + n2 + n3;
				}
			}
		}
	}
	
	if (mx != 0)
		cout << mx;
}