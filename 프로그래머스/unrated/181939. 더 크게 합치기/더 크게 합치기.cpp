#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string a_str = to_string(a);
    string b_str = to_string(b);
    string ab = a_str + b_str;
    string ba = b_str + a_str;
    a = stoi(ab);
    b = stoi(ba);
    if(a>b ? answer = a: answer=b) 
    return answer;
}
