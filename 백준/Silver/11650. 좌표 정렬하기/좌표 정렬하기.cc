#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);

    for (int i = 0; i < N; ++i) {
        cin >> points[i].first >> points[i].second;
    }

    // 정렬: x좌표 기준 오름차순, x좌표가 같으면 y좌표 기준 오름차순
    sort(points.begin(), points.end());

    for (const auto& p : points) {
        cout << p.first << ' ' << p.second << '\n';
    }

    return 0;
}
