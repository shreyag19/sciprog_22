#include <stdio.h>
#include <stdlib.h>

void hanoi (int n, int source, int destination, int inter);

int main()
{
    int h = 6;

    printf("Solution for %d discs\n",h);

    hanoi(h,1,3,2);
    return 0;
}