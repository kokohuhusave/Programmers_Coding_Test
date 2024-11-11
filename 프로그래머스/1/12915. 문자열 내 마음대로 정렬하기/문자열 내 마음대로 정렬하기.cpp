
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int num;
bool cmp(string a, string b) {
    if (a[num] == b[num]) {
        return a < b;
    }
    else {
        return a[num] < b[num];
    }
}

vector<string> solution(vector<string> strings, int n) {
    num = n;
    sort(strings.begin(), strings.end(), cmp);
    return strings;
}

