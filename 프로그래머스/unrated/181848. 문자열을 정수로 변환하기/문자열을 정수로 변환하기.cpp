#include <string>
#include <vector>
#include <cmath> // pow 함수를 사용하기 위해 추가

using namespace std;

int solution(string n_str) {
    int answer = 0;
    int length = n_str.length();

    for(int i = 0; i < length; ++i) {
        answer += (n_str[i] - '0') * pow(10, length - i - 1);
    }

    return answer;
}
