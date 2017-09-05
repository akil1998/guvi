#include<stdio.h>
#include<conio.h>
void main() 
{

		Scanner in=new Scanner(System.in);
		printf("ENTER THE SIZE OF ARRAY'S");
		int n=in.nextInt();
		int[] a=new int[n];
		int[] b=new int[n];
		int[] c=new int[n];
		int[] d=new int[n];
		printf("ENTER THE ELEMENTS FOR ARRAY 1");
		for(int i=0;i<n;i++)
		{
			a[i]=in.nextInt();
		}
		printf("ENTER THE ELEMENTS FOR ARRAY 2");
		for(int i=0;i<n;i++)
		{
			b[i]=in.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			c[i]=a[i]+b[i];
		}
		Arrays.sort(c);
		int min=c[0];
		for(int i=0;i<n;i++)
		{
			if((a[i]+b[i])==min)
			{
				printf("SUM OF TWO DIGITS CLOSE TO ZERO IS ----> "+a[i]+"+"+b[i]+"="+min);
				break;
			}
		}
	}

}
