#include <string>
#include <vector>

using namespace std;

// 두 정수 left와 right
// left 부터 right 까지의 모든 수
// 약수의 개수가 짝수인 수는 더하고 약수의 개수가 홀수인 수는 뺀수
int solution(int left, int right) {
    int answer = 0;

    // left 부터 right 까지의 모든수
    for (int i = left; i <= right; i++)
    {
        // 약수의 개수를 구하기
        // 자신보다 작은 수 중에서
        // 나눴을때 나머지가 0인 수는 약수
        // k는 약수의 갯수
        int k = 0;
        for (int j = 1; j <= i; j++)
        {
            // 나머지가 0이라면
            // 약수의 개수 증가
            if(i % j == 0)
                k++;
        }

        // 약수의 개수가 짝수면 더하고 홀수면 빼기
        answer = (k % 2 == 0 ? answer += i : answer -= i);
    }
    
    return answer;
}