#include<iostream>
#include<vector>

using namespace std;

vector<int> posX;
vector<int> posY;

int main() {

	int x, y;

	for (int i = 0; i < 3; i++) {
		int a, b;
		cin >> a >> b;

		posX.push_back(a);
		posY.push_back(b);
	}

	if (posX[0] == posX[1])
		x = posX[2];
	else if (posX[1] == posX[2])
		x = posX[0];
	else
		x = posX[1];

	if (posY[0] == posY[1])
		y = posY[2];
	else if (posY[1] == posY[2])
		y = posY[0];
	else
		y = posY[1];

	cout << x << " " << y;

}

