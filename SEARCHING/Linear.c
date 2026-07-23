// search element by linear search 

#include<stdio.h>

int main(){
    int i,key;
    int arr[5] = {30,54,78,98,34};

    printf("Enter key :");
    scanf("%d" ,&key);

    for(i=0; i<5; i++){
        if (arr[i] == key)
        {
            printf("%d found at index %d",key,i);
            break;
        }
        
    }
        if(i == 5)
         {
            printf("Element not found");
         }

         return 0;
    
}