#include<stdio.h>
#include<conio.h>
int main(){
    int i, j, num;

    printf("Enter the number of Rows : ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++){ 
        printf("\n");
        for (j = 0; j < num - i; j++)
            printf(" ");
        for (j = 0; j < 2 * i - 1; j++)
            printf("*");
    }
    getch();
    return 0;
}