import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static BigInteger Fact(int n)
    {
        BigInteger i=BigInteger.ONE;

        for(int j=1;j<=n;j++)
        {
            i=i.multiply(BigInteger.valueOf(j));
        }

        return i;
    }

    public static void main(String[] args) {

        Scanner Input=new Scanner(System.in);

        while(Input.hasNext()) {

            int Test = Input.nextInt();

            BigInteger result = Fact(Test);

            String s = result.toString();

            String last4digit = "";

            if (s.length() > 4) {
                last4digit = s.substring(s.length() - 4);
            } else {
                last4digit = s;
            }

            System.out.println(last4digit);
        }
    }
}
