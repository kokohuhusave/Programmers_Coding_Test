import java.util.ArrayDeque;
import java.util.HashMap;

class Solution {
    public int solution(String s) {
        HashMap<Character, Character> map = new HashMap<>();
        map.put(')', '(');
        map.put('}', '{');
        map.put(']', '[');
        
        int n = s.length(); // 원본 문자열의 길이 저장
        s += s; // 원본 문자열 뒤에 원본 문자열을 이어 붙여서 2번 나오도록 한다
        int answer = 0;
        
        A:for(int i = 0;i< n;i++) {
        	ArrayDeque<Character> stack = new ArrayDeque<>();
        	// 시작위치부터 원본 문자열의 길이인 n개까지 올바른 괄호 문자열인지 확인
        	for(int j = i;j < i + n;j++) {
        		char c = s.charAt(j);
        		// 해시맵 안에 해당 키가 없다면 열리는 괄호
        		if(!map.containsKey(c)) {
        			stack.push(c);
        		}
        		// 짝이 맞지 않으면 내부 for 문은 종료하고 A로 이동
        		else {
        			if(stack.isEmpty() || !stack.pop().equals(map.get(c)))
        				continue A;
        		}
        	}
        	// 스택이 비어있으면 올바른 괄호 문자열
        	if(stack.isEmpty())
        		answer++;
        }
        return answer;
        
    }
}