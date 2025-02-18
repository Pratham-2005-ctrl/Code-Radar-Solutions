// Your code here...#include <stdio.h>
int main (){
    int one ;
    scanf("%d", &one);
    if (one & (1 << (sizeof(int) * 8 - 1))){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}