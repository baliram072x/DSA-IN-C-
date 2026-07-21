//Q.  Write a program to find all duplicate elements present in an array.
#include<stdio.h>
int main(){
    int arr[5],i,j;

    printf("enter array element :");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array");
    for(i=0; i<5; i++){
        printf(" %d ",arr[i]);
    }

    for(i=0; i<5; i++){
        
        for(j = i+1; j<5; j++){
       if (arr[i] == arr[j])
            {
                
                printf("\n%d is duplicate",arr[i]);
                break;
                
             }  
             
            }
    }

}
