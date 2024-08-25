import java.util.*;
class Star{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("what's the value of n");
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            
            // Inner loop 1: For spaces
            for (int j = n; j > i; j--) {
                System.out.print(" ");
            }
            
            // Inner loop 2: For asterisks
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.out.print("*");
            }
            
            
            System.out.println();

    }
}
}