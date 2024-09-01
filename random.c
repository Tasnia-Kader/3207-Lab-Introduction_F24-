#include "random.h"
#include <stdio.h>
#include <stdlib.h>

char randchar()
{
    // Generate rand num from A (65) to Z (90):
    // 0 <= rand() % 26 <= 25; 65 <= rand() % 26 + 65 <= 90

    int integer = rand() % 26 + 65;

    return (char)integer;
}