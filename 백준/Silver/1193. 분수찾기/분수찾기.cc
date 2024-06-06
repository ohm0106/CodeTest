#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	cin >> N;

	int sum = 0 , count = 1;
	while (true)
	{
		if (sum + count >= N)
			break;

		sum += count;
		count++;

	}
	

	int n = count; // 분자 
	int d = 1; // 분모 

	for (int i = 1; i < N - sum; i++) {
		n--;
		d++;
	}

	if (count % 2 == 0)
		cout << d << "/" << n;
	else
		cout << n << "/" << d;
}