#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    // 전체 격자 수
    int total = brown + yellow;

    // 카펫의 가로 길이는 세로 길이보다 크거나 같아야 함
    // 카펫의 최소 넓이는 9이므로 최소 가로길이는 3부터
    // 가로 최소 길이가 3이기때문에 total/3 까지만 탐색
    for (int width = total; width <= total; width--) {
        // 전체 격자 수에서 가로 길이로 나눠봤을 때 나머지가 0이면 유효한 가로 길이
        if (total % width == 0) {
            int height = total / width;

            // 갈색 격자의 수가 맞는지 확인
            if ((width - 2) * (height - 2) == yellow) {
                answer.push_back(width);
                answer.push_back(height);
                break;
            }
        }
    }

    return answer;
}
