#include <stdio.h>
#include <stdlib.h>


void hanoi (int n, int source, int destination, int inter)
{

    if (n==1)
    {
        printf("Move disc from %d to %d\n", source, destination);
    }
    else
    {
        // recalling the function for (n-1) discs from source to inter
        hanoi(n-1,source,inter,destination);
        printf("Move disc from %d to %d\n",source, destination);
        // recalling the function for (n-1) discs from inter to destination
        hanoi(n-1,inter,destination,source);
    }

}