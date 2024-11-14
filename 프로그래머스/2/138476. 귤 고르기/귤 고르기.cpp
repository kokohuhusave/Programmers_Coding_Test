#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {

    int result = 0;
    vector<int> count;
    vector<int> unique_tangerine;

   
    for (int i = 0; i < tangerine.size(); i++) {
        if (find(unique_tangerine.begin(), unique_tangerine.end(), tangerine[i]) == unique_tangerine.end()) {
            unique_tangerine.push_back(tangerine[i]);
        }
    }

    for (int i = 0; i < unique_tangerine.size(); i++) {
        int temp = std::count(tangerine.begin(), tangerine.end(), unique_tangerine[i]);
        count.push_back(temp);
    }

    sort(count.begin(), count.end(), greater<>());

    for (int i = 0; i < count.size(); i++) {
        k -= count[i];
        result++;
        if (k <= 0) {
            return result;
        }
    }

    return result;
}