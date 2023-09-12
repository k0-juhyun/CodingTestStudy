#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// 임의의 양의 정수 n에 대하여
// n 이 양의 정수 x의 제곱이라면 x+1의 제곱을 리턴
// n이 양의 정수 x의 제곱이 아니라면 -1을 리턴하는 함수
long long solution(long long n)
{
    long long answer = 0;
    // 제곱근
    long long m = (long long)sqrt(n);

    answer = (m * m == n ? (m + 1) * (m + 1) : -1);

    return answer;
}