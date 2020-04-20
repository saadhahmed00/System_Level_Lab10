/* reverse.c */
#include<stdio.h>

#define N 50

int main(){
	int arr[N];
	int *p = arr; 
	char ch;  

	printf("Enter a message: ");

	/* Put code here to get input from user by using getchar() */

	while((p-arr <N)&&((ch=getchar()) != '\n')){
			*p = ch;
			p++;

	}
	

	printf("Reversal is: ");

	/* Put code here to print out the reversal by using putchar()*/ 

	p--;
	while(p-arr >=0){
		putchar(*p);
		p--;
	}

	printf("\n"); 

	return  0;

}