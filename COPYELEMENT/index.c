// write a  program to copy all elements of one array to another array 

#include<stdio.h>
int main(){
int arr1[5],arr2[5],i ;

printf("enter element of array :");
for(i=0; i<5; i++){
    scanf("%d" , &arr1[i]);
}

printf("original array Arr1 : ");
for(i=0; i<5; i++){
    printf("%d " ,arr1[i]);
}
 // copying array into arr2
for(i=0; i<5; i++){
    arr2[i] = arr1[i];
}
printf("\ncopied array Arr2 : ");
for(i=0; i<5; i++){
    printf("%d " ,arr2[i]);
}
}