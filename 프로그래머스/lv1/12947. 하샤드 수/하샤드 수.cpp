#include <string>
#include <vector>

using namespace std;

// 양의 정수 x가 하샤드 수이면 x의 자릿수 합으로 x가 나누어져야한다.
// 18의 자릿수합 9 , 18은 9로 나누어 떨어짐 => 하샤드 수
bool solution(int x)
{
    int originX = x;
    bool answer = true;
    int sum = 0;

    // 자릿수 합을 구해서
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }

    // 양의 정수 x가 sum으로 나누어 떨어지면 
    return (originX % sum == 0);
}