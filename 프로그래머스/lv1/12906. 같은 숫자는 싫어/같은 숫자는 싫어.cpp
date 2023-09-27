#include <vector>
#include <iostream>

using namespace std;

// 배열 arr
// 0~9 까지의 숫자
// 연속적으로 나타나면 하나만남기고 전부제거
// 제거된 후 남은 수들을 반환할 때 arr 원소들의 순서를 유지
vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    // 첫번째거 넣고
    answer.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        int answerSize = answer.size();
        if(arr[i] != answer[answerSize-1])
        {
            answer.push_back(arr[i]);
        }
        
    }
    
    return answer;
}