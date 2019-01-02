import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static BigInteger Fibo(int n)
    {
        if(n==1 || n==2)
        {
            return BigInteger.ONE;
        }

        BigInteger p=BigInteger.ONE;
        BigInteger q=BigInteger.ONE;

        for(int k=0;k<n-2;k++)
        {
            BigInteger temp=q;
            q=p.add(q);
            p=temp;
        }

        return q;
    }

    public static void main(String[] args) {

        Scanner Input = new Scanner(System.in);

        int n=Input.nextInt();

        BigInteger result=Fibo(n);

        System.out.println(result);
    }
}
