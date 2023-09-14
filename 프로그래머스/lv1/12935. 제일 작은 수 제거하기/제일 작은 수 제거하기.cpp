#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int minVal = arr[0];
    
    // 최소 값을 찾음
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    
    // 최소 값을 제외한 나머지 값들을 answer에 추가
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != minVal) {
            answer.push_back(arr[i]);
        }
    }
    
    // answer가 비어있는 경우 -1을 추가
    if (answer.empty()) {
        answer.push_back(-1);
    }
    
    return answer;
}
