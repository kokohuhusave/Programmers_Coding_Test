#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> temp;

    for (int i = 0; i < score.size(); i++) {
        int current = score[i];

        temp.push_back(current);
        sort(temp.rbegin(), temp.rend());

        if (i < k)
            answer.push_back(temp[temp.size() - 1]);
        else
            answer.push_back(temp[k - 1]);
    }

    return answer;
}