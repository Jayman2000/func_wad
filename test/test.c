#define TEST_WAD "doom2.wad"
//header
#define IDENTIFICATION_LENGTH 4

#include <stdio.h>

int main(){
	FILE *restrict wad = fopen(TEST_WAD, "r");
	//header                  V descriptions taken from 
	char identification[IDENTIFICATION_LENGTH + 1]; //The ASCII characters "IWAD" or "PWAD"
	fgets(identification, IDENTIFICATION_LENGTH + 1, wad);
	
	puts("Header:");
	printf(" identification == %s\n", identification);
	return 0;
}
