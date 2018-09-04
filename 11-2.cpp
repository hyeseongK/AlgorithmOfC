#include <stdio.h>

main(){
	int i = 0, j = 0;
	
	while(1){
		
		i++;
		j += i;
		if(i>=99){
			printf("%d", j);
			break;
		}else{
			i++;
			j -= i;
		}
	}
	
}
