#ifndef CLIENT_H
#define CLIENT_H
#define M 8000

typedef struct{

    char name[21];
    char surname[21];
    char id[10];
    char rentedCarLicense[8];
    char rentDate[11];
    char rentHour[6];
    float PriceForDay;
}Client;

/*creates new list of clients*/
Client* createClientList(Client* clientList, int size);


/*help function to call in addNewClient*/
int appendClientToList(Client client);


#endif //CLIENT_H
