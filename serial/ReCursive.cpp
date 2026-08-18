#include <stdio.h>
#include<time.h>

#define N 30
#define R 15

void combinations (unsigned short int v[], unsigned short int start, unsigned short int n, unsigned short int k, unsigned short int maxk) 
{
        unsigned short int i;
        if (k > maxk) 
		{
/*			
                for (i=1; i<=maxk; i++) 
					printf ("%i ", v[i]);		
            	printf ("\n"); 
*/
                return;
        }
        for (i=start; i<=n; i++) 
		{
                v[k] = i;
                combinations (v, i+1, n, k+1, maxk);
        }
}

int main()
{
    unsigned short int v[N];
        
	clock_t start, end;
 	start = clock();
	        
    combinations (v, 1, N, 1, R);
	
	end = clock();
 	printf("\nCalisma zamani : %f\n\n", (float) (end - start) / CLK_TCK);    
    return 0;
}
