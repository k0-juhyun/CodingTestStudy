#include <string>
#include <vector>

using namespace std;

// 정수들의 절대값 배열 absolutes
// 정수들의 부호 배열 signs
// 정수들의 합을 리턴
int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    // signs true 이면 양수 false이면 음수
    for (int i = 0; i < absolutes.size(); i++)
    {
        // true 면 더하고 false 면빼기 
        answer = (signs[i] ? answer += absolutes[i] : answer -= absolutes[i]);
    }
    
    return answer;
}