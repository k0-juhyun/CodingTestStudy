#include <string>
#include <vector>

using namespace std;

// 자연수 n을 연속한 자연수들로 표현하는 방법
// 1 + 2 + 3 + 4 + 5 = 15
// 4 + 5 + 6 = 15
// 7 + 8 = 15
// 15 = 15
// 총 4개
int solution(int n) {
    int answer = 0;
	int startNum = 1;
	// 1부터 연속적 증가하면서 뺏을때 결국 n이 0이 남아야함.
	// 1부터 시작하면 다음에는 2부터 시작해야함.
	// 초기 숫자 j
	// i부터 연속된 숫자가 아니면 안됨.
	while (startNum <= n)
	{
		// 연속된 숫자의 합
		int conNumSum = 0;
		// 연속된 숫자의 합이 n이 될때까지
		for (int i = startNum; conNumSum < n; i++)
		{
			conNumSum += i;
			if (conNumSum == n)
			{
				answer++;
				break;
			}
		}
		// 찾았으면 다음 연속 자연수로 넘어가기
		startNum++;
	}
    return answer;
}