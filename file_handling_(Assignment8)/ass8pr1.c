#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

void main(int argc, char *argv[]){
	FILE *fp1, *fp2;
	char ch;
	fp1 = fopen("student.txt", "r");
	fp2 = fopen("student1.txt", "w+");
	if((fp1==NULL) || (fp2==NULL)){
		printf("File opening error..\n");
		exit(0);
	}

	printf("\nContent of File %s\n",argv[1]);
	while(!feof(fp1)){
		ch = fgetc(fp1);
		if(isupper(ch))
			fprintf(fp2,"%c", tolower(ch));
		else if(islower(ch))
			fprintf(fp2,"%c", toupper(ch));
		else
			fprintf(fp2,"%c", ch);

		putchar(ch);
	}
	fclose(fp1);

	rewind(fp2);

	printf("\nContent of File %s\n",argv[2]);
	while(!feof(fp2)){
		ch = fgetc(fp2);
		putchar(ch);
	}
	fclose(fp2);

}

/*
 *
 * ┌──(kali㉿kali)-[~/Code/Ass9]
 * └─$ ./a.out student.txt student1.txt

Content of File student.txt
    Ayesha                1              12
   Abhisek                2              12
     Badal                3              12
    Mandar                4              12
Swaranjali                5              12

Content of File student1.txt
    aYESHA                1              12
   aBHISEK                2              12
     bADAL                3              12
    mANDAR                4              12
sWARANJALI                5              12

 *
 */
