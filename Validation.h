#ifndef VALIDATION_H
#define VALIDATION_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

/*checks if given string is in the right size*/
int isStrValid(char* str, int size, int charType);

int isDateValid(char* str);
/*checks if an array is in its full capacity*/
int isArrayFull(void* ptr);

#endif //VALIDATION_H
