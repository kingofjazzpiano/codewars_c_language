// https://www.codewars.com/kata/57a5c31ce298a7e6b7000334/train/c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <iso646.h>


/*
** Преобразует двоичное число в десятичное число. Если предан NULL, длина строки
** больше 32 или в строке есть символы, отличные от '0' и '1', то программа
** завершается аварийно с вызовом abort();
*/
static unsigned bin_to_decimal(const char *bin){
    assert(bin != NULL);
    size_t size = strlen(bin);
    assert(size <= sizeof(unsigned) * __CHAR_BIT__);
    unsigned decimal = 0;
    for (int i = size - 1; i >=0; i--){
        assert(bin[i] == '0' or bin[i] == '1');
        decimal |= (bin[i] - '0') << (size - i - 1);
    }
    return decimal;
}


int main(void){
    printf("bin_to_decimal=%u\n", bin_to_decimal("01111")); // 15 in decimal
    printf("bin_to_decimal=%u\n", bin_to_decimal("100000")); // 32 in decimal
    printf("bin_to_decimal=%u\n", bin_to_decimal("0")); // 0 in decimal
    printf("bin_to_decimal=%u\n", bin_to_decimal("")); // 0 in decimal
    // bin_to_decimal(NULL);

    printf("bin_to_decimal=%ld\n", strtol("-101", NULL, 2));

    printf("\nSuccess\n");
}
