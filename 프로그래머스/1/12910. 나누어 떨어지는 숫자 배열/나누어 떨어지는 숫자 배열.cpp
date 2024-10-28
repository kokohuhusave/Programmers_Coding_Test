#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> arr1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % divisor == 0) {  // divisor로 수정
            arr1.push_back(arr[i]);  // push_back 사용
        }
    }
    
    if (arr1.empty()) {  
        return vector<int>{-1};  
    } else {
        sort(arr1.begin(), arr1.end()); 
        return arr1;
    }
}
