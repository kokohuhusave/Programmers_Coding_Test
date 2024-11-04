#include <string>
#include <vector>

using namespace std;

int totwo(int n) {
    int cnt = 0;

    while (n != 0) {
        if (n % 2 == 1) cnt++;
        n /= 2;
    }

    return cnt;
}

int solution(int n) {
    int m = totwo(n);
    n++;

    while (totwo(n) != m) {
        n++;
    }

    return n;
}