#include<iostream>
#include<algorithm>
#include<sstream>

using namespace std;

int main() {
	string N1, N2;
	cin >> N1 >> N2;

	reverse(N1.begin(), N1.end());
	reverse(N2.begin(), N2.end());

	cout << max(N1, N2);

}