#include <iostream>
#include <cmath>

int main() {
    int caseCount;
    std::cin >> caseCount;

    while (caseCount--) {
        int x1, y1, r1, x2, y2, r2;
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        // 두 원의 중심 간 거리 계산
        double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

        if (d == 0) { // 두 원의 중심이 같을 경우
            if (r1 == r2) { // 두 원의 크기가 같아 겹치는 경우
                std::cout << -1 << std::endl;
            } else { // 한 원이 다른 원 안에 들어가 있는 경우
                std::cout << 0 << std::endl;
            }
        } else { // 두 원의 중심이 다를 경우
            if (r1 + r2 == d || abs(r1 - r2) == d) { // 원이 한 점에서 외접하는 경우, 내접하는 경우
                std::cout << 1 << std::endl;
            } else if (abs(r1 - r2) < d && d < r1 + r2) { // 두 원이 서로 만나면서 점이 여러 개 존재하는 경우
                std::cout << 2 << std::endl;
            } else { // 두 원이 만나지 않을 경우
                std::cout << 0 << std::endl;
            }
        }
    }

    return 0;
}
