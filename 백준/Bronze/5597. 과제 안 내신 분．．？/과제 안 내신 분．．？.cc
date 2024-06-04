#include<iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> A(30, 1);  // 크기 30인 벡터를 1로 초기화

    int num;
    for (int i = 0; i < 28; i++) {
        cin >> num;
        A[num - 1] = 0;  // 입력된 숫자를 인덱스로 사용하여 0으로 설정
    }

    for (int i = 0; i < A.size(); i++) {
        if (A[i] == 1) {
            cout << i + 1 << "\n";  // 1부터 30까지 숫자 출력
        }
    }
}