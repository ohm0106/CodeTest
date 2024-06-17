#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	int N;
	int num = 666;
	int count = 1;
	cin >> N;
	if (N == 1) {
		cout << num;
		return 0;
	}

	while (true)
	{
		num++;
		int part = num;
		int seq_six = 0;
		while (part != 0)
		{
			if (part % 1000 == 666)seq_six = 1;
			part /= 10;
		}
		if (seq_six == 1)count++;
		if (N == count)break;
	}
	cout << num;


}