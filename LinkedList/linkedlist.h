#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
 #include <stdio.h>
 #include <stdlib.h>
 typedef struct list{


 }ST_list;
typedef struct node{

node* next;
}node;
  char createList(ST_list *list);

	void insertToList(node *listHead, unsigned char position, int data);

  void deleteFromList(node *listHead, unsigned char position, int* data);

  node* searchIntoList(node *listHead, int data);
/*
  void sortList(node *listHead);	//Bonus
  void reverseList(node *listHead);	//Bonus
*/

  #endif
