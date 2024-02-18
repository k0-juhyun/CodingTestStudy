#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";
    
    while(n > 0)
    {
        int i = n % 10;
        char c = i + '0';
        answer = c + answer;
        n /= 10;
    }
    
    return answer;
}