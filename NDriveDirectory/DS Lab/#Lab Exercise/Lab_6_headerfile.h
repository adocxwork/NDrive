#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int *rdm(int n)
{
    int *arr=(int *)malloc(n*sizeof(int));
    int i;
    printf("\nvalue of time(NULL)= %u\n",time(NULL));
    srand(time(NULL));// returns the time from 1 Jan 1970 in seconds...
    for(i=0;i<n;i++)
        arr[i]=rand()%100;
    return arr;

}
