
#include <iostream>

using namespace std;


int main() {
	
	int A, B , C;

	cin >> A >> B;

	if (A > 0) {
		if (B > 0) {
			C = 1;
		}
		else {
			C = 4;
		}

	}
	else if (A < 0) {
		if (B > 0) {
			C = 2;
		}
		else {
			C = 3;
		}
	}

	cout << C;

}