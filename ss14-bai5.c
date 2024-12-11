#include <stdio.h>

int main(){
	char text[]="hoan dep trai";
	int tem=3;
	int chose;
	printf("%s ",text);
	printf("\nmoi ban nhap so chu o chuoi tren ");
	scanf("%d",&chose);
	if (chose==tem){
		printf("chinh xac ");
	} else {
		printf("sai roi ");
	}
	
	return 0;
}
