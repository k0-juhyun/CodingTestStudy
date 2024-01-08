#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string word = "";

    for (char &c : my_string) 
    {
        // 문자열이 공백이면
        if (c == ' ') 
        {
            // answer에 추가
            answer.push_back(word);
            // 단어 초기화
            word = "";
        } 
        else 
            // 공백이 아니면 단어에 추가
            word += c;
    }

    answer.push_back(word); 

    return answer;
}
