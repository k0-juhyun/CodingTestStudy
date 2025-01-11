#include <iostream>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    // 45분 빼기
    M -= 45;

    // 분이 음수가 되면
    if (M < 0) {
        M += 60; // 분에 60을 더함
        H -= 1;  // 시간을 1 줄임
    }

    // 시간이 음수가 되면 23시로 설정
    if (H < 0) {
        H = 23;
    }

    // 결과 출력
    cout << H << " " << M << endl;

    return 0;
}
