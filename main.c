#include "node.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
  // struct node *structPointer = malloc(sizeof(struct node));
  // (*structPointer).i = NULL;
  // (*structPointer).next = NULL;
  struct node *structPointer;
  int index;
  for(index = 0 ; index < 10 ; index ++)
  {
    structPointer = insert_front(structPointer,9 - index);
    print_list(structPointer);
  }
  return 0;
}
