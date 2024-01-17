#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    size_t length = str1.size();
    
    for(size_t i = 0; i < str2.size() - length + 1 ; i++)
    {
        string subStr1 = str2.substr(i,length);
        
        if(subStr1 == str1)
            answer = 1;
    }
    return answer;
}