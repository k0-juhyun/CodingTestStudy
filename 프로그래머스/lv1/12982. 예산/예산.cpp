#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 부서별로 물품 구매하는데 필요한 금액을 조사
// 전체 예산이 정해져 있기 때문에 모든 부서의 물품을 구매할 수는 없다.
// 최대한 많은 부서의 물품을 구매하려고 한다.
// 각 부서가 신청한 금액만큼을 모두 지원해줘야한다.
// 부서별로 신청한 금액 d , 예산 budget
// 최대 몇 개의 부서에 물품을 지원할 수 있는가
int solution(vector<int> d, int budget)
{
    // 지원할 수 있는 부서의 수
    int answer = 0;

    // 오름차순으로 배치해서
    sort(d.begin(), d.end());

    // 부서별 신청 금액의 총합
    int total = 0;

    // 부서별 신청 금액의 총합을 구하고
    for (int i = 0; i < d.size(); i++)
    {
        total += d[i];
        // 예산을 초과하지 않았으면
        if(total <= budget)
            // 지원해주기 
            answer++;
        else
            break;
    }
    return answer;
}