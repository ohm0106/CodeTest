#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N,B;

	cin >> N >> B;

	string num_s;


	while (true) {
		if (N <= 0)
			break;

		int tmp = N % B;

		if (tmp > 9)
		{
			tmp = tmp - 10 + 'A';
			num_s += tmp;
		}
		else
		{
			num_s += ('0' + tmp);
		}
		N /= B;
	}
	reverse(num_s.begin(), num_s.end());
	cout << num_s << '\n';
}