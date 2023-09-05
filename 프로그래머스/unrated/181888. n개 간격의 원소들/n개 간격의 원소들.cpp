#include <string>
#include <vector>
#include <cstdio>

std::vector<int> solution(std::vector<int> num_list, int n) {
    std::vector<int> answer;
    for (int i = 0; i < num_list.size(); i += n)
    {
        answer.push_back(num_list[i]);
    }
    return answer;
}
