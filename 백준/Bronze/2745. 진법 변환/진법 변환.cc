#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int convertToDecimal(const string& N, int B) {
    int result = 0;
    int power = 1; // B^0부터 시작

    for (int i = N.size() - 1; i >= 0; --i) {
        char digit = N[i];
        int value;

        if ('0' <= digit && digit <= '9') {
            value = digit - '0'; // 숫자일 경우 변환
        } else {
            value = digit - 'A' + 10; // 알파벳일 경우 변환 (A=10, B=11, ..., Z=35)
        }

        result += value * power;
        power *= B; // 다음 자리의 가중치를 증가
    }

    return result;
}

int main() {
    string N;
    int B;

    cin >> N >> B;

    cout << convertToDecimal(N, B) << endl;

    return 0;
}
