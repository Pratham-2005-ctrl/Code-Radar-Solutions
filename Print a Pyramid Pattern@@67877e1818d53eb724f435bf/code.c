#include <stdio.h>
int main(){
    printf("");
    int rows ;
    scanf("%d" , &rows);
    for (int i=1 ; i<=rows ; i++ ){
        for( int space =1 ; space<=rows-1; space++){
            printf(" ");
        }
        for (int j =1;j<=(2*i - 1) ; j++ ){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}