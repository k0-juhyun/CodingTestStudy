#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    for(t ;t > 0; t--)
    {
       n *= 2;
    }
    return n;
}