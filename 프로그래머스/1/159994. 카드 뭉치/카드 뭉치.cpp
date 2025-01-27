#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

// goal 배열을 cards1, cards2의 단어로 만들 수 있는지 확인하는 함수
string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    queue<string> q1, q2;
    
    // cards1과 cards2를 큐로 변환
    for (const string& card : cards1) q1.push(card);
    for (const string& card : cards2) q2.push(card);
    
    // goal 단어 배열 확인
    for (const string& word : goal) {
        if (!q1.empty() && q1.front() == word) {
            q1.pop();
        } else if (!q2.empty() && q2.front() == word) {
            q2.pop();
        } else {
            return "No"; // 원하는 순서로 만들 수 없음
        }
    }
    return "Yes";
}

int main() {
    vector<string> cards1 = {"i", "drink", "water"};
    vector<string> cards2 = {"want", "to"};
    vector<string> goal = {"i", "want", "to", "drink", "water"};
    
    cout << solution(cards1, cards2, goal) << endl; // "Yes"
    
    cards1 = {"i", "water", "drink"};
    cards2 = {"want", "to"};
    goal = {"i", "want", "to", "drink", "water"};
    
    cout << solution(cards1, cards2, goal) << endl; // "No"
    
    return 0;
}
