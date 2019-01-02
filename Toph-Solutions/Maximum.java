//replace Class name with Main.java

import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner Input = new Scanner(System.in);

        int n=Input.nextInt();

        int[] arr = new int[n];

        int max=-1;

        for(int i=0;i<n;i++)
        {
            arr[i] = Input.nextInt();

            if(max<arr[i])
            {
                max=arr[i];
            }
        }

        System.out.println(max);
    }
}
