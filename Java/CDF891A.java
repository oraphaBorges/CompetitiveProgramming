//https://yymelo.com/codeforces891apride%EF%BC%88%E6%95%B0%E5%AD%A6%EF%BC%89/
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.ArrayList;
import static java.lang.Math.min;

public class CDF891A{

  private static int gcd(int a, int b){
    return (b==0)?a:gcd(b,a%b);
  }
  public static void main(String[] args) {
    Scanner input = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
    int n = input.nextInt();
    ArrayList a = new ArrayList();
    while(true){
      int cont=0;
      for(int i=0;i<n;i++){
        a.add(input.nextInt());
        if(a.get(i).equals(1)) cont++;
      }
      if(cont>0){
        System.out.println(n - cont);
        break;
      }else{
        int  t = Integer.MAX_VALUE; //Get infinity
        for(int i=0;i<n;i++){
          int cur = 0;
          for(int j=i;j<n;j++){
            if((cur=gcd(cur,(int)a.get(j))) == 1){
              t=min(t,(j-i));
              j=n;
            }
          }
        }
        if(t == Integer.MAX_VALUE){
          System.out.println("-1");
          break;
        }else{
          System.out.println(t+n-1);
          break;
        }
      }
    }
  }
}
