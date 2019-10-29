#include<stdio.h>
#include<stdlib.h>
#include "node.h"

void print_list(struct node * subject)
{
  while(subject)
  {
    printf("%d ", (*subject).i);
    subject = (*subject).next;
  }
  printf("\n");
}
// Should take a pointer to a node struct and print out all of the data in the list

struct node * insert_front(struct node * subject, int data)
{
  struct node * p = malloc(sizeof(struct node));
  (*p).i = data;
  (*p).next = subject;
  return p;
}
// Should take a pointer to the existing list and the data to be added, create a new node and put it at the beginning of the list.
// The second argument should match whatever data you contain in your nodes.
// Returns a pointer to the beginning of the list.

struct node * free_list(struct node * subject)
{
  struct node * p;
  while(subject)
  {
    p = subject;
    subject = (*subject).next;
    free(p);
  }
  return p;
}
// Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).

struct node * remove_node(struct node *front, int data)
{

}
// Remove the node containing data from the list pointed to by front.
// If data is not in the list, nothing is changed.
// Returns a pointer to the beginning of the list.
// Your list functions should be in a .c/.h library, with a separate .c file used for testing.
