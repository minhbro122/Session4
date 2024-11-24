#include<stdio.h> 
int main(){
	int n;
	printf("nhap vao mot so");
	scanf("%d",&n); 
	if(n % 3==0 && n %5==0){
		printf("%d chia het cho ca 3 va 5"); 
	}else if(n %3==0){
		printf("chia het cho 3"); 
	}else if(n % 5==0){
		printf("chia het cho 5");
	}else{
		printf("so khong chia het cho 3 va 5");
	}
	
	
	return 0; 
}
