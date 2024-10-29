#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int n, int m) {
    if (m == 0) return n;
    return gcd(m, n % m);
}

int lcm(int n, int m)
{
    return n * m / gcd(n, m);
}

vector<int> solution(int n, int m) {

    vector<int> answer;

    answer.push_back(gcd(n, m));
    answer.push_back(lcm(n, m));

    return answer;
}
