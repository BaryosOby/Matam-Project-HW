#ifndef CAR_H
#define CAR_H
#define N 10000

typedef struct{
    char licenseNum[8];
    char chassisNum[6];
    char manufacturer[11];
    char model[11];
    char color[8];
    int manufactorYear;
    int onRoadSince;
    double priceFromSupplier;
    double currentPrice;
    int velocity;

}Car;

/*creates new list of cars*/
int createCarList(Car* carList, int size);


#endif //CAR_H
