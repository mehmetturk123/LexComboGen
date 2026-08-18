#include<stdio.h>
#include<math.h>
#include<time.h>

#define m 30
#define r 15

unsigned int x[m+1]={0},cnr[m+1]={0},i,k,b,z=0;

void func(int n)
{
	x[1]=0;
	k=1;
	while(k>0)
	{
		x[k]++;
		if(x[k]<=cnr[k])
		{
			if(k==r)
			{
				z++;
//				printf("%3d) ",z);
//				for(b=1;b<=r;b++)
//					printf("%d ",x[b]);
//				printf("\n");
			}
			else //if(k<r)
			{
				k++;
				x[k]=x[k-1];
			}
		}
		else k--;
	}
}

int main()
{
	clock_t start, end;
    start = clock();
    for(i=1;i<=r;i++)
    	cnr[i]=m-r+i;
	func(m);
	end = clock();
 	printf("\nThe time was: %f\n\n", (float) (end - start) / CLK_TCK);
	return 0;
}
