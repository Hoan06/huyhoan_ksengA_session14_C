#include <stdio.h>

int main(){
	char text[]="hello";
	int size=strlen(text);
	for (int i=size-1;i>=0;i--){
		printf("%c ",text[i]);
	}
	
	
	return 0;
}
