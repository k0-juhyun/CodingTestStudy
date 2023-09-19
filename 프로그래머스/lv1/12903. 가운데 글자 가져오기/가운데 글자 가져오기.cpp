#include <string>
#include <vector>

using namespace std;

// 단어 s의 가운데 글자를 반환하는 함수
// 단어의 길이가 짝수라면 가운데 두 글자 반환
string solution(string s)
{
    string answer = "";
    // 단어의 길이를 재서
    if(s.size() % 2 == 0)
        answer += s[s.size() / 2 - 1];
    answer += s[s.size() / 2];
    return answer;
}