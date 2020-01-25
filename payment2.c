#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
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
ST_transaction transactionAll;
int status_flag=0;


void fillCardData(ST_transaction *transaction)
{
	printf("Please Enter Card Data:\n");
	fflush(stdout);
	printf("Please Enter the Card Holder Name:\n");
	/**/fflush(stdout);
	fflush(stdin);
	scanf ("%[^\n]%*c",transaction->cardHolderData.cardHolderName);
	fflush(stdout);
	printf("Please Enter the Primary Account Number:\n");
	/**/fflush(stdout);
	scanf("%s",transaction->cardHolderData.primaryAccountNumber);
	//printf("%s\n",transaction->cardHolderData.primaryAccountNumber);
	printf("Please card Expiry Date:\n");
	/**/fflush(stdout);
	scanf("%s",transaction->cardHolderData.cardExpirationDate);
	//printf("%s\n",transaction->cardHolderData.cardExpirationDate);
}
void checkAmount(ST_transaction *transaction)
{
strcpy(transaction->transData.maxTransAmount,"5000.00");
printf("%s\n",transaction->transData.maxTransAmount);
if (strcmp (transaction->transData.maxTransAmount,transaction->transData.transAmount) >= 0)
    {
		printf("Approved the valeo is less than 500000\n");
		
	status_flag++;
	}
	else{printf("Declined the valeo is More than 500000\n");
	//exit(0);
	}
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
{
/*
in this part i will make the parts i  need from the string integers 
for EX:
12/10
we will take first char (1) and sub from it 48 
then multplied by 10
then we will take (2) and sub from it 48 
then summed with the first part

this will be repated in the all numbers 
*/	
int compMonth1,compMonth2,compyear1,compyear2;
compMonth1=(transaction->cardHolderData.cardExpirationDate[0])-'0';
compMonth1 *= 10;
compMonth1 +=(transaction->cardHolderData.cardExpirationDate[1])-'0';

compyear1=(transaction->cardHolderData.cardExpirationDate[3])-'0';
compyear1 *= 10;
compyear1 +=(transaction->cardHolderData.cardExpirationDate[4])-'0';

compMonth2=(transaction->transData.transactionDate[3])-'0';
compMonth2 *= 10;
compMonth2 +=(transaction->transData.transactionDate[4])-'0';

compyear2=(transaction->transData.transactionDate[8])-'0';
compyear2 *= 10;
compyear2 +=(transaction->transData.transactionDate[9])-'0';
printf("%d %d %d %d \n",compMonth1,compyear1,compMonth2,compyear2);
if(compyear2 < compyear1)
{
	printf("Approved Date\n");
	
}
else if(compyear2 == compyear1)
{if(compMonth2<compMonth1)
{
	printf("Approved Date\n");
}else{
	printf("Declined\n"); 
}	
}else{
	printf("Declined\n");
	}
}
void saveTransactionIntoServer(ST_transaction *transaction)
{ST_transaction All_Operations_Approved[255];
checkExpiryDate(&transactionAll);
checkBalance(&transactionAll);
/*
that part of code i have not got it Right,i will try to get it right 
*/

}
void checkBalance(ST_transaction *transaction)
{unsigned int flag=0;
ST_accountBalance Data_Base[MAX]={
{"0100.00","123456789"},
{"6000.00","234567891"},
{"1500.12","456789123"},	
{"3250.25","567891234"},
{"0500.00","258649173"},
{"2100.00","654823719"},
{"0000.00","971362485"},
{"0001.00","793148625"},
{"0010.12","123123456"},
{"0000.55","456789321"}
};
for(int i=0;i<MAX;i++){
if(strcmp(Data_Base[i].primaryAccountNumber,
transaction->cardHolderData.primaryAccountNumber) ==0   
&& 
strcmp(transaction->transData.transAmount,Data_Base[i].balance) <= 0)
{
	
	flag++;
}

}
if(flag > 0)
{
	printf("Balance Approved\n");
status_flag++;
}else{
	printf("Balance Declined\n");
	//exit(0);
	}


}


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
