#include <string>
#include <vector>

using namespace std;

int solution(int N) {
    vector<int> arr(N+1);

arr[0] = 0;
arr[1] = 1;
arr[2] = 1;

for (int i = 3;i <= N;i++) {
	arr[i] = (arr[i - 1] + arr[i - 2]) % 1234567;
}
    
    return arr[N];
}