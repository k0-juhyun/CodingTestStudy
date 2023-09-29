#include <string>
#include <vector>

using namespace std;

// 자연수 n 매개변수
// 3진법으로 변환하고 앞뒤로뒤집고 다시 10진법
int solution(int n)
{
    int answer = 0;
    vector<int> three;

    while (n > 0)
    {
        three.push_back(n % 3);
        n /= 3;
    }

    int base = 1;
    for (int i = three.size() - 1; i >= 0; i--)
    {
        answer += three[i] * base;
        base *= 3;
    }

    return answer;
}