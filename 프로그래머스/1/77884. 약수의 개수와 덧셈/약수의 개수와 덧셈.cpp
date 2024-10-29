#include <iostream>
#include <cmath>

int solution(int left, int right) {
    int answer = 0;
    for (int num = left; num <= right; ++num) {
        if (static_cast<int>(sqrt(num)) * static_cast<int>(sqrt(num)) == num) {
            answer -= num;
        } else {
            answer += num; 
        }
    }
    return answer;
}