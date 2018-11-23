import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.Vector;
import java.lang.Math.*;

public class UVa10130{
  private static int t;
  private static int n;
  private static int total;
  private static int g;
  private static int[]  P = new int[1123];
  private static int[]  W = new int[1123];
  private static int[] MW= new int[112];
  private static int[][]  pd= new int[1123][1123];

  public static void main(String[] args) {
    Scanner input = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
    int i,j;
    t = input.nextInt();
    for (j=0; j < t ; j++) {
      n = input.nextInt();
      for (i=1; i <= n ; i++) {
        P[i] = input.nextInt();W[i] = input.nextInt();
      }
      g = input.nextInt();
      for (i=1; i <= g ; i++) {
        MW[i] = input.nextInt();
      }
      knapsack(getMax(MW));
      total = 0;
      for (i=1; i <= g ; i++) {
        total += pd[n][ MW[i] ];
      }
      System.out.println(total);
    }
  }

  private static int getMax(int[] C){
    int max = 0;
    for(int i=1;i<=g;i++){
      if(max < C[i]) max = C[i];
    }
    return max;
  }

  private static void knapsack(int max){
    int i,j;
    for (i=1;i <= n ; i++ ) {
      for (j=1; j<= max ; j++ ) {
        if(W[i] > j) pd[i][j] = pd[i-1][j];
        else pd[i][j] = Math.max( pd[i-1][j] , pd[i-1][ j-W[i] ] + P[i] );
      }
    }
  }
}
