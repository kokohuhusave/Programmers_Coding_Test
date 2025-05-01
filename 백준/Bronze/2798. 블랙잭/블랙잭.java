

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class Main {
	static int N, M, maxSum = 0;
	static int[] A; 
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String[] Input = br.readLine().split(" ");
        
        N = Integer.parseInt(Input[0]);
        
        M = Integer.parseInt(Input[1]);
        
        A = new int[N];
        
        String[] nums = br.readLine().split(" ");
        
        for(int i = 0;i < N;i++) {
        	A[i] = Integer.parseInt(nums[i]);
        }
        
        dfs(0, 0, 0);
           
        System.out.println(maxSum);
	}
	
	static void dfs(int idx, int count,int sum) {
		if(count == 3) {
			if(sum <= M) {
				maxSum = Math.max(maxSum, sum);
			}
			return;
		}
		
		for(int i = idx;i < N;i++) {
			dfs(i + 1, count + 1, sum + A[i]);
		}
	}

}
