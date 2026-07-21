// wirte a program to find frequency of each element in an array
#include<stdio.h>
int main(){
    int arr[5],i ,j;

    printf("Enter element of Array :");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray : ");
    for( i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        int count =0;
        for ( j = 0; j<5; j++) 
        {
            if (arr[i] == arr[j])
            {
                
            count = count+1;
            }  
        }
        printf("\n");
        printf("%d occurs %d times\n", arr[i], count);
    }
}