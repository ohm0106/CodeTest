#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	string S;
	cin >> S;
	vector<int> A(27,0);
	int M = 65,m = 97 ;

	for (int i = 0;i < S.size();i++) {

		if (S[i] < m) {
			//대문자일 경우 
			A[S[i] - M] += 1;
		}
		else {
			//소문자일 경우
			A[S[i] - m] += 1;
		}
	}

	int max = *max_element(A.begin(), A.end());
	int maxIndex = 0;
	int maxCount = 0;
	for (int i = 0; i < A.size(); i++) {
		if (A[i] == max) {
			maxCount++;
			maxIndex = i;
		}
	}

	if (maxCount > 1)
		cout << "?";
	else
		cout << (char)(maxIndex + 65);
	
}