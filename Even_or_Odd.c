#include<stdio.h>
#include<math.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x%2==0) {
        printf("Even");
    } else {
        printf("Odd");
    }
    return 0;
}