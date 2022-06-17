// https://www.codewars.com/kata/5861d28f124b35723e00005e/train/c
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


static bool zero_fuel(double distance_to_pump, double mpg, double fuel_left){
    assert(distance_to_pump >= 0);
    assert(mpg > 0);
    assert(fuel_left >= 0);
    return fuel_left * mpg >= distance_to_pump;
}


int main(void){
    printf("Is it possible? %d\n", zero_fuel(50.0, 25.0, 2.0));

    printf("\nFinish\n");
}
