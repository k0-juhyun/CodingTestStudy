#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 문자열 s의 길이가 4혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수
// s가 "a234" -> false , "1234" -> true
bool solution(const char* s) {
    bool answer = true;
    // 문자열 길이
    int length = strlen(s);
    if(length != 4 && length != 6)
        answer = false;
    
    for (int i = 0; i < length; i++)
    {
        if(!isdigit(s[i]))
            answer = false;
    }
    
    return answer;
}