#include <stdio.h>

int main() {
	
	int i, N;
	
	scanf("%d", &N);
	
	if(N < 1 || N > 1000){
		printf("Valor invalido.\n");
	}
	
	for(i = 1; i <= N; i++){
		printf("%d %d %d\n", i, i*i, i*i*i);
	}
	
	
	return 0;
}
