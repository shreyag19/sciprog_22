#include<stdio.h>
#include<stdlib.h>
void fibonacci(int *a, int *b); //Inputs are pointers
/*Input arguments are f(n-1) and f(n-2) and on exit,
 * they will return value of f(n) and f(n-1)*/
int main(){
	int n,i;
	int f1=1, f0=0;

	printf("Enter a positive integer n\n");
	scanf("%d", &n);

	if(n<1){
		printf("The number is not positive\n"); //Checking for a positive integer
		exit(1);
	}

	printf("The fibonacci sequence is:\n");
	printf("%d, %d,", f0,f1);

	for(i=2;i<=n;i++){ //Looping for f0 and f1
		fibonacci(&f1,&f0);
		printf("%d, ",f1);

		if(((i+1)%10)==0) printf("\n");
	}
	return 0;
}

void fibonacci(int *a, int *b){
	int next;
	next=*a+*b; //*a=f(n-1), *b=f(n-2), next=f(n)
	*b=*a;  //*a=f(n), *b=f(n-1)
	*a=next;
}

