#include <stdio.h>

main(){
	int i;
	int input[5], cont[4];
	
	for(i = 0 ; i <= 4 ; i++){
		scanf("%d", &input[i]);
	}
	cont[0] = input[1];
	
	if(input[0] == 1){
		
		for(i = 0 ; i <= 2 ; i++){
			if(input[i+2] == cont[i]){
				cont[i+1] = 0;
			}else{
				cont[i+1] = 1;
			}
		}
	}else{
		for(i = 0 ; i <= 2 ; i++){
			if(input[i + 1] == input[i +2 ]){
				cont[i + 1] = 0;
			}else{
				cont[i + 1] = 1;
			}
			
		}
	}
	if(input[0] == 1){
		printf("������ ");
	}else{
		printf("�׷����ڵ� ");
	}
	for(i = 0 ; i <= 3 ; i++){
		printf("%d", cont[i]);
	}
	
	
}




