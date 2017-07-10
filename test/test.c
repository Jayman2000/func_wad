#define TEST_WAD "doom2.wad"
//header
#define IDENTIFICATION_LENGTH 4
#define LUMP_NUMBER_LENGTH 4

#include <stdio.h>

int main(){
	FILE *restrict wad = fopen(TEST_WAD, "r");
	//header                                          V descriptions taken from 
	char identification[IDENTIFICATION_LENGTH + 1]; //The ASCII characters "IWAD" or "PWAD"
	fgets(identification, IDENTIFICATION_LENGTH + 1, wad);
	unsigned int numlumps; //An integer specifying the number of lumps in the WAD. 
	fread(&numlumps, LUMP_NUMBER_LENGTH, 1, wad);
	
	puts("Header:");
	printf(" identification == %s\n", identification);
	printf(" numlumps == %u\n", numlumps);
	return 0;
}
