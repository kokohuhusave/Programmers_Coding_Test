#include <vector>
using namespace std;
vector<int> solution(long long n)
{
    long long int x=1;
    vector<int> answer;
    while(n)
    {
        answer.push_back(n%10);
        n/=10;
    }
    return answer;
}
