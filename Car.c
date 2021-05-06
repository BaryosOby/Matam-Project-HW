#include "Car.h"
#include <string.h>
#include <stdio.h>

/*creates new list of cars*/
int createCarList(Car* carList, int size){
    int i;
    for(i = 0; i<size; i++){
        strcpy(carList[i].chassisNum, "EMPTY");
        strcpy(carList[i].color, "EMPTY");
        strcpy(carList[i].licenseNum, "EMPTY");
        strcpy(carList[i].manufacturer, "EMPTY");
        strcpy(carList[i].chassisNum, "EMPTY");
        carList[i].manufactorYear = 0;
        carList[i].onRoadSince = 0;
        carList[i].priceFromSupplier = 0;
        carList[i].currentPrice = 0;
        carList[i].velocity = 0;
    }

    return 1;
}



