// //Q.  Write a program to find all duplicate elements present in an array.
// #include<stdio.h>
// int main(){
//     int arr[5],i,j;

//     printf("enter array element :");
//     for(i=0; i<5; i++){
//         scanf("%d", &arr[i]);
//     }

//     printf("Array");
//     for(i=0; i<5; i++){
//         printf(" %d ",arr[i]);
//     }

//     for(i=0; i<5; i++){
        
//         for(j =0; j<5; j++){
//        if (arr[i]<=arr[j+1] && arr[i]>=arr[j+2])
//        {
//         arr[i] = i+1;
//        }
//        printf("%d" , arr[i]);
       
//     }


//     }
// }



#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN) {
        printf("Second largest element does not exist.");
    } else {
        printf("Second Largest = %d", secondLargest);
    }

    return 0;
}