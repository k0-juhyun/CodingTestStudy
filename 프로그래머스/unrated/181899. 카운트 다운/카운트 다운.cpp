#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start, int end_num) {
    vector<int> answer;
    while(start >= end_num)
    {
        answer.push_back(start);
        --start;
    }
    return answer;
}