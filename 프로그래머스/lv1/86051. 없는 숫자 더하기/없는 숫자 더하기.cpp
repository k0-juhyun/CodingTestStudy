#include <string>
#include <vector>

using namespace std;

// 0~9 사이의 숫자가 들어있는 numbers 배열
// numbers 에서 0~9사이의 숫자중 없는 숫자를 더한 answer 리턴
// numbers 의 원소는 서로 다르다 즉, 한 번씩만 나옴
int solution(vector<int> numbers) {
    int answer = 0;

    // 0~9 사이의 숫자가
    for (int j = 0; j <= 9; j++) {
        bool found = false;

        // numbers 안에 있다면
        for (int i = 0; i < numbers.size(); i++) {
            if (j == numbers[i]) {
                found = true;
                break;
            }
        }

        if (!found) {
            answer += j;
        }
    }

    return answer;
}