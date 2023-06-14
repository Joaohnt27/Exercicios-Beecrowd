#include <stdio.h>

int main() {
	int T;
	
	scanf("%d", &T);
	
	int N[1000];
	int i, j = 0;
	
	for (i = 0; i < 1000; i++) {
		N[i] = j;
		j++;
		if (j == T){
			j = 0;
		}
		
		printf("N[%d] = %d\n", i, N[i]);
	}
	
    return 0;
}
