#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string s = "";


    for (int i = 1; i < food.size(); i++)
    {
        while (food[i] > 1)
        {
            answer += to_string(i);
            food[i] -= 2;
        }
    }
    s = answer;
    reverse(s.begin(), s.end());
    answer += "0" + s;

    return answer;
}