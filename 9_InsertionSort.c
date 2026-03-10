


#include<stdio.h>

int main(){
    int A[] = {7,30,5,55,8,1,12};
    int n = 7 , i , j , temp;
    
    printf("The original array is :\n");
    for( i = 0 ;i<n ; i++){
        
        printf("%d\t", A[i]);
    }
    
    for (i = 1 ; i < n ; i++){
        temp = A[i];
        j = i-1;
        
        while( j >=0 && temp<A[j]){
            A[j+1] = A[j];
            j = j-1;
        }
        
        A[j+1] = temp;
    }
    
    printf("\nThe array after insertion sort is :\n");
    for( i = 0 ;i<n ; i++){
        
        printf("%d\t", A[i]);
    }
    
    return 0 ;
}