#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    vector<pair<int, int>> points(N);

    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &points[i].first, &points[i].second);
    }

    // 정렬 기준: y좌표 오름차순, y좌표가 같으면 x좌표 오름차순
    sort(points.begin(), points.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    });

    for (const auto &point : points) {
        printf("%d %d\n", point.first, point.second);
    }

    return 0;
}
