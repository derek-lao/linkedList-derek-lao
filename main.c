#include "node.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
  // struct node *structPointer = malloc(sizeof(struct node));
  // (*structPointer).i = NULL;
  // (*structPointer).next = NULL;

  printf("Testing insert_front "); printf("(Also testing print_list\n)");
  struct node *structPointer;
  int index;
  for(index = 0 ; index < 10 ; index ++)
  {
    structPointer = insert_front(structPointer,9 - index);
    printf("structPointer is %ld\n", structPointer);
    print_list(structPointer);
  }
  printf("\n");

  printf("Testing free_list\n");
  printf("List will be freed between the printing of this line and the printing of the next line\n");
  structPointer = free_list(structPointer);
  // printf("this version of my code actually should return the pointer to the first value in the list\n");
  printf("structPointer is %ld\n", structPointer);
  printf("\n");
  printf("Testing remove_node\n");
  printf("It is recommended to include print statements for the pointers as you go\n");
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 5);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 5);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 6);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 7);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 8);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  structPointer = insert_front(structPointer, 9);print_list_debug(structPointer);
  printf("\n");
  printf("The list is now: \n");
  print_list(structPointer);

  printf("going to call remove_node(structPointer, 9). The point of this test case is to test ");
  printf("removing repeated values from the start of the list, repeated values in the middle of the list, repeated values in the end of the list\n");
  structPointer = remove_node(structPointer, 9);
  printf("called remove_node(structPointer, 9). Should return a pointer to the pointer of 8\n");
  printf("structPointer is %ld\n", structPointer);
  printf("The list is now: \n");
  print_list(structPointer);
  return 0;
}
