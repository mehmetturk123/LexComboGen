#include <iostream>
#include <ctime>

using namespace std;

#define n 30
#define r 15

bool first;

// Algorithm 154 - Combination in Lexicographical Order - Charles J. Mifsud - 1963
// Bir sonraki diziliþi bir öncekine göre buluyor. Rekürsif deðil iterasyon.
void COMB1(int* I) {
	int s, j;
	if (first) {
		for (j = 1; j <= r; j++) {
			I[j] = j;
		}
		first = false;
		return;
	}
	if (I[r] < n) {
		I[r] = I[r] + 1;
		return;
	}
	for (j = r; j >= 2; j--) {
		if (I[j - 1] < n - r + j - 1) {
			I[j - 1]++;
			for (s = j; s <= r; s++) {
				I[s] = I[j - 1] + s - (j - 1);
			}
			return;
		}
	}
	first = true;
}

void printArray(int *array) {
	for(int i=1; i<=r; i++)
		cout << array[i] << ", ";
	cout << endl;
}

int main() {
	unsigned long long int i,z,k = 137846528820;
	int I[n + 1];

	clock_t begin = clock();
	
	first = true;
	for (i = 1; i <= k; i++) {
		COMB1(I);
		//printArray(I); // 1'den k'ya kadar hepsini yazdýrýyor.
		z++;
	}
	//printArray(I); // sadece k. elemaný yazdýrýyor.
	
	double time = (clock() - begin) / (float)CLOCKS_PER_SEC;
	cout << "Toplam sure: " << time << endl;
	printf("%llu",z);
	return 0;
}
