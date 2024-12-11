#include <stdio.h>

int main(){
	char text[]="hoandeptrai";
	int size;
	size=strlen(text);
	int chose;
	printf("%s ",text);
	printf("\nmoi ban nhap tong so ki tu o chuoi tren ");
	scanf("%d",&chose);
	if (chose==size){
		printf("chinh xac ");
	} else {
		printf("sai roi ");
	}
	
	return 0;
}
