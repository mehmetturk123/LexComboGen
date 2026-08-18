#include <stdio.h>
#include<time.h>

#define n 33
#define r 17

int main()
{
    unsigned short int i[r+1]={0};
    unsigned long long int z=0;
        
	clock_t start, end;
 	start = clock();
 	
 	for(i[1]=1;i[1]<=n-16;i[1]++)
 	for(i[2]=i[1]+1;i[2]<=n-15;i[2]++)	
 	for(i[3]=i[2]+1;i[3]<=n-14;i[3]++)
 	for(i[4]=i[3]+1;i[4]<=n-13;i[4]++)
 	for(i[5]=i[4]+1;i[5]<=n-12;i[5]++)
 	for(i[6]=i[5]+1;i[6]<=n-11;i[6]++)
 	for(i[7]=i[6]+1;i[7]<=n-10;i[7]++)	 	 	 	  	
 	for(i[8]=i[7]+1;i[8]<=n-9;i[8]++)
 	for(i[9]=i[8]+1;i[9]<=n-8;i[9]++)	 
 	for(i[10]=i[9]+1;i[10]<=n-7;i[10]++)
 	for(i[11]=i[10]+1;i[11]<=n-6;i[11]++)
 	for(i[12]=i[11]+1;i[12]<=n-5;i[12]++)
 	for(i[13]=i[12]+1;i[13]<=n-4;i[13]++)
 	for(i[14]=i[13]+1;i[14]<=n-3;i[14]++)
 	for(i[15]=i[14]+1;i[15]<=n-2;i[15]++)
	for(i[16]=i[15]+1;i[16]<=n-1;i[16]++)
	for(i[17]=i[16]+1;i[17]<=n;i[17]++) 	
 	{
 		z+=1;	
 	}

	end = clock();
 	printf("\nCalisma zamani : %f\n\n", (float) (end - start) / CLK_TCK); 
	printf("%llu\n",z);
    return 0;
}
