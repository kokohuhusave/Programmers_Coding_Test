#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {

    vector<int> result;
    map<string, int> m1;

    for (int i = 0;i < name.size();i++) {
        m1[name[i]] = yearning[i];
    }

    for (int i = 0;i < photo.size();i++) {
        int count = 0;
        for (int j = 0;j < photo[i].size();j++) {
            count += m1[photo[i][j]];
        }
        result.push_back(count);
    }

    return result;
}