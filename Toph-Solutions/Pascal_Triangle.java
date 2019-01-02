import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static BigInteger Fact(int n)
    {
        BigInteger x=BigInteger.ONE;

        if(n==0)
        {
            return BigInteger.ONE;
        }

        for(int i=1;i<=n;i++)
        {
            x=x.multiply(BigInteger.valueOf(i));
        }

        return x;
    }

    public static void main(String[] args) {

        Scanner Input = new Scanner(System.in);

        int n=Input.nextInt();

        BigInteger result=Fact(n);

        BigInteger sum=BigInteger.ZERO;

        for(int i=0;i<=n;i++)
        {
            BigInteger p=Fact(i).multiply(Fact(n-i));

            BigInteger l=result.divide(p);

            sum=sum.add(l);
        }

        System.out.println(sum.divide(BigInteger.valueOf(2)));
    }
}
