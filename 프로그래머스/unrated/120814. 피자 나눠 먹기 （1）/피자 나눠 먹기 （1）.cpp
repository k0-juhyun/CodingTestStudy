#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    return n % 7 == 0 ? n / 7 : ceil((double)n / 7);
}