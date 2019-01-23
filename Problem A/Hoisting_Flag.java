import java.util.*;
import java.io.*;
 public class Hoisting_Flag {


    public static void main(String args[]) throws IOException {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Integer> a=new ArrayList<>();
        ArrayList<Integer> b=new ArrayList<>();
        long sum=0;
        for(int i=0;i<n;i++)
            a.add(sc.nextInt());

        for(int i=0;i<n;i++)
            b.add(sc.nextInt());

        for(int i=0;i<n;i++)
        {
            sum+=(long)(Math.min(a.get(i),b.get(i)));
        }
        System.out.println(sum);
    }
}