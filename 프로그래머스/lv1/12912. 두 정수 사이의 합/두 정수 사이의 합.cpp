#include <string>
#include <vector>

using namespace std;

// 두 정수 a,b가 주어졌을 때 a와 b 사이에 속한
// 모든 정수들의 합을 리턴
// a와 b가 같은경우는 둘 중 아무수나 리턴
long long solution(int a, int b) {
    long long answer = 0;

    if(a==b) return a;
    // a가 b보다 큰경우
    if(a>b)
    {
        for (b; b < a+1; b++)
        {
            answer += b;
        }
        
    }
    else if (b>a)
    {
        for (a; a < b+1; a++)
        {
            answer += a;
        }
    }
    return answer;
}