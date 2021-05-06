#include "Validation.h"
#include <string.h>

/*checks if given string is in the right size*/
int isStrValid(char* str, int size, int charType) {
    int i, counter = 0;

    if (charType == 1) {  //only numbers are valid.
        for (i = 0; i < size; i++) {
            if (str[i] < '0' || str[i] > '9') {
                return 0;
            }
            counter++; //counts str length
        }

    } else if (charType == 2) { //only letters are valid
        for (i = 0; i < size; i++) {
            if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')&&(str[i] !='/')&&str[i]!= ' ') {
                return 0;
            }
            counter++;
        }
    }
        if ((str[i] != '\0') && (str[i] != '\n')) {
            return -1;
        }
        return 1;
}


int isDateValid(char* str) {
    if(str[2]!= '/' && str[])
}


/*checks if an array is in its full capacity*/
int isArrayFull(void* ptr){}

