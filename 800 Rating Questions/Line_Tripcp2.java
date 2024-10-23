import java.util.*;
public class Line_Tripcp2 {
   public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);
           int t = sc.nextInt();
           while (t > 0) {
               int n = sc.nextInt();
               int k = sc.nextInt();
               int arr[] = new int[n];
               for(int i =0; i<n; i++){arr[i] = sc.nextInt();}

                int max = -1;
              for(int i =1; i<n; i++){
                max = Math.max(max , arr[i] - arr[i-1]);
              }

              max = Math.max(max ,  2*(k - arr[n-1]));
              max = Math.max(max, arr[0] );
              
              System.out.println(max);
   
               t--;
           }
       }

}
