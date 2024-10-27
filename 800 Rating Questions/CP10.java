import java.util.Scanner;

public class CP10 {

    public static int Testing(char arr[][], int startrow, int startcol, int endcol, int endrow) {
        int count = 0;

        for (int i = startcol; i < endcol; i++) {
            if (arr[startrow][i] == 'X') {
                count++;
            }
        }

        for (int i = startrow + 1; i < endrow; i++) {
            if (arr[i][endcol - 1] == 'X') {
                count++;
            }
        }

        for (int i = startcol; i < endcol - 1; i++) {
            if (arr[endrow - 1][i] == 'X') {
                count++;
            }
        }

        for (int i = startrow + 1; i < endrow - 1; i++) {
            if (arr[i][startcol] == 'X') {
                count++;
            }
        }

        return count;

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t > 0) {

            int rows = 10;
            int columns = 10;

            int border[][] = {
                {1,1,1,1,1,1,1,1,1,1},
                {1,2,2,2,2,2,2,2,2,1},
                {1,2,3,3,3,3,3,3,2,1},
                {1,2,3,4,4,4,4,3,2,1},
                {1,2,3,4,5,5,4,3,2,1},
                {1,2,3,4,5,5,4,3,2,1},
                {1,2,3,4,4,4,4,3,2,1},
                {1,2,3,3,3,3,3,3,2,1},
                {1,2,2,2,2,2,2,2,2,1},
                {1,1,1,1,1,1,1,1,1,1}

            }

            // Consume the newline after reading the integer
            sc.nextLine();

            // Initialize the 2D array for the grid
            char[][] arr = new char[rows][columns];

            // Read each row of the 10x10 grid
            for (int i = 0; i < rows; i++) {
                String line = sc.nextLine();
                for (int j = 0; j < columns; j++) {
                    char ch = sc.next().charAt(0);
                    if (ch ==) {
                        
                    }
                }
            }

            int n = arr.length;
            int m = arr[0].length;

            int startrow = 0;
            int startcol = 0;
            int endrow = n;
            int endcol = m;
            int totalSum = 0;

            for (int i = 1; i <= 5; i++) {
                totalSum += i * Testing(arr, startrow, startcol, endcol, endrow);
                startrow += 1;
                startcol += 1;
                endrow -= 1;
                endcol -= 1;
            }

            System.out.println(totalSum);

            t--;

        }

    }
}
