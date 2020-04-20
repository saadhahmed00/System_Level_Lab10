/* reverse.c */
#include<stdio.h>

#define N 50

int main(){
	int arr[N], i =0; 
	char ch;  

	printf("Enter a message: ");

	/* Put code here to get input from user by using getchar() */

	while((i<N)&&((ch=getchar()) != '\n')){
			*(arr + i) = ch;
			i++;

	}
	

	printf("Reversal is: ");

	/* Put code here to print out the reversal by using putchar()*/ 

	while(i>=0){
		putchar(*(arr + i-1));
		i--;
	}

	printf("\n"); 

	return  0;

}