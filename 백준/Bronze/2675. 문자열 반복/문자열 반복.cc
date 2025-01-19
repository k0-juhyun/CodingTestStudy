#include <iostream>
#include <string>

using namespace std;

int main() {
    int T; // 테스트 케이스 개수
    cin >> T;
    
    while (T--) {
        int R; // 반복 횟수
        string S, P = "";
        cin >> R >> S;
        
        for (char c : S) {
            P.append(R, c); // c 문자를 R번 반복하여 추가
        }
        
        cout << P << "\n";
    }
    
    return 0;
}
