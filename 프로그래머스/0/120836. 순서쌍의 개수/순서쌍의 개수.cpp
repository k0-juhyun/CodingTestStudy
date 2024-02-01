#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    // 제곱근까지만 반복하여 약수를 찾음
    int sqrt_n = sqrt(n);
    for (int i = 1; i <= sqrt_n; ++i) {
        // 약수인 경우
        if (n % i == 0) {
            // 제곱근까지만 반복이므로 i와 n/i가 서로 다른 경우
            if (i != n / i) {
                // 두 숫자의 곱이 n이 되므로 순서쌍 2개 추가
                answer += 2;
            } else {
                // 제곱수인 경우 두 숫자가 같으므로 순서쌍 1개 추가
                answer += 1;
            }
        }
    }
    return answer;
}
