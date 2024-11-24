#include<stdio.h> 
int main() {
	int a, b, c;
	printf("nhap so thu nhat: ");
	scanf("%d", &a);
	printf("nhap so thu hai: ");
	scanf("%d", &b);
	printf("nhap so thu ba: ");
	scanf("%d", &c);
	if(b>c&&c>a){
		printf("so thu 3 nam giua 2 so con lai");
	}else{
		printf("so thu 3 ko nam giua 2 so con lai"); 
	} 
}

