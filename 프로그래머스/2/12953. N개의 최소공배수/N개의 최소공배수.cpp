#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int answer = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        int a = answer;
        int b = arr[i];
        
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        
        answer = (answer * arr[i]) / a;
    }

    return answer;
}
