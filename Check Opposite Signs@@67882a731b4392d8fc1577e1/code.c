// Your code here...
#include <stdio.h>
int main (){
    int one ;
    int two; 
    scanf("%d", &one);
    scanf("%d" , &two);
    if ((one>0 && two <0)||( one<0 && two>0)){
        printf("True");
    }
    else{
        printf("False");
    }
}