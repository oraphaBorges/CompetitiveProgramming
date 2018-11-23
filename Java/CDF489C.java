import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class CDF489C{

    public static void main(String[] args) {
        Scanner input = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        int n = input.nextInt();
        int s = input.nextInt();
        //Trivial Cases
        if (n == 1 && s > 9 || s == 0 && n > 1) {
            System.out.println("-1 -1");
            return;

        }
        if (n == 1 && s < 10) {
            System.out.println(s + " " + s);
            return;

        }
        //Looking for the maximum one
        StringBuilder max = new StringBuilder ();
        int subs = s;
        for (int i = 0; i < n; i++) {
            if(subs >=9){
                max.append("9");
                subs-=9;
            }
            else if (subs <9){
                max.append(subs);
                subs-=subs;
            }

        }
        if(subs !=0){
            System.out.println("-1 -1");
            return ;
        }

        //Looking for the minimum one
        StringBuilder min = new StringBuilder (max);
        min.reverse();

        if(min.charAt(0)=='0'){
            min.setCharAt(0, '1');
            for (int i = 1; i < n; i++) {
                if(min.charAt(i)!='0'){
                    min.setCharAt(i, (char)((int)(min.charAt(i))-1));
                    break;
                }

            }
        }
        //Print the results
        System.out.println(min + " "+ max);
    }
}
