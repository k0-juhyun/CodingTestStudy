#include <string>
#include <vector>

using namespace std;

string ToBinary(int num, int n) {
    string binary;
    for (int i = 0; i < n; i++) {
        binary = (num % 2 == 1 ? "#" : " ") + binary;
        num /= 2;
    }
    return binary;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for (int i = 0; i < n; i++) {
        string binary1 = ToBinary(arr1[i], n);
        string binary2 = ToBinary(arr2[i], n);
        
        string result;
        for (int j = 0; j < n; j++) {
            if (binary1[j] == '#' || binary2[j] == '#') {
                result += "#";
            } else {
                result += " ";
            }
        }
        
        answer.push_back(result);
    }
    
    return answer;
}
