#include<iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, V;

	cin >> A >> B >> V;

	//int sum = 0;
	//int count = 0;
	//bool isNight = false;

	//while (true)
	//{
	//	if (sum >= V)
	//		break;

	//	if (!isNight) // 낮일 경우 
	//	{
	//		sum += A;
	//		count++;
	//	}
	//	else {
	//		sum -= B;
	//		
	//	}
	//	isNight = !isNight;
	//}

	//cout << count;

	cout << (V - B - 1) / (A - B) + 1;

}