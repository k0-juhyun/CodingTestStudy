#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    vector<string> string_num = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    // 문자열 배열에서 찾기
    for(int i = 0; i< string_num.size(); i++)
    {
        // s에서 string_num 배열에 있는 단어가 있는 동안
        while(s.find(string_num[i]) != string::npos)
            // string_num 배열에 있는 단어를 단어의 배열 번호 즉, 숫자로 교체 , s가 문자열이니 i를 문자열로 교체해서 입력
            s.replace(s.find(string_num[i]),string_num[i].length(),to_string(i));
    }
    // 문자를 정수형으로 변환
    return stoi(s);
}