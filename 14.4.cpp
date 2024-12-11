#include<stdio.h>
#include<string.h>
int main(){
	char arr[100]="tran van thang";
	char number;
	printf("nhap vao 1 ki tu: ");
	scanf("%c",&number);
	int sum=0;
	for(int i=0 ; i<strlen(arr) ; i++){
		if(arr[i]==number){
			sum++;
		}
	}
    printf("so lan xuan hien cua ki tu %c la: %d",number,sum);

	
	return 0;
}
