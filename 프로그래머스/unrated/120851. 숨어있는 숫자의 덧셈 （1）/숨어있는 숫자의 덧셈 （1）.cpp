#include <string>
#include <vector>
#include <iostream>
#include <cctype>

using namespace std;

int solution(string my_string) {
  int answer = 0;
    
    for(char c : my_string)
    {
        if(isdigit(c))
        {
            // 문자를 문자열로 변환 후 정수로 변환
            int digitValue = c - '0';
            answer += digitValue;
        }
    }
    return answer;
}