



#include<stdio.h>
int gcd (int x, int y){
    if(x%y==0){
        return y;
    }
    else{
        return gcd(y,x%y);
    }
}
int main(){
    int x, y;
    printf("Enter any two numbers: ");
    scanf("%d%d",&x,&y);
    int result = gcd(x,y);
    printf("The gcd of the given numbers is : %d",result);
    return 0;
}