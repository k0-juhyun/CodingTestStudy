#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 체스판 상태 입력받기
    vector<string> board(8);
    for (int i = 0; i < 8; ++i) {
        cin >> board[i];
    }

    // 하얀 칸 위의 말('F') 개수 세기
    int count = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            // (i + j) % 2 == 0이면 하얀 칸
            if ((i + j) % 2 == 0 && board[i][j] == 'F') {
                count++;
            }
        }
    }

    // 결과 출력
    cout << count << endl;

    return 0;
}
