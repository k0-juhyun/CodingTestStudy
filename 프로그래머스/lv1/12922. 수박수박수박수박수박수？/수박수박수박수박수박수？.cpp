#include <string>
#include <vector>

// 수박수박?
using namespace std;

string solution(int n) {
    string answer = "";
    
    // n 의 크기까지 반복
    for (int i = 0; i < n; i++)
    {
       answer = (i % 2==0) ? answer.append("수") : answer.append("박"); 
    }
    
    return answer;
}