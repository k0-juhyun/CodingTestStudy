#include <string>
#include <vector>

using namespace std;

// 나눠서 나머지가 0이면 약수
// 약수의 값을 모두 더하면 된다.
// 나눠서 나머지가 0인 수를 모두 더하면 된다.
int solution(int n) 
{
    int answer = 0;

    // 입력한 수까지 나눠서 나머지가 0이되는 수는 약수
    for (int i = 1; i <= n; i++)
    {
        // 나눠서 나머지가 0 이면
        if (n % i == 0)
        {
            // i는 n의 약수
            answer += i;
        }
    }
    
    return answer;
}