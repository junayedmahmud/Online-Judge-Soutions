import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args)
	{
		Scanner Input=new Scanner(System.in);

        	int test=Input.nextInt();

        	int sum=0;

       		while(test>0)
        	{
            		String string_test=Input.next();

            		for(int i=0;i<string_test.length();i++)
            		{
                		sum=sum+string_test.charAt(i);
            		}

            		if(sum%20==0)
            		{
                		System.out.println("Yes");
            		}
            		else
            		{
                		System.out.println("No");
            		}

            		sum=0;

           	 	test--;
        	}

	}
}
