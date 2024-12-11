#include <stdio.h>

int main(){
	char text[100];
	printf("moi ban nhap chuoi ki tu bat ki ");
	fgets(text,100,stdin);
	int size=strlen(text);
	printf("%s ",text);
	printf("do dai chuoi la %d ",size);
	
	return 0;
}
