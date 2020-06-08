#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	printf("1-N사이의 소수를 구합니다.N은? ");
	scanf("%d", &n);
	printf("소수는 모두 %d개입니다.",is_prime(n));
	return 0;
}

int is_prime(int x) {
	int count=0,count_all=0;
	for (int i;i<=x;i++){
		
		for(int j;j<=i;j++){
			
			if(j%i==0){
				
				count++;
			}
			
		}
		if(count==2){
			count_all++;
		}
	}  
	return count_all++;
}
