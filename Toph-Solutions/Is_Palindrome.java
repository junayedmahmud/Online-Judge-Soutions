import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner Input = new Scanner(System.in);

        while(Input.hasNext())
        {
            String s=Input.next();

            StringBuffer k=new StringBuffer(s);

            String t=k.reverse().toString();

            if(s.equals(t))
            {
                System.out.println("Yes");
            }
            else
            {
                System.out.println("No");
            }

        }
    }
}
