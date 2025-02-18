// Your code here...   
#include <stdio.h>
int main (){
    int one ;
    scanf("%d", &one);
    if (one & 1){
        printf("set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}