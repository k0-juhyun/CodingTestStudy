#include <vector>

std::vector<int> solution(std::vector<int> num_list) {
    int last = num_list.back();        // 마지막 원소
    int prev = num_list[num_list.size() - 2]; // 그전 원소

    if (last > prev) {
        num_list.push_back(last - prev);
    } else {
        num_list.push_back(last * 2);
    }

    return num_list;
}
