#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    // 양꼬치 갯수 / 10 => 서비스 음료의 갯수
    // 총가격
    int totalPrice = 0;
    
    // 양꼬치 가격
    int nPrice = n * 12000;
    
    // 서비스 음료수 갯수를 뺀 음료수 갯수
    int serviceK = (n >= 10) ? k - (n/10) : k;
    
    // 음료수 가격
    int kPrice = serviceK * 2000;
    
    totalPrice = nPrice + kPrice;
    
    return totalPrice;
}