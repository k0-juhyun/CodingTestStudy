#include <string>
#include <iostream>

using namespace std;

// ( 문자로 열렸으면 ) 로 닫혀야 한다.
bool solution(string s)
{
     int balance = 0; // 괄호의 균형을 체크하기 위한 변수

    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }

        // 중간에 balance가 음수가 되면 올바르지 않은 괄호 문자열
        if (balance < 0) {
            return false;
        }
    }

    // 문자열을 모두 순회한 후에도 balance가 0이면 올바른 괄호 문자열
    return balance == 0;
}