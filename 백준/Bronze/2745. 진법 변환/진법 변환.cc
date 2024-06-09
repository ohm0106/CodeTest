#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string num_s;
	int n;

	cin >> num_s >> n;

	int sum = 0;

	for (int i = 0; i < num_s.length(); i++) {
		int temp = num_s[num_s.length() - (i + 1)]; // 내림차순 

		if ('0' <= temp && temp <= '9') {
			temp = temp - '0';
		}
		else {
			temp = temp + 10 - 'A';
		}

		sum += (temp * (int)pow(n, i));

	}

	cout << sum << "\n";
	
}