//Replace file name with Main.java before testing

import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner Input = new Scanner(System.in);

        BigInteger a=Input.nextBigInteger();
        BigInteger b=Input.nextBigInteger();

        System.out.println(a.add(b));
    }
}
