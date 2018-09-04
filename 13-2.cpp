#include <stdio.h>

main(){
	int i, j, k, L;
	
	i = 0;
	j = 1;
	k = -1;
	L = -1;
	
	do{
		i++;
		j += i;
		L *= -1;
		k += j * L;
	}while(i < 19);
	printf("%d", k);
	
}
