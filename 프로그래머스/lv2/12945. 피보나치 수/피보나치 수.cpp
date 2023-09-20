#include <vector>

using namespace std;

// 피보나치 수를 1234567로 나눈 나머지를 리턴
int solution(int n) {
    
    // 피보나치 수열 저장
    vector<int> fib(n+1);

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < fib.size(); i++)
    {
        fib[i] = (fib[i-1] + fib[i-2]) % 1234567;
    }
    
    return fib[n];
}