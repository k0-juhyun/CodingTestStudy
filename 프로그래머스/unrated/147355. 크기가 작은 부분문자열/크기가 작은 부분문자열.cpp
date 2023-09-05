#include <string>
#include <vector>

using namespace std;
int solution(string t, string p) {
	int t_len = t.length();
	int p_len = p.length();
	int count = 0;

	for (int i = 0; i <= t_len - p_len; ++i) {
		string sub = t.substr(i, p_len);
		if (sub <= p) {
			count++;
		}
	}

	return count;
}