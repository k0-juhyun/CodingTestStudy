#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            // 소문자인 경우
            char encrypted = 'a' + (c - 'a' + n) % 26;
            answer += encrypted;
        } else if (c >= 'A' && c <= 'Z') {
            // 대문자인 경우
            char encrypted = 'A' + (c - 'A' + n) % 26;
            answer += encrypted;
        } else {
            // 공백인 경우
            answer += c;
        }
    }

    return answer;
}
