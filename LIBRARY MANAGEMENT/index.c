#include<stdio.h>
int main(){
    int i , n;

    printf("Enter Total number of borrower : ");
    scanf("%d",&n);

    int book[n];

    for(i=0; i<n; i++){
        printf("borrower %d: " ,i+1);
        scanf("%d",&book[i]);
    }

    printf("Books assigned total :\n ");
    for(i=0; i<n; i++){
        printf("borrower %d  : %d books\n",i+1,book[i]);
    }

    int sum =0 ;
    for(i=0; i<n; i++){
        sum += book[i];
    }
    printf("Total number of books sold : %d\n" ,sum);

    int NotBorr = 0;
     for(i=0; i<n; i++){
        if(book[i] == 0){
            NotBorr += 1;
        }
    }

    printf("no of borrower who do not purchased book : %d" , NotBorr);
    
}