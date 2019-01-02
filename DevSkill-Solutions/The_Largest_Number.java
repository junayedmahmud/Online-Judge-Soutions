import java.util.*;
import java.lang.*;
import java.io.*;

//change your class name with file name

class MyClass
{
	public static void main (String[] args)
	{
		Scanner Input=new Scanner(System.in);

        int test=Input.nextInt();


        for(int l=1;l<=test;l++)
        {
            String N=Input.next();
            Integer P=Input.nextInt();
            int count=0;

            StringBuilder new_string=new StringBuilder(N);

            for(int i=0;i<N.length();i++)
            {
                if(count==P)
                {
                   break;
                }

                if(N.charAt(i)!='9')
                {
                    new_string.setCharAt(i,'9');

                    if(count<P)
                    {
                        count++;
                    }
                }
            }

            System.out.println("Case "+l+": "+new_string);
        }
	}
}
