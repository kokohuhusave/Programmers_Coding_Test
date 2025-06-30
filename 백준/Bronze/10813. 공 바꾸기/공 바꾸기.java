

import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		
		int M = sc.nextInt();
		
		int A[] = new int[N + 1];
		
		for(int i = 1;i < N + 1;i++) {
			A[i] = i;
		}
		
		for(int j = 0;j < M;j++) {
			int num1 = sc.nextInt();
			int num2 = sc.nextInt();
			int temp = A[num1];
			A[num1] = A[num2];
			A[num2] = temp;
		}
		
		for(int i = 1;i < N + 1;i++) {
			System.out.print(A[i] + " ");
		}
	}
}
