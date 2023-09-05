#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) 
{
    int answer = 0;
	int b;
	for (int i = 0; i < included.size(); i++)
	{
		if (included[i] ? b= a + i * d : b=0)
		answer += b;
	}

    return answer;
}