#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    // 배열의 원소를 내림차순으로 정렬
    // 정렬한뒤 0,1번째 원소를 곱함.
    
    sort(numbers.begin(), numbers.end(), greater<>());
    
    return numbers[0] * numbers[1];
}