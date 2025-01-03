#include <iostream>
using namespace std;

int main() {
    int N, F;
    cin >> N >> F;

    // N의 마지막 두 자리를 00으로 변경
    N = (N / 100) * 100;

    // F로 나누어 떨어지는 최소 값을 찾기
    int result = 0;
    for (int i = 0; i < 100; i++) {
        if ((N + i) % F == 0) {
            result = i;
            break;
        }
    }

    // 결과 출력 (항상 두 자리 형식으로 출력)
    if (result < 10) {
        cout << "0";
    }
    cout << result << endl;

    return 0;
}
