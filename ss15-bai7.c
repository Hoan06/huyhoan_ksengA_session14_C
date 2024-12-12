#include <stdio.h>

int main(){
	
	char text[]="12@4!hjit";
	int A=0,B=0,C=0;
	for (int i=0;i<text[i]!='\0';i++){
		if (text[i]>='0' && text[i]<='9'){
			A++;
		} else if ((text[i]>='A' && text[i]<='Z') || (text[i]>='a' && text[i]<='z')){
			B++;
		} else {
			C++;
		}
	}
	printf("mang co %d chu so \n",B);
	printf("mang co %d so \n",A);
	printf("mang co %d ki tu ",C);
	
	
	return 0;
}
