import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.lang.Math.*;

public class CDF580A{

    public static void main(String[] args) {
        Scanner input = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        int n = input.nextInt();
        int p = input.nextInt();
        int q, maxSeq = 1, seq = 1;

        for(int i = 1; i < n;i++){
            q = input.nextInt();
            if(q >= p) maxSeq = Math.max(++seq,maxSeq);
            else seq = 1;
            p = q;
        }
        System.out.println(maxSeq);
    }

}
