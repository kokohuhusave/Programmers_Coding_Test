import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int A = sc.nextInt();
		int B = sc.nextInt();
		int addM = sc.nextInt();
		int addH = 0;
		
		if(B + addM >= 60) {
			A += (B + addM) / 60;
			B = (B + addM) % 60;
		}else {
			B += addM;
		}
		
		if(A >= 24) {
			A = A % 24;
		}
		
		
		System.out.println(A + " " + B);
	}
}
