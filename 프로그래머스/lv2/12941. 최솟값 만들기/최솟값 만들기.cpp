#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 길이가 같은 배열 A,B
// 각 배열은 자연수로 이루어져 있다.
// A,B 에서 각각 한 개의 숫자를 뽑아 두 수를 곱함.
// 이러한 과정을 배열의 길이 만큼 반복
// 두 수를 곱한 값을 누적하여 더함
// 누적된 값이 최소가 되도록함.
// k번째를 뽑았다면 k번째는 뽑을 수 없음
int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    // 내림차순으로 정렬해서 큰수와 작은수끼리 곱해서 더함
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    for (int i = 0; i < A.size(); i++)
    {
        answer += A[i]*B[A.size()-1-i];
    }
    
    return answer;
}