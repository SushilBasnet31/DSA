





#include<stdio.h>
void binarySearch(int A[], int left, int right, int key){
    int mid = (left + right) / 2;
    if(left > right){
        printf("\nThe number is not found");
        return;
    }
    if(key == A[mid]){
        printf("\nThe number is found");
    }
    else if(key < A[mid]){
        binarySearch(A, left, mid - 1, key);
    }
    else{
        binarySearch(A, mid + 1, right, key);
    }
}
int main(){
    int A[] = {10 , 19 , 35, 46, 59, 64, 93 , 102};
    int key;
    printf("Enter the number to search: ");
    scanf("%d",&key);
    binarySearch(A, 0, sizeof(A) / sizeof(int) - 1, key);
    return 0;
}


