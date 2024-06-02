#include<iostream>
#include<vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;

	while (cin >> a >> b) {
		cout << a + b << "\n";
	}

}

/*
	중요 : EOF 개념
	? -> 주어진 입력 파일만 갖고 입력을 받을 때 더이상 읽을 수 있는 데이터가 없는 경우 파일의 끝. 

	방법 1
	while (scanf("%d %d", &a, &b) != -1)

	방법 2
	while(!(cin >> a >> b).eof())
	//cin >> a >> b로 읽기 시도를 한 후
	// .eof()로 eof검사

	방법 3
	while( cin >> a >> b)
*/