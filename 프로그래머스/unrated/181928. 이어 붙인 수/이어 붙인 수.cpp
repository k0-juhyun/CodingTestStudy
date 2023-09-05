#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    vector<int> even_list;
    vector<int> odd_list;

    for (int i = 0; i < num_list.size(); i++) {
        if (num_list[i] % 2 == 0) {
            even_list.push_back(num_list[i]);
        } else {
            odd_list.push_back(num_list[i]);
        }
    }

    int even_sum = 0;
    int odd_sum = 0;

    for (int num : even_list) {
        even_sum = even_sum * 10 + num;
    }

    for (int num : odd_list) {
        odd_sum = odd_sum * 10 + num;
    }

    return even_sum + odd_sum;
}
