#include <string>
#include <vector>

using namespace std;

// 행렬의 덧셈
// 크기가 같은 두 행렬의 같은 행, 같은 열을 서로 더한 결과
// 2개의 행렬 arr1과 arr2를 받아
// 행렬 덧셈의 결과를 반환
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int rows = arr1.size();
    int cols = arr1[0].size();
    vector<vector<int>> answer(rows, vector<int>(cols, 0));

    // 행렬의 요소
    for (int i = 0; i < arr1.size(); i++)
    {
        // 순서가 같은거 끼리 더하기
        for (int j = 0; j < arr1[i].size(); j++)
        {
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    return answer;
}