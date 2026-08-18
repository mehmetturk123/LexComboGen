#include<stdio.h>
#include<time.h>

unsigned long long int Cnr(unsigned long int n, unsigned long int r)
{
	unsigned long long int nr,rn,py=1,pyd=1,i;
	if(n-r>r)
	{
		nr=n-r;
		rn=r;
	}
	else
	{
		nr=r;
		rn=n-r;
	}
	for(i=n;i>nr;i--)
		py*=i;
	for(i=1;i<=rn;i++)
		pyd*=i;
	return py/pyd;
}

int main()
{
	unsigned long long int n=49,r=6,k=13983816,N,R,K,C=1,j=1;
	
	clock_t start, end;
 	start = clock();
	
	N=n;
	R=r;
	K=k;
	
	N--;
	R--;
	R=N-R;
	while(j<=r)
	{
		while(K>Cnr(N,R))
		{
			K-=Cnr(N,R);
			N--;
			R--;
			C++;
		}
		printf("%d ",C);
		C++;
		N--;
		j++;
	}
	printf("\n");
	
	end = clock();	
  	printf("\nCalisma zamani  : %f\n\n", (float) (end - start) / CLK_TCK);	
	
	return 0;
}
