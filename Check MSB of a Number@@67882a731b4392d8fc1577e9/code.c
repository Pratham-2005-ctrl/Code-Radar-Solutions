// Your code here...#include <stdio.h>
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num & (1 << (sizeof(int) * 8 - 1))) {
        printf("Set");
    } 
    else {
        printf("Not Set ",);
    }

    return 0;
}