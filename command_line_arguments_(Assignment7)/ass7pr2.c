#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int i,j;
	char *a = argv[1], *b = argv[2], *c = argv[3];
	
	while(*a != '\0'){
		if(*a == *b)
			*a = *c;
		a++;
	}
	
	printf("Resultant String : %s\n", argv[1]);

	return 0;
}

/*
 output
 
 [fycsd004@ad-103 assignment6-commandlines]$ ./a.out hello l w
Resultant String : hewwo

*/


