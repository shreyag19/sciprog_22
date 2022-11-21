#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int factorial(int n);

int main(void){
	int i,order; //loop variable an input order variable
	double e, *terms;
//Enter the polynomial
	printf("Please enter the required polynomial order\n");
	if(scanf("%d", &order)!=1){
		printf("Did not enter a number");
		return 1;
	}
//Allocate space for terms array
	terms=malloc(order*sizeof(double));
// the coefficient of each term in the taylors series is coded by terms
	for(i=0;i<order;i++){
		terms[i]=1.0/(double)factorial(i+1);
		printf("e term for order %d is %1.14lf\n",order,terms[i]);
	}
	e=1.0;
	for(i=0;i<order;i++){
		e=e+terms[i];
	}

	free(terms);

	printf("\n\ne is estimated as %.14lf, with difference %.14lf\n", e, e-exp(1.0));

	return 0;
}

int factorial(int n){
	if(n<0){
		printf("Error: It should be a positive value.");
		return(-1);
	}
	else if(n==0){
		return 1;
	}
	else{
		return(n*factorial(n-1)); //Recursive function
	}
}

