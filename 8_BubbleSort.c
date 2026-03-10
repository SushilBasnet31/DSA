



#include<stdio.h>
void bubbleSort(int n, int arr[]){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: \n",n);
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(n,arr);
    printf("The array after bubble sort is: ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}