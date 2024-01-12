#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string vowelLetters = "aeiou"; // 수정: 모음 문자열 수정
    string answer = "";

    for (int i = 0; i < my_string.size(); i++) {
        bool isVowel = false;

        for (int j = 0; j < vowelLetters.size(); j++) {
            if (my_string[i] == vowelLetters[j]) {
                isVowel = true;
                break;
            }
        }

        if (!isVowel) {
            answer += my_string[i];
        }
    }

    return answer;
}
