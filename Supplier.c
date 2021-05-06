#include "Supplier.h"
#include <string.h>

/*creates new list of suppliers*/
int * createSupplierList(Supplier* supplierList, int size){
    int i;
    for(i = 0; i<K; i++){
        strcpy(supplierList[i].id, "EMPTY");
        strcpy(supplierList[i].name, "EMPTY");
        strcpy(supplierList[i].phoneNumber, "EMPTY");
        supplierList[i].pastTransactionsNumber = 0;
        supplierList[i].pastTransactionsSum = 0;
    }

    return 1;
}



/*help function to call in addNewSupplier*/
int appendSupplierToList(Supplier supplier){}

