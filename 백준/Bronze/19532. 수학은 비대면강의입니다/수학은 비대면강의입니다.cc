#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//입력 
	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	//풀이 
	
	int y = (c * d - a * f) / (b * d - a * e);
	int x = (c * e - b * f) / (a * e - b * d);


	cout << x << " " << y;
}

