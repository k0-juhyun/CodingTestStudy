#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_width = 0;
    int max_height = 0;

    for (const auto& card : sizes) {
        max_width = max(max_width, min(card[0], card[1]));
        max_height = max(max_height, max(card[0], card[1]));
    }

    return max_width * max_height;
}
