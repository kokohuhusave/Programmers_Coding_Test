

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num1, num2;
		
		do{
			num1 = sc.nextInt();
			
			num2 = sc.nextInt();
			
			if(num1 < num2) {
				if(num2 % num1 == 0) {
					System.out.println("factor");
				}else {
					System.out.println("neither");
				}
			}else if(num1 > num2) {
				if(num1 % num2 == 0) {
					System.out.println("multiple");
				}else {
					System.out.println("neither");
				}
			}
		}while(num1 != 0 && num2 != 0);
	}

}
