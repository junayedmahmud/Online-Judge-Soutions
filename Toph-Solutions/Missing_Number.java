import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner Input = new Scanner(System.in);

        BigInteger a=Input.nextBigInteger();

        BigInteger b=Input.nextBigInteger();

        BigInteger c=Input.nextBigInteger();

        BigInteger d=Input.nextBigInteger();


        System.out.println(a.subtract(b.add(c).add(d)));
    }
}
