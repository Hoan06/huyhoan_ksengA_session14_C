#include <stdio.h>

int main(){
	char text[]="hello";
	int size=strlen(text);
	for (int i=0;i<size;i++){
		printf("%c ",text[i]);
	}
	
	
	return 0;
}
