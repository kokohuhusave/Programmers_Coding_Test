#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> result;

    string temp = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            result.push_back(stoi(temp));
            temp = "";
        }
        else
        {
            temp += s[i];
        }

    }
    result.push_back(stoi(temp));

    sort(result.begin(), result.end());

    answer += to_string(result.front()) + " ";
    answer += to_string(result.back());

    return answer;
}
