#include<stdio.h>
#include<string.h>
int main(){
	char arr[100]="tran van";
	char number=' ';
	int sum=1;
	for(int i=0 ; i<strlen(arr) ; i++){
		if(arr[i]==number){
			sum++;
		}
	}
    printf("so tu trong chuoi la: %d",sum);

	
	return 0;
}
