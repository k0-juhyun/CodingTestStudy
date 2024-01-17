#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 2;
    
    // str2의 길이
    size_t length = str2.size();
    
    // str1에서 str2의 길이만큼의 문자열 찾기
    for(size_t i = 0; i < str1.size() - length + 1; i++)
    {
        // str2 길이만큼의 문자열을 추출해서
        string subStr = str1.substr(i, length);
        
        // 추출한 문자열이 str2와 같다면
        if(subStr == str2)
            // 1을 반환
            return answer = 1;
    }
    
    return answer;
}
