#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int result = 0;


    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());
    
    for (int i = 0; i < A.size(); i++) {
    result += A[i] * B[i];
    }
    
    return result;
}