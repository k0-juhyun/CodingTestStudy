#include <string>

using namespace std;

string solution(string str1, string str2) {
    string result = "";

    for (int i = 0; i < str1.length(); i++) {
        result += str1[i];
        result += str2[i];
    }

    return result;
}