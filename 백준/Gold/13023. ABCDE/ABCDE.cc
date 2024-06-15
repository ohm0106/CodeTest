#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> A; 

bool CheckFriend(int friendNumber, int count, vector<bool> &visited);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    A.resize(N);

    for (int i = 0; i < M; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        A[n1].push_back(n2);
        A[n2].push_back(n1); // 양방향 친구 관계 저장
    }

    bool isCheck = false;

    for (int i = 0; i < N; i++) {
        vector<bool> visited(N, false);
        visited[i] = true; // 시작 노드 방문 표시
        if (CheckFriend(i, 4, visited)) { // 5번째까지 친구인지 확인
            isCheck = true;
            break;
        }
    }

    cout << isCheck << endl;

    return 0;
}

bool CheckFriend(int friendNumber, int count, vector<bool> &visited) {
    if (count == 0)
        return true;

    if (A[friendNumber].size() != 0) {
        for (int i = 0; i < A[friendNumber].size(); i++) {
            int nextFriend = A[friendNumber][i];
            if (!visited[nextFriend]) {
                visited[nextFriend] = true; // 다음 친구 방문 표시
                if (CheckFriend(nextFriend, count - 1, visited)) {
                    return true;
                }
                visited[nextFriend] = false; // 다른 경로를 탐색하기 위해 방문 해제
            }
        }
    }

    return false;
}
