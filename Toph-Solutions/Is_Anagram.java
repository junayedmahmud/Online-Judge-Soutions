import java.util.Scanner;

class Main
{
    public static void main(String[] args) {

        Scanner input=new Scanner(System.in);

        String s=input.next();
        String p=input.next();

        StringBuffer t=new StringBuffer(s);
        StringBuffer u=new StringBuffer(p);

        int result=0;

        if(s.length()!=p.length())
        {
            System.out.println("No");
        }
        else
        {
            for(int i=0;i<s.length();i++)
            {
                //System.out.println("I is: "+i);

                for(int j=0;i<p.length();j++)
                {

                    if(s.charAt(i)==p.charAt(j))
                    {
                        //System.out.println(i+" "+j);
                        u.setCharAt(j,'#');
                        result=result+1;

                        //System.out.println(u);

                        break;
                    }

                    //System.out.println("J is: "+j);
                }
            }

            //System.out.println(result);

            if(p.length()==result)
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
