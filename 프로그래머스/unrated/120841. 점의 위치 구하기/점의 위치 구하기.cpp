#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    // 좌표 x, y의 값에 따라 사분면이 결정됨
    // 1사분면
    if(dot[0] > 0 && dot[1] > 0)
        answer = 1;
    else if (dot[0] < 0 && dot[1] > 0)
        answer = 2;
    else if (dot[0] < 0 && dot[1] < 0)
        answer = 3;
    else if (dot[0] > 0 && dot[1] < 0)
        answer = 4;
    return answer;
}