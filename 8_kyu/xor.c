#include <stdio.h>
#include <stdbool.h>


static bool xor(bool a, bool b){
    return (bool)(a != b);
}

int main(void){
    printf("xor(0, 0)=%d\n", (int)xor(0, 0));
    printf("xor(0, 1)=%d\n", (int)xor(0, 1));
    printf("xor(1, 0)=%d\n", (int)xor(1, 0));
    printf("xor(1, 1)=%d\n", (int)xor(1, 1));

    // printf("xor(5, 7)=%d\n", (int)xor(5, 7));

    printf("\nFinish\n");
}
