#include <string>
#include <vector>

using namespace std;

// 두 수를 입력받아 최대공약수와 최소공배수 반환하는 함수
// 배열의 맨 앞에 최대공약수, 그다음 최소공배수
vector<int> solution(int n, int m)
{
    // 최대공약수 둘다 나누어떨어지는 수중 가장 큰수
    vector<int> answer(2);
    // 더 작은수
    int min = (n > m ? m : n);
    // 더 큰수
    int max = (n > m ? n : m);
    // 최대 공약수를 찾고
    for (int i = min; i > 0; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            answer[0] = i;
            break;
        }
    }
    // 최소 공배수 찾기
    answer[1] = (n * m) / answer[0];

    return answer;
}