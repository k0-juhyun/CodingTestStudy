using namespace std;

// 이용료 price원
// n 번 사용하면 price * n => 이용료
// 놀이기구 count번 타면
// 가지고 있는 금액에서 얼마가 부족한지
long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long totalPrice = 0;

    // n 번사용해서 총 이용료
    for (int i = 1; i < count + 1; i++)
    {
        totalPrice += price * i;
    }

    // 총 이용료가 가지고 있는 돈 보다 크다면
    if(totalPrice > money ? answer = totalPrice - money : answer = 0); 

    return answer;
}