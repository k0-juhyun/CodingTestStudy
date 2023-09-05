#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;
	if (n % 2 == 1)
	{
		for (int i = 1; i < n+1; i+=2)
		{	
			answer += i;
		}
		return answer;
	}
	else
	{
		for (int i = 2; i < n+1; i += 2)
		{
			answer += i * i;
		}
		return answer;
	}
	return answer;
}