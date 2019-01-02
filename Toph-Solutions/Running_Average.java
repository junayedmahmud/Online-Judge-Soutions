import java.text.DecimalFormat;
import java.util.Scanner;

class Main
{
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);

        int test=input.nextInt();

        int sum=0;

        for(int i=1;i<=test;i++)
        {
            int num=input.nextInt();

            sum=sum+num;

            if(sum%i==0)
            {
                System.out.println(sum/i);
            }
            else
            {
                Double v=new Double(sum);
                Double x=new Double(i);
                Double k=v/x;
                DecimalFormat format=new DecimalFormat(".##########");
                System.out.println(format.format(k));
            }
        }
    }
}
