#include <stdio.h>
typedef struct ST_cardData
{
	unsigned char cardHolderName[25];
	unsigned char primaryAccountNumber[19];
	unsigned char cardExpirationDate[6];
}ST_cardData;

typedef struct ST_terminalData
{
		unsigned char transAmount[8];
		unsigned char maxTransAmount[8];
		unsigned char transactionDate[11];
}ST_terminalData;

typedef enum EN_transStat
{
	DECLINED,
	APPROVED
}EN_transStat;

typedef struct ST_serverData
{
		EN_transStat transactionStatus;
		unsigned int receiptReferenceNumber;
	}ST_serverData;

typedef struct ST_transaction
{
	ST_cardData cardHolderData;
	ST_terminalData transData;
	ST_serverData transResponse;
}ST_transaction;

typedef struct ST_accountBalance
{
	unsigned char balance[8];
	unsigned char primaryAccountNumber[19];
}ST_accountBalance;




void fillCardData(ST_transaction *transaction);

void checkAmount(ST_transaction *transaction);

void fillTerminalData(ST_transaction *transaction);

void checkExpiryDate(ST_transaction *transaction);

void saveTransactionIntoServer(ST_transaction *transaction);

void checkBalance(ST_transaction *transaction);




void fillCardData(ST_transaction *transaction)
{
	printf("Please Enter Card Data:\n");
	fflush(stdout);
	printf("Please Enter the Card Holder Name:\n");
	/**/fflush(stdout);
	scanf("%s",transaction->cardHolderData.cardHolderName);
	fflush(stdout);
	printf("%s\n",transaction->cardHolderData.cardHolderName);
	fflush(stdout);
	printf("Please Enter the Primary Account Number:\n");
	/**/fflush(stdout);
	scanf("%s",transaction->cardHolderData.primaryAccountNumber);
	printf("%s\n",transaction->cardHolderData.primaryAccountNumber);
	printf("Please card Expiry Date:\n");
	/**/fflush(stdout);
	scanf("%s",transaction->cardHolderData.cardExpirationDate);
	printf("%s\n",transaction->cardHolderData.cardExpirationDate);
}
void checkAmount(ST_transaction *transaction)
{



}

void fillTerminalData(ST_transaction *transaction)
{

printf("Please Enter Terminal Data:\n");
printf("Please Enter the transaction Amount:\n");
/**/
scanf("%s",transaction->transData.transAmount);
printf("%s",transaction->transData.transAmount);

printf("Please Enter transaction Date:\n");
scanf("%s",transaction->transData.transactionDate);
printf("%s",transaction->transData.transactionDate);

}
void checkExpiryDate(ST_transaction *transaction)
{int compMonth1,compMonth2,compyear1,compyear2;
compMonth1=(transaction->cardHolderData.cardExpirationDate[0])-'0';
compMonth1 *= 10;
compMonth1 +=(transaction->cardHolderData.cardExpirationDate[1])-'0';

compyear1=(transaction->cardHolderData.cardExpirationDate[3])-'0';
compyear1 *= 10;
compyear1 +=(transaction->cardHolderData.cardExpirationDate[4])-'0';

compMonth2=(transaction->transData.transactionDate[3])-'0';
compMonth2 *= 10;
compMonth2 +=(transaction->cardHolderData.cardExpirationDate[4])-'0';

compyear2=(transaction->cardHolderData.cardExpirationDate[9])-'0';
compyear2 *= 10;
compyear2 +=(transaction->cardHolderData.cardExpirationDate[10])-'0';
printf("%d %d %d %d \n",compMonth1,compMonth2,compyear1,compyear2);
}
void saveTransactionIntoServer(ST_transaction *transaction)
{




}
void checkBalance(ST_transaction *transaction)
{




}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
ST_transaction transactionAll;
fillCardData(&transactionAll);
fillTerminalData(&transactionAll);
/**/
printf("Verifying Data from the server…\n");
/**/
checkExpiryDate(&transactionAll);
printf("Do you want to continue (y/n)?:\n");
/**/
	return 0;
}
