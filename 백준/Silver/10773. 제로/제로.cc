#include <iostream>
#include <stack>

using namespace std;

int main() {
    int k, num;
    cin >> k;

    stack<int> s;

    for (int i = 0; i < k; i++) {
        cin >> num;

        if (num == 0 && !s.empty()) {
            // 0이 입력되면 가장 최근의 값을 제거
            s.pop();
        } else {
            // 0이 아닌 값은 스택에 추가
            s.push(num);
        }
    }

    int sum = 0;
    // 스택에 남아있는 모든 값을 합산
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum << endl;
    return 0;
}
