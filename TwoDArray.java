import java.util.Scanner;

public class TwoDArray{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 🔹 Step 1: User se rows & columns ka input lo
        System.out.print("Enter number of rows: ");
        int rows = sc.nextInt();

        System.out.print("Enter number of columns: ");
        int cols = sc.nextInt();

        // 🔹 Step 2: 2D array create karo
        int[][] arr = new int[rows][cols];

        // 🔹 Step 3: Array me values input lo
        System.out.println("Enter " + (rows * cols) + " numbers:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = sc.nextInt();  // User input le raha hai
            }
        }

        // 🔹 Step 4: Array print karo
        System.out.println("\nMatrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();  // Row change
        }

        sc.close();  // Scanner close karna best practice hai
    }
}

