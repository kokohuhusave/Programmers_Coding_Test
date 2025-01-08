class Solution {
   public long solution(int a, int b) {
		
		long start = max(a, b);
		long end = min(a, b);
		
        long answer = 0;
        
        for(long i = end;i <= start;i++) {
        	answer += i;
        }
        
        return answer;
    }

	private long max(int a, int b) {
		if(a > b) {
			return a;
		}else {
			return b;
		}
	}
	
	private long min(int a, int b) {
		if(a > b) {
			return b;
		}else {
			return a;
		}
	}
}