#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num = 0;
	double sum = 0;
	for (int i = 0; i < 20; i++) {
		string subject, degree;
		double n, dn = 0.0;

		cin >> subject >> n >> degree;

		if (degree == "P") {
			continue;
		}
		else if (degree == "F") {
			sum += 0;
			num += n;
			continue;
		}
		else if (degree[1] == '+') {
			dn += 0.5;
		}

		dn += 4 - ((double)degree[0] - 65);
		sum += (dn * n);
		num += n;
	}

	if (num != 0)
		sum = sum / num;

	cout << fixed;
	cout.precision(7);
	cout << sum;

}