


#include<stdio.h>
int fib(int p){
    if(p==1||p==2){
        return 1;
    }
    else{
        return fib(p-1)+fib(p-2);
    }
}
int main(){
    int p;
    printf("Enter the position in the fibonacci sequence : ");
    scanf("%d",&p);
    int f = fib(p);
    printf("The %dth element in the fibonacci sequence is %d", p ,f);
    return 0;
}