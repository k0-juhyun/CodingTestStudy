#include <iostream>
using namespace std;

int main() {
    // 영수증에 적힌 총 금액
    long long X;
    cin >> X;

    // 구매한 물건의 종류의 수
    int N;
    cin >> N;

    long long calculated_total = 0; // 계산된 총 금액

    // 물건의 가격과 개수를 입력받아 총 금액 계산
    for (int i = 0; i < N; ++i) {
        long long a, b;
        cin >> a >> b;
        calculated_total += a * b;
    }

    // 영수증 총 금액과 계산된 총 금액 비교
    if (calculated_total == X) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}