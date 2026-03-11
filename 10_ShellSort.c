
#include<stdio.h>

int main(){

    int a[] = {5,99,23,12,0,78,56,69};
    int n = 7 , i , j , temp, gap ;

    printf("The array before shell sort is  :\n");
    
    for ( i =0 ; i<n ; i++)
        printf("%d\t",a[i]);
        
    for (gap = n / 2 ; gap > 0 ; gap = gap /2){

        for (i = gap; i < n ; i++){
        temp = a[i];
        j = i-gap;

        while(j >= 0 && temp < a[j]){
            a[j+gap] = a[j];
            j=j-gap;
        }
        a[j+gap] = temp ; 
        }
    }
    printf("\nTHe array after the shell sort : \n");
    for ( i =0 ; i<n ; i++)
        printf("%d\t",a[i]);

    return 0;
}
