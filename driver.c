#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
//struct node * l = null
//l = insert_front(l, 0)

  printf("d\n");

  struct node * l = NULL;
  l = insert_front(l, 10);
  
  l = insert_front(l, 8);
  l = insert_front(l, 3);
  l = insert_front(l, 1);
  l = insert_front(l, 4);
  l = insert_front(l, 356);
  l = insert_front(l, 123);
  l = insert_front(l, 4);
 
  print_list(l);
  
  l = free_list(l);
  return 0;
}
