#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void tester(struct node * n, int num){
  printf("\n\n--------------- NEW TEST ---------------\n");
  printf("the list is:\n");
  print_list(n);
  printf("\nadding %d to the front\n", num);
  n = insert_front(n, num);
  print_list(n);
}

int main(){

  printf("d\n");

  struct node * l = NULL;
  tester(l, 18);
  l = insert_front(l, 10);
  l = insert_front(l, 8);
  l = insert_front(l, 356);
  tester(l, 88);
  l = insert_front(l, 123);
  l = insert_front(l, 4);
  tester(l, 0);
  
  l = free_list(l);
  
  printf("The list is free because valgrind says so\n");
  return 0;
}
