#include <string>
#include <vector>
using namespace std;

vector<int> factor(int number) {
    vector<int> arr;

    if (number <= 0) {
        return arr;
    }

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            arr.push_back(i);
        }
    }
    arr.push_back(number);
    return arr;
}

int solution(int number, int limit, int power) {
    int answer = 0;

    for (int i = 1; i <= number; i++) {
        vector<int> factors = factor(i);
        int numFactors = factors.size();

        if (numFactors > limit) {
            answer += power;
        }
        else {
            answer += numFactors;
        }
    }

    return answer;
}
