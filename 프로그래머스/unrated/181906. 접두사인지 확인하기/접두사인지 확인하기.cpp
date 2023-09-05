#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
	if (is_prefix.size() > my_string.size())
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < is_prefix.size(); i++)
		{
			if (my_string[i] != is_prefix[i])
			{
				return 0;
			}
		}
	}
	return 1;
}