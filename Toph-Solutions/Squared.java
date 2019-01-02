import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner Input = new Scanner(System.in);

        BigInteger a=Input.nextBigInteger();

        System.out.println(a.multiply(a));
    }
}
