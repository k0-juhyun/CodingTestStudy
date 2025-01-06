#include <iostream>
#include <cmath>
using namespace std;

// 두 점 간의 거리 계산
double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    int t; // 테스트 케이스 개수
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2; // 출발점, 도착점
        cin >> x1 >> y1 >> x2 >> y2;

        int n; // 행성계의 개수
        cin >> n;

        int count = 0;

        for (int i = 0; i < n; ++i) {
            int cx, cy, r; // 행성계의 중심과 반지름
            cin >> cx >> cy >> r;

            double d1 = distance(x1, y1, cx, cy);
            double d2 = distance(x2, y2, cx, cy);

            // 출발점과 도착점 중 하나만 해당 행성계 내부에 있는 경우 카운트 증가
            if ((d1 < r) != (d2 < r)) {
                count++;
            }
        }

        // 결과 출력
        cout << count << endl;
    }

    return 0;
}
