#include <string>
#include <vector>

using namespace std;

// string형 배열seoul 에서
// "kim" 의 위치x 를 찾아
// "kim" 은 x에 있다 리턴
// "kim" 은 오직 한번
string solution(vector<string> seoul)
{
    string answer = "";
    int x = 0;
    for (int i = 0; i < seoul.size(); i++)
    {
        if (seoul[i] == "Kim")
        {
            x = i;
            break;
        }
    }

    return answer += "김서방은 " + to_string(x) + "에 있다";
}