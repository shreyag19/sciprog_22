#include <stdio.h>

/*greatest common divisor of 2 numbers
*/

int iterativeGCD(int a, int b);
int recursiveGCD(int a, int b);

int main(){

    int a, b, ierror;

    printf("Enter the two positive integers\n");
    
    ierror = scanf("%d %d", &a,&b);
    if (ierror!=2){
        printf("Please enter two integers\n");
        return 1;
    }
    
    // code will not run if the numbers entered are not positive.
    if (a<=0 || b<=0){
        printf("These numbers are not positive\n");
        return 1;
    }

    printf("The Greatest Common Divisor of %d and %d using iterative GCD : %d\n", a,b,iterativeGCD(a,b));
    printf("The Greatest Common Divisor of %d and %d using recursive GCD : %d\n", a,b,recursiveGCD(a,b));



    return 0;
}

int iterativeGCD(int a, int b){
    int temp;
    while((b!=0)){
        temp = b;
        b = a%b;  //assigning value of a to b
        a = temp;
    }
    return a;


}


int recursiveGCD(int a, int b){
    if (b==0){
        return a;
    }
    else {
        // recalling the function
        return(recursiveGCD(b,a%b));
    }

}