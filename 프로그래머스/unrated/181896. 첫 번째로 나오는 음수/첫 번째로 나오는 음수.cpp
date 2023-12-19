#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    while(num_list[answer] >= 0 && answer < num_list.size() - 1)
    {
        answer++;
    }
    if(answer == num_list.size() - 1 && num_list[answer] >= 0)
        answer = -1;
    return answer;
}