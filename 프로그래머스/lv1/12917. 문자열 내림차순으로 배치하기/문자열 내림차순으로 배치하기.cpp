#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 문자열 s에 나타나는 문자를 큰 것부터 작은 순으로 정렬
// s는 대소문자로만 구성 대문자 < 소문자
string solution(string s)
{
    string answer = "";
    for (int i = 0; i < s.size(); i++)
    {
        // 문자를 아스키코드로 바꿔서
        s[i] = int(s[i]);
    }

    // 내림차순으로 바꿔서
    sort(s.begin(), s.end(), greater<int>());

    // answer에 넣으면서 다시 문자로변환
    for (int i = 0; i < s.size(); i++)
    {
        answer.push_back(static_cast<int>(s[i]));
    }

    return answer;
}