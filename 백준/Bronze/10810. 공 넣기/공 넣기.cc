#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;
    std::vector<int> baskets(N, 0);

    for (int m = 0; m < M; ++m) {
        int i, j, k;
        std::cin >> i >> j >> k;
        for (int idx = i - 1; idx < j; ++idx) {
            baskets[idx] = k;
        }
    }

    for (int n = 0; n < N; ++n) {
        std::cout << baskets[n] << (n < N - 1 ? " " : "");
    }
    std::cout << std::endl;

    return 0;
}
