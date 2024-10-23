import java.util.*;

public class Halloumi_Boxes_CP1 {

    static boolean isSorted(int arr[]) {
        boolean flag = true;
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < arr[i - 1]) {
                flag = false;
            }
        }

        return flag;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int arr[] = new int[n];
            for(int i =0; i<n; i++){arr[i] = sc.nextInt();}

            if (k == 1) {
                if (isSorted(arr)) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            } else {
                System.out.println("YES");
            }

            t--;
        }
    }

}