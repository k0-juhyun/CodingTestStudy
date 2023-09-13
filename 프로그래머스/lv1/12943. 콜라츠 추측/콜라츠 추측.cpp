#include <string>
#include <vector>

using namespace std;

// 주어진 수가 1이 될 때까지 반복 -> 모든 수 1
// 입력된 수가 짝수라면 2로 나눔
// 입력된 수가 홀수라면 3을 곱하고 1을 더함
// 1이 될때 까지 반복
// 500 번이 되도록 1이 안나오면 -1을 리턴
int solution(int num)
{
    long n = num;
    int answer = 0;
    int maxCount = 500;

    // 주어진 수가 1일때는 0을 리턴
    if (n == 1)
        return answer;

    // 주어진 수가 1이 아닐 때
    while (n != 1 && maxCount > 0)
    {
        n = (n % 2 == 0 ? n /= 2 : n = n * 3 + 1);
        answer ++;
        maxCount--;
    }

    answer = (maxCount > 0 ? answer : -1);
    return answer;
}