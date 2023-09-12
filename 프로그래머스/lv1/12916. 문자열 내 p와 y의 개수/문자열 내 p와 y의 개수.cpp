#include <string>
#include <iostream>
using namespace std;

// 문자열 s에 'p' 의 개수와 'y'의 개스를 비교
// 같으면 true 다르면 false
// 둘다 없으면 true
// 대소문자 구별은 안함
bool solution(string s)
{
    int pCount = 0;
    int yCount = 0;

    for (char c : s)
    {
        // 문자열 s의 모든 문자를 소문자로 변환하여 비교
        char lowercase_c = tolower(c);
        if (lowercase_c == 'p')
            pCount++;
        else if (lowercase_c == 'y')
            yCount++;
    }

    // 'p'와 'y' 모두 하나도 없는 경우 True 리턴
    if (pCount == 0 && yCount == 0)
        return true;

    // 개수 비교
    return pCount == yCount;
}