#include<stdio.h>
#include<string.h>

int main(){
	char arr[100];
	int dem=0;
	printf("moi ban nhap vao mo chuoi bat ki: ");
	fgets(arr , sizeof(arr) , stdin);
	for(int i=0 ; i<strlen(arr) ; i++){
		if(arr[i]>='a' && arr[i]<='z'){
			dem++;
		}
	}
	printf("so chu cai trong chuoi la: %d",dem);
	
	return 0;
}
