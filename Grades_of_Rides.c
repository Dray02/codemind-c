#include<stdio.h>

int main() {
    int x,y,z;
    scanf("%d%d%d", &x, &y, &z);
    if (x>50 && y>60 && z>100) {
        printf("10");
    } else if (x>50 && y>60 && z<=100) {
        printf("9");
    } else if (x<=50 && y>60 && z>100) {
        printf("8");
    } else if (x>50 && y<=60 && z>100) {
        printf("7");
    } else if (x>50 && y<=60 && z<=100 || x<=50 && y>60 && z<=100 || x<=50 && y<=60 && z>100) {
        printf("6");
    } else if (x<=50 && y<=60 && z<=100) {
        printf("5");
    }
    return 0;
}