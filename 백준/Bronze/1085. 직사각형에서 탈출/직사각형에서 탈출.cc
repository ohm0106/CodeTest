#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y, w, h;

	cin >> x >> y >> w >> h;

	int minNum = min(abs(w - x), abs(x - 0));
	minNum = min(minNum, abs(y - 0));
	minNum = min(minNum, abs(h - y));
	cout << minNum;
}