// https://www.codewars.com/kata/57f6ad55cca6e045d2000627
#include <stdio.h>
#include <limits.h>
#include <iso646.h>
#include <stdbool.h>
#include <assert.h>

#define LEN 6

static int isqrt(int n, int *answer){
    assert(n >= 0);
    assert(answer != NULL);
    assert(n != INT_MAX);
    if (n == 0){
        *answer = 0;
        return true;
    }
    int x1 = n;
    int x2 = 1;
    while (x1 > x2) {
        x1 = (x1 + x2) / 2;
        x2 = n / x1;
    }
    *answer = x1;
    return (x1 == x2) and (n % x1 == 0);
}

static int* squareOrSquareRoot(int* array, int length)
{
    assert(array != NULL);
    assert(length >= 0);
    int koren;
    for (int i = 0; i < length; i++){
        if (isqrt(array[i], &koren)){
            array[i] = koren;
        }
        else{
            array[i] *= array[i];
        };
    }
    return array;
}

int main(void){
    int array[LEN] = {4, 3, 9, 7, 2, 1};
    squareOrSquareRoot(array, LEN);
    for (int i = 0; i < LEN; i++){
        printf("%d ", array[i]);
    }
    printf("\nSuccess\n");
}
