#include <iostream>

// 최대공약수를 구하는 함수 (유클리드 호제법 사용)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a1, b1, a2, b2;
    
    // 입력 받기
    std::cin >> a1 >> b1;
    std::cin >> a2 >> b2;
    
    // 분수의 합 계산
    int numerator = a1 * b2 + a2 * b1;
    int denominator = b1 * b2;
    
    // 기약분수로 만들기
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
    
    // 결과 출력
    std::cout << numerator << " " << denominator << std::endl;
    
    return 0;
}
