#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> last_seen; // 문자의 마지막 등장 위치 저장

    for (int i = 0; i < s.length(); i++) {
        if (last_seen.find(s[i]) == last_seen.end()) {
            answer.push_back(-1); // 처음 나온 문자
        } else {
            answer.push_back(i - last_seen[s[i]]); // 이전 위치와의 거리
        }
        last_seen[s[i]] = i; // 현재 문자의 위치 갱신
    }

    return answer;
}
