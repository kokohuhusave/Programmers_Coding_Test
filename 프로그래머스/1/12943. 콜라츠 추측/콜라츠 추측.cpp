#include <iostream>

int solution(int num){
    long long n = num;
    int answer = 0;
    
    while(true){
        
        if(n==1)
            break;
        
        n%2 == 0 ? n/=2 : n = 3*n + 1;
        answer++;
        
        if(answer==500){
            answer=-1;
            break;
        }

    }
    return answer;
}