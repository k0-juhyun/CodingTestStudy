#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int antCount = 0;
    while(hp >= 5)
    {
        hp -= 5;
        antCount++;
    }
    
    while(hp >= 3)
    {
        hp -= 3;
        antCount++;
    }
    
    antCount += hp;
    return antCount;
}