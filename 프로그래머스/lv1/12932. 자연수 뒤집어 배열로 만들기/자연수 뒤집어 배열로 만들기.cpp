#include <string>
#include <vector>

using namespace std;

// 10으로 나눠서 나머지 배열에 넣기
vector<int> solution(long long n) {
    vector<int> answer;

    while (n>0)
    {
        answer.push_back(n%10);
        n /=10;
    }
    
    
    return answer;
}