#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
	int answer = 0;
	int multi = 1, sum = 0;
	for (int i = 0; i < num_list.size(); i++)
	{
		multi *= num_list[i];
		sum += num_list[i];
	}
	if (multi < sum * sum ? answer =1 : answer=0)
		answer = 1;
	else if (sum * sum > multi)
		answer = 0;
	return answer;
}