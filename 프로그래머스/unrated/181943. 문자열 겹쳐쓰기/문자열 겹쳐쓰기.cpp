#include <string>
#include <iostream>
using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer;
    int length = overwrite_string.length();
    answer = my_string.substr(0,s) + overwrite_string + 
        my_string.substr(s + length,my_string.length());
    
    return answer;
}