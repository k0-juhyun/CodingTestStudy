#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int size = num_list.size();
    vector<int> answer;
    for(int i = 0; i < num_list.size(); i++)
    {
        answer.push_back(num_list[size-i-1]);
    }
    return answer;
}