#include "FillField.h"

#define CLEANBUFFER   while ((getchar()) != '\n');

int fillFieldStr(char* str, int size, int charType) {
    char userInput[24];/*larger than the longest string required*/
    int res;
    while (1){

        fgets(userInput, 24, stdin);
        res = isStrValid(userInput,size,charType);
        if(res==1) {
            strcpy(str, userInput);
            return 1;
            }
        else if(res ==-1) {
            fflush(stdin);
            }
        }
    }

/* using fillFieldStr function to get a numeric input from the user
 and cast the output into an int*/
int fillFieldInt(int * field, int size){
    char userInput[24];
    fillFieldStr(userInput, size, 1);
    *field = atoi(userInput);
    return 1;
}
/* using fillFieldStr function to get a numeric input from the user and cast the output
 * into a double*/
int fillFieldDouble(double * field, int size){
    char userInput[24];
    fillFieldStr(userInput, size, 1);
    *field = atof(userInput);
    return 1;
}
int fillFieldDate(char* field){
    char userInput[13];
    fillFieldStr(userInput,11,2);


}




