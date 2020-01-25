ATM:main.c
	gcc -c payment3.c -o payment3.o
	ar rsc payment3.a payment3.o
	gcc -c main.c -o main.o
	gcc -o main main.o -L. -l_payment2
	ATM.exe