// Your code here...
#include <stdio.h>
int main(){
    int one;
    int two;
    scanf("%d", &one);
    scanf("%d" ,&two);
    if (one > 0 && two < 0){
        printf("True \n");
    }
    else if(one == 0 & two == 0){
        printf("True \n");

    }
    else{
        printf("False \n");
    }
    return 0;
}