//Edit this Class name with Main.java

import java.text.DecimalFormat;
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner Input = new Scanner(System.in);

        Double n=Input.nextDouble();

        Double t= (Math.PI*n*n);

        DecimalFormat df= new DecimalFormat(".##########");

        System.out.println(df.format(t));
    }
}
