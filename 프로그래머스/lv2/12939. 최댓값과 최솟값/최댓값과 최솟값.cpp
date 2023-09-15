#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

// 문자열 s에 공백으로 구분된 숫자들
// 이중 최소값과 최대값을 찾아 리턴
string solution(string s) {
    string answer = "";

    // 문자열을 스트림화
    stringstream sStream(s);

    // 스트림화한 문자열을 저장할 배열
    vector<string> streamIndex;

    // 스트림 배열을 숫자 배열로
    vector<int> intIndex;

    // 한줄씩 읽어서 넣을 변수
    string word;

    while ((getline(sStream,word,' ')))
    {
        // 하나씩해서 배열에 넣어서
        streamIndex.push_back(word);
    }
    
    for (int i = 0; i < streamIndex.size(); i++)
    {
        // 문자열을 int형으로 변환해서 숫자 배열에 넣기
        intIndex.push_back(stoi(streamIndex[i]));
    }

    int minVal = *min_element(intIndex.begin(),intIndex.end());
    int maxVal = *max_element(intIndex.begin(),intIndex.end());

    return answer = to_string(minVal) + " " + to_string(maxVal);
}