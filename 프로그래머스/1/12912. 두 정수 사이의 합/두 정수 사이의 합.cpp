#include <algorithm>

using namespace std;

long solution(int a, int b) {
    long answer = 0;
    int min_val = min(a, b); // Use std::min for minimum value
    int max_val = max(a, b); // Use std::max for maximum value
    
    for (int i = min_val; i <= max_val; i++) {
        answer += i;
    }
    
    return answer;
}
