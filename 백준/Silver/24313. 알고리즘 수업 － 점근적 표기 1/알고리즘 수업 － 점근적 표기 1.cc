#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int X1, N;
	int Max, Num;
	
	cin >> X1 >> N;
	cin >> Max;
	cin >> Num;
	bool isCheck = true;

	for (int i = Num; i <= 100; i++)
	{
		if (((X1 * i) + N) > (Max * i)) {
			cout << 0;
			isCheck = false;
			break;
		}
	}

	if(isCheck)
		cout << 1;

}

