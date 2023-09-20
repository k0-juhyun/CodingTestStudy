#include <string>
#include <vector>

using namespace std;

// 뒷자리 4자리를 제외한 나머지 숫자를 전부 *로 가린 문자열
string solution(string phone_number) {
    string answer = "";
    string front = phone_number.substr(0,phone_number.length()-4);
    string back = phone_number.substr(phone_number.length()-4,4);

    for (int i = 0; i < front.size(); i++)
    {
        answer.push_back('*');
    }
    
    answer += back;
    return answer;
}