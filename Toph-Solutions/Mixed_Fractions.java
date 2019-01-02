import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner Input = new Scanner(System.in);

        int first=Input.nextInt();

        int last=Input.nextInt();

        System.out.println(first/last+" "+first%last+" "+last);
    }
}
