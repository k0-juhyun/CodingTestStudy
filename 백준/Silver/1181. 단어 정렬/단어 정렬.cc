#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> words(N);

    // 단어 입력 받기
    for (int i = 0; i < N; i++) {
        cin >> words[i];
    }

    // 정렬 기준: (1) 길이가 짧은 순 (2) 길이가 같으면 사전순
    sort(words.begin(), words.end(), [](const string &a, const string &b) {
        if (a.size() != b.size()) return a.size() < b.size();
        return a < b;
    });

    // 중복 제거: 앞뒤 단어가 같으면 건너뛰고 출력
    cout << words[0] << '\n'; // 첫 번째 단어는 무조건 출력
    for (int i = 1; i < N; i++) {
        if (words[i] != words[i - 1]) {
            cout << words[i] << '\n';
        }
    }

    return 0;
}
