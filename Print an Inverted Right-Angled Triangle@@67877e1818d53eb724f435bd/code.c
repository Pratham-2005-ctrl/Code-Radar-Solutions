#include<stdio.h>
int main(){
    int rows;
    printf("");
    scanf("%d",&rows);
    for (int i ;i>=rows ; i-- )
    { 
        int j =1;
        for (j<=i ; j++){
            printf("*");

        }
        printf("\n");
    }
}