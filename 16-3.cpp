#include <stdio.h>
#include <math.h>

main(){
	int a, j;
	
	scanf("%d", &a);
	j = 2;
	while(1){
		if(j <= sqrt(a)){
			if(a % j == 0){
				printf("�Ҽ� �ƴ�");
				break;
			}else{
				j++;
			}
		}else{
			printf("�Ҽ�");
			break;
		}
	}
}
