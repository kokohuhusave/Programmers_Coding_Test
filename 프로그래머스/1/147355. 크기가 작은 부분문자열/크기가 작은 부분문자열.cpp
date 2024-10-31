#include <string>

using namespace std;

int solution(string t, string p) {
    int count = 0;
    int p_len = p.length();
    long long p_num = stoll(p); 

    for (int i = 0; i <= t.length() - p_len; i++) {
        long long num = stoll(t.substr(i, p_len)); 

        if (num <= p_num) { 
            count++;
        }
    }

    return count;
}