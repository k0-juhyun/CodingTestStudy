#include <iostream>

using namespace std;

// 대회 n명이 참가
// 1,2 3,4 ~ n,1 게임 진행
// 이긴 경우 다음 라운드로 진출
// 1,2 에서 이기면 1번 3,4 에서 이기면 2번 2/2 4/2 N/2
// 최종 한명이 남을 때까지 진행
// 처음 라운드에서 A번을 가진 참가자
// 경쟁자로 생각하는 B번 참가자와 몇번째 라운드에서 만나는지
int solution(int n, int a, int b)
{
    int answer = 1;

    // 짝수면 2로 나눈게 다음 번호
    // 홀수면 2로 나누어서 +1 하면 다음번호
    // a가 더 클때 b가 더 클때 나누어서
    if (n == 2)
        return answer;
    else
    {
        while ((a + 1) / 2 != (b + 1) / 2)
        {
            a = (a + 1) / 2;
            b = (b + 1) / 2;
            answer++;
        }
    }
    return answer;
}