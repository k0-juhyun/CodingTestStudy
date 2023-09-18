#include <string>
#include <vector>

using namespace std;

// 문자열 s는 한 개 이상의 단어로 구성
// 각 단어는 하나 이상의 공백문자로 구분
// 각단어의 짝수번째 알파벳은 대문자
// 홀수번째 알파벳은 소문자
string solution(string s)
{
    // 시작은 무조건 대문자
    s[0] = toupper(s[0]);

    for (int i = 1; i < s.size(); i++)
    {
        // 앞문자가 공백이라면 새로운 단어 시작
        if (s[i - 1] == ' ')
        {
            // 새로운 단어는 대문자
            s[i] = toupper(s[i]);
        }
        // 앞문자가 공백이 아닐때
        else if(s[i-1] != ' ')
        {
            // 앞문자에 따라 대문자인지 소문자인지 구별
            if(isupper(s[i-1]))
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);
        }
    }

    return s;
}