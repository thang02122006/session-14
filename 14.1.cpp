#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("nhap vao chuoi bat ki: ");
	fgets(a , sizeof(a) , stdin);
	printf("%s",a);
	printf("do dai ki tu trong chuoi la: %d",strlen(a));
	
	return 0;
}
 
 
