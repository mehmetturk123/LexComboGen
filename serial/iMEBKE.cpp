#include<stdio.h>
#include<time.h>

#define n 30
#define r 15

int main()
{
	unsigned short int m[3][r+2]={0},i,j=1,k,z=0;
	
	clock_t start, end;
 	start = clock();
	
	for(i=1;i<=r;i++)
	{
		m[1][r-i+1]=i;
		m[2][i]=n-i+1;
	}
	
	while(1)
	{
/*		
		z++;	
		printf("%d) ",z);
		for(i=r;i>=1;i--)
			printf("%d ",m[1][i]);
		printf("\n");
*/	
		k=0;				
		m[1][j]++;		
		while(m[1][j]>m[2][j] && j<=r)
		{
			j++;
			m[1][j]++;
			k=1;
		}
		if(j==(r+1))
		{
			end = clock();
 			printf("\nCalisma zamani : %f\n\n", (float) (end - start) / CLK_TCK);
			return 0;	
		}
		if(k==1)		
			while(j>1)
			{
				j--;
				m[1][j]=m[1][j+1]+1;
			}
	}
}
