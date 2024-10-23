
/**
 * CP3_Cover_in_Water
 */
import java.util.*;

public class CP3_Cover_in_Water {

    public static int Cover_water(char arr[], int n) {

        int min = -1;
        for (char i = 1; i < n; i++) {
                int a=0;
                // 1 action
                if (arr[i] == '.') {
                    arr[i] = 'F';
                    a++;
                }

                // 2 action
                if (arr[i - 1] == 'F' && arr[i + 1] == '.') {
                    arr[i + 1] = 'F';
                    a++;
                }

                if (arr[i - 1] == 'F' && arr[i + 1] == 'F') {
                    arr[i] = 'F';
                }

                min = Math.max(min, a);


        }
        return min;
    }

    public static void PrintArray (char arr[]){
        for(int i =0; i<arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        char arr[] = { '.', '.', '#', '.', '.', '#', '.', '#' };
        int n = arr.length;
        PrintArray(arr);

        
    }
}