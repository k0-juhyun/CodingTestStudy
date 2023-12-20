#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = price; 

    if (price >= 500000) {    
        answer -= answer * 0.20;
    } else if (price >= 300000) {
        answer -= answer * 0.10;
    } else if (price >= 100000) {
        answer -= answer * 0.05;
    }

    return answer;
}