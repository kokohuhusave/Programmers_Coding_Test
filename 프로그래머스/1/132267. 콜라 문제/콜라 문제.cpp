#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    while (n >= a)
    {
        int coke = n / a * b;
        n %= a;
        answer += coke;

        n += coke;
    }
    return answer;
}