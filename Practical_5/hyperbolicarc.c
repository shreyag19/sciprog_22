#include<stdio.h>
#include<math.h>

double arctanh1(const double x, const double delta); //Function for Maclaurin approximation

double arctanh2(const double x); //Function for natural log algorithm

int main(){
	double delta,x;   //Declaring variables
	printf("Enter the precision for Maclaurin series\n");
	scanf("%lf",&delta);

	int length=1000;   
	double tan1[length]; //Stores results for arctanh1
	double tan2[length]; //Stores results for arctanh1

	int j=0; //Array index
	x=-0.9;
	while(x<=0.9 && j<length){
		tan1[j]=arctanh1(x,delta); //Calling arctanh1 function 
		tan2[j]=arctanh2(x); ////Calling arctanh2 function 
		printf("The difference at x=%lf between them is %.10lf\n",x,fabs(tan1[j]-tan2[j]));
		j++;
		x= x + 0.01; //sampling for -0.9 to 0.9
	}

	return 0;
}

double arctanh1(const double x, const double delta){
	double arcTan=0;
	double elem, val;
	int n=0;
	do{   //Applying Maclaurin approximation formula
		val=2*n+1;
		elem=(pow(x,val))/val;
		arcTan+=elem;
		n++;
	}while(fabs(elem)>=delta);

	return arcTan;
}

double arctanh2(const double x){
	return(log(1+x)-log(1-x)/2);  //Returning natural log formula
}
