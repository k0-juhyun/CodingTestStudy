#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int slice, int n) {
    double answer = ceil((double)n / slice);
    return static_cast<int>(answer);
}