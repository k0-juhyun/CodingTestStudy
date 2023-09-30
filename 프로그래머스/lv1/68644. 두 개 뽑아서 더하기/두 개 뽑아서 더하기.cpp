#include <string>
#include <vector>
#include <algorithm> // 정렬을 위한 헤더

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;

    // 모든 배열 요소의 합을 구해서 answer에 추가
    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            answer.push_back(numbers[i] + numbers[j]);
        }
    }

    // 중복값 제거
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());

    return answer;
}
