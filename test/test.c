#include <stdio.h>

int main(){
	FILE *restrict wad = fopen("doom2.wad", "r");
	//header                  V descriptions taken from 
	char identification[5]; //The ASCII characters "IWAD" or "PWAD"
	fgets(identification, 5, wad);
	
	puts("Header:");
	printf(" identification == %s\n", identification);
	return 0;
}
