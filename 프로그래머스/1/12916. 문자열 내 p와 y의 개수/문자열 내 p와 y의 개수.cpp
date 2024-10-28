#include <string>
#include <iostream>
using namespace std;

bool solution(string s) {
    
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    int count = 0;

   
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p') {
            count++;
        } else if (s[i] == 'y') {
            count--;
        }
    }

    return count == 0;
}