#include "Validation.h"


/*checks if given string is in the right size*/
int isStrValid(char* str, int size, int charType) {
    int i, counter = 0;
    switch (charType) {
        case 1:
            for (i = 0; i < size; i++) {
                if (str[i] < '0' || str[i] > '9') {
                    return 0;
                }
                counter++; //counts str length
            }

        case 2:
            for (i = 0; i < size; i++) {
                if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z') && str[i] != ' ') {
                    return 0;
                }
                counter++;
            }
            break;

        case 3: /*check if date is in the right format*/
            for (i = 0; i < size; i++) {
                if (i==1||i==8|i==9){
                    if (str[i]<'0'||str[i]>'9'){
                        return 0;}
                    }
                if (i==2 ||i ==5) {
                    if (str[i] != '/') {
                        return 0;}
                    }
                }
                if (str[0] < '0' || str[0] > '3') {
                    return 0;
                }
                if (str[0]=='3'){
                    if (str[1]!='0' &&str[1]!= '1'){
                        return 0;
                    }
                }
                if (str[3]<'0'||str[3]>'1'){
                return 0;
                }
                if (str[3]=='0'){
                    if ((str[4])=='0'){
                        return 0;
                    }
                }
                if (str[6]!='2'){
                    return 0;}
                if (str[7]!='0'){
                    return 0;}
            break;
    }

        if ((str[i] != '\0') && (str[i] != '\n')) {
            return -1;
        }
        return 1;
    }




/*checks if an array is in its full capacity*/
//int isArrayFull(void* ptr){}

