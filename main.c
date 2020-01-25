#include "payment2.h"
ST_transaction transactionAll;

void main(void) {	
char contin;
do{
fillCardData(&transactionAll);
fillTerminalData(&transactionAll);
/**/
printf("Verifying Data from the server…\n");
/**/
checkAmount(&transactionAll);
saveTransactionIntoServer(&transactionAll);
printf("Do you want to continue (y/n)?:\n");
scanf("%c\n",&contin);
/**/
}while(contin == 'y');
}
