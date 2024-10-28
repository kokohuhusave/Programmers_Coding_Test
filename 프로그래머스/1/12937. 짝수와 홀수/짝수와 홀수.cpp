#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int num) {
    
    if(num % 2 == 0){
        return "Even";
    }else{
        return "Odd";
    }
}