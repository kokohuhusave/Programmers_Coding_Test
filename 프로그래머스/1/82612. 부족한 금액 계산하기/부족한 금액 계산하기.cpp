#include <iostream>
using namespace std;

long long solution(int price, int money, int count) {
    long long totalCost = 0;

    for (int i = 1; i <= count; i++) {
        totalCost += price * i;  
    }

    if (totalCost > money) {
        return totalCost - money;  
    } else {
        return 0;  
    }
}