#include<iostream>
#include<cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 꿀벌방 생성 한칸 씩 -> n * 6

	int N; 
	cin >> N;

	int sum = 1;
	int count = 0;
	while (sum < N)
	{
		sum += count * 6;

		count++;
	}

	if (N == 1)
		cout << "1";
	else
		cout << count;
}