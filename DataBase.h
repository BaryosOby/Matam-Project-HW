#ifndef DB_H
#define DB_H
#include "Car.h"
#include "Client.h"
#include "Supplier.h"
#include "Validation.h"
#include "FillField.h"

Car carList[N];
Supplier supplierList[K];
Client clientList[M];

/*adds new car to the cars list[index]. return 1 if succeed, 0 if failed*/
int addNewCar();

/*help function to call in addNewCar*/
int appendCarToList(Car car);

/*adds new supplier to the suppliers list[index]. return 1 if succeed, 0 if failed*/
int addNewSupplier();

/*adds new client to the clients list[index]. return 1 if succeed, 0 if failed*/
int addNewClient();

/*returns the number of cars from the list with a given capacity*/
int carNumberWithGivenCapacity(Car* carList, int cap);

/*gets license number of a car and delete it from the list. returns 1 if succeed, 0 if failed. */
int deleteCar(Car* carList, char* license);

/*deletes all the cars from the list. returns 1 if succeed, 0 if failed.*/
int deleteAllCars(Car* carList);

/*gets client id and delete it from the list. returns 1 if succeed, 0 if failed. */
int deleteClient(Client* clientList, char* id);

/*deletes all the clients from the list. returns 1 if succeed, 0 if failed.*/
int deleteAllClients(Client* carList);

/*returns the number of clients that rents a car with a given manufacturing year*/
int clientNumberWithGivenCarYear(int year, Car* carList, Client* clientList);

/*return array containing the id of the 3 suppliers with the highest pastTransactionsSum*/
char* threeGreatestSuppliers(Supplier* supplierList);

/*gets supplier's name and deletes it from the list.return 1 if succeed else return 0 */
int deleteSupplier(Supplier* supplierList,char* name );

/*deleting all the suppliers from the suppliers list. return 1 if succeed else return 0 */
int deleteAllSuppliers(Supplier* supplierList);

#endif
