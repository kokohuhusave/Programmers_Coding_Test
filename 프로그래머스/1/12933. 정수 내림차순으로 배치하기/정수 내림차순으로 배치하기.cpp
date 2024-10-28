#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    string str = to_string(n);

    sort(str.rbegin(), str.rend());

    return stoll(str);
}
