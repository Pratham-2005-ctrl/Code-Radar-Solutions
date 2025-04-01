#include<stdio.h>
int main(){
    int rows;
    printf("");
    scanf("%d",&rows);
    for (int i=rows;i<=rows ; i-- )
    { 
        for (int j = 1;j<=i;j=j+1)
        {
            printf("* ");
            
        }
        printf("\n");
    }
    return 0;
}