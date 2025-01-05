#include <iostream>
#include <vector>
#include <algorithm> // sort를 위해 필요
using namespace std;

int main() {
    int f; // 진짜 약수의 개수
    cin >> f;

    vector<int> factors(f); // 진짜 약수를 저장할 벡터
    for (int i = 0; i < f; ++i) {
        cin >> factors[i]; // 약수 입력
    }

    // 벡터 정렬
    sort(factors.begin(), factors.end());

    // N 계산 (최소 약수 * 최대 약수)
    int N = factors.front() * factors.back();

    // 결과 출력
    cout << N << endl;

    return 0;
}
