#include <stdio.h>

int main(){
	char text[100];
	int check;
	int count;
	printf("moi ban nhap chuoi ki tu bat ki ");
	fgets(text,100,stdin);
	int size=strlen(text);
	printf("moi ban nhap ki tu de kiem tra ");
	scanf("%c",&check);
	count=0;
	for (int i=0;i<size;i++){
		if (text[i]==check){
			count++;
		}
	}
	printf("ki tu %c xuat hien %d lan trong chuoi ",check,count);
	
	
	return 0;
}
