/* package whatever; // don't place package name! */

import java.util.Scanner;
///import java.lang.*;
///import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args)
	{
		Scanner myInput = new Scanner(System.in);
		int a=0,b=0;
		for(int i=0;i<6;i++){
			if(i==0){
				a=myInput.nextInt();
			}
			else{
				b=myInput.nextInt();
				if(a>b)
					a=b;
			}
		}
		System.out.println("Minimum: "+a);
	}
}