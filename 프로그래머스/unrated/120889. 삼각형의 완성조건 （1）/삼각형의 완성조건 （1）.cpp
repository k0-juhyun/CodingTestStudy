#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int longSide = 0;
    int shortSum = 0;
    int answer = 0;
    
    for(int i = 0; i < sides.size(); i++)
    {
        shortSum += sides[i];
        if(sides[i] > longSide)
        {
            longSide = sides[i];
        }
    }
    
    shortSum -= longSide;
    return answer = (shortSum > longSide ? 1 : 2);
}