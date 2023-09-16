#include <string>
#include <vector>

using namespace std;

// n < 1,000,000 이하의 자연수
// 조건 1. n의 다음 큰 숫자는 n보다 큰 자연수
// 조건 2. n의 다음 큰 숫자와 n은 2진수로 변환했을 때 1의 갯수가 같다
// 조건 3. n의 다음 큰 숫자는 조건 1, 2를 만족하는 수 중 가장 작은 수 
int solution(int n) {
    if(n==1)
        return 2;
    // n보다는 커야함

    // n의 1의 갯수
    int oneCount = 0;
    int originalN = n;

    // n의 2진수 1의 숫자 세기
    while (n > 0)
    {
        if (n % 2 == 1)
            oneCount++;
        n /= 2;
    }

    // n보다 크고, 1의 갯수가 같은 수를 찾을 때까지 answer을 증가시킴
    int answer = originalN + 1;

    while(true)
    {
        // 현재 1의 갯수
        int currentCount = 0;
        int currentNum = answer;

        // 2진수로 바꿔서
        while (currentNum > 0)
        {
            if (currentNum % 2 == 1)
                currentCount++;
            currentNum /= 2;
        }

        // n의 1의 갯수와 같다면 탈출
        if (currentCount == oneCount)
            break;

        answer++;
    }
    
    return answer;
}