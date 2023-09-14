#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 배열의 요소들중 divisor 로 나누었을때 나머지가 0인 수들을 
// 오름 차순으로 정렬
// 없다면 -1 리턴
vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    // 배열의 요소들 중 나눴을때 나머지가 0 인 요소들을 배열에 넣고
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] % divisor == 0)
            answer.push_back(arr[i]);
    }

    // 배열의 크기가 0보다 크면 오름차순
    if(answer.size() > 0)
    {
        sort(answer.begin(),answer.end());
    }

    // 배열의 크기가 0이면 -1 리턴
    else
    {
       answer.push_back(-1);
    }

    return answer;
}