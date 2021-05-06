#ifndef _SUPPLIER_H
#define _SUPPLIER_H
#define K 50

typedef struct Supplier{
    char  id[11];
    char  name[6];
    char  phoneNumber[11];
    double pastTransactionsNumber;
    double pastTransactionsSum;
}Supplier;


/*creates new list of suppliers*/
int * createSupplierList(Supplier* supplierList, int size);



/*help function to call in addNewSupplier*/
int appendSupplierToList(Supplier supplier);

#endif