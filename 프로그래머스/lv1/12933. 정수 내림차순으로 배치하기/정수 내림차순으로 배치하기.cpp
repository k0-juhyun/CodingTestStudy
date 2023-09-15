#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

// n의 자릿수를 큰 것부터 작은 순으로 정렬한 새로운 정수를 리턴
using namespace std;

long long solution(long long n)
{
    long long answer = 0;
    vector<int> num;

    // 각 자릿수를 10으로 나눠서 나머지를 num 배열에 저장
    while(n>0)
    {
        num.push_back(n % 10);
        n /= 10;
    }

     // num 벡터를 큰 순서대로 정렬
    sort(num.begin(), num.end(), less<int>());

    for (int i = 0; i < num.size(); i++)
    {
        // 10의 거듭제곱을 계산하여 더함
        answer += num[i] * pow(10, i);
    }
    
    return answer;
}