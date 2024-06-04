#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	string s,t;
	cin >> s;
	t = s;
	reverse(s.begin(), s.end());

	if (s.compare(t) == 0) // 같은 문자열일 경우 
		cout << 1;
	else
		cout << 0;
}