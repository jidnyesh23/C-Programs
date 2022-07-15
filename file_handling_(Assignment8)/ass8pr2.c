#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

void main(int argc, char *argv[]){
	FILE *fp = fopen("student.txt", "r");
	char ch, word[20], line[200];
	int word_count = 0, char_count = 0, line_count = 0;

	if(fp==NULL){
		printf("File opening error..\n");
		exit(0);
	}


	while(!feof(fp)){
		ch = fgetc(fp);
		char_count++;
	}
	
	rewind(fp);
	while(!feof(fp)){
		fscanf(fp,"%s",word);
		word_count++;
	}

	rewind(fp);
	while(!feof(fp)){
		fgets(line,200, fp);
		line_count++;
	}

	fclose(fp);

	printf("Total Characters: %d\n",char_count);
	printf("Total Words: %d\n",word_count);
	printf("Total Lines: %d\n",line_count);
}


/*
 *
 * Output:
 * [fycsd008@ad-102 Ass9]$ ./a.out student.txt
 * Total Characters: 34
 * Total Words: 7
 * Total Lines: 4
 *
 */
