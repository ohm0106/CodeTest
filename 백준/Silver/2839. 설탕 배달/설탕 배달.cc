#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N; 
	cin >> N;

	int f = 0, t = 0;

	while (true) {
		if (N == 0)
		{
			cout << f + t;
			break;
		}
		else if (N < 0) {
			cout << -1;
			break;
		}

	
		if (N >= 5 && N % 3 != 0 || N %5 ==0 )
		{
			N -= 5;
			f+=1;
		}
		else {
			N -=3;
			t+=1;
		}


	}


}
