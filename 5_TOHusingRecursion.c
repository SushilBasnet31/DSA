



#include<stdio.h>
void TOH(int N, char A, char B, char C) {
    if (N > 0) {
        TOH(N - 1, A, C, B);
        printf("\nMove disk %d from %c to %c", N, A, B);
        TOH(N - 1, C, B, A);
    }
}
int main() {
    int N;
    printf("Enter the number of disks: ");
    scanf("%d", &N);
    TOH(N, 'A', 'B', 'C');
    return 0;
}