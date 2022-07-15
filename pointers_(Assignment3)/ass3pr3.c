#include <stdio.h>

void check(int num, int *even, int *prime, int *c);
int prime_check(int num);

int main(){
	int num, even=0, prime=0, three_or_seven=0;
	printf("Enter a number to check : ");
	scanf("%d",&num);
	
	check(num, &even, &prime, &three_or_seven);

	return 0;
}


void check(int num, int *even, int *prime, int *c){
	if((num % 2)==0)
		*even = 1;
	else if(prime_check(num) == 1)
		*prime = 1;
	else if(((num % 3) == 0) || ((num % 7) == 0))
		*c = 1;

	if(*even == 1)
		printf("%d is Even\n", num);
	
	else if(*prime == 1)
		printf("%d is Prime\n", num);
	else if(*c == 1)
		printf("%d is Divisible by 3 or 7\n", num);
}



int prime_check(int num){
	if((num == 1) || (num == 0))
		return 0;
	for(int i = 2; i <= num/2; i++){
		if((num%i) == 0)
			return 0;
	}
	return 1;
}
