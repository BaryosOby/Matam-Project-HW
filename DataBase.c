#include "DataBase.h"

/*help function to call in addNewCar*/
int appendCarToList(Car car){

}

/*adds new car to the cars list[index]. return 1 if succeed, 0 if failed*/
int addNewCar() {
    Car new_car;
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

    puts("please enter licence number (7 digits): ");
    fillFieldStr(&licenseNum, 7, 2);
    strcpy(new_car.licenseNum, licenseNum);

    puts("please enter chassis number (5 digits): ");
    fillFieldStr(&chassisNum, 5, 2);
    strcpy(new_car.chassisNum, chassisNum);

    puts("please enter manufacturer name (10 characters): ");
    fillFieldStr(&manufacturer, 10, 2);
    strcpy(new_car.manufacturer, manufacturer);

    puts("please enter model name (10 characters): ");
    fillFieldStr(&model, 10, 2);
    strcpy(new_car.model, model);

    puts("please enter car's color (7 characters): ");
    fillFieldStr(&color, 7, 2);
    strcpy(new_car.color, licenseNum);

    puts("please enter manufacturing year (4 digits): ");
    fillFieldInt(&manufactorYear, 4);
    new_car.manufactorYear = manufactorYear;

    puts("please enter ascension year (4 digits): ");
    fillFieldInt(&onRoadSince, 4);
    new_car.onRoadSince = onRoadSince;

    puts("please enter price from supplier (7 digits): ");
    fillFieldDouble(&priceFromSupplier, 7);
    new_car.priceFromSupplier = priceFromSupplier;

    puts("please enter current price (7 digits): ");
    fillFieldDouble(&currentPrice, 7);
    new_car.currentPrice = currentPrice;

    puts("please enter engine's velocity (4 digits): ");
    fillFieldInt(&velocity, 4);
    new_car.velocity = velocity;

    appendCarToList();
}

/*adds new supplier to the suppliers list[index]. return 1 if succeed, 0 if failed*/
int addNewSupplier(){}

/*adds new client to the clients list[index]. return 1 if succeed, 0 if failed*/
int addNewClient(){}

/*returns the number of cars from the list with a given capacity*/
int carNumberWithGivenCapacity(Car* carList, int cap){}

/*gets license number of a car and delete it from the list. returns 1 if succeed, 0 if failed. */
int deleteCar(Car* carList, char* license){}

/*deletes all the cars from the list. returns 1 if succeed, 0 if failed.*/
int deleteAllCars(Car* carList){}

/*gets client id and delete it from the list. returns 1 if succeed, 0 if failed. */
int deleteClient(Client* clientList, char* id){}

/*deletes all the clients from the list. returns 1 if succeed, 0 if failed.*/
int deleteAllClients(Client* carList){}

/*returns the number of clients that rents a car with a given manufacturing year.*/
int clientNumberWithGivenCarYear(int year, Car *carList, Client *clientList) {}

/*return array containing the id of the 3 suppliers with the highest pastTransactionsSum*/
char* threeGreatestSuppliers(Supplier* supplierList){}

/*gets supplier's name and deletes it from the list.return 1 if succeed else return 0 */
int deleteSupplier(Supplier* supplierList,char* name ){}

/*deleting all the suppliers from the suppliers list. return 1 if succeed else return 0 */
int deleteAllSuppliers(Supplier* supplierList){}
