#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int MAX_N = 50;

char board[MAX_N][MAX_N];

// 계산 함수: 시작 색깔이 'W'인 경우와 'B'인 경우에 대해 변경 필요한 정사각형 개수를 계산
int calculateChanges(int x, int y) {
    int count1 = 0, count2 = 0;
    char expected_color1 = 'W', expected_color2 = 'B';
    
    for (int i = x; i < x + 8; ++i) {
        for (int j = y; j < y + 8; ++j) {

            if (board[i][j] != expected_color1)
                count1++;
            
            if (board[i][j] != expected_color2)
                count2++;
            
            expected_color1 = (expected_color1 == 'W') ? 'B' : 'W';
            expected_color2 = (expected_color2 == 'W') ? 'B' : 'W';
        }
        expected_color1 = (expected_color1 == 'W') ? 'B' : 'W';
        expected_color2 = (expected_color2 == 'W') ? 'B' : 'W';
    }
    
    return min(count1, count2);
}

int main() {
    int n, m;
    cin >> n >> m;

    // 입력
    for (int i = 0; i < n; ++i) {
        string line;
        cin >> line;
        for (int j = 0; j < m; ++j) {
            board[i][j] = line[j];
        }
    }

    int min_changes = MAX_N * MAX_N; // 충분히 큰 값으로 초기화
    
    // 모든 가능한 8x8 체스판에 대해 최소 변경 횟수 계산
    for (int i = 0; i <= n - 8; ++i) {
        for (int j = 0; j <= m - 8; ++j) {
            int changes = calculateChanges(i, j);
            min_changes = min(min_changes, changes);
        }
    }

    cout << min_changes << '\n';

}
