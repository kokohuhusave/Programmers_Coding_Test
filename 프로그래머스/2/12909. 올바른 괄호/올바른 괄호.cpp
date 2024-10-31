#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int answer = 0;
    
    for(int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') answer += 1;
        else {
            if (answer > 0) answer -= 1;
            else return false;
        }
    }
    if (answer > 0) return false;
    return true;
}