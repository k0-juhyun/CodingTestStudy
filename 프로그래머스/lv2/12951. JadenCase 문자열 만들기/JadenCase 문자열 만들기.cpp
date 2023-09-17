#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    // 첫 문자를 나타내는 플래그
    bool isFirstChar = true;

    for (int i = 0; i < s.size(); i++) {
        // 현재 문자가 알파벳인 경우
        if (isalpha(s[i])) {
            // 첫 문자이거나 이전 문자가 공백인 경우 대문자로 변환
            if (isFirstChar || (i > 0 && s[i - 1] == ' ')) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
            isFirstChar = false;
        } else if (isdigit(s[i])) {
            isFirstChar = false; // 숫자는 첫 문자로 인식하지 않도록 플래그 설정
        }
    }

    return s;
}
