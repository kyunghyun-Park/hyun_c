#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	printf("1-N������ �Ҽ��� ���մϴ�.N��? ");
	scanf("%d", &n);
	printf("�Ҽ��� ��� %d���Դϴ�.",is_prime(n));
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
