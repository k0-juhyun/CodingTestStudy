#include <string>
#include <vector>

// x 와 n 을 입력받아 x부터 시작해 x씩 증가
// n개 리스트
using namespace std;

vector<long long> solution(int x, int n) 
{
    vector<long long> answer(n);

    // n개 리스트
    // x 부터 시작
    for (int i = 0; i < n; i++)
    {
        answer[i] = x + x*i;
    }
    
    return answer;
}