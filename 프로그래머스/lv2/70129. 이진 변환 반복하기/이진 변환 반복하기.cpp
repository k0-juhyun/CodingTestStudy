#include <string>
#include <vector>

using namespace std;

// s가 1이될때 까지 이진변환 가했을때
// 횟수, 제거된 0의 갯수
vector<int> solution(string s)
{
   vector<int> answer;
    int zeroCount = 0;
    int count = 0;

    // s가 1이 아니라면
    while (s != "1") 
    {
        string convertAnswer = "";
        for (int i = 0; i < s.size(); i++)
        {
            // 배열의 요소가 0이면 제거할 0 개수증가
            if(s[i] == '0')
                zeroCount++;
            // 아니라면 새로운 문자열에 추가
            else
                convertAnswer += s[i];
        }
        
        // 새로운 문자열의 사이즈 -> 숫자
        int length = convertAnswer.size();
        // 그 숫자를 2진수로 변환
        // 변환해서 s에 넣기
        s = "";
        while (length > 0)
        {
            // int를 string으로 변환
            s += to_string(length % 2);
            length /= 2;
        }
        
        // 횟수 증가
        count++;
    }

    answer.push_back(count);
    answer.push_back(zeroCount);
    return answer;
}