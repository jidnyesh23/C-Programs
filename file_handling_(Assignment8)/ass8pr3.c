#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	FILE *fp;
	char name[20], max_name[20];
	int i, n, rollno, rno, max_rno;
	float perc, max_perc=0;

	fp = fopen("student.txt","w+");
	if(fp==NULL){
		printf("File Opening Error..\n");
		exit(0);
	}

	printf("Enter no. of Students: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter Student %d Details (Roll No, Name, Percentage): ",i+1);
		scanf("%d %s %f", &rollno, name, &perc);
		fprintf(fp,"%10d \t %10s \t %10f\n", rollno, name, perc);
	}
	rewind(fp);
	printf("Enter Roll No to search: ");
	scanf("%d",&rno);

	while(!feof(fp)){
		fscanf(fp,"%d %s %f", &rollno, name, &perc);
		if(rno == rollno){
			printf("Student Found...\n");
			break;
		}
	}

	rewind(fp);
	while(!feof(fp)){
		fscanf(fp,"%d %s %f", &rollno, name, &perc);
		if(perc > max_perc){
			max_perc = perc;
			max_rno = rollno;
			strcpy(max_name, name);
		}
	}

	printf("\nStudent having the highest percentage is: \n");
	printf("%10s \t %10s \t %10s\n", "Roll No", "Name", "Percentage");
	printf("====================================================\n");
	printf("|%10d \t| %10s \t| %10.2f \t|\n", max_rno, max_name, max_perc);

	fclose(fp);
}

/*
 * Output:
 * Enter no. of Students: 5
 * Enter Student 1 Details (Roll No, Name, Percentage): 1 Badal 89
 * Enter Student 2 Details (Roll No, Name, Percentage): 2 Mandar 88
 * Enter Student 3 Details (Roll No, Name, Percentage): 3 Swara 90
 * Enter Student 4 Details (Roll No, Name, Percentage): 4 Ayesha 95
 * Enter Student 5 Details (Roll No, Name, Percentage): 5 Shyam 87
 * Enter Roll No to search: 3
 * Student Found...
 *
 * Student having the highest percentage is: 
 * Roll No 	       Name 	 Percentage
 * ====================================================
 * |         4 	|     Ayesha 	|      95.00 	|
 *
 */
