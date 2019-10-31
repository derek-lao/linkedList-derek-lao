#include<stdio.h>
#include<stdlib.h>
#include "node.h"

void print_list_debug(struct node * subject)
{
  printf("the value is %d and the pointer is %ld and the next pointer is %ld", (*subject).i, subject, (*subject).next);
  printf("\n");
}

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
  // printf("node inserted, the value is %d, the pointer is %ld\n", data, p);
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
  p = NULL;
  return subject;
}
// Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).

struct node * remove_node(struct node *front, int data)
{
  struct node *prev;
  // printf("front is %ld\n", front);
  while((*front).i == data)
  {
    struct node *temp = front;
    front = (*front).next;
    free(temp);
    temp = NULL;
  }
  // printf("front is %ld\n", front);
  struct node *frontMarker = front;
  while(front)
  {
    // printf("front before is %ld\n", front);
    prev = front;
    front = (*front).next;
    // printf("got up to here\n");
    while(front && (*front).i == data)
    {
      struct node *temp = front;
      front = (*front).next;
      (*prev).next = front;
      free(temp);
      temp = NULL;
    }
    // printf("front after is %ld\n", front);
  }
  return frontMarker;
}
// Remove the node containing data from the list pointed to by front.
// If data is not in the list, nothing is changed.
// Returns a pointer to the beginning of the list.
// Your list functions should be in a .c/.h library, with a separate .c file used for testing.
