
import java.util.Scanner;

public class Main {
	
	static int x;
	static int y;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int A[][] = new int[10][10];
		
		int max = -1;
		
		for(int i = 0;i < 9;i++) {
			for(int j = 0;j < 9;j++) {
				A[i][j] = sc.nextInt();
				if(max < A[i][j]) {
					max = A[i][j];
					x = i + 1;
					y = j + 1;
				}
			}
		}
		
		System.out.println(max);
		System.out.println(x + " " + y);

	}
}
