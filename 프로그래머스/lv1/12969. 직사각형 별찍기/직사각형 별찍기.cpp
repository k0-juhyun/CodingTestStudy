#include <iostream>

using namespace std;

int main(void) {
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << '*';
        }
        cout << endl; // 한 줄을 출력한 후 개행 문자를 추가하여 다음 줄로 넘어감
    }

    return 0;
}
