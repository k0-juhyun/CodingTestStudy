#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> divisors;
    
    // N의 약수를 찾기
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisors.push_back(i);
        }
    }
    
    // K번째 약수가 존재하면 출력, 아니면 0 출력
    if (K <= divisors.size()) {
        cout << divisors[K - 1] << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}