

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		 Scanner scanner = new Scanner(System.in);
	        int n = scanner.nextInt();

	        int result = 2;
	        for (int i = 1; i <= n; i++) {
	        	result = (result-1) + result;
	        }
	        System.out.println(result*result);
	    }

}
