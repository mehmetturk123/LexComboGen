#include<stdio.h>
#include<time.h>

#define n 30
#define r 15

int main()
{
	unsigned short int m[4][r+1]={0},i,j=r,k,z=0;
	
	clock_t start, end;
 	start = clock();
	
	for(i=1;i<=r;i++)
	{
		m[1][i]=i;
		m[3][r-i+1]=n-i+1;
	}
	
	while(1)
	{
/*		
		z++;
		printf("%d) ",z);
		for(i=1;i<=r;i++)
			printf("%d ",m[1][i]+m[2][i]);
		printf("\n");
*/		
		k=0;				
		m[2][j]++;		
		while(m[1][j]+m[2][j]>m[3][j] && j>0)
		{
			j--;
			m[2][j]++;
			k=1;
		}
		if(j==0)
		{
			end = clock();
 			printf("\nCalisma zamani : %f\n\n", (float) (end - start) / CLK_TCK);				
			return 0;	
		}
		if(k==1)		
			while(j<r)
			{
				j++;
				m[2][j]=m[2][j-1];
			}
	}
}
