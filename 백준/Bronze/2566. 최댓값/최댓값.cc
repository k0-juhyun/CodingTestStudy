#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix(9, vector<int>(9));
    int max_value = -1;
    int max_row = -1;
    int max_col = -1;

    // 입력받기
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
                max_row = i + 1; // 행 번호 (1부터 시작)
                max_col = j + 1; // 열 번호 (1부터 시작)
            }
        }
    }

    // 결과 출력
    cout << max_value << endl;
    cout << max_row << " " << max_col << endl;

    return 0;
}
