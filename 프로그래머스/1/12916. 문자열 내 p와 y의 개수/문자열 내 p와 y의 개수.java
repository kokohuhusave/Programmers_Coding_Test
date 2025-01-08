class Solution {
boolean solution(String s) {
		boolean answer = true;
		
		String word = s.toLowerCase();
		
		int count = 0;
		
		for (int i = 0; i < word.length(); i++) {
            if (word.charAt(i) == 'p') {
                count += 1;
            } else if (word.charAt(i) == 'y') {
                count -= 1;
            }
        }
		
		if(count == 0) {
			answer = true;
		}else {
			answer = false;
		}
		
		return answer;
	}
}