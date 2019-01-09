#include "header.h"
#include "func.h"

int rand_num(int a[][size])//use two for loop putting random number into array
{
    int i,j;

    for(i=0;i<size;i=i+1){
        for(j=0;j<size;j=j+1){
            a[i][j]=rand()%4+1;
        }
    }
}
void printf_array(int a[][size]){//print array
   int i,j;

    for(i=0;i<size;i=i+1){
        for(j=0;j<size;j=j+1){
           printf("%d",a[i][j]);
        }
        printf("\n");
    }


}
