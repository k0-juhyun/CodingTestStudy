#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer(photo.size(), 0);
	int point= 0;
	for (int a = 0; a < photo.size(); a++)
	{
		for (int i = 0; i < photo[a].size(); i++)
		{
			for (int j = 0; j < name.size(); j++)
			{
				if (photo[a][i] == name[j])
				{
					answer[a] += yearning[j];
				}
			}
		}
	}
    return answer;
}