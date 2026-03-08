





#include<stdio.h>
void binarySearch(int a[], int k){
    int key=k , left= 0, right = (sizeof(a)/sizeof(int))-1 , mid , found=0;
 
    while(left<=right){                     
        mid = (left+right )/2;
        if(key==a[mid]){
            found= 1;
            break;
        }
        else if(key < a[mid])
        right = mid-1;
        else
        left = mid+1;
    }
       
    if(found == 1)
    printf("The number is found");
    else 
    printf("The number is not found");
}

int main(){
    int a[] = {10 , 19 , 35, 46, 59, 64, 93 , 102 };
    int keyy;
    printf("Enter the key : ");
    scanf("%d",&keyy);
    
    binarySearch(a,keyy);
    
    return 0;
}
