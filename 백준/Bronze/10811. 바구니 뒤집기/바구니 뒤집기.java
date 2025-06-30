
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        int[] A = new int[N + 1];
        for (int i = 1; i <= N; i++) {
            A[i] = i;
        }

  
        for (int i = 0; i < M; i++) {
            int num1 = sc.nextInt();
            int num2 = sc.nextInt();
 
            for (int j = 0; j < (num2 - num1 + 1) / 2; j++) {
                int tmp = A[num1 + j];
                A[num1 + j] = A[num2 - j];
                A[num2 - j] = tmp;
            }
        }


        for (int i = 1; i <= N; i++) {
            System.out.print(A[i] + " ");
        }
    }
}
