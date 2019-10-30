#include "node.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
  // struct node *structPointer = malloc(sizeof(struct node));
  // (*structPointer).i = NULL;
  // (*structPointer).next = NULL;

  printf("Testing insert_front\n");
  struct node *structPointer;
  int index;
  for(index = 0 ; index < 10 ; index ++)
  {
    structPointer = insert_front(structPointer,9 - index);
    printf("structPointer is %ld\n", structPointer);
    print_list(structPointer);
  }
  printf("\n");

  printf("Testing free_list");
  printf("List will be freed between the printing of this line and the printing of the next line\n");
  structPointer = free_list(structPointer);
  // printf("this version of my code actually should return the pointer to the first value in the list\n");

  printf("structPointer is %ld\n", structPointer);
  return 0;
}
