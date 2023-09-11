#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int x = 1; // x를 1부터 시작
    while (true) {
        if (n % x == 1) { // 나머지가 1인 경우
            return x; // 해당 x를 반환
        }
        x++; // x를 증가시킴
    }
}