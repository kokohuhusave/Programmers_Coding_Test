#include <string>
#include <vector>
#define NUM 1234567
using namespace std;

long long solution(int n) {

    vector<long long> arr(n + 1);


    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    for (int i = 3;i <= n;i++) {
        arr[i] =  arr[i - 1] + arr[i - 2];
        arr[i] = arr[i] % NUM;
    }

    return arr[n - 1] % 1234567;
}