#include<iostream>
#include<vector>

using namespace std;

int main() {
	string S;
	cin >> S;

	int time[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 }; // 시간 배열

	int sum = 0; 
	for (int i = 0; i < S.size(); i++) {
		sum += time[S[i] - 65];
	}
	cout << sum;
}